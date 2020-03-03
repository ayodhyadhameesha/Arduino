#include <AFMotor.h>

AF_DCMotor rightWheel(2);
AF_DCMotor leftWheel(4);

void setup() {



  rightWheel.setSpeed(255);
  
  

}

void loop() {

  rightWheel.run(FORWARD);

}
