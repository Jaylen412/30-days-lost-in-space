#define CABIN_LIGHTS 11  //11 represents the location of our LED in pin 12

void setup() {
  // put your setup code here, to run once:
  pinMode(CABIN_LIGHTS, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(CABIN_LIGHTS, HIGH);
  delay(3000);
  digitalWrite(CABIN_LIGHTS, LOW);
  delay(3000);
}
