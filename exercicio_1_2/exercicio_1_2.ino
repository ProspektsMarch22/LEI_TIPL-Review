//exercicio 1.2

long int number;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  number = random(10, 100);
  Serial.println(number);
  if(number % 2 == 0){
    Serial.println("1");
  } else {
    Serial.println("0");
  }
}
