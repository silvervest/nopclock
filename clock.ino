void setup() {
  // remember to add a low ohm pull-up to your clock pin
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
}

void loop() {
  int hz = 32;
  int delayMs = (1000/hz);
  digitalWrite(9, LOW);
  delay(delayMs);
  digitalWrite(9, HIGH);
  delay(delayMs);
}
