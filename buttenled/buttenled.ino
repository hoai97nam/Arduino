void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorVal = digitalRead(8);
Serial.println(sensorVal);

if (sensorVal == HIGH) {
  digitalWrite(3,LOW);
}
else {
  digitalWrite(3,HIGH);
}
}
