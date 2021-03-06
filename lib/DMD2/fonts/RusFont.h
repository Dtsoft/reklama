

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : RusFont
 * Date                : 29.09.2014
 * Font size in bytes  : 3230
 * Font width          : 5
 * Font height         : 8
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef NEW_FONT1_H
#define NEW_FONT1_H

#define NEW_FONT1_WIDTH 5
#define NEW_FONT1_HEIGHT 8

static const uint8_t new_Font1[] PROGMEM = {
    0x0C, 0x9E, // size
    0x05, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x00, 0x04, 0x05, 0x00, 0x05, 0x05, 0x02, 0x03, 0x03, 
    0x03, 0x05, 0x02, 0x05, 0x02, 0x04, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x02, 0x05, 0x05, 
    0x05, 0x05, 0x00, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 
    0x02, 0x02, 0x05, 0x05, 0x02, 0x04, 0x04, 0x05, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x03, 0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 
    0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x03, 0x01, 0x03, 0x05, 0x04, 
    
    // font data
    0x00, 0x00, // 32
    0x03, 0x00, 0x00, 0x03, // 34
    0x7F, 0x08, 0x3E, 0x41, 0x3E, // 35
    0x46, 0x29, 0x19, 0x09, 0x7F, // 37
    0x3E, 0x49, 0x49, 0x41, 0x22, // 38
    0x03, 0x03, // 39
    0x18, 0x7E, 0x81, // 40
    0x81, 0x7E, 0x18, // 41
    0x06, 0x07, 0x02, // 42
    0x08, 0x08, 0x3E, 0x08, 0x08, // 43
    0x30, 0x70, // 44
    0x08, 0x08, 0x08, 0x08, 0x08, // 45
    0x60, 0x60, // 46
    0x00, 0x08, 0x04, 0x02, // 47
    0x3E, 0x41, 0x41, 0x41, 0x3E, // 48
    0x44, 0x42, 0x7F, 0x40, 0x40, // 49
    0x62, 0x51, 0x49, 0x49, 0x46, // 50
    0x22, 0x41, 0x49, 0x49, 0x36, // 51
    0x18, 0x14, 0x12, 0x7F, 0x10, // 52
    0x27, 0x45, 0x45, 0x45, 0x39, // 53
    0x3E, 0x49, 0x49, 0x49, 0x30, // 54
    0x41, 0x21, 0x11, 0x09, 0x07, // 55
    0x36, 0x49, 0x49, 0x49, 0x36, // 56
    0x06, 0x49, 0x49, 0x49, 0x3E, // 57
    0x36, 0x36, // 58
    0x34, 0x74, // 59
    0x08, 0x0C, 0x1C, 0x16, 0x12, // 60
    0x1C, 0x1C, 0x1C, 0x1C, 0x1C, // 61
    0x12, 0x16, 0x1C, 0x0C, 0x08, // 62
    0x7F, 0x48, 0x48, 0x48, 0x30, // 63
    0x7E, 0x09, 0x09, 0x09, 0x7E, // 65
    0x7F, 0x49, 0x49, 0x49, 0x30, // 66
    0x7F, 0x40, 0x40, 0x7F, 0x40, // 67
    0x40, 0x7E, 0x41, 0x7F, 0x40, // 68
    0x7F, 0x49, 0x49, 0x49, 0x41, // 69
    0x0E, 0x11, 0x7F, 0x11, 0x0E, // 70
    0x7F, 0x01, 0x01, 0x01, 0x01, // 71
    0x41, 0x36, 0x08, 0x36, 0x41, // 72
    0x7F, 0x10, 0x08, 0x04, 0x7F, // 73
    0x63, 0x14, 0x7F, 0x14, 0x63, // 74
    0x7F, 0x08, 0x14, 0x22, 0x41, // 75
    0x78, 0x04, 0x02, 0x01, 0x7F, // 76
    0x7F, 0x02, 0x0C, 0x02, 0x7F, // 77
    0x7F, 0x08, 0x08, 0x08, 0x7F, // 78
    0x3E, 0x41, 0x41, 0x41, 0x3E, // 79
    0x7F, 0x01, 0x01, 0x01, 0x7F, // 80
    0x7F, 0x40, 0x78, 0x40, 0x7F, // 81
    0x7F, 0x09, 0x09, 0x09, 0x06, // 82
    0x3E, 0x41, 0x41, 0x41, 0x22, // 83
    0x01, 0x01, 0x7F, 0x01, 0x01, // 84
    0x27, 0x48, 0x48, 0x48, 0x3F, // 85
    0x7F, 0x49, 0x49, 0x49, 0x36, // 86
    0x7F, 0x48, 0x48, 0x48, 0x30, // 87
    0x41, 0x36, 0x08, 0x36, 0x41, // 88
    0x7F, 0x48, 0x30, 0x00, 0x7F, // 89
    0x22, 0x41, 0x49, 0x49, 0x36, // 90
    0xFF, 0xC3, // 91
    0x0F, 0x30, // 92
    0xC1, 0xFF, // 93
    0x7E, 0x20, 0x13, 0x08, 0x7E, // 94
    0x07, 0x08, 0x08, 0x08, 0x7F, // 95
    0x01, 0x01, // 96
    0x7C, 0x14, 0x14, 0x7C, // 97
    0x7C, 0x54, 0x54, 0x74, // 98
    0x07, 0x08, 0x08, 0x08, 0x7F, // 99
    0x70, 0x50, 0x50, 0x7C, // 100
    0x7C, 0x54, 0x54, 0x5C, // 101
    0x7C, 0x14, 0x14, 0x04, // 102
    0x7C, 0x44, 0x54, 0x74, // 103
    0x7F, 0x40, 0x78, 0x7F, // 104
    0x01, 0x7C, 0x01, // 105
    0x60, 0x40, 0x74, 0x00, // 106
    0x7C, 0x10, 0x28, 0x44, // 107
    0x7C, 0x40, 0x40, 0x40, // 108
    0x7C, 0x1C, 0x04, 0x7C, // 109
    0x3E, 0x04, 0x08, 0x10, 0x3E, // 110
    0x7C, 0x44, 0x44, 0x7C, // 111
    0x7C, 0x14, 0x14, 0x1C, // 112
    0x7F, 0x40, 0x78, 0x40, 0x7F, 0xC0,// 113
    0x3C, 0x3C, 0x04, 0x04, // 114
    0x08, 0x2C, 0x2C, 0x3C, // 115
    0x04, 0x3E, 0x24, 0x00, // 116
    0x1C, 0x3C, 0x20, 0x3C, // 117
    0x04, 0x1C, 0x30, 0x1C, // 118
    0x04, 0x3C, 0x30, 0x0C, // 119
    0x20, 0x3C, 0x18, 0x3C, // 120
    0x84, 0xDC, 0x70, 0x3C, // 121
    0x24, 0x34, 0x2C, 0x24, // 122
    0x18, 0xFF, 0xC3, // 123
    0x7D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 124
    0xC3, 0xFF, 0x18, // 125
    0x08, 0x04, 0x0C, 0x08, 0x0C, // 126
    0x3E, 0x22, 0x22, 0x3E // 127
    
};

#endif
