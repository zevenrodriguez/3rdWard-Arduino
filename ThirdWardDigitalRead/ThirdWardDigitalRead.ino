int pin = 2;
int pinValue = 0;
int ledPin = 13;
boolean onePress = false;
int counter = 0;


void setup(){
  Serial.begin(9600);
  pinMode(pin,INPUT);
  pinMode(ledPin,OUTPUT);
  
  //digitalWrite(ledPin, HIGH);
  
}


void loop(){
  
  pinValue = digitalRead(pin);
  Serial.println(pinValue);
  
  if (pinValue == 1){
    //digitalWrite(ledPin, HIGH);
    
    if (onePress == false){
    counter = 1;
    }
    
    if (onePress == true){
      counter = 2;
    }
    
    onePress = true;
     
  }
  
  if(onePress == true && counter == 1){
    digitalWrite(ledPin, HIGH);
  }
  
  if(onePress == true && counter == 2){
        digitalWrite(ledPin, LOW);
        onePress = false;

  }
  
  
  
  
  
  
  
  
  
  
  
}







