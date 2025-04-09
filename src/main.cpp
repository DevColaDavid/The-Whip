#include "main.h"
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "robodash/views/selector.hpp"
rd::Selector selector({
    {"test auton", testAuton},
});

// initialize function. Runs on program startup
void initialize() {
  pros::lcd::initialize(); // initialize brain screen
  chassis.calibrate();     // calibrate sensors

  pros::Task screenTask([&]() {
    while (true) {
      // print robot location to the brain screen
      pros::lcd::print(0, "X: %f", chassis.getPose().x);         // x
      pros::lcd::print(1, "Y: %f", chassis.getPose().y);         // y
      pros::lcd::print(2, "Theta: %f", chassis.getPose().theta); // heading
      // log position telemetry
      lemlib::telemetrySink()->info("Chassis pose: {}", chassis.getPose());
      // delay to save resources
      pros::delay(50);
    }
  });

  pros::Task liftControlTask([] {
    while (true) {
      liftControl();
      pros::delay(10);
    }
  });
}

void disabled() {}

void competition_initialize() {}

ASSET(example_txt); // '.' replaced with "_" to make c++ happy

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
