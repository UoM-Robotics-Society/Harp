#include <Servo.h>

#define NUM_SERVOS 8
Servo myservos[NUM_SERVOS];

void setup() {
  // put your setup code here, to run once:
  for (int pin=2; pin<2 + NUM_SERVOS; pin++){
    pinMode(pin, OUTPUT);
    myservos[pin - 2].attach(pin);
  }
    
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  myservos[0].write(30);
  delay(1000);
  myservos[0].write(150);
  delay(1000);
  
  /*for (int i=0; i < NUM_SERVOS; i++){
    myservos[i].write(70-40);
    delay(500);
    myservos[i].write(70+40);
    delay(50);
  }*/


/*
analogWrite(7, 0);
analogWrite(8, 127);
delay(500);
analogWrite(8, 0);*/
}
