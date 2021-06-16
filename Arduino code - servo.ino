#include <Servo.h>

Servo servo_5;

Servo servo_6;

Servo servo_9;

Servo servo_10;

Servo servo_11;

void stop()
{
digitalWrite(9,LOW);// Unenble the pin, to stop the motor. this should be done to avid damaging the motor.
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
delay(1000);
}

int  SC1;
int  SC2;
int  SC3;
int  SC4;
int  SC5;
void setup()
{
  servo_5.attach(5);

  servo_6.attach(6);

  servo_9.attach(9);

  servo_10.attach(10);

  servo_11.attach(11);

  pinMode(8,OUTPUT);//I1
  pinMode(11,OUTPUT);//I2
  pinMode(9,OUTPUT);//speedPinA
  pinMode(12,OUTPUT);//I3
  pinMode(13,OUTPUT);//i4
  pinMode(10,OUTPUT);//speedPinB

  SC1 = 0;

  SC2 = 0;

  SC3 = 0;

  SC4 = 0;

  SC5 = 0;


}


void loop()
{
  for (int count = 0; count < 0; count++) {
    servo_5.write(90);
    delay(15);
    servo_6.write(90);
    delay(15);
    servo_9.write(90);
    delay(15);
    servo_10.write(90);
    delay(15);
    servo_11.write(90);
    delay(15);
  }
  stop();

    SC1 = (map(analogRead(A0),0,1023,0,180));
    servo_5.write(SC1);
    SC2 = (map(analogRead(A1),0,1023,0,180));
    servo_6.write(SC2);
    SC3 = (map(analogRead(A2),0,1023,0,180));
    servo_9.write(SC3);
    SC4 = (map(analogRead(A3),0,1023,0,180));
    servo_10.write(SC4);
    SC5 = (map(analogRead(A4),0,1023,0,180));
    servo_11.write(SC5);

}
