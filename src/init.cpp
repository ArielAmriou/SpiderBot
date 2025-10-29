#include "spiderbot.h"

void init(Spider spider) {
    spider.legtop1[ELBOW].motor.attach(11);
    spider.legtop1[KNEE].motor.attach(7);
    spider.legtop2[ELBOW].motor.attach(10);
    spider.legtop2[KNEE].motor.attach(6);
    spider.legbottom1[ELBOW].motor.attach(9);
    spider.legbottom1[KNEE].motor.attach(5);
    spider.legbottom2[ELBOW].motor.attach(8);
    spider.legbottom2[KNEE].motor.attach(4);
}