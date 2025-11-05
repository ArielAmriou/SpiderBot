#include "spiderbot.h"
#include "src.h"

Spider spider;
unsigned long distance;

void setup()
{
    pinMode(TRIG_PIN, OUTPUT); 
	pinMode(ECHO_PIN, INPUT);
    Serial.begin(9600);
    spider.init();
}

void loop()
{
    // digitalWrite(TRIG_PIN, LOW);
    // delay(2);
    // digitalWrite(TRIG_PIN, HIGH);
    // delay(10);
    // digitalWrite(TRIG_PIN, LOW);
    // distance = pulseIn(ECHO_PIN, HIGH) * 0.034 / 2.0;

    // Serial.print(String(distance) + String("\n"));
    // spider.update_direction(M_FORWARD);
    // if (distance >= 60)
    // else if (distance < 50)
    //     spider.update_direction(M_BACKWARD);
    // else
    //     spider.update_direction(M_NONE);
    spider.walk();
    spider.write();
}
