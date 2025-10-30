#include "spiderbot.h"

void log_leg(const leg_t leg) {
    float p_elbow = ((float)(leg[ELBOW].angle - leg[ELBOW].range.min) /
        (float)(leg[ELBOW].range.max - leg[ELBOW].range.min) * 100.0);
    float p_knee = ((float)(leg[KNEE].angle - leg[KNEE].range.min) /
        (float)(leg[KNEE].range.max - leg[KNEE].range.min) * 100.0);
    String str =
        String("Leg Top 1 :\nElbow is at ") + leg[ELBOW].angle +
        String("°, at ") + p_elbow +
        String("% of it's range and it's step is ") + leg[ELBOW].steps +
        (".\nKnee is at ") + leg[KNEE].angle +
        String("°, at ") + p_knee +
        String("% of it's range and it's step is ") + leg[KNEE].steps + String(".\n");
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
