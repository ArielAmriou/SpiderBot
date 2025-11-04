#include "dependencies.h"

void Spider::write() {
    write_all(*this);
    if (this->nb_loop % 320 == 0) {
        this->mode = this->next_mode;
        this->next_mode = M_NONE;
    }
    this->nb_loop++;
    delay(this->delay_time);
}