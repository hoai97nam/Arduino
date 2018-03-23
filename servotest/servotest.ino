#include <Servo.h>
Servo myservo;
int bientro = A0;
int servopin = 9;
void setup() {
  // put your setup code here, to run once:
myservo.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(bientro);
int pos = map(value,0,1023,0,180);
myservo.write(pos);
}
