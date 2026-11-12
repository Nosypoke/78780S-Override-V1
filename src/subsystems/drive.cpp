#include "main.h" // IWYU pragma: keep

void driving_opcontrol(){
    int leftY = master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightX = master.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
    // move the robot
    chassis.arcade(leftY, rightX);  
}