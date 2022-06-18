void measure_pir()
{
val=digitalRead(sensor);
/*if(val==HIGH)
{
  if(state==LOW)
  {
    Serial.println("detected motion");
    state=HIGH;
  }
}
else
{
  if(state==HIGH)
  {
    Serial.println("motion not detected");
    state=LOW;
  }
}*/
if ((val==LOW)&&(dist2<=2)){
  servo.write(0);
  servo.detach();
  tone(buzzer, 1700); 
  delay(1000); 
  noTone(buzzer);
  delay(1000);
         // ...for 1 sec
  
}
else if (( val==LOW )&&(dist2>2)) {
//Change distance as per your need
 servo.attach(servoPin);
  delay(1);      
 servo.write(150); 
 delay(3000); 
      
}
else if (val!=LOW){
  
  servo.write(0);
  delay(1000);
  servo.detach();
}

}
