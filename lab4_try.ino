//class header
#include "Arduino.h"
class flash
{
  public: 
    flash(int pin1,int pin2,int pin3,int pin4);
    void begin();
    void ALLON();
    void ALLOFF();
    void UpCounter();
    void DownCounter();
    void LeftShift();
    void RightShift();
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
};
//class definition
#include "flash.h"
flash::flash(int pin1,int pin2, int pin3, int pin4)
{
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
  _pin4 = pin4;
}
void flash::begin()
{
  pinMode(_pin1,OUTPUT);
  pinMode(_pin2,OUTPUT);
  pinMode(_pin3,OUTPUT);
  pinMode(_pin4,OUTPUT);
}
void flash::ALLON()
{
  digitalWrite(_pin1,HIGH);
  digitalWrite(_pin2,HIGH);
  digitalWrite(_pin3,HIGH);
  digitalWrite(_pin4,HIGH);
}
void flash::ALLOFF()
{
  digitalWrite(_pin1,LOW);
  digitalWrite(_pin2,LOW);
  digitalWrite(_pin3,LOW);
  digitalWrite(_pin4,LOW);
}
void flash::UpCounter()
{
  for(int i=0;i<16;i++)
  {
    if(i=0){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=1){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=2){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=3){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=4){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=5){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=6){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=7){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=8){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=9){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=10){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=11){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=12){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=13){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=14){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=15){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
  }
}
void flash::DownCounter()
{
  for(int i=15;i>=0;i--)
  {
    if(i=0){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=1){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=2){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=3){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=4){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=5){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=6){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=7){
      digitalWrite(_pin1,LOW);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=8){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=9){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=10){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=11){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,LOW);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
    if(i=12){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,LOW);
    }
    if(i=13){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,LOW);
      digitalWrite(_pin4,HIGH);
    }
    if(i=14){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,LOW);
    }
    if(i=15){
      digitalWrite(_pin1,HIGH);
      digitalWrite(_pin2,HIGH);
      digitalWrite(_pin3,HIGH);
      digitalWrite(_pin4,HIGH);
    }
  }
}
void flash::LeftShift()
{
   digitalWrite(_pin1,LOW);
   digitalWrite(_pin2,LOW);
   digitalWrite(_pin3,LOW);
   digitalWrite(_pin4,LOW);
   delay(500);
   digitalWrite(_pin4,HIGH);
   delay(1000);
   digitalWrite(_pin3,HIGH);
   delay(1000);
   digitalWrite(_pin2,HIGH);
   delay(1000);
   digitalWrite(_pin1,HIGH);
   delay(1000);
   digitalWrite(_pin1,LOW);
   digitalWrite(_pin2,LOW);
   digitalWrite(_pin3,LOW);
   digitalWrite(_pin4,LOW);
}
void flash::RightShift()
{
   digitalWrite(_pin1,LOW);
   digitalWrite(_pin2,LOW);
   digitalWrite(_pin3,LOW);
   digitalWrite(_pin4,LOW);
   delay(500);
   digitalWrite(_pin1,HIGH);
   delay(1000);
   digitalWrite(_pin2,HIGH);
   delay(1000);
   digitalWrite(_pin3,HIGH);
   delay(1000);
   digitalWrite(_pin4,HIGH);
   delay(1000);
   digitalWrite(_pin1,LOW);
   digitalWrite(_pin2,LOW);
   digitalWrite(_pin3,LOW);
   digitalWrite(_pin4,LOW);
}
//arduino Sketch
#include <flash.h>
const int pin1 = 2;
const int pin2 = 3;
const int pin3 = 4;
const int pin4 = 5;
flash obj1(pin1,pin2,pin3,pin4);
void setup()
{
  obj1.begin();
}
void loop()
{
  obj1.ALLON();
  delay(300);
  obj1.ALLOFF();
  delay(1000);
  obj1.UpCounter();
  delay(1000);
  obj1.DownCounter();
  delay(1000);
  obj1.LeftShift();
  delay(1000);
  obj1.RightShift();
    
}
