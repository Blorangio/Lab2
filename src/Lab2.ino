SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t value = analogRead(A5);
void setup() {
  Serial.begin(9600);
}
void loop() {
  value = analogRead(A5);
  Serial.println(value);
}