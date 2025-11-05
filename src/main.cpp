#include "spiderbot.h"
#include "src.h"

Spider spider;
unsigned long distance;

void setup()
{
    pinMode(TRIG_PIN, OUTPUT); 
	pinMode(ECHO_PIN, INPUT);
    digitalWrite(TRIG_PIN, LOW);
    delay(2);
    Serial.begin(9600);
    spider.init();
}

void loop()
{
    digitalWrite(TRIG_PIN, HIGH);
    delay(1);
    digitalWrite(TRIG_PIN, LOW);
    distance = pulseIn(ECHO_PIN, HIGH) * 0.034 / 2.0;

    if (distance > 70)
        distance = 70;

    Serial.print(String(distance) + String("\n"));
    if (distance >= 70 || distance < 30)
        spider.delay_time = QUICK_DELAY_TIME;
    else
        spider.delay_time = DEFAULT_DELAY_TIME;
    if (distance >= 50)
        spider.update_direction(M_FORWARD);
    else if (distance < 30)
        spider.update_direction(M_BACKWARD);
    else
        spider.update_direction(M_NONE);
    spider.walk();
    spider.write();
}
