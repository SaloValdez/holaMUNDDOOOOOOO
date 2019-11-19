
const int pinLED = 22;

void setup()
{
   Serial.begin(9600);
   pinMode(pinLED, OUTPUT);
}



 
void loop() {
//Serial.println(num);
delay(500);
  
   if (Serial.available() > 0)
   {
      int option = Serial.read();
      if (option == 'a')
      {
         digitalWrite(pinLED, LOW);  
           
      }
      if (option == 'b')
      {
         digitalWrite(pinLED, HIGH);
        
      }


   }
 }
