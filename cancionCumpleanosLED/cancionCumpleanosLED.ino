// Pines de los LEDs
byte pin_LEDs[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int totalLEDs;

// Canción: Cumpleaños Feliz
int cancion[] = {
  4,4,5,4,7,6,
  4,4,5,4,8,7,
  4,4,9,7,6,5,
  3,3,7,8,7
};

int notas = sizeof(cancion) / sizeof(cancion[0]);

// Duración de cada nota (ms)
int tiempoNota = 500;

void setup() {

  totalLEDs = sizeof(pin_LEDs) / sizeof(pin_LEDs[0]);

  for (int i = 0; i < totalLEDs; i++) {
    pinMode(pin_LEDs[i], OUTPUT);
    digitalWrite(pin_LEDs[i], LOW);
  }
}

void loop() {

  // Recorre todas las notas de la canción
  for (int i = 0; i < notas; i++) {

    // Apaga todos los LEDs
    for (int j = 0; j < totalLEDs; j++) {
      digitalWrite(pin_LEDs[j], LOW);
    }

    // Obtiene la nota actual
    int nota = cancion[i];

    // Enciende el LED correspondiente
    if (nota >= 0 && nota < totalLEDs) {
      digitalWrite(pin_LEDs[nota], HIGH);
    }

    delay(tiempoNota);

    // Apaga el LED antes de la siguiente nota
    if (nota >= 0 && nota < totalLEDs) {
      digitalWrite(pin_LEDs[nota], LOW);
    }

    delay(100); // pequeña pausa entre notas
  }

  // Espera antes de repetir la canción
  delay(2000);
}