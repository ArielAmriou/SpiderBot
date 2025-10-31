#include "spiderbot.h"

void extend_leg(leg_t &leg) {
    leg[ELBOW].motor.write(leg[ELBOW].angle);
    leg[KNEE].motor.write(leg[KNEE].angle);
}

void extend(Spider &spider) {
    extend_leg(spider.legtop1);
    extend_leg(spider.legtop2);
    extend_leg(spider.legbottom1);
    extend_leg(spider.legbottom2);
    delay(1000);
}
