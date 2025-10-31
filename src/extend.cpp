#include "spiderbot.h"

void extend_leg(leg_t &leg) {
    leg[ELBOW].motor.write(leg[ELBOW].angle);
    leg[KNEE].motor.write(leg[KNEE].angle);
}

void Spider::extend() {
    extend_leg(this->legtop1);
    extend_leg(this->legtop2);
    extend_leg(this->legbottom1);
    extend_leg(this->legbottom2);
    delay(1000);
}
