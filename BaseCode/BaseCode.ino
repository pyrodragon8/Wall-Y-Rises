#include <Servo.h>
Servo RServ,LServ;
int inputAngle = 0;

void setup() {
  Serial.begin(9600);
  RServ.attach(3); 
//  RServ.write(90);
  RServ.writeMicroseconds(1470);
  LServ.attach(4); 
//  LServ.write(91);
  LServ.writeMicroseconds(1480);
}

void loop() {
//Serial.println(LServ.read(), RServ.read());
//Fwd();
}

void Fwd(){
//  RServ.writeMicroseconds(1000);
//LServ.writeMicroseconds(2000);    

    

}
