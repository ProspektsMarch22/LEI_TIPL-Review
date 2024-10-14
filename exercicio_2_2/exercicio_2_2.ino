int a = 5, b = 8, c = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((a & (a - 1)) == 0){
    Serial.print(a);
    Serial.println(" - sim");
  } else {
    Serial.print(a);
    Serial.println(" - não");
  }

  if((b & (b - 1)) == 0){
    Serial.print(b);
    Serial.println(" - sim");
  } else {
    Serial.print(b);
    Serial.println(" - não");
  }

  if((c & (c - 1)) == 0){
    Serial.print(c);
    Serial.println(" - sim");
  } else {
    Serial.print(c);
    Serial.println(" - não");
  }

  delay(10000000000000);
}
