int trig = 6;
int echo = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long duration;
int distance;

digitalWrite(trig,0);
delayMicroseconds (2);
digitalWrite(trig,1);
delayMicroseconds(5);
digitalWrite(trig,0);

duration = pulseIn(echo,HIGH);
distance = int(duration/2/29.412);
Serial.print(distance);
Serial.println("cm");
delay(200);

}
