int button = 11;
int led = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonStatus = digitalRead(button);
if (buttonStatus == HIGH )
  digitalWrite(led,HIGH);
  else 
  digitalWrite(led,LOW);
}
