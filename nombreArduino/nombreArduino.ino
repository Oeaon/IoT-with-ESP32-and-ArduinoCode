#define LED_BUILTIN 2 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void punto(){
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 
}


void raya(){
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1300);
}
void loop() {

  // J ( . - - - )
  punto();
  raya();
  raya();
  raya();

  // O ( - - -)
  raya();
  raya();
  raya();

   // S ( . . . )
  punto();
  punto();
  punto();

  //E ( . )
  punto();

  //R . - .
  punto();
  raya();
  punto();

  //A . -
  punto();
  raya();

  //M - -
  raya();
  raya();

  // O ( - - -)
  raya();
  raya();
  raya();


  //N - .
  raya();
  punto();

  //G: - - . 
  raya();
  raya();
  punto();
  
  //A . -
  punto();
  raya();

  //R . - .
  punto();
  raya();
  punto();

  //C: - . - .
  raya();
  punto();
  raya();
  punto();

  //Í:. - - . -
  punto();
  raya();
  raya();
  punto();
  raya();

  //A . -
  punto();
  raya();

  //G: - - . 
  raya();
  raya();
  punto();

//Á: . - - . -
  punto();
  raya();
  raya();
  punto();
  raya();

  //M - -
  raya();
  raya();
  
  //E ( . )
  punto();

  //Z: - - . . 
  raya();
  raya();
  punto();
  punto();
  //DELAY LARGO
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(8000); //pausa muy larga

}
