void detect_ir()
{
val=digitalRead(sensor);

if ((val==LOW)&&(dist2<=3)){
  servo.write(0);
  servo.detach();
  lcd_display(); 
  //bin1.println(10);
  tone(buzzer, 1800); 
  delay(1000); 
  noTone(buzzer);
  delay(1000);
         // ...for 1 sec
  
}
else if (( val==LOW )&&(dist2>3)) {
//Change distance as per your need
 servo.attach(servoPin);
  delay(1);      
 servo.write(150);
 lcd_display(); 
 //bin1.println(20); 
 delay(3000); 
      
}
else if (val!=LOW){
  
  servo.write(0);
  delay(1000);
  servo.detach();
}

}
