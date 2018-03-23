unsigned long time;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 Serial.print("time: ");
 time = millis();
 Serial.print(" " );
 Serial.print(time);
 delay(1000);
}
