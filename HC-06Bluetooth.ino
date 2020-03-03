#include <SoftwareSerial.h>
SoftwareSerial BT(0,1);

void setup() {
  // put your setup code here, to run once:
  BT.begin(9600);
  Serial.begin(9600);
  Serial.println("Hey");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(BT.available()){
    char input = BT.read();
    Serial.println(input);
    switch (input){
      case '1':
        Serial.println("1");
        break;
      case '2':
        Serial.println("2");
        break;
      case '3':
        Serial.println("3");
        break;
      case '4':
        Serial.println("4");
        break;
      case '5':
        Serial.println("5");
        break;      
    }
  }


}
