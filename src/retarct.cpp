#include "spiderbot.h"

void Spider::retract() {
    for (int i = 0; this->legtop1.legs[KNEE].angle > 0; i++) {
        this->legtop1.legs[ELBOW].motor.write(this->legtop1.legs[ELBOW].angle);
        this->legtop1.legs[KNEE].motor.write(this->legtop1.legs[KNEE].angle);
        this->legtop2.legs[ELBOW].motor.write(this->legtop2.legs[ELBOW].angle);
        this->legtop2.legs[KNEE].motor.write(this->legtop2.legs[KNEE].angle);
        this->legbottom1.legs[ELBOW].motor.write(this->legbottom1.legs[ELBOW].angle);
        this->legbottom1.legs[KNEE].motor.write(this->legbottom1.legs[KNEE].angle);
        this->legbottom2.legs[ELBOW].motor.write(this->legbottom2.legs[ELBOW].angle);
        this->legbottom2.legs[KNEE].motor.write(this->legbottom2.legs[KNEE].angle);
        
        this->legtop1.legs[KNEE].angle += this->legtop1.legs[KNEE].steps;
        this->legtop2.legs[KNEE].angle += this->legtop2.legs[KNEE].steps;
        this->legbottom1.legs[KNEE].angle += this->legbottom1.legs[KNEE].steps;
        this->legbottom2.legs[KNEE].angle += this->legbottom2.legs[KNEE].steps;
        delay(10);
    }
    this->legtop1.legs[KNEE].steps = -this->legtop1.legs[KNEE].steps;
    this->legtop2.legs[KNEE].steps = -this->legtop2.legs[KNEE].steps;
    this->legbottom1.legs[KNEE].steps = -this->legbottom1.legs[KNEE].steps;
    this->legbottom2.legs[KNEE].steps = -this->legbottom2.legs[KNEE].steps;
}