# define relay_pin 26
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(relay_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ON");
  digitalWrite(relay_pin,LOW);
  delay(2000);
  Serial.println("OFF");
  digitalWrite(relay_pin,HIGH);
  delay(2000);
}
