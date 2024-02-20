
int buton1=2;
int led1=3;
int led2=4;
int led3=5;
int led4=6;
int buton2=7;

void setup() {

 pinMode(buton1,INPUT); 
 pinMode(led1,OUTPUT); 
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT);
  pinMode(buton2,INPUT); 

  

}

void loop() {
  
 if(digitalRead(buton1) == HIGH)
 { 

   digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    delay(500);
    digitalWrite(led4,LOW);
    }
   
else if(digitalRead(buton2)== HIGH)
{

    digitalWrite(led4,HIGH);
    delay(500);
    digitalWrite(led4,LOW);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led3,LOW);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    digitalWrite(led1,HIGH);  
    delay(500);
    digitalWrite(led1,LOW);
    }
   
}
 
