const int ledVip = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledVip, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVip, HIGH);
  delay(150);
  digitalWrite(ledVip,LOW);
  delay(300);
}
