#include "depedencies.h"

void first_steps(Spider &spider) {
    for (int i = 0; i < 20; i++) {
        handle_leg(spider.legtop1, FORWARD);
        handle_leg(spider.legtop2, FORWARD);
        handle_leg(spider.legbottom1, FORWARD);
        handle_leg(spider.legbottom2, FORWARD);
        write_all(spider);
        delay(spider.delay_time);
    }
}