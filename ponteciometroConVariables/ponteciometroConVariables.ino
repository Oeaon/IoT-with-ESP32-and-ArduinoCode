#define PIN_ANALOG_IN 4  // Pin del potenciómetro
#define PIN_LED 25       // Pin del LED (DAC1)

// Variable para almacenar el valor suavizado (usamos decimales para que el cálculo sea preciso)
float valorSuavizado = 0.0;

// Factor de suavizado (un valor entre 0.01 y 1.0)
// - Cuanto más cercano a 0 (ej: 0.02), más lento y suave será el cambio (efecto transición).
// - Cuanto más cercano a 1 (ej: 0.8), más rápido y directo responderá.
const float factorSuavizado = 0.05; 

void setup() {
  Serial.begin(115200);
  
  // Inicializamos el valor suavizado con la primera lectura para evitar un salto al arrancar
  valorSuavizado = analogRead(PIN_ANALOG_IN);
}

void loop() {
  // 1. Leer el valor real del potenciómetro en este instante (0 a 4095)
  int lecturaActual = analogRead(PIN_ANALOG_IN);
  
  // 2. FILTRO DE SUAVIDAD:
  // El nuevo valor suavizado es una mezcla del valor anterior y la nueva lectura.
  valorSuavizado = (lecturaActual * factorSuavizado) + (valorSuavizado * (1.0 - factorSuavizado));
  
  // Convertimos el resultado decimal a un número entero para poder trabajar con él
  int adcVal = (int)valorSuavizado;
  
  // 3. Mapear el valor suavizado para el LED (0 a 255)
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  
  // 4. Calcular el voltaje correspondiente
  double voltage = (adcVal / 4095.0) * 3.3;
  
  // 5. Aplicar el brillo suave al LED
  dacWrite(DAC1, dacVal);
  
  // 6. Mostrar los datos en el monitor serie
  Serial.printf("Pot. Físico: %d \t Filtrado Suave: %d \t Voltaje: %.2fV\n", lecturaActual, adcVal, voltage);
  
  // Reducimos el delay a 10ms. 
  // Al actualizarse más rápido, la transición se siente increíblemente fluida.
  delay(10);
}