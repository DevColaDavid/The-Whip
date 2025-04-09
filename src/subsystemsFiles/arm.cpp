#include "main.h"

//Position changing function
const int numStates = 3;
int states[numStates] = {100, 2300, 17000};//make sure these are in centidegrees (1 degree = 100 centidegrees)
int currState = 0;
int target = 0;
void changeState(int state) {
    currState = state;
    target = states[currState];
}

//PID Stuff
double prevError=0;
double totalError=0;
void liftControl() {
    double kP = 0.5;
    double kI = 0;
    double kD = 2.8;
    double error = target - rotationSens.get_position();
    double derivative = error - prevError;
    double totalError = error + totalError;
    prevError = error;

    double velocity = kP * error;
    armMotor.move(velocity);
}
