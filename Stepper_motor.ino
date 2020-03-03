#include <CheapStepper.h>

CheapStepper stepper (2,3,4,5);

boolean moveClockwise=true;

void setup() {

  Serial.begin(9600);
  Serial.println("Ready to move");

}

void loop() {

  for(int a=0;a<3000;a++){

stepper.step(!moveClockwise); 

int nStep=stepper.getStep();

if(nStep%64==0){
Serial.println(nStep);
  
}
    
  }
  delay(500);

  moveClockwise = moveClockwise;

}
