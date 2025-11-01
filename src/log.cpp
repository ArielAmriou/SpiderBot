#include "spiderbot.h"

void log_leg(const leg_t leg) {
    float p_elbow = ((float)(leg.legs[ELBOW].angle - leg.legs[ELBOW].range.min) /
        (float)(leg.legs[ELBOW].range.max - leg.legs[ELBOW].range.min) * 100.0);
    float p_knee = ((float)(leg.legs[KNEE].angle - leg.legs[KNEE].range.min) /
        (float)(leg.legs[KNEE].range.max - leg.legs[KNEE].range.min) * 100.0);
    String str =
        String("Leg Top 1 :\n");
        String("Elbow is at ") + leg.legs[ELBOW].angle +
        String("°, at ") + p_elbow +
        String("% of it's range and it's step is ") + leg.legs[ELBOW].steps +
        (".\nKnee is at ") + leg.legs[KNEE].angle +
        String("°, at ") + p_knee +
        String("% of it's range and it's step is ") + leg.legs[KNEE].steps + String(".\n");
    Serial.println(str);
}

void Spider::log(const int leg) {
    if (leg == TOP1)
        log_leg(this->legtop1);
    if (leg == TOP2)
        log_leg(this->legtop2);
    if (leg == BOTTOM1)
        log_leg(this->legbottom1);
    if (leg == BOTTOM2)
        log_leg(this->legbottom2);
}
