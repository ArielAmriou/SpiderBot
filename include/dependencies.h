#ifndef DEPEDENCIES_H_
    #define DEPEDENCIES_H_
    #include "spiderbot.h"

void extend(Spider &spider);
void retract(Spider &spider);
void handle_leg(leg_t &leg, direction mode);
void first_steps(Spider &spider);
void write_all(Spider &spider);

#endif