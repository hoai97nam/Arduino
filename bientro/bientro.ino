void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value =analogRead(A5);
Serial.println(value);
int voltage;
voltage = map(value,0,1023,0,5000);
Serial.println(voltage);
Serial.println();
delay(200);
}
