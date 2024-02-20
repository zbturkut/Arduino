byte rastgelesayi;
//long rastgelesayi;

void setup() {
 Serial.begin(9600);

}

void loop() {
//rastgelesayi = random();
//rastgelesayi = random(100);
  rastgelesayi = random();
  Serial.println(rastgelesayi);
  delay(500);

}
