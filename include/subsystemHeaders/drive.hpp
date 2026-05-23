#include "main.h"

//HELPING FUNCTION
void setDrive(int left, int right); 
void resetDriveEncoders();
double AvgDriveEncoderValue();

//DRIVER CONTROL FUNCTIONS
void setDriveMotors();

//AUTON
void translate(int units, int voltage);
void turn(int units, int voltage);