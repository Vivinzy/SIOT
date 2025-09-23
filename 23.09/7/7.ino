int espera = 100;  
 
int Pinos[] = {2, 3, 4}; 

int ContaPino = 3; 
 
void setup() {
   
  for (int PinoArdu = 0; PinoArdu < ContaPino; PinoArdu++) {
    pinMode(Pinos[PinoArdu], OUTPUT);
  }
}
 
void loop() {
  // Pisca Leds na ordem crescente
  for (int PinoArdu = 0; PinoArdu < ContaPino; PinoArdu++) {
    // liga Led 
    digitalWrite(Pinos[PinoArdu], HIGH);
    delay(espera);
    // desliga Led
    digitalWrite(Pinos[PinoArdu], LOW);
 
  }
 
  // Pisca Leds em ordem descrescente
  for (int PinoArdu = ContaPino - 1; PinoArdu >= 0; PinoArdu--) {
    // liga Led
    digitalWrite(Pinos[PinoArdu], HIGH);
    delay(espera);
    // desliga Led
    digitalWrite(Pinos[PinoArdu], LOW);
  }
}