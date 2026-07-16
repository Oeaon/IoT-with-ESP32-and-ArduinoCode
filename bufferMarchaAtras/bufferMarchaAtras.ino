// Definimos el pin del zumbador según tu circuito (GPIO 13)
const int buzzerPin = 13;

void setup() {
  // Configuramos el pin como salida
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Encendemos el zumbador (envía 3.3V al transistor para activarlo)
  digitalWrite(buzzerPin, HIGH);
  delay(500); // Mantiene el sonido por 500 milisegundos
  
  // Apagamos el zumbador
  digitalWrite(buzzerPin, LOW);
  delay(500); // Silencio por 500 milisegundos
}