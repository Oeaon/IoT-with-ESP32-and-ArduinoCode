#define LED_BUILTIN 2 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // S
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

// O
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1300); 

  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1300); 

  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1300); 

   // S
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 

  //DELAY LARGO
  digitalWrite(LED_BUILTIN, LOW);
  delay(8000); //pausa muy larga

}
