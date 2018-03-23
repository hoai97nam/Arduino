int led = 5;
int button = 2;

void tatled()
{
  digitalWrite(led,LOW);
}
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button, INPUT_PULLUP);
attachInterrupt(0,tatled,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(500);
digitalWrite(led,LOW);
delay(500);
}
