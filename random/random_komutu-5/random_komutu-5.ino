
int buton=2;
int led1=3;
int led2=4;
int led3=5;
int led4=6;
int numara=0;
void setup() {
  Serial.begin(9600);
 pinMode(buton,INPUT); 
 pinMode(led1,OUTPUT); 
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT); 
 randomSeed(analogRead(A0));
}

void loop() {
  
 if(digitalRead(buton) == HIGH)
 { 
  numara = random(3,7);

  Serial.println(numara);
  
  switch (numara) {
    case 3:
    Serial.println("YESIL");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    
    break;
        case 4:
    Serial.println("SARI");
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    break;

     case 5:
     Serial.println("KIRMIZI");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    break;

     case 6:
    Serial.println("BEYAZ");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    break;
    

    
  } 
   
 delay(70);
 }


 

else 
if(digitalRead(buton) == LOW){
  delay(1000);
      digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);

    
}
      return;

}
