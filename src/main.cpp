#include "spiderbot.h"

Spider spider;

void walk(leg_t);
void extend(int, int);

void setup()
{
    init(spider);
}

void loop()
{
    extend(45, 135);
    //walk(spider.legtop1);
    delay(SPEED);
}

void walk(leg_t leg) {
    leg[KNEE].motor.write(leg[KNEE].angle);
    leg[KNEE].angle += leg[KNEE].steps;
    if (leg[KNEE].angle > 135)
      leg[KNEE].steps = -1;
    if (leg[KNEE].angle <= 45)
      leg[KNEE].steps = 1;

    leg[ELBOW].motor.write(leg[ELBOW].angle);
    leg[ELBOW].angle += leg[ELBOW].steps;
    if (leg[ELBOW].angle > MAXSERVO)
      leg[ELBOW].steps = -1;
    if (leg[ELBOW].angle <= MINSERVO)
      leg[ELBOW].steps = 1;
}

void extend(int deg_elbow, int deg_knee) {
    spider.legtop1[ELBOW].motor.write(deg_elbow);
    spider.legtop1[KNEE].motor.write(deg_knee);
    spider.legtop2[ELBOW].motor.write(deg_elbow);
    spider.legtop2[KNEE].motor.write(deg_knee);
    spider.legbottom1[ELBOW].motor.write(deg_elbow);
    spider.legbottom1[KNEE].motor.write(deg_knee);
    spider.legbottom2[ELBOW].motor.write(deg_elbow);
    spider.legbottom2[KNEE].motor.write(deg_knee);
}
