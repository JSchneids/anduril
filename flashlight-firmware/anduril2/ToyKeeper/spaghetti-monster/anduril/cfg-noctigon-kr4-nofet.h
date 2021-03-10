// Noctigon KR4 (fetless) config options for Anduril
// (and Noctigon KR1)
// (and Emisar D4v2 E21A, a.k.a. "D4v2.5")
#include "cfg-noctigon-kr4.h"
#undef MODEL_NUMBER
#define MODEL_NUMBER "0212"
// ATTINY: 1634

// brightness w/ SST-20 4000K LEDs:
// 0/1023: 0.35 lm
// 1/1023: 2.56 lm
// max regulated: 1740 lm
// level_calc.py 3.0 1 150 7135 0 5 1740
#undef PWM_CHANNELS
#define PWM_CHANNELS 1
#define RAMP_LENGTH 150
#undef PWM1_LEVELS
#define PWM1_LEVELS 0,0,1,1,2,2,3,3,4,4,5,5,6,7,8,9,10,11,12,13,15,16,17,18,20,21,23,24,26,27,29,31,33,35,37,39,41,43,45,48,50,53,55,58,61,63,66,69,72,75,79,82,85,89,92,96,100,104,108,112,116,120,125,129,134,138,143,148,153,158,163,169,174,180,185,191,197,203,209,215,222,228,235,242,248,255,263,270,277,285,292,300,308,316,324,333,341,350,359,368,377,386,395,405,414,424,434,444,454,465,475,486,497,508,519,531,542,554,566,578,590,603,615,628,641,654,667,680,694,708,722,736,750,765,779,794,809,825,840,856,872,888,904,920,937,954,971,988,1005,1023
#undef PWM2_LEVELS
#undef DEFAULT_LEVEL
#define DEFAULT_LEVEL 50
#undef MAX_1x7135
#define MAX_1x7135 150

#undef RAMP_SMOOTH_FLOOR
#undef RAMP_SMOOTH_CEIL
#undef RAMP_DISCRETE_FLOOR
#undef RAMP_DISCRETE_CEIL
#undef RAMP_DISCRETE_STEPS

#define RAMP_SMOOTH_FLOOR 3  // level 1 is unreliable
#define RAMP_SMOOTH_CEIL  100
// 10, 30, [50], 70, 90, 110, 130  (plus [150] on turbo)
#define RAMP_DISCRETE_FLOOR 3
#define RAMP_DISCRETE_CEIL  RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 6

// safe limit ~67% power / ~1200 lm (can sustain 900 lm)
#undef SIMPLE_UI_FLOOR
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_FLOOR RAMP_DISCRETE_FLOOR
#define SIMPLE_UI_CEIL RAMP_DISCRETE_CEIL


// make candle mode wobble more
#define CANDLE_AMPLITUDE 32

// slow down party strobe; this driver can't pulse for 1ms or less
// (only needed on no-FET build)
#define PARTY_STROBE_ONTIME 2

// stop panicking at ~90% power or ~1600 lm
#undef THERM_FASTER_LEVEL
#define THERM_FASTER_LEVEL 143
#undef MIN_THERM_STEPDOWN
#define MIN_THERM_STEPDOWN DEFAULT_LEVEL

