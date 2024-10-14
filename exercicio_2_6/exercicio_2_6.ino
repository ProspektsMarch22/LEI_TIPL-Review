int button = 2, lastButtonState = 1, buttonState;
int led = 11;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
unsigned long prolongado = 2000, premir = 0;

byte contador = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < 3; i++){
    pinMode(led + i, OUTPUT);
  }
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura = digitalRead(button);
  if(leitura != lastButtonState) {
    lastDebounceTime = millis();
  }

  if(buttonState == 0){
    premir = millis() - lastDebounceTime;
  }

  if(premir >= 2000){
    Serial.println("Passei no premir");
    for(int i = 0; i < 3; i++){
      digitalWrite(led + i, 0);
    }
    premir = 0;
    contador = 0;
  }

  if((millis() - lastDebounceTime) > debounceDelay){
    if(leitura != buttonState){
      buttonState = leitura;
      if(buttonState == 0){
        Serial.println("Passei aqui");
        contador++;
        for(int bit = 0; bit < 3; bit++){
          digitalWrite(led + bit, (contador >> bit) & 0x01);
        }
        premir = 0;
      }
    }
  }

  lastButtonState = leitura;

}
