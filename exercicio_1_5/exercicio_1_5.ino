int soma = 0, button = 9, buttonState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  delay(100);
  if(buttonState == 0){
    Serial.println("Botão pressionado!");
    soma += 1;
  }
  if(buttonState == 1 && soma != 0){
    Serial.print(soma);
    Serial.println(" ciclos!");
    soma = 0;
  }
}
