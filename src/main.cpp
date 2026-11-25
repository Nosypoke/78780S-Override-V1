#include "main.h"

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	chassis.calibrate();
    //display_initialize();
    //lv_timer_handler();
    /*while (true){
        static lv_style_t style1;
        lvgl_init();
        lv_style_init(&style1);
        lv_tick_inc(50);
        lv_timer_handler();
        lv_screen_active();
        lv_obj_t * obj1;
        lv_obj_t* main_tv = lv_tileview_create(NULL);
        obj1 = lv_obj_create(main_tv);
        lv_obj_set_size(obj1, 100, 50);
        lv_style_set_bg_color(&style1, pink);
        lv_obj_align(obj1, LV_ALIGN_CENTER, -60, -30);*/
    //}
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
    SkillsAuto();
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {

    while (true) {

        driving_opcontrol();  
        claw_opcontrol();
        lift_opcontrol();
        toggle_opcontrol();
      
		pros::delay(25);                               // Run for 20 ms then update
	}
}

