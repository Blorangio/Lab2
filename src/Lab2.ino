SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value = analogRead(A5);
void setup() {
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
}
void loop() {
  value = analogRead(A5);
  delay(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
}