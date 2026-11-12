#pragma once 

#include "lemlib/api.hpp" // IWYU pragma: keep
#include "api.h" // IWYU pragma: keep
#include "pros/motor_group.hpp"

//claw items
inline pros::Motor Claw5(5, pros::MotorGearset::green);

void set_claw(int input);
void claw_opcontrol();

//lift items
inline pros::MotorGroup LiftMotors({20, -10}, pros::MotorGearset::green, pros::MotorUnits::deg);
inline lemlib::PID liftpid(5, 0.01, 20, 5, false);

void set_lift(int input);
void lift_opcontrol();

//toggle items 

inline pros::MotorGroup ToggleMotors({3, 13}, pros::MotorGearset::green, pros::MotorUnits::rotations);

void rotate_toggle(int input);
void toggle_opcontrol();