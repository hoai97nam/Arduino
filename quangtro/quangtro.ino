int quangtro = A5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(quangtro);
Serial.println(value);
Serial.println();
}
