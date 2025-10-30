#include "spiderbot.h"

void handle_leg_walk(leg_t &leg) {
    leg[KNEE].angle += leg[KNEE].steps;
    if (leg[KNEE].angle >= leg[KNEE].range.max)
      leg[KNEE].steps = -leg[KNEE].steps;
    if (leg[KNEE].angle <= leg[KNEE].range.min)
      leg[KNEE].steps = -leg[KNEE].steps;
      
    leg[ELBOW].angle += leg[ELBOW].steps;
    if (leg[ELBOW].angle >= leg[ELBOW].range.max)
      leg[ELBOW].steps = -leg[ELBOW].steps;
    if (leg[ELBOW].angle <= leg[ELBOW].range.min)
      leg[ELBOW].steps = -leg[ELBOW].steps;
}

void Spider::walk() {
    handle_leg_walk(this->legtop1);
    handle_leg_walk(this->legtop2);
    handle_leg_walk(this->legbottom1);
    handle_leg_walk(this->legbottom2);
}