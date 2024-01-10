const int analogPin = A0;
const int buttonPin = 2;
int ledPins[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
double s = 0;
double t = 0;
void setup() {
  Serial.begin(19200);
  //Inicializa a comunicação Serial com baudrate de 19200bps
  //Definição de estradas e saídas
  pinMode(buttonPin, INPUT);
  for (int thisLed = 0; thisLed < 10; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
    s=millis();
  }
}

void loop() {
  int entrada = analogRead(analogPin);
  //Leitura do sinal analógico
  int selecao = digitalRead(buttonPin);
  //Modo do Bargraph
  int ledLevel = map(entrada, 0, 1023, 0, 10);
  //Mapeamento da leitura da entrada
  para o range
  de 0 a 10
  Serial.println(ledLevel);
  //Envia a cada loop o valor correspondente as lâmpadas acesas pela SERIAL
  //Modo Dot
  if(selecao==HIGH) {
    for (int thisLed = 0; thisLed < 10; thisLed++) {
      if (thisLed < ledLevel) {
        digitalWrite(ledPins[thisLed], HIGH);
      }
      else {
        digitalWrite(ledPins[thisLed], LOW);
      }
    }
  }
  //Modo Bar
  if(selecao==LOW) {
    delay(1);
    for (int thisLed = 0; thisLed < 10; thisLed++) {
      if (thisLed == ledLevel && entrada!=0) {
        digitalWrite(ledPins[thisLed], HIGH);
      }
      else {
        digitalWrite(ledPins[thisLed], LOW);
      }
    }
  }
}
