int cambien= A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int reading = analogRead(cambien);
float voltage = reading *5 /1024.0;
float temp = voltage *100.0;
Serial.println(temp);
delay(1000);
}
