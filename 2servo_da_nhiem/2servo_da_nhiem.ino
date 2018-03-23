#include <Arduino_FreeRTOS.h>
#include <Servo.h>
// Khai báo nhiệm vụ:
void servo1( void *pvParameters );
void servo2( void *pvParameters );
Servo myservo; 
int tro1 = A0;
int tro2 = A1;
int pin1 = 9;
int pin2 = 11;
// cai dat ham chay 1 lan khi nhan reset hoac nut power
void setup() {
 
 
  // Thiết lập nhiệm vụ để chạy độc lập
  xTaskCreate(
    servo1
    ,  (const portCHAR *)"Task1"   // servo 1 
    ,  128  // Bộ nhớ RAM để cho tiến trình hoạt động >= 64byte
    ,  NULL
    ,  2  // Mức độ ưu tiên 
    ,  NULL );
 
  xTaskCreate(
    servo2
    ,  (const portCHAR *) "Task2" //servo 2
    ,  128  // Stack size
    ,  NULL
    ,  1  // Priority
    ,  NULL );
 
  // Now the task scheduler, which takes over control of
  //scheduling individual tasks, is automatically started.
 
}
 
void loop()
{
  /* Chương trình chính đã được thực hiện trong các
  Task nên loop() trống */
}
 
 
void servo1(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  myservo1.attach(pin1);
  
  //Code được đặt ở đây sẽ chạy 1 lần giống void setup()
  for (;;)
  {
   int value1 = analogRead(tro1); 
   int pos1=map(value1,0,1023,0,180);
   myservo1.write(pos1);
   //Code được đặt trong đây sẽ tương đương với hàm void loop()
  }
}
void servo2(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
   myservo2.attach(pin2);

  for (;;)
  {
  int value2 = analogRead(tro2);
  int pos2 = map(value2,0,1023,0,180);
  myservo2.write(pos2);
  
  }
}
