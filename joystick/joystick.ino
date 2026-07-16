int xzyPins[] = {13,12,14};

void setup() {
  Serial.begin(115200);
  pinMode(xzyPins[2], INPUT_PULLUP);
}

void loop() {
  int xVal= analogRead(xzyPins[0]);
  int yVal= analogRead(xzyPins[1]);
  int zVal= analogRead(xzyPins[2]);
  Serial.printf("X, Y, Z: \t%d, \t%dn, \n", xVal, yVal, zVal);
  Serial.println("\n");
  delay(500);
}
