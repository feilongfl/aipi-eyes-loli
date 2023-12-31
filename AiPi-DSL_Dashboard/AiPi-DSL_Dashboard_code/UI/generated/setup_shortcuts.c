/**
 * @file setup_shortcuts.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-07-13
 *
 * @copyright Copyright (c) 2023
 *
*/
#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

void shortcuts_scr_set(lv_ui* ui)
{
    //Write codes src_home_label_BLEConter
    ui->src_home_label_BLEConter = lv_label_create(ui->src_home_tabview_1_Shortcuts);
    lv_obj_set_pos(ui->src_home_label_BLEConter, 63+30, 10);
    lv_obj_set_size(ui->src_home_label_BLEConter, 111, 15);
    lv_obj_set_scrollbar_mode(ui->src_home_label_BLEConter, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_BLEConter, "BLE:Disconnect");
    lv_label_set_long_mode(ui->src_home_label_BLEConter, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_BLEConter. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_BLEConter, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_BLEConter, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_BLEConter, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_BLEConter, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_BLEConter, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_BLEConter, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_BLEConter, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_BLEConter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_img_BLE
    ui->src_home_img_BLE = lv_img_create(ui->src_home_tabview_1_Shortcuts);
    lv_obj_set_pos(ui->src_home_img_BLE, 166+30, 7);
    lv_obj_set_size(ui->src_home_img_BLE, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_img_BLE, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_img_BLE. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_img_recolor(ui->src_home_img_BLE, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_img_BLE, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_img_BLE, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_flag(ui->src_home_img_BLE, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->src_home_img_BLE, &_BLE_no_alpha_20x20);
    lv_img_set_pivot(ui->src_home_img_BLE, 50, 50);
    lv_img_set_angle(ui->src_home_img_BLE, 0);

    //Write codes src_home_cont_BLE_TEXT
    ui->src_home_cont_BLE_TEXT = lv_obj_create(ui->src_home_tabview_1_Shortcuts);
    lv_obj_set_pos(ui->src_home_cont_BLE_TEXT, 31+30, 32-10);
    lv_obj_set_size(ui->src_home_cont_BLE_TEXT, 183, 130);
    lv_obj_set_scrollbar_mode(ui->src_home_cont_BLE_TEXT, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_cont_BLE_TEXT. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_cont_BLE_TEXT, lv_color_make(0x66, 0x66, 0x66), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_cont_BLE_TEXT, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_cont_BLE_TEXT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_cont_BLE_TEXT, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_home_cont_BLE_TEXT, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_home_cont_BLE_TEXT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_cont_BLE_TEXT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    // lv_obj_add_flag(ui->src_home_cont_BLE_TEXT, LV_OBJ_FLAG_HIDDEN);
    //Write codes src_home_label_4
    ui->src_home_label_4 = lv_label_create(ui->src_home_cont_BLE_TEXT);
    lv_obj_set_pos(ui->src_home_label_4, 24, 88);
    lv_obj_set_size(ui->src_home_label_4, 127, 16);
    lv_obj_set_scrollbar_mode(ui->src_home_label_4, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_4, "“AiPi-Dashboard”");
    lv_label_set_long_mode(ui->src_home_label_4, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_4. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_4, lv_color_make(0xf5, 0x54, 0x54), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_4, &lv_font_simhei_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_2
    ui->src_home_label_2 = lv_label_create(ui->src_home_cont_BLE_TEXT);
    lv_obj_set_pos(ui->src_home_label_2, 5, 73);
    lv_obj_set_size(ui->src_home_label_2, 189, 13);
    lv_obj_set_scrollbar_mode(ui->src_home_label_2, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_2, "请使用电脑连接以下蓝牙设备：");
    lv_label_set_long_mode(ui->src_home_label_2, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_2, lv_color_make(0x21, 0x95, 0xF6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_2, &lv_font_simhei_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);


    //Write codes src_home_label_teas
    ui->src_home_label_teas = lv_label_create(ui->src_home_cont_BLE_TEXT);
    lv_obj_set_pos(ui->src_home_label_teas, 6, 55);
    lv_obj_set_size(ui->src_home_label_teas, 80, 14);
    lv_obj_set_scrollbar_mode(ui->src_home_label_teas, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_teas, "蓝牙未连接：\n");
    lv_label_set_long_mode(ui->src_home_label_teas, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_teas. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_teas, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_teas, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_teas, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_teas, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_teas, lv_color_make(0xd8, 0xcf, 0x74), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_teas, &lv_font_simhei_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_teas, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_teas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_cont_dis
    ui->src_home_cont_dis = lv_obj_create(ui->src_home_tabview_1_Shortcuts);
    lv_obj_set_pos(ui->src_home_cont_dis, 0, 30);
    lv_obj_set_size(ui->src_home_cont_dis, 290, 151);
    lv_obj_set_scrollbar_mode(ui->src_home_cont_dis, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_cont_dis. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_cont_dis, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_cont_dis, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_cont_dis, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_cont_dis, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_home_cont_dis, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_home_cont_dis, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_cont_dis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Hidden for widget src_home_cont_dis
    lv_obj_add_flag(ui->src_home_cont_dis, LV_OBJ_FLAG_HIDDEN);

    //Write codes src_home_imgbtn_1
    ui->src_home_imgbtn_1 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_1, 30, 0);
    lv_obj_set_size(ui->src_home_imgbtn_1, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_1, lv_color_make(0x77, 0x77, 0x77), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_1, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_1, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_VSopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_VSclose_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_VSopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_VSclose_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_2
    ui->src_home_imgbtn_2 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_2, 97+30, 0);
    lv_obj_set_size(ui->src_home_imgbtn_2, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_2, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_2, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_baiduopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_baiduclose_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_baiduopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_baiduclose_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_3
    ui->src_home_imgbtn_3 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_3, 160+60, 0);
    lv_obj_set_size(ui->src_home_imgbtn_3, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_3, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_3, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_3, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_gooleopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_gooleclose_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_gooleopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_gooleclose_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_4
    ui->src_home_imgbtn_4 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_4, 30, 55);
    lv_obj_set_size(ui->src_home_imgbtn_4, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_4, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_4, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_4, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_windopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_dindclose_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_windopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_dindclose_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_5
    ui->src_home_imgbtn_5 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_5, 160+60, 55);
    lv_obj_set_size(ui->src_home_imgbtn_5, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_5. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_5, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_5, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_5. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_5, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_5, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_5. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_5, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_5, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_jlcopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_jlcclose_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_jlcopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_jlcclose_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_6
    ui->src_home_imgbtn_6 = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_6, 97+30, 55);
    lv_obj_set_size(ui->src_home_imgbtn_6, 35, 35);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_6. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_6, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_6, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_6, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_6. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_6, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_6, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_6, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_6. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_6, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_6, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_6, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_OBSopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_OBScloes_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_OBSopen_alpha_35x35, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_OBScloes_alpha_35x35, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_label_7
    ui->src_home_label_7 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_7, 27, 40);
    lv_obj_set_size(ui->src_home_label_7, 50, 15);
    lv_obj_set_scrollbar_mode(ui->src_home_label_7, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_7, "Vscode");
    lv_label_set_long_mode(ui->src_home_label_7, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_7. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_7, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_8
    ui->src_home_label_8 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_8, 90+30, 40);
    lv_obj_set_size(ui->src_home_label_8, 50, 15);
    lv_obj_set_scrollbar_mode(ui->src_home_label_8, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_8, "百度网盘");
    lv_label_set_long_mode(ui->src_home_label_8, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_8. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_8, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_8, &lv_font_simhei_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_9
    ui->src_home_label_9 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_9, 154+30, 40);
    lv_obj_set_size(ui->src_home_label_9, 98, 15);
    lv_obj_set_scrollbar_mode(ui->src_home_label_9, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_9, "Google Chrome");
    lv_label_set_long_mode(ui->src_home_label_9, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_9. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_9, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_9, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_9, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_9, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_9, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_10
    ui->src_home_label_10 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_10, 19, 190-95);
    lv_obj_set_size(ui->src_home_label_10, 68, 15);
    lv_obj_set_scrollbar_mode(ui->src_home_label_10, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_10, "WindTerm");
    lv_label_set_long_mode(ui->src_home_label_10, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_10. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_10, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_10, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_10, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_10, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_10, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_11
    ui->src_home_label_11 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_11, 90+10, 190-95);
    lv_obj_set_size(ui->src_home_label_11, 80, 18);
    lv_obj_set_scrollbar_mode(ui->src_home_label_11, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_11, "OBS Studio");
    lv_label_set_long_mode(ui->src_home_label_11, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_11. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_11, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_11, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_label_12
    ui->src_home_label_12 = lv_label_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_label_12, 154+40, 190-95);
    lv_obj_set_size(ui->src_home_label_12, 81, 18);
    lv_obj_set_scrollbar_mode(ui->src_home_label_12, LV_SCROLLBAR_MODE_OFF);
    lv_label_set_text(ui->src_home_label_12, "立创EDA专业版");
    lv_label_set_long_mode(ui->src_home_label_12, LV_LABEL_LONG_WRAP);

    //Set style for src_home_label_12. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_label_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_label_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_label_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_label_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_label_12, lv_color_make(0x86, 0x86, 0x86), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_home_label_12, &lv_font_simhei_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_cont_music_ctrl
    ui->src_home_cont_music_ctrl = lv_obj_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_cont_music_ctrl, 15+25, 122-12);
    lv_obj_set_size(ui->src_home_cont_music_ctrl, 210, 39);
    lv_obj_set_scrollbar_mode(ui->src_home_cont_music_ctrl, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_cont_music_ctrl. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_radius(ui->src_home_cont_music_ctrl, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_home_cont_music_ctrl, lv_color_make(0x8a, 0x8a, 0x8a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->src_home_cont_music_ctrl, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_home_cont_music_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_home_cont_music_ctrl, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_cont_music_ctrl, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_home_cont_music_ctrl, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_home_cont_music_ctrl, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_home_cont_music_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_home_imgbtn_stop
    ui->src_home_imgbtn_stop = lv_imgbtn_create(ui->src_home_cont_music_ctrl);
    lv_obj_set_pos(ui->src_home_imgbtn_stop, 88, 3);
    lv_obj_set_size(ui->src_home_imgbtn_stop, 30, 30);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_stop, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_stop. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_stop, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_stop, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_stop, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_stop, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_stop. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_stop, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_stop, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_stop, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_stop. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_stop, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_stop, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_stop, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_stop, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_stop, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Hidden for widget src_home_imgbtn_stop
    lv_obj_add_flag(ui->src_home_imgbtn_stop, LV_OBJ_FLAG_HIDDEN);

    lv_imgbtn_set_src(ui->src_home_imgbtn_stop, LV_IMGBTN_STATE_RELEASED, NULL, &_staopopen_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_stop, LV_IMGBTN_STATE_PRESSED, NULL, &_staopclose_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_stop, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_staopopen_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_stop, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_staopclose_alpha_30x30, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_stop, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_7
    ui->src_home_imgbtn_7 = lv_imgbtn_create(ui->src_home_cont_music_ctrl);
    lv_obj_set_pos(ui->src_home_imgbtn_7, 181, 9);
    lv_obj_set_size(ui->src_home_imgbtn_7, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_7, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_7. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_7, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_7, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_7. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_7, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_7, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_7. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_7, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_7, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_nextopen_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_nextclose_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_nextopen_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_7, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_nextclose_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_satrt
    ui->src_home_imgbtn_satrt = lv_imgbtn_create(ui->src_home_cont_music_ctrl);
    lv_obj_set_pos(ui->src_home_imgbtn_satrt, 88, 3);
    lv_obj_set_size(ui->src_home_imgbtn_satrt, 30, 30);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_satrt, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_satrt. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_satrt, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_satrt, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_satrt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_satrt, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_satrt. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_satrt, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_satrt, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_satrt, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_satrt. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_satrt, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_satrt, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_satrt, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_satrt, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_satrt, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_satrt, LV_IMGBTN_STATE_RELEASED, NULL, &_bofangopen_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_satrt, LV_IMGBTN_STATE_PRESSED, NULL, &_bofangclose_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_satrt, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_bofangopen_alpha_30x30, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_satrt, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_bofangclose_alpha_30x30, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_satrt, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_8
    ui->src_home_imgbtn_8 = lv_imgbtn_create(ui->src_home_cont_music_ctrl);
    lv_obj_set_pos(ui->src_home_imgbtn_8, 5, 9);
    lv_obj_set_size(ui->src_home_imgbtn_8, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_8, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_8. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_8, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_8, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_8. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_8, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_8, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_8. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_8, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_8, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_8, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_8, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_8, LV_IMGBTN_STATE_RELEASED, NULL, &_next0open_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_8, LV_IMGBTN_STATE_PRESSED, NULL, &_next0cloes_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_8, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_next0open_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_8, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_next0cloes_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_8, LV_OBJ_FLAG_CHECKABLE);

    ui->src_home_imgbtn_vol_I = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_vol_I, 0, 28);
    lv_obj_set_size(ui->src_home_imgbtn_vol_I, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_vol_I, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_vol_I. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_I, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_I, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_vol_I, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_I, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_vol_I. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_I, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_I, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_I, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_vol_I. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_I, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_I, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_I, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_I, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_I, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_I, LV_IMGBTN_STATE_RELEASED, NULL, &_vol_i_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_I, LV_IMGBTN_STATE_PRESSED, NULL, &_vol_i_sm_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_I, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_vol_i_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_I, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_vol_i_sm_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_vol_I, LV_OBJ_FLAG_CHECKABLE);
    //Write codes src_home_imgbtn_vol_n
    ui->src_home_imgbtn_vol_n = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_vol_n, 0, 118);
    lv_obj_set_size(ui->src_home_imgbtn_vol_n, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_vol_n, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_vol_n. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_n, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_n, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_vol_n, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_n, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_vol_n. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_n, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_n, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_n, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_vol_n. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_vol_n, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_vol_n, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_vol_n, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_vol_n, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_vol_n, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_n, LV_IMGBTN_STATE_RELEASED, NULL, &_vol_n_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_n, LV_IMGBTN_STATE_PRESSED, NULL, &_vol_n_sm_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_n, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_vol_n_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_vol_n, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_vol_n_sm_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_vol_n, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_voice
    ui->src_home_imgbtn_voice = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_voice, 0, 0);
    lv_obj_set_size(ui->src_home_imgbtn_voice, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_voice, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_voice. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_voice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_voice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_voice, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_voice, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_voice. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_voice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_voice, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_voice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_voice. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_voice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_voice, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_voice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_voice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_voice, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_imgbtn_set_src(ui->src_home_imgbtn_voice, LV_IMGBTN_STATE_RELEASED, NULL, &_voice_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_voice, LV_IMGBTN_STATE_PRESSED, NULL, &_voiceclose_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_voice, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_voice_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_voice, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_voiceclose_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_voice, LV_OBJ_FLAG_CHECKABLE);

    //Write codes src_home_imgbtn_novoice
    ui->src_home_imgbtn_novoice = lv_imgbtn_create(ui->src_home_cont_dis);
    lv_obj_set_pos(ui->src_home_imgbtn_novoice, 0, 0);
    lv_obj_set_size(ui->src_home_imgbtn_novoice, 20, 20);
    lv_obj_set_scrollbar_mode(ui->src_home_imgbtn_novoice, LV_SCROLLBAR_MODE_OFF);

    //Set style for src_home_imgbtn_novoice. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_novoice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_novoice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_home_imgbtn_novoice, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_novoice, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Set style for src_home_imgbtn_novoice. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_novoice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_novoice, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_novoice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Set style for src_home_imgbtn_novoice. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
    lv_obj_set_style_shadow_width(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui->src_home_imgbtn_novoice, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_x(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_ofs_y(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->src_home_imgbtn_novoice, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui->src_home_imgbtn_novoice, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui->src_home_imgbtn_novoice, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->src_home_imgbtn_novoice, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Hidden for widget src_home_imgbtn_novoice
    lv_obj_add_flag(ui->src_home_imgbtn_novoice, LV_OBJ_FLAG_HIDDEN);

    lv_imgbtn_set_src(ui->src_home_imgbtn_novoice, LV_IMGBTN_STATE_RELEASED, NULL, &_novoiceopen_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_novoice, LV_IMGBTN_STATE_PRESSED, NULL, &_novoiceopen_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_novoice, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_novoiceopen_alpha_20x20, NULL);
    lv_imgbtn_set_src(ui->src_home_imgbtn_novoice, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_novoiceclose_alpha_20x20, NULL);
    lv_obj_add_flag(ui->src_home_imgbtn_novoice, LV_OBJ_FLAG_CHECKABLE);


}