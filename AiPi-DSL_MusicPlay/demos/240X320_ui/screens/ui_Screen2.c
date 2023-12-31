// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: 240_320

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel11 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel11, 241);
    lv_obj_set_height(ui_Panel11, 34);
    lv_obj_set_x(ui_Panel11, 0);
    lv_obj_set_y(ui_Panel11, -144);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel11, lv_color_hex(0x0E1618), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -13);
    lv_obj_set_y(ui_Label2, -142);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Contrl Page");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel8 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel8, 108);
    lv_obj_set_height(ui_Panel8, 96);
    lv_obj_set_x(ui_Panel8, -61);
    lv_obj_set_y(ui_Panel8, 103);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0x686868), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel3, 110);
    lv_obj_set_height(ui_Panel3, 96);
    lv_obj_set_x(ui_Panel3, 58);
    lv_obj_set_y(ui_Panel3, 102);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x686868), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, -89);
    lv_obj_set_y(ui_Label19, 76);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "");

    ui_Label20 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, -66);
    lv_obj_set_y(ui_Label20, 72);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "Led ");

    ui_Button6 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button6, 39);
    lv_obj_set_height(ui_Button6, 36);
    lv_obj_set_x(ui_Button6, -87);
    lv_obj_set_y(ui_Button6, 111);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button6, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0xF54164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button7, 39);
    lv_obj_set_height(ui_Button7, 36);
    lv_obj_set_x(ui_Button7, -41);
    lv_obj_set_y(ui_Button7, 112);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button7, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0x298FF5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel9 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel9, 108);
    lv_obj_set_height(ui_Panel9, 96);
    lv_obj_set_x(ui_Panel9, -61);
    lv_obj_set_y(ui_Panel9, -2);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel9, lv_color_hex(0x686868), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel10 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel10, 108);
    lv_obj_set_height(ui_Panel10, 96);
    lv_obj_set_x(ui_Panel10, 58);
    lv_obj_set_y(ui_Panel10, -2);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x686868), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label25 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label25, -70);
    lv_obj_set_y(ui_Label25, -34);
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "Fan");

    ui_Button15 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button15, 43);
    lv_obj_set_height(ui_Button15, 41);
    lv_obj_set_x(ui_Button15, -37);
    lv_obj_set_y(ui_Button15, 1);
    lv_obj_set_align(ui_Button15, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button15, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button15, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button15, lv_color_hex(0xBBBBBB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button3, 43);
    lv_obj_set_height(ui_Button3, 41);
    lv_obj_set_x(ui_Button3, -89);
    lv_obj_set_y(ui_Button3, 2);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xBBBBBB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label26 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, -90);
    lv_obj_set_y(ui_Label26, 0);
    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label26, "open");
    lv_obj_set_style_text_font(ui_Label26, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -39);
    lv_obj_set_y(ui_Label9, 1);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "shake");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label28, 59);
    lv_obj_set_y(ui_Label28, -37);
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "Water Heater");

    ui_Arc1 = lv_arc_create(ui_Screen2);
    lv_obj_set_width(ui_Arc1, 60);
    lv_obj_set_height(ui_Arc1, 62);
    lv_obj_set_x(ui_Arc1, 55);
    lv_obj_set_y(ui_Arc1, 10);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);

    ui_Label14 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, 55);
    lv_obj_set_y(ui_Label14, 70);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "A/C");

    ui_Dropdown1 = lv_dropdown_create(ui_Screen2);
    lv_dropdown_set_options(ui_Dropdown1, "Mode 1\nMode 2\nMode 3");
    lv_dropdown_set_selected_highlight(ui_Dropdown1, false);
    lv_obj_set_width(ui_Dropdown1, 89);
    lv_obj_set_height(ui_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown1, 58);
    lv_obj_set_y(ui_Dropdown1, 112);
    lv_obj_set_align(ui_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}
