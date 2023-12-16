#include "lcd.h"
#include "loli_image.h"

#define LOLI_FRAME_X 240
#define LOLI_FRAME_Y 280
#define LOLI_FRAME_SIZE LOLI_FRAME_X * LOLI_FRAME_Y
#define LOLI_FRAME_BYTESIZE LOLI_FRAME_SIZE * 2

unsigned char loli_buffer_current = 0;
unsigned short loli_buffer[LOLI_FRAME_SIZE] = {};

static inline int loli_draw_picture(uint16_t x1, uint16_t y1, uint16_t x2,
                                    uint16_t y2, lcd_color_t *picture) {
  return lcd_draw_picture_blocking(x1, y1, x2 - 1, y2 - 1, picture);
}

void loli_frame_decompress(unsigned short *buffer, void *data) {
  memcpy(buffer, data, LOLI_FRAME_BYTESIZE);
}

void loli_draw_frame(const unsigned short *frame) {
  loli_frame_decompress(loli_buffer, frame);
  loli_draw_picture(0, 0, LOLI_FRAME_X, LOLI_FRAME_Y, loli_buffer);
}

void loli_draw() {
  for (unsigned short i = 0; loli_image[i]; i++) {
    loli_draw_frame(loli_image[i]);
  }
}

void loli_task() {
  while (1) {
    loli_draw();
  }
}
