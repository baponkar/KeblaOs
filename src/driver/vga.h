#pragma once

#include <stdint.h>
#include <stddef.h>

#define VGA_INDEX_REG_PORT 0x3D4    // VGA CRT Controller Index Register
#define VGA_DATA_REG_PORT 0x3D5     // 0x3D5: VGA CRT Controller Data Register

extern size_t FRAMEBUFFER_WIDTH;
extern size_t FRAMEBUFFER_HEIGHT;

#define COLOR_BLACK       0xFF000000  // Black
#define COLOR_WHITE       0xFFFFFFFF  // White
#define COLOR_RED         0xFFFF0000  // Red
#define COLOR_GREEN       0xFF00FF00  // Green
#define COLOR_BLUE        0xFF0000FF  // Blue
#define COLOR_YELLOW      0xFFFFFF00  // Yellow
#define COLOR_CYAN        0xFF00FFFF  // Cyan
#define COLOR_MAGENTA     0xFFFF00FF  // Magenta
#define COLOR_SILVER      0xFFC0C0C0  // Silver
#define COLOR_GRAY        0xFF808080  // Gray
#define COLOR_MAROON      0xFF800000  // Maroon
#define COLOR_OLIVE       0xFF808000  // Olive
#define COLOR_LIME        0xFF00FF00  // Lime
#define COLOR_AQUA        0xFF00FFFF  // Aqua
#define COLOR_TEAL        0xFF008080  // Teal
#define COLOR_NAVY        0xFF000080  // Navy
#define COLOR_FUCHSIA     0xFFFF00FF  // Fuchsia
#define COLOR_PURPLE      0xFF800080  // Purple
#define COLOR_ORANGE      0xFFFFA500  // Orange
#define COLOR_BROWN       0xFFA52A2A  // Brown
#define COLOR_PINK        0xFFFFC0CB  // Pink
#define COLOR_GOLD        0xFFFFD700  // Gold
#define COLOR_LIGHT_GRAY  0xFFD3D3D3  // Light Gray
#define COLOR_DARK_GRAY   0xFFA9A9A9  // Dark Gray
#define PELLTE_BLUE_COLOR 0x000D92F4
#define PELLTE_LIGHT_BLUE_COLOR 0x0077CDFF
#define PELLTE_LIGHT_RED_COLOR 0x00F95454
#define PELLTE_RED_COLOR 0x00C62E2E

#define DEFAULT_TEXT_COLOR 0xFFFFFFFF  // White
#define DEFAULT_BACK_COLOR 0xFF000000  // Black

#define DEFAULT_FONT_SIZE 16
#define DEFAULT_TEXT_LINE_GAP 0

#define DEFAULT_FONT_WIDTH 8
#define DEFAULT_FONT_HEIGHT 16

void get_framebuffer_info(void);
void vga_init();
void clear_screen();
void set_pixel(size_t x, size_t y, uint64_t color);
void print_char_at(size_t y, size_t x, unsigned char c);
void update_cur_pos();
void create_newline();
void putchar(unsigned char c);
void print(const char* text);
void scroll_up();
size_t get_cursor_pos_x();
size_t get_cursor_pos_y();
void set_cursor_pos_y(size_t _pos_y);
void move_cur_up();
void move_cur_down();
void move_cur_left();
void move_cur_right();

void print_hex(uint64_t n);
void print_dec(uint64_t n);
void print_bin(uint64_t n);

void backspace_manage();

void draw_line( int x1, int y1, int x2, int y2, uint64_t color);
void draw_vertical_line( int x, int y, int length, uint64_t color);
void draw_horizontal_line( int x, int y, int length, uint64_t color);
void draw_rectangle( int x, int y, int width, int height, uint64_t color);
void draw_circle( int center_x, int center_y, int radius, uint64_t color);
void cls_color( uint64_t color);
void fill_rectangle( int x, int y, int width, int height, uint64_t color);
void fill_circle( int center_x, int center_y, int radius, uint64_t color);
void draw_triangle( int x1, int y1, int x2, int y2, int x3, int y3, uint64_t color);
void fill_flat_bottom_triangle( int x1, int y1, int x2, int y2, int x3, int y3, uint64_t color);
void fill_triangle( int x1, int y1, int x2, int y2, int x3, int y3, uint64_t color) ;
void draw_gradient( uint64_t start_color, uint64_t end_color) ;
void draw_colorful_image();

void set_pixel(size_t x, size_t y, uint64_t color);
void display_image( int x, int y, const uint64_t* image_data, int img_width, int img_height);

