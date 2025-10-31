#include "spiderbot.h"

void handle_leg(leg_t &leg) {
    leg[ELBOW].angle += leg[ELBOW].steps;
    if (leg[ELBOW].angle >= leg[ELBOW].range.max || leg[ELBOW].angle <= leg[ELBOW].range.min)
      leg[ELBOW].steps = -leg[ELBOW].steps;

    leg[KNEE].angle += leg[KNEE].steps;
    if (leg[KNEE].angle >= leg[KNEE].range.max || leg[KNEE].angle <= leg[KNEE].range.min)
      leg[KNEE].steps = -leg[KNEE].steps;      
}

void Spider::walk() {
    handle_leg(this->legtop1);
    handle_leg(this->legtop2);
    handle_leg(this->legbottom1);
    handle_leg(this->legbottom2);
}