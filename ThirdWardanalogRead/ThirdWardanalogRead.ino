
int pot = 0;
int ledPin = 9;
int mapValue = 0;
int low = 0;


void setup(){
  
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  
}



void loop(){
  
  pot = analogRead(A0);
  //Serial.println(pot);
  //pot = pot/4;
  if(pot < 400){
    low = 400;
  }
  mapValue = map(pot, low, 810, 0,255);
  Serial.println(mapValue);
  analogWrite(ledPin, mapValue);
  
  
  
  
  
  
  
}
