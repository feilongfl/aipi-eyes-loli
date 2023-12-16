#include "image_header/loli_0001.h"
#include <stdio.h>

#define RLE_BUFFER_SIZE sizeof(loli_image_0001)

#if 1
struct rle_data {
  unsigned char data;
  unsigned char length;
};
#define RLE_LENGTH_MAX 0xFF
#elif 0
struct rle_data {
  unsigned short data;
  unsigned short length;
};
#define RLE_LENGTH_MAX 0xFFFF
#else
#error "must select data type"
#endif

// struct rle {
//   unsigned int length;
//   struct rle *data;
// };

struct rle_data loli_image_buffer[RLE_BUFFER_SIZE];
struct rle_data loli_image_buffer2[2 * RLE_BUFFER_SIZE];

size_t RleEncode(struct rle_data *dst, unsigned char *src, size_t size) {
  int dstsize = 0;

  dst[dstsize].data = src[0];
  dst[dstsize].length = 1;

  for (size_t i = 1; i < size; i++) {
    if (dst[dstsize].data == src[i] && dst[dstsize].length < RLE_LENGTH_MAX) {
      dst[dstsize].length++;
    } else {
      if (++dstsize < RLE_BUFFER_SIZE) {
        dst[dstsize].data = src[i];
        dst[dstsize].length = 1;
      } else {
        return 0;
      }
    }
  }

  return dstsize * sizeof(struct rle_data);
}

size_t RleDecode(unsigned char *dst, struct rle_data *src, size_t size) {
  int dstsize = 0;

  for (size_t i = 0; i < size + 1; i++) {
    for (size_t j = 0; j < src[i].length; j++) {
      dst[dstsize++] = src[i].data;
    }
  }

  return dstsize;
}

void hexLog(unsigned char *data, size_t length) {
  for (size_t i = 0; i < length; i++) {
    printf("  0x%x\n", data[i]);
  }
}

int main() {
  int size;

  printf("before: %d\n", sizeof(loli_image_0001));

  size = RleEncode(loli_image_buffer, loli_image_0001, sizeof(loli_image_0001));
  printf("encode:  %d\n", size);

  size = RleDecode(loli_image_buffer2, loli_image_buffer, size);
  printf("decode:  %d\n", size);

  return 0;
}
