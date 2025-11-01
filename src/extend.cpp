#include "spiderbot.h"

void extend_leg(leg_t &leg) {
    leg.legs[ELBOW].motor.write(leg.legs[ELBOW].angle);
    leg.legs[KNEE].motor.write(leg.legs[KNEE].angle);
}

void Spider::extend() {
    extend_leg(this->legtop1);
    extend_leg(this->legtop2);
    extend_leg(this->legbottom1);
    extend_leg(this->legbottom2);
    delay(1000);
}
