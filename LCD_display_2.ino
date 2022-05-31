 #include <Wire.h>
 
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x27,20,4);

 void setup()
 {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd.init();
 }

void loop() {

  int value = analogRead(A0);
  int realvalue = map(value, 0, 1016, 0, 100);
  char blank = ' ';
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(realvalue);
  lcd.print(blank);

}
