
long rastgelesayi;

void setup() {
 Serial.begin(9600);
 randomSeed(analogRead(A0));
 Serial.print("SAYILAR");
}

void loop() {

  rastgelesayi = random(1,100);
  Serial.println(rastgelesayi);
  delay(1000);

}
