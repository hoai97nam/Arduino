#include <Servo.h>      // Thư viện điều khiển servo
 
// Khai báo đối tượng myservo dùng để điều khiển servo
Servo myservo;          
 
int bientro1 = A0;    // Khai báo chân analog đọc biến trở điều khiển servo
int bientro2 = A1; 
int bientro3 = A2; 
int servoPin1 = 9;       // Khai báo chân điều khiển servo
int servoPin2 = 10;
int servoPin3 = 11;
 
void setup ()
{
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(servoPin1); 
    myservo.attach(servoPin2); 
    myservo.attach(servoPin3); 

    Serial.begin(9600); // Mở giao tiếp Serial ở baudrate 9600
}
 
void loop ()
{
    int value1 = analogRead(bientro1);// Đọc giá trị biến trở
    int value2 = analogRead(bientro2);
    int value3 = analogRead(bientro3);
    
    // Chuyển giá trị analog (0-1023) đọc được từ biến trở sang số đo độ (0-180độ)
    // dùng để điều khiển góc quay cho servo
    int servoPos1 = map(value1, 0, 1023, 0, 180);
    int servoPos2 = map(value2, 0, 1023, 0, 180);
    int servoPos3 = map(value3, 0, 1023, 0, 180);
    
    // Cho servo quay một góc là servoPos độ
    myservo.write(servoPos1);
    myservo.write(servoPos2);
    myservo.write(servoPos3);

    Serial.println(servoPos1);
        Serial.println(servoPos2);
    Serial.println(servoPos3);

    
    delay(800);
}
