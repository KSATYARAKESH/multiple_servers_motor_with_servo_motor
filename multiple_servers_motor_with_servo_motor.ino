#include<Servo.h>

Servo servol;

Servo servo2; 

int servopos = 0;


void setup() {

servol.attach(2);

servo2.attach(3);

}

void loop() {

for (servopos>=0; servopos<-180; servopos++) {

servol.write(servopos);
servo2.write (servopos);
delay(20);
}

for (servopos<-180; servopos>=0; servopos--) { 
servol.write(servopos); 
servo2.write (servopos);

delay(20);
            
}
        }
