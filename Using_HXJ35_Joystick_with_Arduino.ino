int x=0;
int y=0;
int button=0;

#define xAxis A0
#define yAxis A1
#define theButton 7 


void setup() {

Serial.begin(9600);

pinMode(theButton,INPUT_PULLUP);
 

}

void loop() {

x=analogRead(A0);
y=analogRead(A1);
button=digitalRead(theButton);

/*Serial.println("The direction of x is");
Serial.println(x);
delay(1000);

Serial.println("The direction of y is");
Serial.println(y);
delay(1000);

//Serial.print("The button");
if(button==HIGH){

 Serial.println("1");
}
else
Serial.println("0");*/

if(x>520){
  Serial.println("UP");
}
else
if(x<480){
Serial.println("DOWN");
}
else
Serial.println("X CENTER");
delay(1000);

if(y>530){

  Serial.println("RIGHT");
}
  else if(y<490){
    Serial.println("LEFT");
  }
else
Serial.println("CENTER");

 

}
