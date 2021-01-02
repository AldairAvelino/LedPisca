void setup() {
  //13 = OUTPUT
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH); //13 = HIGH
  delay(2000);

  digitalWrite(13,LOW); //13 = LOW
  delay(600);
}
