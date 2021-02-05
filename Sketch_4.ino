//using knowledge from last semester and the blink example on arduino I put this together.
//It wasn't working perfectly and this website helped me realize that I needed curly brackets in between the lights in the void loop
// https://www.instructables.com/Multiple-Blinking-LED-on-the-Arduino/


int led1 = 2;
int led2 = 4;
int led3 = 6;


void setup() {

  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}



void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                      
  {digitalWrite(led2, HIGH); 
  delay(500);                       
  digitalWrite(led2, LOW);    
  delay(100); }
  {digitalWrite(led3, HIGH);   
  delay(500);                       
  digitalWrite(led3, LOW);    
  delay(100); }
}
