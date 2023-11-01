#include <Arduino.h>
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


void pluck(int servo){
  if (myservos[servo].read()<100){myservos[servo].write(140);}
  else{myservos[servo].write(60);}
}


void loop() {
  // put your main code here, to run repeatedly:
  
  
 for(int x = 0; x<NUM_SERVOS; x++){
  pluck(x);
  delay(500);
 }

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


