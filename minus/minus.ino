int led = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led,-5);// den van sang mac du gia tri xung la am
delay(30);
}
