#include "spiderbot.h"

const leg_t LEGTOP1 = {{{70, 1.0 * STEP_ELBOW, {50, 90}},
    {90, -1.0 * STEP_KNEE, {0, 45}}}, true};
const leg_t LEGTOP2 = {{{110, -1.0 * STEP_ELBOW, {90, 130}},
    {90, 1.0 * STEP_KNEE, {135, 180}}}, true};
const leg_t LEGBOTTOM1 = {{{110, 1.0 * STEP_ELBOW, {90, 130}},
    {90, 1.0 * STEP_KNEE, {135, 180}}}, true};
const leg_t LEGBOTTOM2 = {{{70, -1.0 * STEP_ELBOW, {50, 90}},
    {90, -1.0 * STEP_KNEE, {0, 45}}}, true};