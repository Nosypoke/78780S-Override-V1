#pragma once

#include "lemlib/api.hpp" // IWYU pragma: keep
#include "api.h" // IWYU pragma: keep
#include "subsystems.hpp" // IWYU pragma: keep
#include "autons.hpp" // IWYU pragma: keep

const lv_color_t defblack = lv_color_hex(0x1a1a1a); 
const lv_color_t defwhite = lv_color_hex(0xf2f0f2);
const lv_color_t pink = lv_color_hex(0xffb7c5);
const lv_color_t red = lv_color_hex(0xff3643);
const lv_color_t blue = lv_color_hex(0x01b1f0);
const lv_color_t green = lv_color_hex(0x22d428);
const lv_color_t violet = lv_color_hex(0xb672f2);
const lv_color_t gray = lv_color_hex(0x575757);
const lv_color_t light_gray = lv_color_lighten(gray, 125);

void graphicsig();

void my_flush_cb(lv_display_t * disp, const lv_area_t * area, uint8_t * color_p);

void display_initialize();