#include <Servo.h>
Servo myservo;
const int trig = 8;
const int echo = 7;
int coi= 5;
int sen = A0;
void setup() {
  // put your setup code here, to run once:
pinMode(coi,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
myservo.attach(9);
Serial.begin(9600);
}

//chuong trinh chinh
void loop() {
  int value = sensor();
  if (value < 1.5){
    keu();
  }
  else
  {
  int value = analogRead(sen);
  if (value <1023){
    keu();
    sweep();
    Serial.println("Hello");
    delay(50);
  
  }
  }
}



//ham bao hieu buzzer
void keu(){
  digitalWrite(coi,1);
  delay(50);
  digitalWrite(coi,0);
  delay(50);
}

// ham dong mo nap

void sweep() {
  for (int pos=0; pos<=90;pos+=1)
  {
    myservo.write(pos);
    delay(3000);
  }
  for (int pos = 90; pos >= 0; pos -= 1)
{
    myservo.write(pos);             
    delay(15);                      
  }
}

// do do rong xung
int sensor(){
  unsigned long du;
  int dis;

  digitalWrite(trig,LOW);
  delayMicroseconds(1000);
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);

  du = pulseIn(echo,HIGH);
  dis = du/2/29.412;
  return dis;
}

