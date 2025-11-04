#include "spiderbot.h"

Spider spider;

void setup()
{
    Serial.begin(9600);
    spider.init();
}

void loop()
{
    if (spider.get_nb_loop() == 0)
        spider.update_direction(M_BACKWARD);
    spider.walk();
    spider.write();
}
