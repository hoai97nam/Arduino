int do1 = 8;
int xanh1=9;
int vang1=10;
int do2 = 2;
int xanh2 = 3;
int vang2 = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(do1,OUTPUT);
pinMode(xanh1,OUTPUT);
pinMode(vang1,OUTPUT);
pinMode(do2,OUTPUT);
pinMode(xanh2,OUTPUT);
pinMode(vang2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(do1,HIGH); //sang
digitalWrite(xanh2,HIGH);//sang
digitalWrite(xanh1,LOW);
digitalWrite(vang1,LOW);
delay(7000);
digitalWrite(xanh2,LOW);
digitalWrite(vang2,HIGH);//sang
delay(3000);
digitalWrite(do1,LOW);
digitalWrite(xanh1,HIGH);//sang
digitalWrite(vang2,LOW);
digitalWrite(do2,HIGH);//sang
delay(5000);
digitalWrite(xanh1,LOW);
digitalWrite(vang1,HIGH);
delay(3000);
digitalWrite(vang1,LOW);
digitalWrite(do2,LOW);
}
