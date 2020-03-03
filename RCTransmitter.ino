int rpins[]={2,3,4};
int rvals[]={0,0,0,0,0,0};

 void setup() {

  Serial.begin(115200);

for(int i=0;i<=3;i++){
  pinMode(rpins[i],INPUT);
}
  

}

void loop() {
  // put your main code here, to run repeatedly:
 long stime=micros();
 for(int i=0;i<=3;i++){
  
  rvals[i]=pulseIn(rpins[i],HIGH);  
  Serial.print("CH");
  Serial.print(i);
  Serial.print(":");
  Serial.print(rvals[i]);
  Serial.print('\t');
  
 }
  Serial.println("");
  delay(1000);
long readtime=micros()-stime;

Serial.println(readtime);
}

