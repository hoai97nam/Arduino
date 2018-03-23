const int RED = 5;
const int GREEN = 6;
const int BLUE = 7;
int DELAY_TIME = 500; // change thu
void setup() {
  // put your setup code here, to run once: 
     pinMode(RED, OUTPUT);
     pinMode(GREEN,OUTPUT);
     pinMode(BLUE,OUTPUT);
}

void loop() {

  displayAllBasicColors();
  // goi ham tren de hien thi mau co ban
  showSpectrum(); // ham chay hieu ung cau vong
}
void displayAllBasicColors()
{
  //dau tien la tat het LED
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);

  delay(500);
  //CHI BAT LED do
 digitalWrite(RED,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);

  delay(500); 
//GREEN
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,LOW);

  delay(500);
//BLUE
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,HIGH);

  delay(500);
//VANG
digitalWrite(RED,HIGH);
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,LOW);

  delay(500);
  //CAM
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,HIGH);

  delay(500);
//TIM
digitalWrite(RED,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,HIGH);

  delay(500);
   //ALL
   digitalWrite(RED,HIGH);
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,HIGH);

  delay(500);
}
void showSpectrum()
{
    for (int i = 0; i<768; i++)
    {
      showRGB(i);
      delay(10);
    }
}
//cai dat ham showRGB
void showRGB(int color)
{
  int redPWM;
  int greenPWM;
  int bluePWM;


  if (color<= 255) // red ==> blue
{    redPWM = 255 - color; // red di tu sang ve tar
    greenPWM = color; // green tu tat thanh sang
    bluePWM = 0; //bule di tu tat thanh sang
}
  else if (color <= 511) // green => blue
{
  redPWM = 0;
  greenPWM = 255 - (color -256);
  bluePWM = color -256 ;
}
  else 
  {
    redPWM = (color -512);
    greenPWM = 0;
    bluePWM = 255 - (color -512);
  }
  analogWrite(RED,redPWM);
  analogWrite(GREEN,greenPWM);
  analogWrite(BLUE,bluePWM);
}


