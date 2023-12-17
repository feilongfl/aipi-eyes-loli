#include "lcd.h"
#include "loli_image.h"

#define LOLI_FRAME_SIZE LOLI_FRAME_X * LOLI_FRAME_Y
#define LOLI_FRAME_BYTESIZE LOLI_FRAME_SIZE * 2

#define OFFSET_X ((240 - LOLI_FRAME_X) / 2)
#define OFFSET_Y ((320 - LOLI_FRAME_Y) / 2)

unsigned char loli_buffer_current = 0;
unsigned short loli_buffer[LOLI_FRAME_SIZE] = {};

static inline int loli_draw_picture(uint16_t x1, uint16_t y1, uint16_t x2,
                                    uint16_t y2, lcd_color_t *picture) {
  return lcd_draw_picture_blocking(x1, y1, x2 - 1, y2 - 1, picture);
}

void loli_frame_decompress(unsigned short *buffer,
                           const struct loli_image_data *frame) {
  // rle decompress & draw to buffer
  unsigned char *bptr = buffer;
  unsigned short rle_length;

  // for (size_t i = 0; i < 10; i++) {
  //   printf("%02x ", frame->data[i]);
  // }
  // printf("\r\n");

  for (size_t i = 0; i < frame->length; i++) {
    if (frame->data[i] == 0x00 || frame->data[i] == 0x01) {
      // rle codec
      rle_length = frame->data[i + 2];
      rle_length <<= 8;
      rle_length |= frame->data[i + 1];
      // printf("rle: %d[0x%04x] at %d\r\n", frame->data[i], rle_length, i);

      if (frame->data[i] == 0x00) {
        while (rle_length--)
          *bptr++ = 0;
      } else {
        bptr += rle_length;
      }

      i += 2;
    } else {
      *bptr++ = frame->data[i];
    }
  }
}

void loli_draw_frame(const struct loli_image_data *frame) {
  loli_frame_decompress(loli_buffer, frame);
  loli_draw_picture(OFFSET_X, OFFSET_Y, OFFSET_X + LOLI_FRAME_X,
                    OFFSET_Y + LOLI_FRAME_Y, loli_buffer);
}

void loli_draw() {
  for (unsigned short i = 0; loli_image[i].data; i++) {
    loli_draw_frame(&loli_image[i]);

    vTaskDelay(30);
  }
}

void loli_task() {
  while (1) {
    loli_draw();
  }
}
