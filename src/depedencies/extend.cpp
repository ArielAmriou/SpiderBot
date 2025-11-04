#include "spiderbot.h"

void extend_leg(leg_t &leg) {
    leg.legs[ELBOW].motor.write(leg.legs[ELBOW].angle);
    leg.legs[KNEE].motor.write(leg.legs[KNEE].angle);
}

void extend(Spider &spider) {
    extend_leg(spider.legtop1);
    extend_leg(spider.legtop2);
    extend_leg(spider.legbottom1);
    extend_leg(spider.legbottom2);
    delay(spider.delay_time * 100);
}
