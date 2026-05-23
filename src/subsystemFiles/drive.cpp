#include "main.h"

//HELP FUNCTION

//This is example code from a tutorial for a tank drive

void setDrive(int left, int right){ 
    left_group.move(left);
    right_group.move(right);
} 

void resetDriveEncoders(){

    driveLeftFront.tare_position();
    driveLeftBack.tare_position();
    driveRightFront.tare_position();
    driveRightBack.tare_position();

}

double AvgDriveEncoderValue(){
    return (fabs(driveLeftFront.get_position()) +
           fabs(driveRightFront.get_position()) +
           fabs(driveLeftBack.get_position()) +
           fabs(driveRightBack.get_position())) / 4;
}

/* void driveValues(int vertical, int horizontal){
    left_group.move(vertical + horizontal);
    right_group.move(vertical - horizontal);
} */

//DRIVER CONTROL FUNCTION
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

    leftJoystick = (leftJoystick * leftJoystick * leftJoystick) / 16129;
    rightJoystick = (rightJoystick * rightJoystick * rightJoystick) / 16129;

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

//AUTON
void translate(int units, int voltage){

    resetDriveEncoders();

    //define a direction based on units provided
    int direction = abs(units) / units ; //returns 1 or -1

    while ( AvgDriveEncoderValue() < abs(units))
    {
        setDrive(voltage * direction,voltage * direction);
        pros::delay(10);
    }
    
    //stopping momentum
    setDrive(-10 * direction,-10 * direction);
    //this value changes based on robot weight
    pros::delay(50);

    //setting value to neutral
    setDrive(0,0);

}
 
void turn(int units, int voltage){
    resetDriveEncoders();
    int direction = abs(units) / units;
    while (AvgDriveEncoderValue() < abs(units)) {
        setDrive(voltage * direction, -voltage * direction);
        pros::delay(10);
    }
    setDrive(-10 * direction, 10 * direction);
    pros::delay(50);
    setDrive(0, 0);
}