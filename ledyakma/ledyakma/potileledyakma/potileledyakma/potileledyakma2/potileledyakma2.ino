#define led 3
#define potpin A0
int deger=0;
void setup() {
  Serial.begin(9600);
  Serial.println("ANALOG PORT OKUMA");
  delay(200);

}

void loop() {
  deger=analogRead(potpin);
  deger=map(deger,0,1023,0,255);
  analogWrite(led,deger);
  Serial.print("ANALOG DEGER:");
  Serial.println(deger);

}
