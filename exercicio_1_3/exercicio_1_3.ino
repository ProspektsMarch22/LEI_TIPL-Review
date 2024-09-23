int num = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  num += 1;
  Serial.println(num);
  Serial.println(num, DEC);
  Serial.println(num, HEX);
  Serial.println(num, BIN);
}
