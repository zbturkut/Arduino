#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;

#define yesilLed 2   // Yeşil led
#define kirmiziLed 3   // Kırmızı led
#define buzzer 4

const byte satir = 4;  // Satır
const byte sutun = 4;  // Sütun

byte satir_pins[4] = {12, 11, 10, 9}; // Satırdaki pinler
byte sutun_pins[4] = {8, 7, 6, 5};    // Sütundaki pinler

// Keypad tuş takımı
char tus_takimi[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad tuss_takimi = Keypad(makeKeymap(tus_takimi), satir_pins, sutun_pins, 4, 4);

int randomSayi;
char tahmin[3]; // Kullanıcı tahmin hakkı
int i = 0; // Düzeltme: 'i' değişkenini tanımlayın

void setup() {
  servo.attach(13);
  pinMode(yesilLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(kirmiziLed, OUTPUT);

  lcd.begin();
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("@ZBTURKUT");
  lcd.setCursor(1, 1);
  lcd.print("@GOKYUZUAVCISI");
  delay(2000);
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("SAYI TAHMIN");
  lcd.setCursor(5, 1);
  lcd.print("OYUNU");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("1-20 ARASINDAKI");
  lcd.setCursor(0, 1);
  lcd.print("SAYIYI BIL: ");

  // Rastgele sayı üretimi için başlangıç değerini belirle
  randomSeed(millis());
  randomSayi = random(1, 21); // 1-20 arasında sayı tut

  // Serial bağlantısını başlat
  Serial.begin(9600);
  Serial.print("Rastgele Sayi: ");
  Serial.println(randomSayi);
}

void loop() {
  servo.write(0);

  digitalWrite(kirmiziLed, LOW);
  digitalWrite(yesilLed, LOW);

  char tus = tuss_takimi.getKey();

  if (tus && i < 2) { // Kullanıcının sadece iki haneli bir tahmin yapabilmesi için kontrol ekledik
    tahmin[i++] = tus;
    lcd.setCursor(12 + i, 1);
    lcd.print(tus);

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
  }

  if (i == 2) { // Kullanıcının tahmin yapmasını bekliyoruz
    int tahminSayi = atoi(tahmin); // Karakter dizisini tamsayıya çevir

    if (tahminSayi == randomSayi) {
      servo.write(90);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("DOGRU TAHMIN!");
      digitalWrite(yesilLed, HIGH);
      digitalWrite(kirmiziLed, LOW);
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(2000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("1-20 ARASINDAKI");
      lcd.setCursor(0, 1);
      lcd.print("SAYIYI BIL: ");
      // Yeni bir rastgele sayı üret
      randomSayi = random(1, 21); // Bir sonraki raunt için yeni bir rastgele sayı oluştur
      Serial.print("Rastgele Sayi: ");
      Serial.println(randomSayi);
      i = 0;
    } else {
      lcd.clear();
      lcd.setCursor(0, 0);
      if (tahminSayi < randomSayi) {
        lcd.print("YUKARI CIK!");
      } else {
        lcd.print("ASAGI IN!");
      }
      digitalWrite(yesilLed, LOW);
      digitalWrite(kirmiziLed, HIGH);
      digitalWrite(buzzer, HIGH);
      delay(1000);
      digitalWrite(buzzer, LOW);
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("1-20 ARASINDAKI");
      lcd.setCursor(0, 1);
      lcd.print("SAYIYI BIL: ");
      i = 0;
    }
  }
}
