#define buton A0
 byte buton_bul(int x)
{
  int buton_numarasi = 0;
  if (x > 950)
    buton_numarasi = 1;

  else if (x > 880 && x < 980)
    int buton_numarasi = 2;
  else if (x > 800 && x < 900)
    buton_numarasi = 3;
  else if (x > 750 && x < 820)
    buton_numarasi = 4;
  else if (x > 700 && x < 800)
    buton_numarasi = 5;
  else
    buton_numarasi = 0;
  return buton_numarasi;
  }
int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
int buton_dger=analogRead(buton);
byte basilan_buton = buton_bul(buton_deger);

   if(analogRead(buton_deger) == 1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
   }
}
// else if(digitalRead(buton2)==HIGH){
//  digitalWrite(led1,LOW);
//  digitalWrite(led2,HIGH);
//  digitalWrite(led3,LOW);
//  digitalWrite(led4,LOW);
// }
//  else if(digitalRead(buton3)==HIGH){
//  digitalWrite(led1,LOW);
//  digitalWrite(led2,LOW);
//  digitalWrite(led3,HIGH);
//  digitalWrite(led4,LOW);
// }
//  else if(digitalRead(buton4)==HIGH){
//  digitalWrite(led1,LOW);
//  digitalWrite(led2,LOW);
//  digitalWrite(led3,LOW);
//  digitalWrite(led4,HIGH);
// }
//
