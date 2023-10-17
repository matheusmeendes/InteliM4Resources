//Código Morse SOS

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  for(int x=0;x<3;x++) {
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
  }
  delay(500);
  for(int y=0;y<3;y++) {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  delay(500);
  for(int z=0;z<3;z++) {
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
  }
  delay(2000);
}
