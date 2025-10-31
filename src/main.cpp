#include "spiderbot.h"

Spider spider;

void setup()
{
    Serial.begin(9600);
    spider.init();
    spider.extend();
    spider.retract();
}

void loop()
{
    //spider.walk();
    //spider.write();
    spider.wait(SPEED);
}
