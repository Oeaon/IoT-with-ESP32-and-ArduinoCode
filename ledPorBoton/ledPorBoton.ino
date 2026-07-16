#define pin_LED 2 
#define  pin_PULSADOR 13 


void setup() {
pinMode(pin_LED, OUTPUT);
pinMode(pin_PULSADOR, INPUT);
}

void loop() {
if(digitalRead(pin_PULSADOR) == LOW) {
  digitalWrite(pin_LED,LOW);}
else{
  digitalWrite(pin_LED, HIGH);}
}
