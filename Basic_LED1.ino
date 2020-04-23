int kirmizi=13;
int sari=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(kirmizi, HIGH);
  digitalWrite(sari, LOW);
  delay(1000);
  digitalWrite(kirmizi, LOW);
  digitalWrite(sari, HIGH);
  delay(1000);

}
