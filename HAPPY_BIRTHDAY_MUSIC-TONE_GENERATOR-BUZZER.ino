void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(12, 392, 250);
  delay(250);

  tone(12, 392, 500);
  delay(250);

  tone(12, 440, 1000);
  delay(500);

  tone(12, 392, 1000);
  delay(500);

  tone(12, 523, 1000);
  delay(500);

  tone(12, 494, 2000);
  delay(1000);
}
