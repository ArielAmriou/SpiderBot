#include "spiderbot.h"

void handle_leg(leg_t &leg) {
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

void first_steps(Spider &spider) {
    if (spider.nb_loop < 20)
        handle_leg(spider.legtop1);
    if (spider.nb_loop < 40 && spider.nb_loop >= 20)
        handle_leg(spider.legtop2);
    if (spider.nb_loop < 60 && spider.nb_loop >= 40)
        handle_leg(spider.legbottom1);
    if (spider.nb_loop < 80 && spider.nb_loop >= 60)
        handle_leg(spider.legbottom2);
}

void Spider::walk() {
    if (this->nb_loop < 80)
        return first_steps(*this);
    if (((this->nb_loop - 80) % 160) < 40)
        handle_leg(this->legtop1);
    if (((this->nb_loop - 80) % 160) < 80 && ((this->nb_loop - 80) % 160) >= 40)
        handle_leg(this->legtop2);
    if (((this->nb_loop - 80) % 160) < 120 && ((this->nb_loop - 80) % 160) >= 80)
        handle_leg(this->legbottom1);
    if (((this->nb_loop - 80) % 160) < 160 && ((this->nb_loop - 80) % 160) >= 120)
        handle_leg(this->legbottom2);
}