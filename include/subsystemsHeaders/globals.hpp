#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include "pros/misc.hpp"
#include "pros/motor_group.hpp"

//MOTORS
extern pros::MotorGroup left_motor_group;
extern pros::MotorGroup right_motor_group;

//SENSORS
extern pros::IMU imu;

//CONTROLLER
extern pros::Controller controller;

//PNEUMATICS
extern pros::adi::Pneumatics doinker_piston;
extern pros::adi::Pneumatics clamper_piston;
