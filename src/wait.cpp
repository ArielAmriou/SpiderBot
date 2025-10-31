#include "spiderbot.h"

void Spider::wait(unsigned long ms) {
    delay(ms);
    this->timer += 50;
    this->nb_loop++;
}
