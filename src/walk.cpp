#include "dependencies.h"

void Spider::walk() {
    if (this->mode == M_NONE)
        return;
    if ((this->nb_loop % 160) < 40)
        handle_leg(this->legtop1, this->mode);
    if ((this->nb_loop % 160) < 80 && (this->nb_loop % 160) >= 40)
        handle_leg(this->legtop2, this->mode);
    if ((this->nb_loop % 160) < 120 && (this->nb_loop % 160) >= 80)
        handle_leg(this->legbottom1, this->mode);
    if ((this->nb_loop % 160) < 160 && (this->nb_loop % 160) >= 120)
        handle_leg(this->legbottom2, this->mode);
}