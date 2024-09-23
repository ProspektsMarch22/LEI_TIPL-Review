int magico = 101;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long int tentativa = random(100, 2000);
  Serial.print(magico);
  Serial.print(" ");
  Serial.print(tentativa);
  Serial.print(" ");
  Serial.println(abs(tentativa - magico));
  if(magico == tentativa){
    Serial.println("Acertou mizeravi");
  }
}
