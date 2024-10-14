int led1 = 5;

void setup() {
  // put your setup code here, to run once:
  for(size_t i = 0; i < 8; i++){
    pinMode(led1 + i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  representaBinario(2, led1);
  delay(5000);
  representaBinario(8, led1);
  delay(5000);
  representaBinario(21, led1);
  delay(5000);
}

void representaBinario(byte num, int led1){
  for(int bit = 0; bit < 8; bit++){
    digitalWrite(led1 + bit, (num >> bit) & 0x01);
  }
}
