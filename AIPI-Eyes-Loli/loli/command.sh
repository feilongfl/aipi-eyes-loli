#!/bin/bash

rm -rf image_*

mkdir image_origin
ffmpeg -i video.mp4 image_origin/video_%04d.png

mkdir -p image_crop
mkdir -p image_crop_240x280
mkdir -p image_header

w=150
h=175
# 循环遍历其他图片
for i in $(seq -f "%04g" 1 370)
do
  magick convert image_origin/video_$i.png -crop 360x420+0+170 image_crop/video_$i.png
  magick convert image_crop/video_$i.png -resize ${w}x${h} image_crop_240x280/video_$i.png

  ./img2c.py image_crop_240x280/video_$i.png loli_image_$i image_header/loli_$i.h
  echo -ne "Progress: $i\r"
done
echo -e "Progress: $i\r"

echo -e '// Auto Generate: ' > loli_image.h
for i in $(seq -f "%04g" 1 370)
do
  echo -e '#include "image_header/loli_'$i'.h"' >> loli_image.h
done

echo -e '\n#define LOLI_FRAME_X '$w >> loli_image.h
echo -e '#define LOLI_FRAME_Y '$h >> loli_image.h

echo -e '\nstatic const unsigned short *loli_image[] = {' >> loli_image.h
for i in $(seq -f "%04g" 1 370)
do
  echo -e '    loli_image_'$i',' >> loli_image.h
done
echo -e '\n    // end' >> loli_image.h
echo -e '    0\n};' >> loli_image.h
