#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
int bientro1 = A0;
int bientro2 =A1;
int bientro3 =A2;
int pin1 = 9;
int pin2 = 11;
int pin3 = 12;
void setup() {
  // put your setup code here, to run once:
//cai dat chuc nang dieu khien
myservo1.attach(pin1);
myservo2.attach(pin2);
myservo3.attach(pin3);
}

void loop() {
  // put your main code here, to run repeatedly:
int value1 =analogRead(bientro1);
int value2 = analogRead(bientro2);
int value3= analogRead(bientro3);
int pos1 = map(value1,0,1023,0,180);
int pos2 = map(value2,0,1023,0,180);
int pos3 = map(value3,0,1023,0,180);
myservo1.write(pos1);
myservo2.write(pos2);
myservo3.write(pos3);
}
