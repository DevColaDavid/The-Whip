#include "lemlib/chassis/chassis.hpp"

extern lemlib::Drivetrain drivetrain; // drivetrain settings
extern lemlib::OdomSensors sensors; // odometry sensor settings
extern lemlib::ControllerSettings lateral_controller; // lateral PID controller
extern lemlib::ControllerSettings angular_controller; // angular PID controller
extern lemlib::ExpoDriveCurve throttle_curve; // input curve for throttle input during driver control
extern lemlib::ExpoDriveCurve steer_curve; // input curve for steer input during driver control
extern lemlib::Chassis chassis; // create the chassis