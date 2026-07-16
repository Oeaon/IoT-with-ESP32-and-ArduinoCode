byte pin_LEDS[] = {15,2,0,4,5,18,19,20,21,22,23};
int totalLEDS;

void setup() {
  totalLEDS = sizeof(pin_LEDS);
  for (int i=0; i < totalLEDS; i++) {
    pinMode(pin_LEDS[i], OUTPUT);
  }
}

void loop() {
  for (int i=0; i < totalLEDS; i++) {
    digitalWrite(pin_LEDS[i], HIGH);
    delay(150);
    digitalWrite(pin_LEDS[i], LOW);
    }
}
