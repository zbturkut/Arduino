#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
void setup() {
  lcd.begin();
}

void loop() {
  int i;
  for(i=0; i<=17; i+=2){
    lcd.setCursor(i,0);
    lcd.print("Bilisim");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }
  for(i=0; i<=17; i+=2){
    lcd.setCursor(i,0);
    lcd.print("Atolyesine");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }
  for(i=0; i<=17; i+=2){
    lcd.setCursor(i,0);
    lcd.print("HosGeldiniz");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }
  for(i=17; i>=0; i-=2){
    lcd.setCursor(i,0);
    lcd.print("Bilisim");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }
   for(i=17; i>=0; i-=2){
    lcd.setCursor(i,0);
    lcd.print("Atolyesine");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }
   for(i=17; i>=0; i-=2){
    lcd.setCursor(i,0);
    lcd.print("Hosgeldiniz");
    delay(500);
    lcd.setCursor(i,1);
    lcd.print("");
    lcd.clear();
  }

}
