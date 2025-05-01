#include "main.h"

//HELPING FUNCTIONS
void setIntake(int power){
    intakeLeft.move(power);
    intakeRight.move(power);
}

//DRIVER CONTROL FUNCTIONS
void setIntakeMotors(){
    //bottom trigger intakes, top trigger outtakesq
    if (Cotton_candy.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){

    }
} 