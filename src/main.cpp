#include "main.h"
#include "robodash/views/selector.hpp"

// ================================= Views ================================= //

rd::Selector selector({ // create robodash auton selector
    {"test auton", testAuton},
});

rd::Console console; // create robodash console


// ========================= Competition Functions ========================= //

void initialize() {
  pros::lcd::initialize();
  chassis.calibrate(); // calibrate sensors
  pros::Task liftControlTask([] {
    while (true) {
      liftControl();
      pros::delay(10);
    }
  });
}

void disabled() {}

void competition_initialize() {
  selector.focus();
}

void autonomous() { selector.run_auton(); }

void opcontrol() {
  // loop forever
  while (true) {
    // tank drive
    int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightY = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    chassis.tank(leftY, rightY);

    pros::delay(25); // delay to save resources
  }
}
