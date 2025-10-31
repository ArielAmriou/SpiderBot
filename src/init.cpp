#include "spiderbot.h"

void Spider::init() {
    this->legtop1[ELBOW].motor.attach(11);
    this->legtop1[KNEE].motor.attach(7);
    this->legtop2[ELBOW].motor.attach(10);
    this->legtop2[KNEE].motor.attach(6);
    this->legbottom1[ELBOW].motor.attach(9);
    this->legbottom1[KNEE].motor.attach(5);
    this->legbottom2[ELBOW].motor.attach(8);
    this->legbottom2[KNEE].motor.attach(4);
}