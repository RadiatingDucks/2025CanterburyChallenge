#include "main.h"

//HELP FUNCTION

//This is example code from a tutorial for a tank drive

void setDrive(int left, int right){ 
    left_group.move(left);
    right_group.move(right);
} 


/* void driveValues(int vertical, int horizontal){
    left_group.move(vertical + horizontal);
    right_group.move(vertical - horizontal);
} */

//DRIVER CONTROL FUNCTIONS
void setDriveMotors(){

    //This is example code from a tutorial for a tank drive

    int leftJoystick = Cotton_candy.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = Cotton_candy.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);

    //since joysticks values are not perfectly 0
    if (abs(leftJoystick) < 10) {
        leftJoystick = 0;
    }
    if (abs(rightJoystick) < 10) {
        rightJoystick = 0;
    }

    setDrive(-leftJoystick, -rightJoystick); 

    pros::delay(20);

		// Arcade control scheme

		/* int turn = Cotton_candy.get_analog(ANALOG_LEFT_X);    // Gets amount left/right from left joystick
		int dir = Cotton_candy.get_analog(ANALOG_RIGHT_Y);  // Gets the turn forward/backward from right joystick
        
        if (abs(turn) < 10){
            turn = 0;
        }
        if (abs(dir) < 10){
            dir = 0;
        }

        driveValues(dir, turn);
        
		pros::delay(20); */                               // Run for 20 ms then update

}