#include "main.h"
#pragma once
#include "api.h"

//MOTORS
extern pros::Motor driveLeftFront;
extern pros::Motor driveLeftBack;
extern pros::Motor driveRightFront;
extern pros::Motor driveRightBack;
extern pros::Motor LiftLeft;
extern pros::Motor LiftRight;


//MOTORGROUPS
extern pros::MotorGroup left_group;
extern pros::MotorGroup right_group;
extern pros::MotorGroup lift_group;

//CONTROLLER
extern pros::Controller Cotton_candy;

//PNEUMATICS
extern pros::ADIDigitalOut clamp;