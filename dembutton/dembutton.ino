const int button = 11;
const int led = 2;
int dem = 0;
int state= 0;
int laststate = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
 digitalWrite(led,LOW);
  // put your main code here, to run repeatedly:
state  = digitalRead(button);
if ((state != laststate)&&(state ==HIGH))
  dem++;
laststate = state;
if (dem%4 == 0){
digitalWrite(led,HIGH);
}
else
digitalWrite(led,LOW);
}
