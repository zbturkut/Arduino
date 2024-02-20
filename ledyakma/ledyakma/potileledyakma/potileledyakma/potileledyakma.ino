int led=3;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop() {
  int deger=analogRead(A0);
  analogWrite(led,deger);
  Serial.println(deger);
  delay(500);
 
  

}
