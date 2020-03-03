//Weapon
#define relayPin 5

//Right WheelW
#define MOTOR1INA 7
#define MOTOR1INB 8
#define MOTOR1PWM 6
//Left Wheel
#define MOTOR2INA 9
#define MOTOR2INB 10
#define MOTOR2PWM 11


void setup() {

pinMode(MOTOR1INA,OUTPUT);
pinMode(MOTOR1INB,OUTPUT);
pinMode(MOTOR1PWM,OUTPUT);
pinMode(MOTOR2INA,OUTPUT);
pinMode(MOTOR2INB,OUTPUT);
pinMode(MOTOR2PWM ,OUTPUT);
pinMode(relayPin,OUTPUT);


}


void loop() {

/*digitalWrite(relayPin,LOW);
delay(1000);
digitalWrite(relayPin,HIGH);
delay(1000);*/

digitalWrite(MOTOR1INA,HIGH);
digitalWrite(MOTOR1INB,LOW);
analogWrite(MOTOR1PWM,255);

digitalWrite(MOTOR2INA,HIGH);
digitalWrite(MOTOR2INB,LOW);
analogWrite(MOTOR2PWM,255);

/*digitalWrite(relayPin,HIGH);
delay(1000);
digitalWrite(relayPin,LOW);
delay(1000);*/
}
