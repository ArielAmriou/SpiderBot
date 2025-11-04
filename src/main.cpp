#include "spiderbot.h"

Spider spider;

void setup()
{
    Serial.begin(9600);
    spider.init();
}

void loop()
{
    //spider.walk();
    //spider.write();
}
