int relaypin=4;
void setup() {
  pinMode(relaypin,OUTPUT);

}

void loop() {
digitalWrite(relaypin, HIGH);
 delay(1000);
digitalWrite(relaypin,LOW);

}
