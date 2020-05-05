#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//(RS,E,D4,D5,D6,D7)
byte Heart[] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};
void setup() 
{ 
  lcd.begin(16, 2);
  lcd.createChar(0, Heart);
  lcd.setCursor(5, 0);
  lcd.print("WELCOME");
  lcd.setCursor(7, 1);
  lcd.print("TO");
  delay(2000);
  lcd.clear();
  lcd.setCursor(8, 0);
  lcd.print("MB");
  lcd.setCursor(3, 1);
  lcd.print("TECHNOLOGIES");
  delay(2000);
  lcd.clear();
}
void loop() 
{
  lcd.setCursor(0, 0);
  lcd.print("THANK YOU");
  lcd.setCursor(10, 0);
  lcd.write(byte(0));
  lcd.scrollDisplayLeft();
  delay(500);

}
