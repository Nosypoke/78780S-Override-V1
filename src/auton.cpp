#include "main.h" // IWYU pragma: keep
#include "subsystems.hpp"

void SkillsAuto() {
    chassis.setPose(0, 0, 0);
    set_lift(180);
    chassis.moveToPoint(0, 20, 1000);
    pros::delay(1000);
    open_claw();
    //chassis.setPose(0, 0, 0);
    //chassis.moveToPose(-15, -15, 45, 500);
}