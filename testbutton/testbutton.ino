int led = 3;
int button = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(button,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
int doc = digitalRead(button);
Serial.println(doc);
if (doc ==HIGH)
digitalWrite(led,LOW);
else 
digitalWrite(led,HIGH);
}
