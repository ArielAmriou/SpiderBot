#include "spiderbot.h"

void retract(Spider &spider) {
    while (spider.legtop1.legs[KNEE].angle > 0) {
        spider.legtop1.legs[ELBOW].motor.write(spider.legtop1.legs[ELBOW].angle);
        spider.legtop1.legs[KNEE].motor.write(spider.legtop1.legs[KNEE].angle);
        spider.legtop2.legs[ELBOW].motor.write(spider.legtop2.legs[ELBOW].angle);
        spider.legtop2.legs[KNEE].motor.write(spider.legtop2.legs[KNEE].angle);
        spider.legbottom1.legs[ELBOW].motor.write(spider.legbottom1.legs[ELBOW].angle);
        spider.legbottom1.legs[KNEE].motor.write(spider.legbottom1.legs[KNEE].angle);
        spider.legbottom2.legs[ELBOW].motor.write(spider.legbottom2.legs[ELBOW].angle);
        spider.legbottom2.legs[KNEE].motor.write(spider.legbottom2.legs[KNEE].angle);
        
        spider.legtop1.legs[KNEE].angle += spider.legtop1.legs[KNEE].steps;
        spider.legtop2.legs[KNEE].angle += spider.legtop2.legs[KNEE].steps;
        spider.legbottom1.legs[KNEE].angle += spider.legbottom1.legs[KNEE].steps;
        spider.legbottom2.legs[KNEE].angle += spider.legbottom2.legs[KNEE].steps;
        delay(spider.delay_time);
    }
    spider.legtop1.legs[KNEE].steps = -spider.legtop1.legs[KNEE].steps;
    spider.legtop2.legs[KNEE].steps = -spider.legtop2.legs[KNEE].steps;
    spider.legbottom1.legs[KNEE].steps = -spider.legbottom1.legs[KNEE].steps;
    spider.legbottom2.legs[KNEE].steps = -spider.legbottom2.legs[KNEE].steps;
}