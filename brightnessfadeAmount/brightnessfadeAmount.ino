int led = 11;
int brightness = 0;
int fadeAmount = 5;
void setup() {
  // put your setup code here, to run once:
pinMode (led, OUTPUT);

}
void loop() {
analogWrite(led,brightness); // den tat
brightness = brightness + fadeAmount ;// brightness luc nay la: 0+5 =5
if (brightness ==0 || brightness == 225);
fadeAmount = -fadeAmount;
delay(30);
}
