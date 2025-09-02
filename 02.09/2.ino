// Define os pinos dos LEDs
int ledVermelho = 12;
int ledAmarelo  = 11;
int ledVerde    = 10;

void setup() {
  // Configura os pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // LED Verde aceso por 5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(2000);
  digitalWrite(ledVerde, LOW);

  // LED Amarelo aceso por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);

  // LED Vermelho aceso por 5 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(2000);
  digitalWrite(ledVermelho, LOW);
}
