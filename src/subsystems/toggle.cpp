#include "main.h" // IWYU pragma: keep

void rotate_toggle(int input){
    ToggleMotors.move_absolute(input, 127);
}

void toggle_opcontrol(){
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_A)){
        ToggleMotors.move(127);
    }
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X)){
        ToggleMotors.move(-127);
    }
    if (!master.get_digital(pros::E_CONTROLLER_DIGITAL_X) and !master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)){
        ToggleMotors.move_velocity(0);
    }
}