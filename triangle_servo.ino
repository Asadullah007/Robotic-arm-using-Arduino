
#include <Servo.h>

Servo myservo;  

int pos = 0;   

void setup() {
  myservo.attach(9);  
}

void loop() {
  for (pos = 45; pos <= 90; pos +=  6) { 
    myservo.write(pos);   
    delay(20);            
  }
  for (pos = 90; pos >= 45; pos -= 5
  
  ) { 
    myservo.write(pos); 
    delay(20);           
  }
}

