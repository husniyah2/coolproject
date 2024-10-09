#include <drivers/screen/colors.h>
//editing this is husniyah
//push using QT creator
uint8_t vga_entry_color(enum vga_color fg, enum vga_color bg) {
  return fg | (bg << 4);
}
