#include "lcd.h"
#include "loli_image.h"

#define LOLI_FRAME_SIZE LOLI_FRAME_X * LOLI_FRAME_Y
#define LOLI_FRAME_BYTESIZE LOLI_FRAME_SIZE * 2

#define OFFSET_X ((240 - LOLI_FRAME_X) / 2)
#define OFFSET_Y ((320 - LOLI_FRAME_Y) -10)

#define SOFFSET_X ((240 - SIGN_X) / 2)
#define SOFFSET_Y (20)

unsigned char loli_buffer_current = 0;
unsigned short loli_buffer[LOLI_FRAME_SIZE] = {};

static inline int loli_draw_picture(uint16_t x1, uint16_t y1, uint16_t x2,
                                    uint16_t y2, lcd_color_t *picture) {
  return lcd_draw_picture_blocking(x1, y1, x2 - 1, y2 - 1, picture);
}

size_t varint_get(unsigned char *data, size_t *byte_length) {
  size_t number = 0;
  unsigned char *data_ptr = data;
  *byte_length = 0;

  do {
    number |= ((unsigned int)(data_ptr[*byte_length] & 0x7F))
              << (7 * (*byte_length));
  } while (data_ptr[(*byte_length)++] & 0x80);

  return number;
}

void loli_frame_decompress(unsigned short *buffer,
                           const struct loli_image_data *frame) {
  // varint rle decompress & draw to buffer
  unsigned char *bptr = buffer;
  size_t rle_length;
  unsigned char varint_length;

  for (size_t i = 0; i < frame->length; i++) {
    if (frame->data[i] == 0x00 || frame->data[i] == 0x01) {
      // rle codec
      rle_length = varint_get(frame->data + 1 + i, &varint_length);

      if (frame->data[i] == 0x00) {
        while (rle_length--)
          *bptr++ = 0;
      } else {
        bptr += rle_length;
      }

      i += varint_length;
    } else {
      *bptr++ = frame->data[i];
    }
  }
}

void loli_frame_decompress_old(unsigned short *buffer,
                               const struct loli_image_data *frame) {
  // rle decompress & draw to buffer
  unsigned char *bptr = buffer;
  unsigned short rle_length;

  for (size_t i = 0; i < frame->length; i++) {
    if (frame->data[i] == 0x00 || frame->data[i] == 0x01) {
      // rle codec
      rle_length = frame->data[i + 2];
      rle_length <<= 8;
      rle_length |= frame->data[i + 1];

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
  loli_frame_decompress_old(loli_buffer, &loli_sign);
  loli_draw_picture(SOFFSET_X, SOFFSET_Y, SOFFSET_X + SIGN_X,
                    SOFFSET_Y + SIGN_Y, loli_buffer);

  while (1) {
    loli_draw();
  }
}
