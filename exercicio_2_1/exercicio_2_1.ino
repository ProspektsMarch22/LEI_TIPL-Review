int button = 2;
int buttonState, lastButtonState = 1;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

unsigned int contador = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura = digitalRead(button);
  if(leitura != lastButtonState){
    lastDebounceTime = millis();
  }

  if((millis() - lastDebounceTime) > debounceDelay){
    if(leitura != buttonState){
      buttonState = leitura;
      if(buttonState == 0){
        Serial.print(contador);
        Serial.print(" ");
        Serial.println(contador, BIN);
        contador = contador<<1;
      }
    }
  }

  lastButtonState = leitura;
}
