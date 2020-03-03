

//Signal pin is yellow
//5V pin is red
//Ground pin is yellow


//#include <AFMotor.h>


#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  myservo.write(0);
}

void loop() {
  for (int pos =0 ; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
for (int pos =180 ; pos >= 0; pos =pos- 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degreeu
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
}
