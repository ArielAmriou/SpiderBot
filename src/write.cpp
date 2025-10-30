#include "spiderbot.h"

void write_leg(leg_t &leg) {
    leg[KNEE].motor.write(leg[KNEE].angle);
    leg[ELBOW].motor.write(leg[ELBOW].angle);
}

void Spider::write() {
    write_leg(this->legtop1);
    write_leg(this->legtop2);
    write_leg(this->legbottom1);
    write_leg(this->legbottom2);
}