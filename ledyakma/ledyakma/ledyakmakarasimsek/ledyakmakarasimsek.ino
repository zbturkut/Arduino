int ledler[]={1,2,3,4,5,6,7,8,9,10,11};
void setup() {
  for(int i=1; i<=11; i++){
    pinMode(ledler[i],OUTPUT);
  }

}

void loop() {
  for(int i=1; i<=11; i++){
    digitalWrite(ledler[i],1);
    delay(50);
    
  }
  for(int j=11; j>=1; j--){
    digitalWrite(ledler[j],1);
    delay(50);
  }
}
