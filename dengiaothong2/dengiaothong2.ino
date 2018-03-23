int red = 5;
int xanh = 4;
int vang = 3;
int button1 = 6;
int button2 = 7;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7);
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(xanh,OUTPUT);
pinMode(vang,OUTPUT);
pinMode(button1,INPUT_PULLUP);
pinMode(button2,INPUT_PULLUP);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(10000);
lcd.setCursor(0,0);
lcd.print("xin dung lai");
digitalWrite(red,LOW);
digitalWrite(xanh,HIGH);
delay(10000);
lcd.setCursor(0,0);
lcd.print("moi di");
digitalWrite(xanh, LOW);
//den vang sang tat 3 lan
digitalWrite(vang,HIGH);
delay(500);
lcd.setCursor(0,0);
lcd.print("xin cham lai");
digitalWrite(vang,LOW);
delay(500);
digitalWrite(vang,HIGH);
delay(500);
digitalWrite(vang,LOW);
delay(500);
digitalWrite(vang,HIGH);
delay(500);
digitalWrite(vang,LOW);
delay(500);
diff();
}
void diff() {
  int doc1 = digitalRead(button1);
  int doc2 = digitalRead(button2);
  if ( doc1 ==0){
    digitalWrite(red,HIGH);
    lcd.setCursor(0,0);
    lcd.print("xin dung lai");
  } 
  if ( doc2 ==0);{
    digitalWrite(xanh,HIGH);
    lcd.setCursor(0,0);
    lcd.print("moi di");
  }    
}

