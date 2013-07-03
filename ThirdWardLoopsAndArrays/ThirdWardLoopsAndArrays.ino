int maximum = 100;
int minim = 0;
int led = 9;

int numbers[] = {0,25,255, 75, 100,255};
int numbersLength = 6;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
  //Serial.println(numbers[0]);
  /*
  while(minim < maximum){
    
    minim++;
    Serial.println(minim);
    delay(100);
    
  }
  
  for(int i = 0; i < 100; i++){
    Serial.println(i);
    delay(100);
  }
  */
}


void loop(){
  /*
  for(int i = 0; i < 255; i++){
    Serial.println(i);
    analogWrite(led,i);
    delay(10);
  }
  for(int i = 255; i > 0; i--){
    Serial.println(i);
    analogWrite(led,i);
    delay(10);
  }
  */
  
  
  for(int i = 0; i < numbersLength; i++){
    Serial.println(numbers[i]);
    analogWrite(led,numbers[i]);
    delay(1000);
  }
}




