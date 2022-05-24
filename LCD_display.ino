 #include <Wire.h>
 
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x3F,20,4);

 void setup()
 {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(6,0);

  lcd.print("3319");
  lcd.setCursor(2,1);
  lcd.print("Jinseong Park");
 }

 void loop()
 {
 } 
