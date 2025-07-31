#include <Servo.h>
Servo myservo;
const int trig= 6;
const int eco=5;
void setup() 
{
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(eco, INPUT);
digitalWrite(trig, LOW);
myservo.write(90);
myservo.attach(9);
}

void loop()
{
long t;
long d;
digitalWrite (trig, HIGH);
delayMicroseconds(10);
digitalWrite (trig, LOW);
t=pulseIn(eco,HIGH);
d=t/2/29.1;
Serial.print(d);
Serial.print ("cm");
Serial.println();
delay(10);
 if ((d<100))
  {
    myservo.write(110);
    delay (200);
  }
  else
  {
    myservo.write(90);
    delay (200);
  }
}
