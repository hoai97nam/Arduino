int red = 7;
int green = 5;
int yellow  = 3;
int buttonred =8;
int buttongreen = 10;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(buttonred,INPUT_PULLUP);
pinMode(buttongreen,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
int docred = digitalRead(buttonred);
Serial.println(docred);
 if (docred == HIGH){
digitalWrite(red,HIGH);
delay(10000);
digitalWrite(red,LOW);
delay(50);
digitalWrite(green,HIGH);
delay(5000);
digitalWrite(green,LOW);
delay(50);
digitalWrite(yellow,HIGH);
delay(3000);
digitalWrite(yellow,LOW);
delay(50);
 }
 else
 digitalWrite(red,HIGH);
 digitalWrite(green,LOW);
 digitalWrite(yellow,LOW);
int docgreen = digitalRead(buttongreen);
Serial.println(docgreen);
 if (docgreen ==HIGH){
  digitalWrite(red,HIGH);
delay(10000);
digitalWrite(red,LOW);
delay(50);
digitalWrite(green,HIGH);
delay(5000);
digitalWrite(green,LOW);
delay(50);
digitalWrite(yellow,HIGH);
delay(3000);
digitalWrite(yellow,LOW);
delay(50);
 }
else
digitalWrite(red,HIGH);
 digitalWrite(green,LOW);
 digitalWrite(yellow,LOW);    
}
