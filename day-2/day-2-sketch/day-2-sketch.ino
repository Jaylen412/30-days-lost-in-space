#define CABIN_LIGHTS 12  //12 represents the location of our LED in pin 12

void setup() {
  // put your setup code here, to run once:
  pinMode(CABIN_LIGHTS, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(CABIN_LIGHTS, HIGH);
  delay(1000)
  digitalWrite(CABIN_LIGHTS, LOW);
  delay(1000)
}
