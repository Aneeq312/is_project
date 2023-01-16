void setPinModeAsOutput();
void assign_to_LCD_Port(byte dat);
void sendCommand(byte cmd);
void sendPulse();
void init_LCD();
void gotoRowCol(byte row,byte col);
void writeCharacter(unsigned char c);
void writeString(unsigned char *c);

void setup()
{
 setPinModeAsOutput();
 gotoRowCol(1,0);
 writeString("LCD Module");
}
void loop()
{
 //Nothing goes here for this assignment
}

void sendCommand(byte cmd)
{
  //• Make RS Low
  digitalWrite(10, LOW); // pin 10 is for RS
  //• Send 8 bit data to LCD port
  for(int i = 2; i <= 9; i++) {
    digitalWrite(i,cmd);
    delay(10);
  }
  //• Call sendPulse()
  sendPulse();
  //• Make RS pin High
  digitalWrite(10, HIGH);
}
void sendData(byte dat)
{
  //• Make RS pin High
  digitalWrite(10, HIGH);
  //• Send 8 bit data to LCD port
  for(int i = 2; i <= 9; i++) {
    digitalWrite(i,dat);
    delay(10);
  }
  //• Call sendPulse()
  sendPulse();
}
void sendPulse()
{
  digitalWrite(10, HIGH); //EN is set to pin 11
  delay(1000); // delay for 1 second
  //• You can make EN pin High and then Low with appropriate delays
  //and call this function as per required.

}
void init_LCD()
{
  //• Make RS High
  digitalWrite(10, HIGH);
  //• Make EN pin low
  digitalWrite(11, LOW);
• Call sendCommand(0x38) for a couple of times with appropriate
delays
• Call sendCommand(0x0C);
• Call sendCommand(0x01);
}
void gotoRowCol(byte row,byte col)
{
 switch(row)
 {
 case 1:
 {
 sendCommand(0x08 | col);
 break;
 }
 case 2:
 {
 sendCommand(0xC0 | col);
 break;
 }
 case 3:
 {
 sendCommand(0x90 | col);
 break;
 }
 case 4:
 {
 sendCommand(0xD0 | col);
 break;
 }
 }

}
void writeCharacter(unsigned char c)
{
 sendData(c);
}
void writeString(unsigned char *c)
{

 unsigned char ch = 0;
 while(c[ch] != 0)
 {
 sendData(c[ch++]);

 }
}
void setPinModeAsOutput()
{
• Set appropriate pin mode of all pins that are connected to LCD

}
void assign_to_LCD_Port(byte dat)
{
• Here you send the 8 bit data to LCD port

}
