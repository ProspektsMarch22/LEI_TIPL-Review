int ledGreen = 13, ledRed = 12, button = 9, buttonState;

//Variáveis para o bônus:
//bool gOn, rOn;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  Serial.println(buttonState);

  //Exercício principal (Comentar até linha 27 se quiser ver o bônus):
  delay(100);
  if(buttonState == 0){
    digitalWrite(ledGreen, 1);
    digitalWrite(ledRed, 0);
  } else if(buttonState == 1){
    digitalWrite(ledGreen, 0);
    digitalWrite(ledRed, 1);
  }
  
  //Bônus - Alternar a luz ligada com o toque do botão.
  //Primeiro toque liga a luz verde. Segundo toque apaga a luz verde e acende a vermelha, etc.
  //Descomentar abaixo para ver o resultado.
  /*
  delay(120);
  if(buttonState == 0){
    if(gOn == 1) {
      digitalWrite(ledGreen, 0);
      digitalWrite(ledRed, 1);
      gOn = 0;
      rOn = 1;
    } else if(rOn == 1){
      digitalWrite(ledGreen, 1);
      digitalWrite(ledRed, 0);
      gOn = 1;
      rOn = 0;
    } else if(gOn == 0 && rOn == 0){
      digitalWrite(ledGreen, 1);
      gOn = 1;
    }
  }
  */
}