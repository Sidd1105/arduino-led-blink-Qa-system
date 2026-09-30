// src/led_blink/led_blink.ino (v2)

const uint8_t LED_PIN = 13;
const unsigned long BLINK_INTERVAL_MS = 1000;

unsigned long previousMillis = 0;
bool ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long now = millis();

  if (now - previousMillis >= BLINK_INTERVAL_MS) {
    previousMillis = now;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? "LED ON" : "LED OFF");
  }

  // other tasks can run here without blocking
}
