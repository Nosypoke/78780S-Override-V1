#include "main.h" // IWYU pragma: keep

void set_claw(int input) {
    Claw5.move(input);
}

void claw_opcontrol() {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){
            Claw5.move(127);
    } 
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){
        Claw5.move(-127);
    } 
    if (!master.get_digital(pros::E_CONTROLLER_DIGITAL_L2) and !master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
       Claw5.move(0);
   }
}