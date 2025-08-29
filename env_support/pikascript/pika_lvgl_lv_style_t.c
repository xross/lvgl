#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifdef PIKASCRIPT

#include "pika_lvgl_style_t.h"

LV_FUNC_SECTION
void pika_lvgl_style_t_init(PikaObj* self) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_init(lv_style);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_bg_color(PikaObj* self, PikaObj* color) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_color_t* lv_color = obj_getPtr(color, "lv_color");
    lv_style_set_bg_color(lv_style, *lv_color);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_bg_opa(PikaObj* self, int opa) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_bg_opa(lv_style, opa);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_outline_color(PikaObj* self, PikaObj* color) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_color_t* lv_color = obj_getPtr(color, "lv_color");
    lv_style_set_outline_color(lv_style, *lv_color);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_outline_pad(PikaObj* self, int pad) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_outline_pad(lv_style, pad);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_outline_width(PikaObj* self, int w) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_outline_width(lv_style, w);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_radius(PikaObj* self, int radius) {
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_radius(lv_style, radius);
}

LV_FUNC_SECTION
void pika_lvgl_style_t___init__(PikaObj* self) {
    lv_style_t lv_style_stack = {0};
    args_setStruct(self->list, "lv_style_struct", lv_style_stack);
    lv_style_t* lv_style = args_getStruct(self->list, "lv_style_struct");
    obj_setPtr(self, "lv_style", lv_style);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_shadow_color(PikaObj *self, PikaObj* color){
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_color_t* lv_color = obj_getPtr(color, "lv_color");
    lv_style_set_shadow_color(lv_style, *lv_color);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_shadow_spread(PikaObj *self, int s){
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_shadow_spread(lv_style, s);
}

LV_FUNC_SECTION
void pika_lvgl_style_t_set_shadow_width(PikaObj *self, int w){
    lv_style_t* lv_style = obj_getPtr(self, "lv_style");
    lv_style_set_shadow_width(lv_style, w);
}
#endif
