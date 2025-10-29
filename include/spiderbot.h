#ifndef SPIDERBOT_H_
    #define SPIDERBOT_H_

    #include <Servo.h>
    #include <Arduino.h>

    #define ELBOW 0
    #define KNEE 1
    #define SPEED 15

    #define MAXSERVO 90
    #define MINSERVO 0

typedef struct {
  int angle;
  int steps;
  Servo motor;
} motor_t;

typedef motor_t leg_t[2];

class Spider {
    public:
        leg_t legtop1 = {{0, 1}, {0, -1}};
        leg_t legtop2 = {{0, 1}, {0, -1}};
        leg_t legbottom1 = {{0, 1}, {0, -1}};
        leg_t legbottom2 = {{0, 1}, {0, -1}};
};

void init(Spider);

#endif