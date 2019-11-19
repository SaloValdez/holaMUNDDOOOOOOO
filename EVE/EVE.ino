#include <Servo.h>

Servo microservo; 
int pos = 0; //SERVO---------//posicion INICIAL del servo




const int pinLED = 22;




const int ledAlterna = 20; //FOCO ALTERNA





void setup()
{
   Serial.begin(9600);
   pinMode(pinLED, OUTPUT);



   
  //inicializar servo
  microservo.attach(50);  // Se configura como Servo el Puerto 11----------------------------------------------------------------

 
}
 
void loop() {
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


         if (option == '0')
      {
         digitalWrite(ledAlterna, HIGH);
     
      }

          if (option == '1')
      {
         digitalWrite(ledAlterna, LOW);
          
      }
      


      //SERVOMOTORES
     if(option=='j'){for(pos = 180; pos>=1; pos-=3)     //Giro de 180 a 0 grados 
                      {microservo.write(pos);delay(15);} }
     if(option=='i'){for(pos = 0; pos < 180; pos += 3)  // Giro de 0 a 180 grados 
                      {microservo.write(pos);delay(15);}}  // Espera 15 ms para que el servo llege a la posicion

      
   }
}
