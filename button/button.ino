int button = 2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonStatus = digitalRead(button);
Serial.println(buttonStatus);
delay(200);
}
