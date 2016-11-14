#define theRedLed 13

void setup(){
   pinMode(theRedLed,OUTPUT); 
}

void loop(){
   digitalWrite(theRedLed,HIGH);
  delay(88);
 digitalWrite(theRedLed,LOW);
delay(88); 
}
