#include "spiderbot.h"

void attach_pins(Spider &spider) {
    spider.legtop1[ELBOW].motor.attach(11);
    spider.legtop1[KNEE].motor.attach(7);
    spider.legtop2[ELBOW].motor.attach(10);
    spider.legtop2[KNEE].motor.attach(6);
    spider.legbottom1[ELBOW].motor.attach(9);
    spider.legbottom1[KNEE].motor.attach(5);
    spider.legbottom2[ELBOW].motor.attach(8);
    spider.legbottom2[KNEE].motor.attach(4);
}

void init_leg(leg_t &leg, const leg_t src) {
    for (unsigned short i = 0; i < NB_JOINTS; i++) {
        leg[i].angle = src[i].angle;
        leg[i].range = src[i].range;
        leg[i].steps = src[i].steps;
    }
}

void init_spider(Spider &spider) {
    init_leg(spider.legtop1, LEGTOP1);
    init_leg(spider.legtop2, LEGTOP2);
    init_leg(spider.legbottom1, LEGBOTTOM1);
    init_leg(spider.legbottom2, LEGBOTTOM2);
}

void Spider::init() {
    attach_pins(*this);
    init_spider(*this);
}