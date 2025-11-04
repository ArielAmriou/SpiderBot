#ifndef SPIDERBOT_H_
    #define SPIDERBOT_H_

    #include <Servo.h>
    #include <Arduino.h>

    #define ELBOW 0
    #define KNEE 1
    #define DEFAULT_DELAY_TIME 10

    #define STEP_ELBOW (1.0)
    #define STEP_KNEE ((90.0 / 40.0)) // 90.0 = range of knee, 40.0 = range of elbow (in degrees), 2.0 to compansate the return factor

    #define TOP1 0
    #define TOP2 1
    #define BOTTOM1 2
    #define BOTTOM2 3

    #define NB_JOINTS 2

    #define FORWARD 1
    #define BACKWARD -1

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

enum direction {
    M_NONE,
    M_FORWARD,
    M_BACKWARD
};

class Spider {
    public:
        leg_t legtop1;
        leg_t legtop2;
        leg_t legbottom1;
        leg_t legbottom2;

        unsigned long delay_time; // Time of waiting before executing next loop iteration (in ms)

        void init(unsigned long delay_time = DEFAULT_DELAY_TIME);
        void walk();
        void write();
        void update_direction(direction mode);
        direction get_direction();
        direction get_next_direction();
        unsigned long long get_nb_loop();
        
        void log(const int leg);

    private:
        unsigned long long nb_loop = 0; // Number of loop iteration
        direction mode = M_NONE;
        direction next_mode = M_NONE;
};

#endif