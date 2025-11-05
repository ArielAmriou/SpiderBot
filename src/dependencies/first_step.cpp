#include "dependencies.h"

void first_steps(Spider &spider) {
    for (int i = 0; i < 20; i++) {
        handle_leg(spider.legtop1, M_FORWARD);
        handle_leg(spider.legtop2, M_FORWARD);
        handle_leg(spider.legbottom1, M_FORWARD);
        handle_leg(spider.legbottom2, M_FORWARD);
        write_all(spider);
        delay(spider.delay_time);
    }
}