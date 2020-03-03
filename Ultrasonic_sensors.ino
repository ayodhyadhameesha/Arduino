#define trig 6
#define echo 7
// trig pin should be2
//echo pin should be 4 not definite

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {

digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

long int t=pulseIn(echo,HIGH);


//STANDARD CONVERSIONS FOR CMS AND INCHES
long inches =t/74/2;
long cm=t/29/2;
Serial.println("The distance is");
Serial.println(cm);
delay(100);

if (cm>10){

Serial.println("Go front");
delay(200);
}
else
Serial.println("Go back");
delay(200); 


}
