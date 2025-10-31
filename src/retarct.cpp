#include "spiderbot.h"

void Spider::retract() {
    for (int i = 0; i < 40; i++) {
        this->legtop1[ELBOW].motor.write(this->legtop1[ELBOW].angle);
        this->legtop1[KNEE].motor.write(this->legtop1[KNEE].angle);
        this->legtop2[ELBOW].motor.write(this->legtop2[ELBOW].angle);
        this->legtop2[KNEE].motor.write(this->legtop2[KNEE].angle);
        this->legbottom1[ELBOW].motor.write(this->legbottom1[ELBOW].angle);
        this->legbottom1[KNEE].motor.write(this->legbottom1[KNEE].angle);
        this->legbottom2[ELBOW].motor.write(this->legbottom2[ELBOW].angle);
        this->legbottom2[KNEE].motor.write(this->legbottom2[KNEE].angle);
        
        this->legtop1[KNEE].angle += this->legtop1[KNEE].steps;
        this->legtop2[KNEE].angle += this->legtop2[KNEE].steps;
        this->legbottom1[KNEE].angle += this->legbottom1[KNEE].steps;
        this->legbottom2[KNEE].angle += this->legbottom2[KNEE].steps;
        delay(10);
    }
    this->legtop1[KNEE].steps = -this->legtop1[KNEE].steps;
    this->legtop2[KNEE].steps = -this->legtop2[KNEE].steps;
    this->legbottom1[KNEE].steps = -this->legbottom1[KNEE].steps;
    this->legbottom2[KNEE].steps = -this->legbottom2[KNEE].steps;
}