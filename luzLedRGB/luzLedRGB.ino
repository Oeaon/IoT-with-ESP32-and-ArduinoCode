const byte ROJO = 4;
const byte VERDE = 2;
const byte AZUL = 15;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  
  // Apagamos todos los colores al iniciar (poniéndolos en HIGH)
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, HIGH);
  digitalWrite(AZUL, HIGH);
}

void loop() {
  // ROJO (Solo el rojo en LOW para que encienda)
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, HIGH);
  digitalWrite(AZUL, HIGH);
  delay(1000);

  // VERDE
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, HIGH);
  delay(1000);

  // AZUL
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, HIGH);
  digitalWrite(AZUL, LOW);
  delay(1000);

  // BLANCO (Todos en LOW para que se mezclen todos los colores)
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, LOW);
  delay(1000);
}