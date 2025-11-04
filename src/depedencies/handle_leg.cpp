#include "spiderbot.h"

void forward(leg_t &leg) {
    leg.legs[ELBOW].angle += leg.legs[ELBOW].steps;
    if (leg.legs[ELBOW].angle >= leg.legs[ELBOW].range.max
        || leg.legs[ELBOW].angle <= leg.legs[ELBOW].range.min)
        leg.legs[ELBOW].steps = -leg.legs[ELBOW].steps;

    if (leg.legs[ELBOW].angle == leg.legs[ELBOW].range.max
        || leg.legs[ELBOW].angle == leg.legs[ELBOW].range.min)
            leg.return_factor = !leg.return_factor;
    if (leg.return_factor == true)
        return;
    
    leg.legs[KNEE].angle += leg.legs[KNEE].steps;
    if (leg.legs[KNEE].angle >= leg.legs[KNEE].range.max
        || leg.legs[KNEE].angle <= leg.legs[KNEE].range.min)
        leg.legs[KNEE].steps = -leg.legs[KNEE].steps; 
}

void handle_leg(leg_t &leg, int direction) {
    if (direction == FORWARD)
        forward(leg);
    if (direction == BACKWARD)
        return;
}