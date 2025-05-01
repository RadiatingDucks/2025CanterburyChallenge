#include "main.h"

#include <vector>

//MOTORS
pros::Motor driveLeftFront(-11, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);
pros::Motor driveLeftBack(-13, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);
pros::Motor driveRightFront(1, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);
pros::Motor driveRightBack(2, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);
pros::Motor LiftLeft(5, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);
pros::Motor LiftRight(6, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);


//MOTORGROUPS
pros::MotorGroup left_group({11, 13});
pros::MotorGroup right_group({-1, -2});
pros::MotorGroup lift_group({5, 6});

//CONTROLLER
pros::Controller Cotton_candy(pros::E_CONTROLLER_MASTER);

//MISCELLANEOUS