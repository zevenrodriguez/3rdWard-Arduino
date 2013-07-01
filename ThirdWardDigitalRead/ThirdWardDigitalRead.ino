int pin = 2;
int pinRead = 0;


void setup(){
  Serial.begin(9600);
  pinMode(pin,INPUT);
  
}


void loop(){
  
  pinRead = digitalRead(pin);
  Serial.println(pinRead);
  
}
