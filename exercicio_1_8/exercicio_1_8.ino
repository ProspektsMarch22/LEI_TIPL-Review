unsigned long debounceDelay = 50, lastDebounceA = 0, lastDebounceB = 0;
int buttonStateA, buttonStateB, lastButtonStateA = 0, lastButtonStateB = 0;
int led = 13, buttonA = 7, buttonB = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readA = digitalRead(buttonA);
  int readB = digitalRead(buttonB);

  if(readA != lastButtonStateA){
    lastDebounceA = millis();
  }

  if(readB != lastButtonStateB){
    lastDebounceB = millis();
  }

  if((millis() - lastButtonStateA) > debounceDelay){
    buttonStateA = readA;
    if((millis() - lastButtonStateB) > debounceDelay){
      buttonStateB = readB;
      if(buttonStateA == 1 && buttonStateB == 1){
        digitalWrite(led, 1);
      } else {
        digitalWrite(led, 0);
      }
    }
  }

  lastButtonStateA = readA;
  lastButtonStateB = readB;

}
