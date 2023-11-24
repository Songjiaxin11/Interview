#include "vex.h"
#include "robot-config.h"
using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

/*
(5 points)
You should modify this Port number according to your wiring
你应该根据你的接线修改这个端口号
*/
inertial Inertial = inertial(PORT1);

