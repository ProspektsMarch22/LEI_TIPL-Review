unsigned long lastDebounce = 0, debounceDelay = 50;
const int led = 13, button = 2;
int buttonState, lastButtonState = 0, i = 0, ledState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read = digitalRead(button);
  if(read != lastButtonState){
    lastDebounce = millis();
  }
  if((millis() - lastDebounce) > debounceDelay){
    if(buttonState != read){
      buttonState = read;
      if(buttonState == 1){
        i += 1;
        Serial.println(i);
        if(i % 3 == 0){
          ledState = !ledState;
        }
      }
    }
  }

  digitalWrite(led, ledState);
  lastButtonState = read;
}
