#ifndef SPIDERBOT_H_
    #define SPIDERBOT_H_

    #include <Servo.h>
    #include <Arduino.h>

    #define ELBOW 0
    #define KNEE 1
    #define SPEED 20

    #define STEP_ELBOW (1.0)
    #define STEP_KNEE ((90.0 / 40.0) * 2.0) // 90.0 = range of knee, 40.0 = range of elbow (in degrees), 2.0 to compansate the return factor

    #define TOP1 0
    #define TOP2 1
    #define BOTTOM1 2
    #define BOTTOM2 3

    #define NB_JOINTS 2

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


typedef struct {
    motor_t legs[2];
    bool return_factor;
} leg_t;

extern const leg_t LEGTOP1;
extern const leg_t LEGTOP2;
extern const leg_t LEGBOTTOM1;
extern const leg_t LEGBOTTOM2;


class Spider {
    public:
        leg_t legtop1;
        leg_t legtop2;
        leg_t legbottom1;
        leg_t legbottom2;

        unsigned long long timer = 0; // Time between first and actuall loop iteration (in ms)
        unsigned long long nb_loop = 0; // Number of loop iteration

        void init();
        void walk();
        void write();
        void wait(unsigned long ms);
        void log(const int leg);
        void extend();
        void retract();
};

#endif