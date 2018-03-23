char mang[] = "this is a test";
int i;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (i = 0; i < sizeof(mang) - 1; i++){
  Serial.print(i, DEC);
  Serial.print(" = ");
  Serial.write(mang[i]);
  Serial.println();
}
delay(5000);
}
