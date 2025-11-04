#include "dependencies.h"

void Spider::walk(int direction = FORWARD) {
    if ((this->nb_loop % 160) < 40)
        handle_leg(this->legtop1, direction);
    if ((this->nb_loop % 160) < 80 && (this->nb_loop % 160) >= 40)
        handle_leg(this->legtop2, direction);
    if ((this->nb_loop % 160) < 120 && (this->nb_loop % 160) >= 80)
        handle_leg(this->legbottom1, direction);
    if ((this->nb_loop % 160) < 160 && (this->nb_loop % 160) >= 120)
        handle_leg(this->legbottom2, direction);
}