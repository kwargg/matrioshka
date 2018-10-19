#define LED_PIN 9

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, 0);
  delay(1000);
  analogWrite(LED_PIN, 85);
  delay(1000);
  analogWrite(LED_PIN, 170);
  delay(1000);
  digitalWrite(LED_PIN, 255);
  delay(1000);
}
