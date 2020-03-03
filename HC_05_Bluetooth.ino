
//uint i;
//int pins[i]={9,10,11};

void setup() {
 Serial.begin(9600);
 

/*for(pins[i],OUTPUT){
  analogWrite(pins[i],255);
}
 
}*/
}
//R100
//G255

void loop() {

  if(Serial.available()){  
char c=Serial.read();
Serial.println(c);
int value=Serial.parseInt();
    if(c=='R'){
      
    }
  }

}
