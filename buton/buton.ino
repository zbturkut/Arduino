int buton=2;
int beyazled=3;
int kirmiziled=4;
int maviled=5;
int yesilled=6;
void setup() {
 pinMode(buton,INPUT);
 pinMode(beyazled,OUTPUT);
 pinMode(kirmiziled,OUTPUT);
 pinMode(maviled,OUTPUT);
 pinMode(yesilled,OUTPUT);

}

void loop() {
  if(digitalRead(buton)==HIGH){
    digitalWrite(beyazled,HIGH);
    digitalWrite(kirmiziled,HIGH);
    digitalWrite(maviled,HIGH);
    digitalWrite(yesilled,HIGH);
  }
else{
   digitalWrite(beyazled,LOW);
    digitalWrite(kirmiziled,LOW);
    digitalWrite(maviled,LOW);
    digitalWrite(yesilled,LOW);
  
}
}
