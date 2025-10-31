#include "spiderbot.h"

const leg_t LEGTOP1 = {{70, 1.0 * STEP_ELBOW, {70, 110}},
    {90, -1.0 * STEP_KNEE, {0, 90}}};
const leg_t LEGTOP2 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
    {90, 1.0 * STEP_KNEE, {90, 180}}};
const leg_t LEGBOTTOM1 = {{110, -1.0 * STEP_ELBOW, {70, 110}},
    {90, 1.0 * STEP_KNEE, {90, 180}}};
const leg_t LEGBOTTOM2 = {{70, 1.0 * STEP_ELBOW, {70, 110}},
    {90, -1.0 * STEP_KNEE, {0, 90}}};