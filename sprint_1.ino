//All of this code was sourced from 
//https://forum.arduino.cc/index.php?topic=315309.0
//I changed delays, values, and amount of LEDs on this code to make it my own.

int ledPin1 = 3;  
int ledPin5 = 2;
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 9;
int ledPin6 = 12;

void setup()  { 
  // nothing happens in setup ...
} 

void loop()  { 
  
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin1, fadeValue);      
    delay(0);                            
  } 
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
    analogWrite(ledPin1, fadeValue);
    delay(8);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 200; fadeValue +=5) { 
    analogWrite(ledPin5, fadeValue);     
    delay(0);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=15) { 
    analogWrite(ledPin5, fadeValue);      
    delay(8);                            
  } 

for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin2, fadeValue);     
    delay(0);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
    analogWrite(ledPin2, fadeValue);       
    delay(8);                            
  } 

for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin3, fadeValue);    
    delay(0);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
    analogWrite(ledPin3, fadeValue);       
    delay(8);                            
  } 

for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin4, fadeValue);      
    delay(0);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
    analogWrite(ledPin4, fadeValue);       
    delay(8);                            
  } 
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPin6, fadeValue);     
    delay(0);                            
  } 
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=15) { 
    analogWrite(ledPin6, fadeValue);       
    delay(8);                            
  } 
}
