// Definição dos pinos dos LEDs
int leds[4] = {1,2,3,4};

void setup() {
  // Configura todos os pinos como saída
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Contagem de 0 a 15 (4 bits = 16 combinações)
  for (int numero = 0; numero < 16; numero++) {
    for (int bit = 0; bit < 4; bit++) {
      // Verifica se o bit atual está "1" ou "0"
      int estado = (numero >> bit) & 1;
      digitalWrite(leds[bit], estado);
    }
    delay(1000); // Espera 1 segundo antes de mudar o número
  }
}

