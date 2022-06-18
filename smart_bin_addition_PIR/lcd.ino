void lcd_display()
{
if ( dist2>45 ) {
  lcd.setCursor(0, 0);
  Serial.println("stor cap. :0%");
  lcd.println("0 % FILLED");
  
}

else if ((dist2>44)&&(dist2<=45 )) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :6%");
  lcd.println("2% FILLED");
  
}


else if ( (dist2>43)&& (dist2<=44)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :12%");
  lcd.println("4% FILLED");
}
else if ( (dist2>42)&& (dist2<=43) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :24%");
  lcd.println("6% FILLED");
}
else if ( (dist2>41)&& (dist2<=42)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :36%");
  lcd.println("9% FILLED");
  
}                                                                                                       
else if ( (dist2>40)&& (dist2<=41)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :42%");
  lcd.println("12% FILLED");
}
else if ( (dist2>39)&& (dist2<=40) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :48%");
  lcd.println("48% FILLED");
}
else if ((dist2>28)&& (dist2<=31)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :54%");
  lcd.println("14% FILLED");
}
else if ( (dist2>38)&& (dist2<=39) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :60%");
  lcd.println("16% FILLED");
}
else if ( (dist2>37)&& (dist2<=38) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :66%");
  lcd.print("18% FILLED");
}
else if ( (dist2>36)&& (dist2<=37) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :72%");
  lcd.println("20% FILLED");
  
}
else if ( (dist2>35)&& (dist2<=36) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :78%");
  lcd.println("22% FILLED");
  
}
else if ( (dist2>34)&& (dist2<=35)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :84%");
  lcd.println("25% FILLED");
}
else if ( (dist2>33)&& (dist2<=34) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :90%");
  lcd.println("27% FILLED");
}
else if ( (dist2>32)&& (dist2<=33)) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :94%");
  lcd.println("29% FILLED");
}
else if ( (dist2>31)&& (dist2<=32) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :31%");
  lcd.println("31% FILLED");
}
else if( (dist2>30)&& (dist2<=31) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("33% FILLED");
}
else if( (dist2>29)&& (dist2<=30) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("36% FILLED");
}
else if( (dist2>28)&& (dist2<=29) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("38% FILLED");
}
else if( (dist2>27)&& (dist2<=28) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("40% FILLED");
}
else if( (dist2>26)&& (dist2<=27) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("42% FILLED");
}
else if( (dist2>25)&& (dist2<=26) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("44% FILLED");
}
else if( (dist2>24)&& (dist2<=25) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("47% FILLED");
}
else if( (dist2>23)&& (dist2<=24) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("49% FILLED");
}
else if( (dist2>22)&& (dist2<=23) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("52% FILLED");
}
else if( (dist2>21)&& (dist2<=22) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("54% FILLED");
}else if( (dist2>20)&& (dist2<=21) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("56% FILLED");
}
else if( (dist2>19)&& (dist2<=20) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("58% FILLED");
}
else if( (dist2>18)&& (dist2<=19) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("60% FILLED");
}
else if( (dist2>17)&& (dist2<=18) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("62% FILLED");
}
else if( (dist2>16)&& (dist2<=17) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("64% FILLED");
}
else if( (dist2>15)&& (dist2<=16) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("67% FILLED");
}
else if( (dist2>14)&& (dist2<=15) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("69% FILLED");
}
else if( (dist2>13)&& (dist2<=14) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("71% FILLED");
}
else if( (dist2>12)&& (dist2<=13) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("73% FILLED");
}
else if( (dist2>11)&& (dist2<=12) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("75% FILLED");
}
else if( (dist2>10)&& (dist2<=11) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("78% FILLED");
}
else if( (dist2>9)&& (dist2<=10) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("80% FILLED");
}
else if( (dist2>8)&& (dist2<=9) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("82% FILLED");
}
else if( (dist2>7)&& (dist2<=8) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("84% FILLED");
}
else if( (dist2>6)&& (dist2<=7) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("87% FILLED");
}
else if( (dist2>5)&& (dist2<=6) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("89% FILLED");
}
else if( (dist2>4)&& (dist2<=5) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("91% FILLED");
}
else if( (dist2>3)&& (dist2<=4) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("93% FILLED");
}
else if( (dist2>2)&& (dist2=3) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("96% FILLED");
}
else if( (dist2>=0)&& (dist2<=2) ) {
   lcd.setCursor(0, 0);
  Serial.println("stor cap. :100%");
  lcd.println("100% FILLED");
}

}
