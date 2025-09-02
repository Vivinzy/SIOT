const int ledPin = 13;      // LED conectado ao pino 13
const int buttonPin = 2;    // Botão conectado ao pino 2

int ledState = LOW;         // Estado atual do LED
int lastButtonState = LOW;  // Último estado do botão

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Detecta mudança de estado do botão
  if (buttonState == HIGH && lastButtonState == LOW) {
    // Muda o estado do LED
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(50); // Debounce simples
  }

  lastButtonState = buttonState;
}
