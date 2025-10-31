#include "spiderbot.h"

void retract(Spider &spider) {
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