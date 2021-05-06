#include<IRremote.h>
int RECV_PIN=10;
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup()
{
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
}

void loop()
{

if(irrecv.decode(&results))

{
 // Serial.println(results.value,DEC); 
  
  if(results.value==16613503)
  {
    Serial.println("volup"); //increase volume of system
  }

  if(results.value==16617583)
  {
    Serial.println("voldown"); //decrease volume of system
  }
  
  if(results.value==16621663)
  {
    Serial.println("play/pause"); //play/pause video
  }
  
  if(results.value==16580863)
  {
    Serial.println("sleep/wake"); //Sleep display
  }
  
  if(results.value==16605343)
  {
    Serial.println("next"); //change to next tab on browser
  }
  
  if(results.value==16589023)
  {
    Serial.println("prev"); //change to prev tab on browser
  }
  
irrecv.resume();
}
}