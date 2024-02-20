int ledler[]={1,2,3,4,5,6,7,8,9,10};
void setup() {
 for (int i = 0; i < 6; i++) { 
    pinMode(ledler[i], OUTPUT); 
  }
}
void loop() {
  for (int i = 1; i <= 10; i++) {
    for(int k = 0; k <= 255; k += 5){
    analogWrite(i,k);
    delay(50);
  }    
  } 
  for (int j = 10; j <= 1; j--) {
    for(int l = 255; l <= 0; l -= 5){
    analogWrite(j,l);
    delay(50);
  }    
  } 
}

/*
 for (int i = 0; i < 10; i++) {
    digitalWrite(ledler[i], HIGH);
    delay(50);
    digitalWrite(ledler[i], LOW);
  for (int j = 10; j > 1; j--) {
    digitalWrite(ledler[j], HIGH);
    delay(50);
    digitalWrite(ledler[j], LOW);
    */
    
  /*digitalWrite(1,1);
  delay(250);
  digitalWrite(1,0);
  delay(250);
  digitalWrite(2,1);
  delay(250);
  digitalWrite(2,0);
  delay(250);
  digitalWrite(3,1);
  delay(250);
  digitalWrite(3,0);
  delay(250);
  digitalWrite(4,1);
  delay(250);
  digitalWrite(4,0);
  delay(250);
  digitalWrite(5,1);
  delay(250);
  digitalWrite(5,0);
  delay(250);
  digitalWrite(6,1);
  delay(250);
  digitalWrite(6,0);
  delay(250);
  digitalWrite(7,1);
  delay(250);
  digitalWrite(7,0);
  delay(250);
  digitalWrite(8,1);
  delay(250);
  digitalWrite(8,0);
  delay(250);
  digitalWrite(9,1);
  delay(250);
  digitalWrite(9,0);
  delay(250);
  digitalWrite(10,1);
  delay(250);
  digitalWrite(10,0);
  delay(250); */