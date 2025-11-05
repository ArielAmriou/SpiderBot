#include "spiderbot.h"

void write_leg(leg_t &leg) {
    leg.legs[KNEE].motor.write(leg.legs[KNEE].angle + leg.legs[KNEE].offset);
    leg.legs[ELBOW].motor.write(leg.legs[ELBOW].angle + leg.legs[ELBOW].offset);
}

void write_all(Spider &spider) {
    write_leg(spider.legtop1);
    write_leg(spider.legtop2);
    write_leg(spider.legbottom1);
    write_leg(spider.legbottom2);
}