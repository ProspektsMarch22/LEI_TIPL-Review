int caso = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(caso <= 10){
    int par = check_even(caso);
    if(par){
      Serial.print(caso);
      Serial.println(" é par");
    } else {
      Serial.print(caso);
      Serial.println(" é ímpar");
    }
    caso++;
  }
  delay(500);
}

int check_even(int num){
  if(num % 2 == 0){
    return 1;
  }
  return 0;
}