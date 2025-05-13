#include "main.h"

//HELPING FUNCTIONS
void setLift(int power){
    lift_group.move_relative(power,60);
}


// DRIVER CONTROL FUNCTIONS
void setLiftMotors() {
    // R2 raises the lift, R1 lowers it
    if (Cotton_candy.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        setLift(100); // move up
    }
    else if (Cotton_candy.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        setLift(-100); // move down
    }
    else {
        setLift(0); // stop
    }
    pros::delay(10);
}