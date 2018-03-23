#include <Servo.h>

Servo myservo;  
int bientro = A0;
int se = 9;
void setup() {
  myservo.attach(se);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int value = analogRead(bientro);
  int pos = map(value, 0, 1023,0, 180);
  myservo.write(pos);
}
