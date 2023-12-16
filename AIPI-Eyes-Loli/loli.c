#include "lcd.h"
#include "loli_image.h"

static inline int draw_picture_blocking(uint16_t x1, uint16_t y1, uint16_t x2,
                                        uint16_t y2, lcd_color_t *picture) {
  return lcd_draw_picture_blocking(x1, y1, x2 - 1, y2 - 1, picture);
}

void loli_draw() {
  for (unsigned short i=0; loli_image[i]; i++) {
    draw_picture_blocking(0, 0, 240, 280, loli_image[i]);
  }
}

void loli_task() {
  while (1) {
    loli_draw();
  }
}
