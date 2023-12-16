#include "lcd.h"

const loli_img[] = {};

void loli_draw() {
  static int i = 0;

  lcd_clear(LCD_COLOR_RGB(i == 1 || i == 4 ? 0xFF : 0x00,
                          i == 2 || i == 4 ? 0xFF : 0x00,
                          i == 3 || i == 4 ? 0xFF : 0x00));

  i = i >= 4 ? 0 : i + 1;
}

void loli_task() {
  while (1) {
    loli_draw();
    vTaskDelay(200);
  }
}
