#include "main.h" // IWYU pragma: keep

void set_lift(int input){ //degrees
    LiftMotors.move_absolute(input, 127);
}

void lift_opcontrol(){
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)){
            LiftMotors.move(127);
        }
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
            LiftMotors.move(-127);
        }
        if (!master.get_digital(pros::E_CONTROLLER_DIGITAL_R1) and !master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
            LiftMotors.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
            LiftMotors.brake();
            LiftMotors.move_velocity(0);
        }
}