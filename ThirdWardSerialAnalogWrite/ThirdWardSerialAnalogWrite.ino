//analogwrite
//This is a comment

int led = 11;
int counter = 0;
boolean trigger = false;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT); 
}

void loop(){
  //Serial.print("Hello");
  //Serial.println("Goodbye");
  // Serial.print("Current count:");
  // Serial.println(counter);
  analogWrite(led, counter);
  delay(25);

  if(counter >= 255){
    trigger = true; 
    Serial.println("Desc");
  }

  if(counter <= 0){
    trigger = false;
    Serial.println("Asc");
  }

  if(trigger == false ){
    counter++; 
  }

  if(trigger == true){
    counter--;
  }
  //ramp up
  /*
  counter = counter + 1;
   
   if(counter == 255){
   counter = 0;
   }
   */



  /*
  analogWrite(led, 0);
   delay(500);
   analogWrite(led, 100);
   delay(500);
   analogWrite(led, 255);
   delay(500);
   */
}






