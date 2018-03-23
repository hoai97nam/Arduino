int led = 7;
int quangtro =A4;
int bientro =A3;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int valuequang = analogRead(quangtro);
int valuebien =analogRead(bientro);
if ( valuequang <= valuebien)
  digitalWrite(led,HIGH);
 else
  digitalWrite(led,LOW);
}
