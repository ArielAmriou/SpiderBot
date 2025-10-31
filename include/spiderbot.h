#ifndef SPIDERBOT_H_
    #define SPIDERBOT_H_

    #include <Servo.h>
    #include <Arduino.h>

    #define ELBOW 0
    #define KNEE 1
    #define SPEED 200

    #define STEP_ELBOW (1.0)
    #define STEP_KNEE (90.0 / 40.0) // 90.0 = range of knee, 40.0 = range of elbow (in degrees)

    #define TOP1 0
    #define TOP2 1
    #define BOTTOM1 2
    #define BOTTOM2 3

typedef struct {
    int min;
    int max;
} range_t;

typedef struct {
    double angle;
    double steps;
    range_t range;
    Servo motor;
} motor_t;

typedef motor_t leg_t[2];

    /*
leg_t legtop2 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
    {90, 1.0 * STEP_KNEE, {90, 180}}};
leg_t legbottom1 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
    {90, 1.0 * STEP_KNEE, {90, 180}}};
leg_t legbottom2 = {{70, 1.0 * STEP_ELBOW, {70, 110}},
    {90, -1.0 * STEP_KNEE, {0, 90}}};
    */

class Spider {
    public:
        leg_t legtop1 = {{70, 1.0 * STEP_ELBOW, {70, 110}},
            {90, -1.0 * STEP_KNEE, {0, 90}}};
        leg_t legtop2 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
            {90, 1.0 * STEP_KNEE, {90, 180}}};
        leg_t legbottom1 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
            {90, 1.0 * STEP_KNEE, {90, 180}}};
        leg_t legbottom2 = {{70, 1.0 * STEP_ELBOW, {70, 110}},
            {90, -1.0 * STEP_KNEE, {0, 90}}};
        unsigned long long timer = 0; // Time between first and actuall loop iteration (in ms)
        unsigned long long nb_loop = 0; // Number of loop iteration

        void walk();
        void write();
        void wait(unsigned long ms);
        void log(const int leg);
        void init();
};

void retract(Spider &spider);
void extend(Spider &spider);

#endif