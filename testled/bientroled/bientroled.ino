int led = 6;
int value;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
int value = analogRead(A4);
Serial.println(value);
analogWrite(led,value);

}
