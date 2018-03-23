#include <Servo.h>
Servo myservo;
int bientro= A0;
int servo = 9;
void setup() {
  // put your setup code here, to run once:
myservo.attach(servo);

}

void loop() {
  int value= analogRead(bientro);
  // put your main code here, to run repeatedly:
int servopos = map(value,0,1023,0,108);
myservo.write(servopos);
delay(100);
}
