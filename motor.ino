#include<Servo.h>

/*Put here the pin where
the Servomotor is connected
Remember it should be
marked with ~ sign */
int pin=6;
Servo my_servo;

String message;
char initial;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  my_servo.attach(pin);
  my_servo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    message=Serial.readString();
    initial=message.charAt(0);
    Serial.println(message);
  }
  switch(initial){
    case 'a':
    //TODO
      break;
    case 'b':
    //TODO
      break;
    case 'c':
    //TODO
      break;
    case 'd':
    //TODO
      break;
    default:
      break;
  }
  delay(10);
}
