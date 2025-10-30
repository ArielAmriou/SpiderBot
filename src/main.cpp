#include "spiderbot.h"

Spider spider;

void setup()
{
    Serial.begin(9600);
    init_spider(spider);
}

void loop()
{
    //spider.log(TOP1);
    spider.walk();
    spider.write();
    delay(SPEED);
}
