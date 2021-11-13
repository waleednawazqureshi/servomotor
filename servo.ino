#include <Servo.h>
Servo servomotor;
int pos;
void setup() {
 servomotor.attach(3);

}

void loop() {
  for (pos=0; pos <=120; pos++){
    servomotor.write(pos);
    delay(15);
  }
  for (pos=120; pos >=0; pos--){
     servomotor.write(pos);
     delay(15);
    
  }
  delay(1000);
 
}
