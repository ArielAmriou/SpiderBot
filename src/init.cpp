#include "spiderbot.h"

void extend(Spider &spider) {
    spider.legtop1[ELBOW].motor.write(spider.legtop1[ELBOW].angle);
    spider.legtop1[KNEE].motor.write(spider.legtop1[KNEE].angle);
    spider.legtop2[ELBOW].motor.write(spider.legtop2[ELBOW].angle);
    spider.legtop2[KNEE].motor.write(spider.legtop2[KNEE].angle);
    spider.legbottom1[ELBOW].motor.write(spider.legbottom1[ELBOW].angle);
    spider.legbottom1[KNEE].motor.write(spider.legbottom1[KNEE].angle);
    spider.legbottom2[ELBOW].motor.write(spider.legbottom2[ELBOW].angle);
    spider.legbottom2[KNEE].motor.write(spider.legbottom2[KNEE].angle);
    delay(1000);
    for (int i = 0; i < 40; i++) {
        spider.legtop1[ELBOW].motor.write(spider.legtop1[ELBOW].angle);
        spider.legtop1[KNEE].motor.write(spider.legtop1[KNEE].angle);
        spider.legtop2[ELBOW].motor.write(spider.legtop2[ELBOW].angle);
        spider.legtop2[KNEE].motor.write(spider.legtop2[KNEE].angle);
        spider.legbottom1[ELBOW].motor.write(spider.legbottom1[ELBOW].angle);
        spider.legbottom1[KNEE].motor.write(spider.legbottom1[KNEE].angle);
        spider.legbottom2[ELBOW].motor.write(spider.legbottom2[ELBOW].angle);
        spider.legbottom2[KNEE].motor.write(spider.legbottom2[KNEE].angle);
        
        spider.legtop1[KNEE].angle += spider.legtop1[KNEE].steps;
        spider.legtop2[KNEE].angle += spider.legtop2[KNEE].steps;
        spider.legbottom1[KNEE].angle += spider.legbottom1[KNEE].steps;
        spider.legbottom2[KNEE].angle += spider.legbottom2[KNEE].steps;
        delay(10);
    }
    spider.legtop1[KNEE].steps = -spider.legtop1[KNEE].steps;
    spider.legtop2[KNEE].steps = -spider.legtop2[KNEE].steps;
    spider.legbottom1[KNEE].steps = -spider.legbottom1[KNEE].steps;
    spider.legbottom2[KNEE].steps = -spider.legbottom2[KNEE].steps;
}

void init_spider(Spider &spider) {
    spider.legtop1[ELBOW].motor.attach(11);
    spider.legtop1[KNEE].motor.attach(7);
    spider.legtop2[ELBOW].motor.attach(10);
    spider.legtop2[KNEE].motor.attach(6);
    spider.legbottom1[ELBOW].motor.attach(9);
    spider.legbottom1[KNEE].motor.attach(5);
    spider.legbottom2[ELBOW].motor.attach(8);
    spider.legbottom2[KNEE].motor.attach(4);
    extend(spider);
}