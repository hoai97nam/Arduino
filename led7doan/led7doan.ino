int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
const int seg[10] = {
  0b11000000,//0 - các thanh từ a-f sáng
  0b11111001,//1 - chỉ có 2 thanh b,c sáng
  0b10100100,//2
  0b10110000,//3
  0b10011001,//4
  0b10010010,//5
  0b10000011,//6
  0b11111000,//7
  0b10000000,//8
  0b10010000,
};
void setup() {
  // put your setup code here, to run once:
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
static int point = 0;
digitalWrite(latchPin,LOW);
shiftOut (dataPin,clockPin,MSBFIRST,seg[point]);
digitalWrite(latchPin,HIGH);
point = (point +1)%10;
delay(500);
}
