#define PIN_ANALOG_IN 4
#define PIN_LED 12

// Umbral para detectar luz:
// Si la lectura es MENOR a este número, el LED se encenderá.
const int UMBRAL_LUZ = 2000; 

void setup() {
  // Inicializamos la comunicación con el ordenador (Monitor Serie)
  Serial.begin(115200);
  
  pinMode(PIN_ANALOG_IN, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int adc = analogRead(PIN_ANALOG_IN);
  Serial.print("Valor ADC: ");
  Serial.println(adc);

  // Si la lectura es baja (hay luz sobre el fotoresistor)
  if (adc < UMBRAL_LUZ) {
    analogWrite(PIN_LED, 255);       // Se enciende totalmente
  } 
  else {
    analogWrite(PIN_LED, 0);         // Se apaga por completo
  }

  delay(100);
}