#include "spiderbot.h"

void write_leg(leg_t &leg) {
    leg.legs[KNEE].motor.write(leg.legs[KNEE].angle);
    leg.legs[ELBOW].motor.write(leg.legs[ELBOW].angle);
}

void Spider::write() {
    write_leg(this->legtop1);
    write_leg(this->legtop2);
    write_leg(this->legbottom1);
    write_leg(this->legbottom2);
}