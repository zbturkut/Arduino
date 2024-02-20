#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


int ledler[]={3,5,6,9,10,11};
int sure;
int pot=A0;


void setup() {
   lcd.begin();
   for(int i=0;i<6; i++){
    pinMode(ledler[i],OUTPUT);
   }

}

void loop() {
     sure=analogRead(A0);  
 sure=map(sure,0,1023,30,500);
   for(int i=0;i<=6; i++){
  digitalWrite(ledler[i],HIGH);
  delay(sure); 
  digitalWrite(ledler[i],LOW);
  
 }
 for(int j=6; j>=0; j--){
  digitalWrite(ledler[j],HIGH);
 delay(sure); 
  digitalWrite(ledler[j],LOW);
  
 }
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("milisaniye:");
 lcd.print(sure);
 delay(sure);
  
}
