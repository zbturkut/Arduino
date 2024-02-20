
long analogdeger;

void setup() {
 Serial.begin(9600);
 Serial.println("SAYILAR");

}

void loop() {

  analogdeger = analogRead(A0);
  Serial.println(analogdeger);
  delay(100);

}
