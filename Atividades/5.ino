int led = 9;   // pino PWM
int brilho = 0; 
int passo = 5; // variação de brilho

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Ajusta brilho com PWM (0 = apagado, 255 = máximo)
  analogWrite(led, brilho);

  // Incrementa ou decrementa
  brilho += passo;

  // Inverte direção quando chegar no limite
  if (brilho <= 0 || brilho >= 255) {
    passo = -passo;
  }

  delay(30); // controla a velocidade do efeito
}
