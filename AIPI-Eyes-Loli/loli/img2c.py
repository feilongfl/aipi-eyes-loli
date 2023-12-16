#!/usr/bin/env python
from PIL import Image
import numpy as np
import sys

def convert_image_to_rgb565_array(image_path, array_name, output_path):
    # 打开图像并转换为RGB
    img = Image.open(image_path)
    img = img.convert('RGB')

    # 获取图像尺寸
    width, height = img.size

    # 将图像转换为numpy数组
    img_data = np.array(img).astype(np.uint16)

    # 转换为RGB565
    r = (img_data[:,:,0] >> 3) << 11
    g = (img_data[:,:,1] >> 2) << 5
    b = img_data[:,:,2] >> 3
    rgb565_data = r | g | b

    # 将数据写入C数组
    with open(output_path, 'w') as f:
        f.write(f'static const unsigned short {array_name}[] = {{\n')
        f.write(f'    // \'{image_path.split("/")[-1]}\', {width}x{height}px\n')
        for y in range(height):
            f.write('    ')
            for x in range(width):
                f.write(f'0x{rgb565_data[y, x]:04x}, ')
            f.write('\n')
        f.write('};\n')

# 从命令行获取参数
if len(sys.argv) != 4:
    print("Usage: python script.py <image_path> <array_name> <output_path>")
else:
    image_path = sys.argv[1]
    array_name = sys.argv[2]
    output_path = sys.argv[3]
    convert_image_to_rgb565_array(image_path, array_name, output_path)
    print(f"RGB565 array generated at {output_path}")
