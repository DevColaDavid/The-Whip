#include "main.h"
#include "pros/adi.hpp"
#include "pros/motors.hpp"
#include "pros/rotation.hpp"

//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//MOTORS
pros::MotorGroup left_motor_group({-1, -2, -3}, pros::MotorGears::blue); // left motor group
pros::MotorGroup right_motor_group({8, 9, 10}, pros::MotorGears::green); // right motor group
pros::Motor armMotor(13, pros::MotorGears::green); // arm motor
pros::Motor frontIntakeMotor(12, pros::MotorGears::green); // claw motor
pros::Motor rearIntakeMotor(-20, pros::MotorGears::blue); // claw motor

//PENUMATICS
pros::adi::Pneumatics doinker_piston('C', false);
pros::adi::Pneumatics clamper_piston('A',false);

//MISC
pros::Rotation rotationSens(-14);
pros::IMU imu(19);
