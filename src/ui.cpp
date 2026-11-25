#include "liblvgl/misc/lv_style.h"
#include "liblvgl/misc/lv_style_gen.h"
#include "main.h" // IWYU pragma: keep

static lv_style_t style1;

void graphicsig() {
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
    lv_obj_align(obj1, LV_ALIGN_CENTER, -60, -30);
}

/*void my_flush_cb(lv_display_t * disp, const lv_area_t * area, uint8_t * color_p){
    for (int y = area->y1; y<= area->y2; y++){
        for (int x = area->x1; x <= area->x2; x++){
            
            int width = area->x2 - area->x1 + 1;
            int index = (y - area->y1) * width + (x - area->x1);

            uint16_t color = ((uint16_t *)color_p)[index];

            pros::screen::set_pen(pros::Color(color));
            pros::screen::draw_pixel(x, y);

        }
    }

    lv_display_flush_ready(disp);
}

void display_initialize(){
    lv_init();
    lv_tick_set_cb(pros::millis);
    
    lv_display_t * display = lv_display_create(480, 240);
    
    static uint8_t buf1[480 * 240 / 10 * 2];
    
    lv_display_set_buffers(display, buf1, NULL, sizeof(buf1), LV_DISPLAY_RENDER_MODE_PARTIAL);

    lv_display_set_flush_cb(display, my_flush_cb);

    lv_theme_t * theme = lv_theme_default_init(display, pink, blue, true, &lv_font_montserrat_20);

    lv_display_set_theme(display, theme);
}*/

