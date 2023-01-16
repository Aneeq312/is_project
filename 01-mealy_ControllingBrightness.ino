 /*
 * This program demonstrates how to implement
 * a mealy machine.
 * User enters '0' or '1' on serial monitor
 * and the program adjusts the brightness of
 * LED connected to pin 9 according to a
 * pre defined state diagram.
 */


enum input{
  OFF,
  ON
};
typedef enum{ 
  s1,
  s2,
  s3,
  s4
}states_t;
states_t presentState = s1;

#define OFF 0
#define DIM 25
#define MED 50
#define FULL 255


const uint8_t ledPin = 9;

void led_State_Machine(uint8_t in);
void led_Change_Intensity(uint8_t pin, uint8_t intensity);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("LED Brightness Controlling Application");
  Serial.println("Type '0' or '1' as input");
}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t in;
  if(Serial.available() > 0)
  {
    in = Serial.read();
    if(in == '1')
    {
      led_State_Machine(ON);
      
    }else if(in == '0')
    {
      led_State_Machine(OFF);
    }
  }
}

//implementation of Mealy state machine
void led_State_Machine(uint8_t event)
{
  switch(presentState)
  {
    case s1:
    {
      switch(event)
      {
        case ON:
        {
          led_Change_Intensity(ledPin,DIM);
          presentState = s2;
          
          break;
        }
        case OFF:
        {
          led_Change_Intensity(ledPin,OFF);
          presentState = s1;
          break;
        }
      }
      break;
    }
    
    case s2:
    {
      switch(event)
      {
        case ON:
        {
          led_Change_Intensity(ledPin,MED);
          presentState = s3;
          break;
        }
        case OFF:
        {
          led_Change_Intensity(ledPin,OFF);
          presentState = s1;
          break;
        }
      }
      
      break;
    }
    
    case s3:
    {
      switch(event)
      {
        case ON:
        {
          led_Change_Intensity(ledPin,FULL);
          presentState = s4;
          break;
        }
        case OFF:
        {
          led_Change_Intensity(ledPin,OFF);
          presentState = s1;
          break;
        }
      }
      
      break;
    }
    
    case s4:
    {
      switch(event)
      {
        case ON:
        {
          led_Change_Intensity(ledPin,DIM);
          presentState = s2;
          break;
        }
        case OFF:
        {
          led_Change_Intensity(ledPin,MED);
          presentState = s3;
          break;
        }
      }
      
      break;
    }
    
  }
  
}


/////////
void led_Change_Intensity(uint8_t pin, uint8_t intensity)
{
  analogWrite(pin,intensity);
  
}
