
// Bluetooth Tutorial By Robo India
// Bluetooth module used - HC-06

#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(5, 6); // (TXD, RXD) of HC-06

char BT_input; // to store input character received via BT.

void setup()  
{
  pinMode(13, OUTPUT);  // Arduino Board LED Pin 1
  pinMode(12, OUTPUT);  // Arduino Board LED Pin 2
    pinMode(8, OUTPUT);  // Arduino Board LED Pin 3
  
  BlueTooth.begin(9600);  
}

void loop() 
{
  if (BlueTooth.available())
 
  {
    BT_input=(BlueTooth.read());
      while (BT_input=='a'){
          
          digitalWrite(13, HIGH); //1
            delay(10);
            
            digitalWrite(13, LOW);
             delay(10);
              
            digitalWrite(12, HIGH); //2
            delay(10);
            
            digitalWrite(12, LOW);
            delay(10);
             
            digitalWrite(8, HIGH); //3
            delay(10);
            
            digitalWrite(8, LOW);
            delay(10);
            
           
            
            
            BlueTooth.println("Now LED 13 12 is OFF");
      }
      
      while (BT_input=='b'){
           digitalWrite(13, HIGH); //1
            delay(100);
            
             digitalWrite(12, HIGH); //2
            delay(100);
            
            digitalWrite(13, LOW);
             delay(30);

             digitalWrite(8, HIGH); //3
            delay(100);

         
            digitalWrite(12, LOW);
            delay(30);
             
       
            
            digitalWrite(8, LOW);
            delay(30);
            
           
            
            
            BlueTooth.println("Now LED 13 12 is OFF");
      }
    
    
  
   // You may add other if else condition here. 
  }
}

