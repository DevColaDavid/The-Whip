#include "main.h"
#include "pros/adi.hpp"

//MOTORS
pros::MotorGroup left_motor_group({-1, -2, -3}, pros::MotorGears::blue); // left motor group
pros::MotorGroup right_motor_group({8, 9, 10}, pros::MotorGears::green); // right motor group


//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//PENUMATICS
pros::adi::Pneumatics doinker_piston('A', false);
pros::adi::Pneumatics clamper_piston('A',false);

