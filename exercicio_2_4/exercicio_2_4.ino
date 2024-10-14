int led1 = 13, led2 = 12, contador = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(contador);
  if(contador >= 200 && contador <= 400){
    if(contador % 2 == 0){
    digitalWrite(led1, 1);
    }

    if(contador % 3 == 0){
    digitalWrite(led2, 1);
    }
    delay(1000);
  }
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  contador++;
}
