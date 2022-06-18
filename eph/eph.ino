#include "ThingSpeak.h"
#include <ESP8266WiFi.h>
#include <WiFiClient.h>


//----------- Enter you Wi-Fi Details---------//
char ssid[] = "OP"; //SSID
char pass[] = "12346789"; // Password
//-------------------------------------------//

// ---------- garbage bin details ------------//
const int total_height = 47; // garbage bin height in CM
const int hold_height = 45;// garbage holding capacity (height) in CM
//-------------------------------------------//

//----- Minutes -----//
int Minute = 1; // Data update in min.
//------------------//

//----------- Channel Details -------------//
unsigned long Channel_ID =1717065 ; // Channel ID
const char * WriteAPIKey = "OPNVLQYQLK5KDB7V"; // Your write API Key
// ----------------------------------------//

const int trigger = D5;
const int echo = D6;
long Time;
int x;
int i;
int distanceCM;
int resultCM;
int bin_lvl = 0;
int snsr_to_max = 0;
const int Field_number = 1; 
WiFiClient  client;

void setup()
{
 
  Serial.begin(115200);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
  snsr_to_max = total_height - hold_height;
  delay(2500);
}
void loop()
{
  internet();
  measure();

  Serial.print("Garbage Level:");
  Serial.print(bin_lvl);
  Serial.println("%");
  upload();
  for (i = 0; i < Minute; i++)
  {
    Serial.println("-------------------------");
    Serial.println("System Standby....");
    Serial.print(i);
    Serial.println(" Minutes elapsed.");
    delay(20000);
    delay(20000);
    delay(20000);
  }
}
void upload()
{
  internet();
  x = ThingSpeak.writeField(Channel_ID, Field_number, bin_lvl, WriteAPIKey);
  if (x == 200)Serial.println("Data Updated.");
  if (x != 200)
  {
    Serial.println("Data upload failed, retrying....");
    delay(15000);
    upload();
  }
}

void measure()
{
  delay(100);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  Time = pulseIn(echo, HIGH);
  distanceCM = Time * 0.034;
  resultCM = distanceCM / 2;

  bin_lvl = map(resultCM, snsr_to_max, total_height, 100, 0);
  if (bin_lvl > 100) bin_lvl = 100;
  if (bin_lvl < 0) bin_lvl = 0;
}

void internet()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(1000);
    }
    Serial.println("\nConnected.");
  }
}
