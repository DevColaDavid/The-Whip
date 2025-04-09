#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include "pros/misc.hpp"
#include "pros/motor_group.hpp"
#include "pros/rotation.hpp"

//CONTROLLER
extern pros::Controller controller;

//MOTORS
extern pros::MotorGroup left_motor_group;
extern pros::MotorGroup right_motor_group;
extern pros::Motor armMotor;
extern pros::Motor frontIntakeMotor;
extern pros::Motor rearIntakeMotor;

//SENSORS
extern pros::IMU imu;
extern pros::Rotation rotationSens;

//PNEUMATICS
extern pros::adi::Pneumatics doinker_piston;
extern pros::adi::Pneumatics clamper_piston;
