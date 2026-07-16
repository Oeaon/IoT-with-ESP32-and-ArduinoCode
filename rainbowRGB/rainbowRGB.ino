// Definición de pines
const byte PIN_ROJO = 4;
const byte PIN_VERDE = 2;
const byte PIN_AZUL = 15;

// Configuración PWM moderna
const int FRECUENCIA = 5000;
const int RESOLUCION = 8; // 8 bits nos da valores de 0 a 255

void setup() {
  // En las nuevas versiones se asocia directamente el pin con la frecuencia y resolución
  ledcAttachChannel(PIN_ROJO, FRECUENCIA, RESOLUCION, 0); // El '0' final es un ID interno opcional
  ledcAttachChannel(PIN_VERDE, FRECUENCIA, RESOLUCION, 1);
  ledcAttachChannel(PIN_AZUL, FRECUENCIA, RESOLUCION, 2);
}

void loop() {
  // Ciclo que recorre los 256 tonos del espectro de color
  for (int i = 0; i < 256; i++) {
    fijarColorArcoiris(i);
    
    // Control de velocidad: 2 milisegundos por tono.
    delay(2); 
  }
}

// Función matemática para transformar un solo índice (0-255) en los 3 colores del arcoíris
void fijarColorArcoiris(int posicion) {
  int r, g, b;

  if (posicion < 85) {
    r = 255 - posicion * 3;
    g = posicion * 3;
    b = 0;
  } else if (posicion < 170) {
    posicion -= 85;
    r = 0;
    g = 255 - posicion * 3;
    b = posicion * 3;
  } else {
    posicion -= 170;
    r = posicion * 3;
    g = 0;
    b = 255 - posicion * 3;
  }

  // ALERTA ÁNODO COMÚN: Restamos a 255 para invertir la lógica (255 - color)
  // Ahora en ledcWrite se pone directamente el número de PIN en lugar del canal
  ledcWrite(PIN_ROJO, 255 - r);
  ledcWrite(PIN_VERDE, 255 - g);
  ledcWrite(PIN_AZUL, 255 - b);
}