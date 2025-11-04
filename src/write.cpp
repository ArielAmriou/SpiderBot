#include "dependencies.h"

void Spider::write() {
    write_all(*this);
    delay(this->delay_time);
}