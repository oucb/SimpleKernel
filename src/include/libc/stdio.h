
// This file is a part of MRNIU/SimpleKernel (https://github.com/MRNIU/SimpleKernel).

// stdio.h for MRNIU/SimpleKernel.

#ifndef _STDIO_H_
#define _STDIO_H_

extern int printk(const char * fmt, ...);
extern int printk_color(unsigned char color, const char *format, ...);
// 枚举颜色，与 vga_color 相同
enum color {
	black= 0,
	blue= 1,
	green= 2,
	cyan= 3,
	red= 4,
	magenta= 5,
	brown= 6,
	light_grey= 7,
	dark_gray= 8,
	light_blue= 9,
	light_green= 10,
	light_cyan= 11,
	light_red= 12,
	light_magenta= 13,
	light_brown= 14,
	white= 15,
};

extern int printf(const char * fmt, ...);

#endif
