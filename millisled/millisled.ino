int led1= 5;
int led2 =6;
unsigned long time1 = 0;
unsigned long time2 = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if ((unsigned long) (millis() - time1) >1000)
{
  if (digitalRead(led1) == LOW)
  digitalWrite(led1,HIGH);
  else 
    digitalWrite(led1,HIGH);
    time1= millis();
    Serial.print(time1);
}
if ((unsigned long) (millis()-time2 ) >300)
{
    if (digitalRead(led2) ==LOW)
      digitalWrite(led2,HIGH);
    else
      digitalWrite(led2,LOW);
      time2 ==millis();
      Serial.print(time2);
}
}
