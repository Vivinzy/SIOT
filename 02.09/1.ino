
int led = 13;  // Define o pino do LED

void setup() {
  pinMode(led, OUTPUT);  // Configura o pino como saída
}

void loop() {
  digitalWrite(led, HIGH);  // Liga o LED
  delay(1000);              // Espera 1 segundo
  digitalWrite(led, LOW);   // Desliga o LED
  delay(1000);              // Espera 1 segundo
}
