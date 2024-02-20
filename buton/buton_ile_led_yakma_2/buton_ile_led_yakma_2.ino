
int buton=2;
int led1=3;
int led2=4;
int led3=5;
int led4=6;
int sayac=0;
void setup() {

  
 pinMode(led1,OUTPUT); 
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT);
 pinMode(buton,INPUT);
  

}

void loop() {
  
 if(digitalRead(buton) == HIGH)
 { 
  sayac = sayac+1;
  }
   
 if(sayac == 1)
{

    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);  
}
 else  if(sayac == 2)
{

    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);  
}
 else  if(sayac == 3)
{

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);  
}
 else  if(sayac == 4)
{

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);  
}
 else  if(sayac == 5)
{

    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW); 
    sayac=0; 
}


delay(200);
}
