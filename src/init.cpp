#include "dependencies.h"

void attach_pins(Spider &spider) {
    spider.legtop1.legs[ELBOW].motor.attach(11);
    spider.legtop1.legs[KNEE].motor.attach(7);
    spider.legtop2.legs[ELBOW].motor.attach(10);
    spider.legtop2.legs[KNEE].motor.attach(6);
    spider.legbottom1.legs[ELBOW].motor.attach(9);
    spider.legbottom1.legs[KNEE].motor.attach(5);
    spider.legbottom2.legs[ELBOW].motor.attach(8);
    spider.legbottom2.legs[KNEE].motor.attach(4);
}

void init_leg(leg_t &leg, const leg_t src) {
    for (unsigned short i = 0; i < NB_JOINTS; i++) {
        leg.legs[i].angle = src.legs[i].angle;
        leg.legs[i].range = src.legs[i].range;
        leg.legs[i].steps = src.legs[i].steps;
        leg.return_factor = true;
    }
}

void init_spider(Spider &spider, unsigned long delay_time) {
    init_leg(spider.legtop1, LEGTOP1);
    init_leg(spider.legtop2, LEGTOP2);
    init_leg(spider.legbottom1, LEGBOTTOM1);
    init_leg(spider.legbottom2, LEGBOTTOM2);
    spider.delay_time = delay_time;
}

void Spider::init(unsigned long delay_time = DEFAULT_DELAY_TIME) {
    attach_pins(*this);
    init_spider(*this, delay_time);
    extend(*this);
    retract(*this);
    first_steps(*this);
}