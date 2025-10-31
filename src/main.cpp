#include "spiderbot.h"

Spider spider;

void setup()
{
    Serial.begin(9600);
    spider.init();
    extend(spider);
    retract(spider);
}

void loop()
{
    //spider.walk();
    //spider.write();
    spider.wait(SPEED);
}
