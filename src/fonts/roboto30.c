#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 30 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ROBOTO30
#define ROBOTO30 1
#endif

#if ROBOTO30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3, 0xfe,

    /* U+22 "\"" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+23 "#" */
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc,
    0x7, 0x18, 0x6, 0x18, 0x7f, 0xff, 0x7f, 0xff,
    0x6, 0x18, 0xe, 0x30, 0xc, 0x30, 0xc, 0x30,
    0xc, 0x30, 0xff, 0xfe, 0xff, 0xfe, 0x18, 0x60,
    0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x38, 0xe0,
    0x30, 0xc0,

    /* U+24 "$" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x3, 0xf0, 0x1f,
    0xf0, 0xe1, 0xe7, 0x3, 0x9c, 0x7, 0x70, 0x1d,
    0xc0, 0x7, 0x80, 0xf, 0x0, 0x1f, 0x80, 0x3f,
    0x80, 0x3f, 0x0, 0x1e, 0x0, 0x3c, 0x0, 0x7e,
    0x1, 0xf8, 0x7, 0xf0, 0x3d, 0xe1, 0xe3, 0xff,
    0x7, 0xf8, 0x3, 0x0, 0xc, 0x0, 0x30, 0x0,

    /* U+25 "%" */
    0x3e, 0x0, 0xf, 0xe0, 0x3, 0x8e, 0x0, 0x60,
    0xc3, 0xc, 0x18, 0xc1, 0x83, 0x18, 0x38, 0xe6,
    0x3, 0xf9, 0x80, 0x3e, 0x30, 0x0, 0xc, 0x0,
    0x3, 0x80, 0x0, 0x67, 0xc0, 0x19, 0xfc, 0x7,
    0x71, 0xc0, 0xcc, 0x18, 0x31, 0x83, 0xe, 0x30,
    0x61, 0x86, 0xc, 0x20, 0xe3, 0x80, 0xf, 0xe0,
    0x0, 0xf8,

    /* U+26 "&" */
    0x7, 0x80, 0xf, 0xf0, 0xf, 0x3c, 0x7, 0xe,
    0x3, 0x87, 0x1, 0xc3, 0x80, 0xe3, 0x80, 0x3b,
    0x80, 0xf, 0x80, 0x7, 0x80, 0x7, 0xc0, 0x7,
    0x70, 0xe7, 0x1c, 0x77, 0x7, 0x3b, 0x83, 0xf9,
    0xc0, 0xfc, 0xe0, 0x3c, 0x78, 0x1e, 0x1e, 0x1f,
    0x87, 0xff, 0xe0, 0xfc, 0x78,

    /* U+27 "'" */
    0xff, 0xfc,

    /* U+28 "(" */
    0x1, 0x7, 0x6, 0xc, 0x1c, 0x38, 0x38, 0x70,
    0x70, 0x70, 0x60, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0x60, 0x70, 0x70, 0x70,
    0x38, 0x38, 0x1c, 0xc, 0x6, 0x3, 0x1,

    /* U+29 ")" */
    0x80, 0xc0, 0x60, 0x30, 0x38, 0x1c, 0x1c, 0xc,
    0xe, 0xe, 0x6, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7, 0x6, 0xe, 0xe, 0xc,
    0x1c, 0x1c, 0x38, 0x30, 0x60, 0xc0, 0x80,

    /* U+2A "*" */
    0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0xf6, 0x7f,
    0xff, 0x1f, 0x80, 0xf0, 0x1f, 0x83, 0x98, 0x31,
    0xc3, 0xc,

    /* U+2B "+" */
    0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0,
    0x38, 0x0, 0x70, 0x3f, 0xff, 0xff, 0xff, 0x3,
    0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38,
    0x0, 0x70, 0x0, 0xe0, 0x0,

    /* U+2C "," */
    0x77, 0x77, 0x6e, 0xc0,

    /* U+2D "-" */
    0xff, 0xfc,

    /* U+2E "." */
    0xff, 0x80,

    /* U+2F "/" */
    0x0, 0x60, 0xc, 0x3, 0x80, 0x60, 0x1c, 0x3,
    0x0, 0x60, 0x1c, 0x3, 0x0, 0xe0, 0x18, 0x3,
    0x0, 0xe0, 0x18, 0x3, 0x0, 0xe0, 0x18, 0x7,
    0x0, 0xc0, 0x18, 0x7, 0x0, 0xc0, 0x38, 0x0,

    /* U+30 "0" */
    0xf, 0xc0, 0xff, 0xc7, 0x87, 0x9c, 0xe, 0x60,
    0x3b, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0x70, 0x39, 0xc0, 0xe7,
    0x87, 0xf, 0xfc, 0xf, 0xc0,

    /* U+31 "1" */
    0x1, 0x87, 0xcf, 0xff, 0x7e, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c,
    0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38,

    /* U+32 "2" */
    0xf, 0xc0, 0xff, 0xc7, 0x87, 0x9c, 0xf, 0xe0,
    0x1f, 0x80, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x38,
    0x1, 0xe0, 0xf, 0x0, 0x38, 0x1, 0xc0, 0xe,
    0x0, 0x70, 0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7,
    0x0, 0x3f, 0xff, 0xff, 0xfc,

    /* U+33 "3" */
    0xf, 0xc1, 0xff, 0x1e, 0x1d, 0xe0, 0x7e, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0xf0, 0x7e,
    0x3, 0xf8, 0x1, 0xe0, 0x7, 0x80, 0x1c, 0x0,
    0xfc, 0x7, 0xe0, 0x3f, 0x83, 0xde, 0x3c, 0x7f,
    0xc0, 0xf8, 0x0,

    /* U+34 "4" */
    0x0, 0x78, 0x0, 0xf0, 0x3, 0xe0, 0xf, 0xc0,
    0x1f, 0x80, 0x77, 0x1, 0xce, 0x3, 0x9c, 0xe,
    0x38, 0x38, 0x70, 0x70, 0xe1, 0xc1, 0xc7, 0x3,
    0x8e, 0x7, 0x3f, 0xff, 0xff, 0xff, 0x0, 0x38,
    0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,

    /* U+35 "5" */
    0x3f, 0xf8, 0xff, 0xe3, 0x0, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0x7, 0x0, 0x1f, 0xf0, 0x7f, 0xf1,
    0xc1, 0xe0, 0x3, 0x80, 0x7, 0x0, 0x1c, 0x0,
    0x70, 0x1, 0xf8, 0x7, 0x60, 0x1d, 0xc0, 0xe7,
    0x87, 0x8f, 0xfc, 0xf, 0xc0,

    /* U+36 "6" */
    0x1, 0xe0, 0x3f, 0x81, 0xe0, 0xe, 0x0, 0x38,
    0x1, 0xc0, 0x6, 0x0, 0x39, 0xf0, 0xff, 0xf3,
    0xe1, 0xef, 0x3, 0xb8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0x70, 0x1d, 0xc0, 0xe3,
    0x87, 0x87, 0xfc, 0xf, 0xc0,

    /* U+37 "7" */
    0xff, 0xff, 0xff, 0xf0, 0x1, 0xc0, 0x6, 0x0,
    0x38, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0, 0xe0,
    0x3, 0x0, 0x1c, 0x0, 0x70, 0x3, 0x80, 0xe,
    0x0, 0x30, 0x1, 0xc0, 0x6, 0x0, 0x38, 0x0,
    0xe0, 0x7, 0x0, 0x1c, 0x0,

    /* U+38 "8" */
    0xf, 0x80, 0xff, 0x87, 0x8f, 0x3c, 0x1e, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xbc, 0x1e, 0x78, 0xf0,
    0xff, 0x83, 0xfe, 0x1e, 0x1c, 0x70, 0x3b, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0xc0, 0xf7,
    0x87, 0x8f, 0xfc, 0xf, 0xc0,

    /* U+39 "9" */
    0xf, 0xc0, 0xff, 0x87, 0x87, 0x1c, 0xe, 0xe0,
    0x3b, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x77, 0x3, 0xde, 0x1f, 0x3f, 0xdc, 0x3e,
    0x70, 0x1, 0x80, 0xe, 0x0, 0x38, 0x1, 0xc0,
    0x1e, 0x7, 0xf0, 0x1f, 0x0,

    /* U+3A ":" */
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff,

    /* U+3B ";" */
    0x77, 0x70, 0x0, 0x0, 0x0, 0x0, 0x77, 0x77,
    0x76, 0xe4,

    /* U+3C "<" */
    0x0, 0x10, 0x7, 0x1, 0xf0, 0xfe, 0x3f, 0xf,
    0xc0, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xfc, 0x3,
    0xf0, 0xf, 0x0, 0x10,

    /* U+3D "=" */
    0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff,

    /* U+3E ">" */
    0x80, 0x7, 0x0, 0x3f, 0x0, 0x7e, 0x0, 0xfc,
    0x0, 0xf8, 0x0, 0xe0, 0x3f, 0x7, 0xe1, 0xf8,
    0x3f, 0x1, 0xe0, 0xc, 0x0, 0x0,

    /* U+3F "?" */
    0x1f, 0x87, 0xfe, 0x70, 0xee, 0x7, 0xe0, 0x70,
    0x7, 0x0, 0x70, 0xf, 0x1, 0xe0, 0x3c, 0x7,
    0x80, 0x70, 0xf, 0x0, 0xe0, 0xe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0x0, 0xe0, 0xe, 0x0,

    /* U+40 "@" */
    0x0, 0x7f, 0x0, 0x3, 0xff, 0xe0, 0x7, 0x80,
    0xf0, 0xe, 0x0, 0x38, 0x1c, 0x0, 0x1c, 0x38,
    0x0, 0xc, 0x30, 0x1e, 0x6, 0x60, 0x7f, 0x86,
    0x60, 0xe1, 0x86, 0xe0, 0xc1, 0x83, 0xc1, 0xc3,
    0x83, 0xc1, 0x83, 0x83, 0xc1, 0x83, 0x83, 0xc3,
    0x83, 0x3, 0xc3, 0x83, 0x3, 0xc3, 0x83, 0x3,
    0xc3, 0x83, 0x7, 0xc3, 0x87, 0x6, 0x61, 0xcf,
    0x8e, 0x61, 0xfd, 0xfc, 0x60, 0xf0, 0xf0, 0x30,
    0x0, 0x0, 0x38, 0x0, 0x0, 0x1c, 0x0, 0x0,
    0xf, 0x1, 0x80, 0x7, 0xff, 0x80, 0x0, 0xfe,
    0x0,

    /* U+41 "A" */
    0x0, 0xe0, 0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0,
    0xf8, 0x0, 0x1b, 0x80, 0x7, 0x30, 0x0, 0xe7,
    0x0, 0x18, 0xe0, 0x7, 0xc, 0x0, 0xe1, 0xc0,
    0x38, 0x38, 0x7, 0x3, 0x0, 0xc0, 0x70, 0x3f,
    0xfe, 0x7, 0xff, 0xe0, 0xc0, 0x1c, 0x38, 0x1,
    0x86, 0x0, 0x39, 0xc0, 0x7, 0x38, 0x0, 0x76,
    0x0, 0xe,

    /* U+42 "B" */
    0xff, 0xc1, 0xff, 0xe3, 0x81, 0xe7, 0x0, 0xee,
    0x1, 0xdc, 0x3, 0xb8, 0x7, 0x70, 0x1e, 0xe0,
    0x79, 0xff, 0xc3, 0xff, 0xc7, 0x1, 0xee, 0x1,
    0xdc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0, 0xf,
    0xc0, 0x3b, 0x80, 0xf7, 0xff, 0xcf, 0xfe, 0x0,

    /* U+43 "C" */
    0x3, 0xf0, 0x7, 0xfe, 0xf, 0x7, 0x87, 0x0,
    0xe7, 0x0, 0x73, 0x80, 0x3b, 0x80, 0xf, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0xe,
    0xe0, 0xe, 0x70, 0x7, 0x1c, 0x3, 0x8f, 0x7,
    0x83, 0xff, 0x80, 0x7f, 0x0,

    /* U+44 "D" */
    0xff, 0xc0, 0xff, 0xf0, 0xe0, 0x78, 0xe0, 0x1c,
    0xe0, 0xe, 0xe0, 0xe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xf, 0xe0, 0xe,
    0xe0, 0xe, 0xe0, 0x1c, 0xe0, 0x78, 0xff, 0xf0,
    0xff, 0xc0,

    /* U+45 "E" */
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x38, 0x0, 0xe0,
    0x3, 0x80, 0xe, 0x0, 0x38, 0x0, 0xe0, 0x3,
    0xff, 0xcf, 0xff, 0x38, 0x0, 0xe0, 0x3, 0x80,
    0xe, 0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x3f, 0xff, 0xff, 0xfc,

    /* U+46 "F" */
    0xff, 0xff, 0xff, 0xf8, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0,
    0x3f, 0xfd, 0xff, 0xee, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0,
    0xe, 0x0, 0x0,

    /* U+47 "G" */
    0x3, 0xf0, 0xf, 0xfe, 0xf, 0x7, 0x87, 0x0,
    0xe7, 0x0, 0x3b, 0x80, 0x1f, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x1f, 0xfc,
    0xf, 0xfe, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xe,
    0xe0, 0x7, 0x70, 0x3, 0x9c, 0x1, 0xc7, 0x83,
    0xe1, 0xff, 0xc0, 0x3f, 0x80,

    /* U+48 "H" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7,

    /* U+49 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+4A "J" */
    0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c,
    0x0, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c, 0x0,
    0x70, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0xc0, 0xe7,
    0x87, 0x8f, 0xfc, 0xf, 0xc0,

    /* U+4B "K" */
    0xe0, 0xe, 0x70, 0xf, 0x38, 0xf, 0x1c, 0xf,
    0xe, 0xf, 0x7, 0xf, 0x3, 0x87, 0x1, 0xc7,
    0x0, 0xe7, 0x0, 0x77, 0x80, 0x3f, 0xc0, 0x1f,
    0x70, 0xf, 0x1c, 0x7, 0xf, 0x3, 0x83, 0xc1,
    0xc0, 0xe0, 0xe0, 0x38, 0x70, 0x1e, 0x38, 0x7,
    0x9c, 0x1, 0xce, 0x0, 0x70,

    /* U+4C "L" */
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0,
    0x38, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1, 0xff,
    0xff, 0xff, 0x80,

    /* U+4D "M" */
    0xf0, 0x0, 0x7f, 0x80, 0x3, 0xfe, 0x0, 0x3f,
    0xf0, 0x1, 0xff, 0xc0, 0x1f, 0xf6, 0x0, 0xdf,
    0xb0, 0x6, 0xfd, 0xc0, 0x77, 0xe6, 0x3, 0x3f,
    0x38, 0x39, 0xf9, 0xc1, 0xcf, 0xc6, 0xc, 0x7e,
    0x38, 0xe3, 0xf0, 0xc6, 0x1f, 0x86, 0x30, 0xfc,
    0x3b, 0x87, 0xe0, 0xd8, 0x3f, 0x7, 0xc1, 0xf8,
    0x1c, 0xf, 0xc0, 0xe0, 0x7e, 0x7, 0x3, 0x80,

    /* U+4E "N" */
    0xe0, 0x7, 0xf0, 0x7, 0xf8, 0x7, 0xf8, 0x7,
    0xfc, 0x7, 0xfc, 0x7, 0xee, 0x7, 0xe7, 0x7,
    0xe7, 0x7, 0xe3, 0x87, 0xe3, 0x87, 0xe1, 0xc7,
    0xe0, 0xe7, 0xe0, 0xe7, 0xe0, 0x77, 0xe0, 0x3f,
    0xe0, 0x3f, 0xe0, 0x1f, 0xe0, 0x1f, 0xe0, 0xf,
    0xe0, 0x7,

    /* U+4F "O" */
    0x3, 0xe0, 0x7, 0xfc, 0xf, 0x7, 0x87, 0x1,
    0xc7, 0x0, 0x73, 0x80, 0x3b, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xe,
    0xe0, 0xe, 0x70, 0x7, 0x1c, 0x7, 0xf, 0x7,
    0x81, 0xff, 0x0, 0x3e, 0x0,

    /* U+50 "P" */
    0xff, 0xe1, 0xff, 0xf3, 0x80, 0xf7, 0x0, 0xee,
    0x0, 0xfc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x3b, 0x80, 0xf7, 0xff, 0xcf, 0xfe,
    0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x0,

    /* U+51 "Q" */
    0x3, 0xe0, 0x7, 0xfc, 0xf, 0x7, 0x87, 0x1,
    0xc7, 0x0, 0x73, 0x80, 0x3b, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xe,
    0xe0, 0xe, 0x70, 0x7, 0x1c, 0x7, 0xf, 0x7,
    0x81, 0xff, 0x80, 0x7f, 0xc0, 0x0, 0x78, 0x0,
    0x1e, 0x0, 0x6,

    /* U+52 "R" */
    0xff, 0xe0, 0xff, 0xf8, 0xe0, 0x3c, 0xe0, 0x1e,
    0xe0, 0xe, 0xe0, 0xe, 0xe0, 0xe, 0xe0, 0xe,
    0xe0, 0x1c, 0xe0, 0x3c, 0xff, 0xf8, 0xff, 0xe0,
    0xe0, 0xe0, 0xe0, 0x70, 0xe0, 0x70, 0xe0, 0x38,
    0xe0, 0x38, 0xe0, 0x1c, 0xe0, 0x1e, 0xe0, 0xe,
    0xe0, 0x7,

    /* U+53 "S" */
    0x7, 0xf0, 0x1f, 0xfc, 0x3c, 0x1e, 0x78, 0xe,
    0x70, 0x7, 0x70, 0x7, 0x70, 0x0, 0x78, 0x0,
    0x3e, 0x0, 0x1f, 0xc0, 0x7, 0xf8, 0x1, 0xfc,
    0x0, 0x3e, 0x0, 0xf, 0x0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0x70, 0xf, 0x7c, 0x1e, 0x1f, 0xfc,
    0x7, 0xf0,

    /* U+54 "T" */
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x70, 0x0, 0x38,
    0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0, 0x3,
    0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70, 0x0,
    0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0,
    0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70,
    0x0, 0x38, 0x0, 0x1c, 0x0,

    /* U+55 "U" */
    0xe0, 0xf, 0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x7e,
    0x0, 0xfc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x7e, 0x0,
    0xfc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0, 0xe,
    0xe0, 0x39, 0xe0, 0xf1, 0xff, 0x80, 0xfe, 0x0,

    /* U+56 "V" */
    0x70, 0x1, 0xee, 0x0, 0x39, 0xc0, 0x7, 0x1c,
    0x1, 0xc3, 0x80, 0x38, 0x70, 0x7, 0x7, 0x1,
    0xc0, 0xe0, 0x38, 0xc, 0x7, 0x1, 0xc1, 0xc0,
    0x38, 0x38, 0x3, 0x6, 0x0, 0x71, 0xc0, 0xe,
    0x38, 0x0, 0xe6, 0x0, 0x1d, 0xc0, 0x1, 0xb8,
    0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0, 0x70, 0x0,
    0xe, 0x0,

    /* U+57 "W" */
    0xe0, 0x1c, 0x3, 0xf0, 0xe, 0x1, 0xd8, 0x7,
    0x0, 0xce, 0x7, 0xc0, 0xe7, 0x3, 0x60, 0x73,
    0x81, 0xb0, 0x39, 0xc1, 0xdc, 0x18, 0x60, 0xee,
    0x1c, 0x38, 0x63, 0xe, 0x1c, 0x31, 0x87, 0xe,
    0x38, 0xe3, 0x3, 0x18, 0x33, 0x81, 0xcc, 0x19,
    0xc0, 0xee, 0xc, 0xe0, 0x77, 0x7, 0x60, 0x1b,
    0x1, 0xb0, 0xd, 0x80, 0xf8, 0x7, 0xc0, 0x7c,
    0x3, 0xc0, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0x70,
    0x7, 0x0,

    /* U+58 "X" */
    0xf0, 0x7, 0xb8, 0x3, 0x8e, 0x3, 0x87, 0x83,
    0xc1, 0xc1, 0xc0, 0x71, 0xc0, 0x39, 0xe0, 0xe,
    0xe0, 0x3, 0xe0, 0x1, 0xf0, 0x0, 0x70, 0x0,
    0x7c, 0x0, 0x7e, 0x0, 0x3b, 0x80, 0x38, 0xe0,
    0x3c, 0x70, 0x1c, 0x1c, 0x1c, 0xf, 0x1e, 0x3,
    0x8e, 0x0, 0xef, 0x0, 0x78,

    /* U+59 "Y" */
    0xe0, 0x3, 0xf8, 0x3, 0xdc, 0x1, 0xc7, 0x1,
    0xc3, 0x80, 0xe0, 0xe0, 0xe0, 0x70, 0x70, 0x1c,
    0x70, 0xe, 0x38, 0x3, 0xb8, 0x0, 0xdc, 0x0,
    0x7c, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0,
    0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70,
    0x0, 0x38, 0x0, 0x1c, 0x0,

    /* U+5A "Z" */
    0xff, 0xfe, 0xff, 0xfe, 0x0, 0x1e, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x70, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0,
    0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x3c, 0x0,
    0x38, 0x0, 0x70, 0x0, 0xf0, 0x0, 0xff, 0xff,
    0xff, 0xff,

    /* U+5B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3,
    0x8e, 0x38, 0xe3, 0x8e, 0x3f, 0xfc,

    /* U+5C "\\" */
    0xc0, 0x1c, 0x1, 0x80, 0x38, 0x7, 0x0, 0x60,
    0xe, 0x0, 0xc0, 0x18, 0x3, 0x80, 0x30, 0x7,
    0x0, 0xe0, 0xc, 0x1, 0xc0, 0x18, 0x3, 0x80,
    0x70, 0x6, 0x0, 0xe0, 0xc, 0x1, 0x80, 0x38,

    /* U+5D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c,
    0x71, 0xc7, 0x1c, 0x71, 0xff, 0xfc,

    /* U+5E "^" */
    0xc, 0x1, 0xc0, 0x78, 0xf, 0x1, 0xf0, 0x76,
    0xc, 0xe3, 0x8c, 0x61, 0xcc, 0x3b, 0x83, 0x0,

    /* U+5F "_" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+60 "`" */
    0xe1, 0xc3, 0xe, 0x1c,

    /* U+61 "a" */
    0xf, 0xc0, 0xff, 0x87, 0x7, 0x38, 0xe, 0x0,
    0x38, 0x0, 0xe0, 0xff, 0x8f, 0xfe, 0x78, 0x3b,
    0x80, 0xee, 0x3, 0xb8, 0xe, 0xe0, 0x79, 0xc3,
    0xe7, 0xff, 0x87, 0xcf,

    /* U+62 "b" */
    0xe0, 0x3, 0x80, 0xe, 0x0, 0x38, 0x0, 0xe0,
    0x3, 0x80, 0xe, 0x7c, 0x3f, 0xfc, 0xf8, 0x7b,
    0xc0, 0xee, 0x3, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80, 0xff,
    0x3, 0xbe, 0x1e, 0xff, 0xf3, 0x9f, 0x0,

    /* U+63 "c" */
    0xf, 0xc0, 0x7f, 0xc3, 0x87, 0x9c, 0xe, 0xf0,
    0x1b, 0x80, 0x6e, 0x0, 0x38, 0x0, 0xe0, 0x3,
    0x80, 0xe, 0x0, 0x1c, 0x6, 0x70, 0x38, 0xe1,
    0xe1, 0xff, 0x3, 0xf0,

    /* U+64 "d" */
    0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0, 0x70, 0xf9, 0xcf, 0xff, 0x38, 0x7d,
    0xc0, 0xff, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1d, 0xc0, 0x77,
    0x3, 0xce, 0x1f, 0x3f, 0xfc, 0x3e, 0x70,

    /* U+65 "e" */
    0x7, 0xc0, 0x7f, 0xc3, 0x87, 0x9c, 0xe, 0x70,
    0x1f, 0x80, 0x7e, 0x1, 0xff, 0xff, 0xff, 0xff,
    0x80, 0xe, 0x0, 0x1c, 0x0, 0x70, 0x18, 0xf0,
    0xf1, 0xff, 0x1, 0xf8,

    /* U+66 "f" */
    0x7, 0xc7, 0xf3, 0xc0, 0xe0, 0x38, 0xe, 0xf,
    0xfb, 0xfe, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x38,
    0xe, 0x3, 0x80, 0xe0, 0x38, 0xe, 0x3, 0x80,
    0xe0, 0x38, 0xe, 0x0,

    /* U+67 "g" */
    0xf, 0x9c, 0xff, 0xf7, 0x87, 0xdc, 0xf, 0xf0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0x7, 0x70, 0x3c, 0xe1,
    0xf3, 0xff, 0xc3, 0xe7, 0x0, 0x1c, 0x0, 0x72,
    0x3, 0x9e, 0x1e, 0x3f, 0xf0, 0x3f, 0x0,

    /* U+68 "h" */
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x9f, 0x1f, 0xfe, 0xf8, 0x77, 0x81,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7, 0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0,
    0x7e, 0x3, 0xf0, 0x1c,

    /* U+69 "i" */
    0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+6A "j" */
    0x1c, 0x71, 0xc0, 0x0, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c,
    0x71, 0xc7, 0x1f, 0xef, 0x0,

    /* U+6B "k" */
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x81, 0xdc, 0x1c, 0xe1, 0xc7, 0x1c,
    0x39, 0xe1, 0xde, 0xf, 0xe0, 0x7f, 0x3, 0xfc,
    0x1e, 0xf0, 0xe3, 0x87, 0xe, 0x38, 0x39, 0xc1,
    0xee, 0x7, 0x70, 0x1c,

    /* U+6C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0,

    /* U+6D "m" */
    0xe7, 0xc1, 0xf1, 0xff, 0xef, 0xfb, 0xe1, 0xf8,
    0x77, 0x1, 0xe0, 0x7e, 0x3, 0x80, 0xfc, 0x7,
    0x1, 0xf8, 0xe, 0x3, 0xf0, 0x1c, 0x7, 0xe0,
    0x38, 0xf, 0xc0, 0x70, 0x1f, 0x80, 0xe0, 0x3f,
    0x1, 0xc0, 0x7e, 0x3, 0x80, 0xfc, 0x7, 0x1,
    0xf8, 0xe, 0x3, 0xf0, 0x1c, 0x7,

    /* U+6E "n" */
    0xe7, 0xc7, 0xff, 0xbe, 0x1d, 0xe0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7,

    /* U+6F "o" */
    0x7, 0xc0, 0x3f, 0xe0, 0xe1, 0xe3, 0x80, 0xe7,
    0x1, 0xdc, 0x1, 0xf8, 0x3, 0xf0, 0x7, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3b, 0x80, 0xe7, 0x1,
    0xc7, 0x7, 0x7, 0xfc, 0x3, 0xe0,

    /* U+70 "p" */
    0xe7, 0xc3, 0xff, 0xcf, 0x87, 0xb8, 0xe, 0xe0,
    0x3f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xf8, 0xf, 0xe0, 0x3b, 0xe1,
    0xef, 0xff, 0x39, 0xf0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0x0,

    /* U+71 "q" */
    0xf, 0xb9, 0xff, 0xde, 0x1e, 0xe0, 0x7f, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xe0, 0x77, 0x3, 0xbc, 0x3c, 0xff,
    0xe1, 0xe7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x80, 0x1c,

    /* U+72 "r" */
    0xef, 0xff, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+73 "s" */
    0x1f, 0xc1, 0xff, 0x1c, 0x3d, 0xc0, 0x7e, 0x3,
    0xf0, 0x1, 0xf0, 0x7, 0xf8, 0xf, 0xf0, 0x7,
    0xc0, 0xf, 0xc0, 0x7e, 0x3, 0xb8, 0x38, 0xff,
    0xc1, 0xf8,

    /* U+74 "t" */
    0x1c, 0xe, 0x7, 0x3, 0x8f, 0xff, 0xfc, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x3, 0xe0, 0xf0,

    /* U+75 "u" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x7, 0xb8, 0x7d, 0xff,
    0xe3, 0xe7,

    /* U+76 "v" */
    0x60, 0x1d, 0xc0, 0x67, 0x3, 0x8c, 0xe, 0x38,
    0x30, 0xe1, 0xc1, 0x87, 0x7, 0x18, 0xc, 0xe0,
    0x33, 0x80, 0xec, 0x1, 0xf0, 0x7, 0xc0, 0x1e,
    0x0, 0x38, 0x0, 0xc0,

    /* U+77 "w" */
    0xc0, 0x60, 0x3f, 0x3, 0x81, 0xb8, 0x3c, 0x1c,
    0xc1, 0xe0, 0xe6, 0xf, 0x87, 0x38, 0xec, 0x30,
    0xc6, 0x63, 0x86, 0x33, 0x9c, 0x39, 0x8c, 0xc1,
    0xd8, 0x66, 0x6, 0xc3, 0xf0, 0x36, 0xf, 0x81,
    0xf0, 0x78, 0x7, 0x3, 0xc0, 0x38, 0xe, 0x1,
    0xc0, 0x60,

    /* U+78 "x" */
    0xe0, 0x3b, 0x83, 0x9c, 0x38, 0x71, 0xc1, 0xdc,
    0xe, 0xc0, 0x3e, 0x0, 0xe0, 0x7, 0x0, 0x7c,
    0x7, 0x70, 0x3b, 0x83, 0x8e, 0x38, 0x39, 0xc1,
    0xdc, 0x7,

    /* U+79 "y" */
    0xe0, 0x19, 0xc0, 0xe7, 0x3, 0x9c, 0xc, 0x38,
    0x70, 0xe1, 0xc3, 0x86, 0x7, 0x38, 0x1c, 0xe0,
    0x33, 0x0, 0xfc, 0x3, 0xf0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0,
    0x60, 0x3, 0x80, 0x7c, 0x1, 0xe0, 0x0,

    /* U+7A "z" */
    0xff, 0xf7, 0xff, 0x80, 0x38, 0x1, 0xc0, 0x1c,
    0x1, 0xc0, 0x1e, 0x0, 0xe0, 0xe, 0x0, 0xe0,
    0x7, 0x0, 0x70, 0x7, 0x0, 0x78, 0x3, 0xff,
    0xff, 0xff,

    /* U+7B "{" */
    0x1, 0x83, 0xc3, 0x81, 0xc1, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x83, 0x87, 0x83,
    0xc0, 0x70, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x38, 0xe, 0x7, 0x1, 0xe0, 0x30,

    /* U+7C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+7D "}" */
    0xc0, 0x78, 0xe, 0x7, 0x1, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x80, 0xe0, 0x3c,
    0x1e, 0x1c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x38, 0x38, 0x1c, 0x3c, 0x18, 0x0,

    /* U+7E "~" */
    0x1e, 0x3, 0x7f, 0x3, 0x73, 0x83, 0xe1, 0xc6,
    0xe0, 0xfe, 0xe0, 0x38
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 119, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 124, .box_w = 3, .box_h = 21, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 154, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 15, .adv_w = 296, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 270, .box_w = 14, .box_h = 27, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 105, .adv_w = 352, .box_w = 19, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 298, .box_w = 17, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 84, .box_w = 2, .box_h = 7, .ofs_x = 2, .ofs_y = 15},
    {.bitmap_index = 202, .adv_w = 164, .box_w = 8, .box_h = 31, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 233, .adv_w = 167, .box_w = 8, .box_h = 31, .ofs_x = 1, .ofs_y = -7},
    {.bitmap_index = 264, .adv_w = 207, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 282, .adv_w = 272, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 311, .adv_w = 94, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 315, .adv_w = 132, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 317, .adv_w = 126, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 198, .box_w = 11, .box_h = 23, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 351, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 270, .box_w = 9, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 270, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 270, .box_w = 15, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 270, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 116, .box_w = 3, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 101, .box_w = 4, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 725, .adv_w = 244, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 745, .adv_w = 263, .box_w = 12, .box_h = 8, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 757, .adv_w = 251, .box_w = 13, .box_h = 13, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 779, .adv_w = 227, .box_w = 12, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 431, .box_w = 24, .box_h = 27, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 892, .adv_w = 313, .box_w = 19, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 299, .box_w = 15, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 312, .box_w = 17, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 315, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 273, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 265, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 327, .box_w = 17, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 342, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1228, .adv_w = 131, .box_w = 3, .box_h = 21, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 265, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 301, .box_w = 17, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 258, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1353, .adv_w = 419, .box_w = 21, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 342, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1451, .adv_w = 330, .box_w = 17, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 303, .box_w = 15, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1536, .adv_w = 330, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1587, .adv_w = 296, .box_w = 16, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1629, .adv_w = 285, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 286, .box_w = 17, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 311, .box_w = 15, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 305, .box_w = 19, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1806, .adv_w = 426, .box_w = 25, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1872, .adv_w = 301, .box_w = 17, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 288, .box_w = 17, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1962, .adv_w = 287, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2004, .adv_w = 127, .box_w = 6, .box_h = 29, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2026, .adv_w = 197, .box_w = 11, .box_h = 23, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2058, .adv_w = 127, .box_w = 6, .box_h = 29, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2080, .adv_w = 201, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 2096, .adv_w = 217, .box_w = 13, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2100, .adv_w = 148, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 2104, .adv_w = 261, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2132, .adv_w = 269, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2171, .adv_w = 251, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2199, .adv_w = 271, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2238, .adv_w = 254, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2266, .adv_w = 167, .box_w = 10, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2294, .adv_w = 269, .box_w = 14, .box_h = 22, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 2333, .adv_w = 264, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2369, .adv_w = 116, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2377, .adv_w = 115, .box_w = 6, .box_h = 27, .ofs_x = -1, .ofs_y = -6},
    {.bitmap_index = 2398, .adv_w = 243, .box_w = 13, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2434, .adv_w = 116, .box_w = 3, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2443, .adv_w = 421, .box_w = 23, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2489, .adv_w = 265, .box_w = 13, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2515, .adv_w = 274, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2545, .adv_w = 269, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 2584, .adv_w = 273, .box_w = 13, .box_h = 22, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 2620, .adv_w = 162, .box_w = 8, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2636, .adv_w = 248, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2662, .adv_w = 157, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2685, .adv_w = 265, .box_w = 13, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2711, .adv_w = 233, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2739, .adv_w = 361, .box_w = 21, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2781, .adv_w = 238, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2807, .adv_w = 227, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2846, .adv_w = 238, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2872, .adv_w = 162, .box_w = 9, .box_h = 28, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2904, .adv_w = 117, .box_w = 2, .box_h = 25, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 2911, .adv_w = 162, .box_w = 9, .box_h = 28, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2943, .adv_w = 326, .box_w = 16, .box_h = 6, .ofs_x = 2, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 80,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    85, 80,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -9, -25, -25, -28, -12, -14, -14, -14,
    -14, -5, -5, -14, -5, -14, -19, 3,
    -25, -25, -28, -12, -14, -14, -14, -14,
    -5, -5, -14, -5, -14, -19, 3, 5,
    4, 5, -40, -40, -40, -40, -52, -28,
    -28, -14, -3, -3, -3, -3, -30, -4,
    -20, -16, -22, -3, -4, -3, -12, -8,
    -12, 3, -6, -6, -13, -6, -7, -3,
    -4, -24, -24, -5, -6, -5, -5, -10,
    -5, 5, -4, -4, -4, -4, -4, -4,
    -4, -4, -6, -5, -6, -55, -55, -40,
    -62, 5, -8, -5, -5, -5, -5, -5,
    -5, -6, -5, -6, -6, 4, -7, 4,
    -7, 4, -7, 4, -7, -5, -15, -7,
    -7, -7, -7, -6, -6, -6, -6, -5,
    -5, -6, -5, -6, -5, -9, -15, -9,
    -79, -79, 4, -15, -15, -15, -15, -64,
    -13, -41, -34, -56, -10, -31, -22, -31,
    4, -7, 4, -7, 4, -7, 4, -7,
    -24, -24, -5, -6, -5, -5, -10, -5,
    -76, -76, -32, -47, -7, -6, -3, -3,
    -3, -3, -3, -3, -3, 3, 4, 4,
    -10, -7, -5, -8, -19, -4, -11, -9,
    -51, -54, -51, -19, -7, -7, -56, -7,
    -7, -4, 4, 4, 4, 4, -26, -23,
    -23, -23, -23, -26, -26, -23, -26, -23,
    -18, -27, -22, -17, -13, -18, -17, -14,
    -5, 5, -53, -9, -53, -18, -3, -3,
    -3, -3, 4, -11, -10, -10, -10, -10,
    -11, -10, -7, -7, -3, -3, 4, 4,
    -29, -14, -29, -10, 3, 3, -8, -7,
    -7, -7, -7, -7, -7, -5, -4, 3,
    -11, -6, -6, -6, -6, 3, -6, -6,
    -6, -6, -5, -6, -5, -7, -7, -7,
    5, -11, -49, -12, -49, -22, -7, -7,
    -22, -7, -7, -4, 4, -22, 4, 4,
    3, 4, 4, -17, -15, -15, -15, -5,
    -15, -9, -9, -15, -9, -15, -9, -14,
    -5, -9, -5, -5, -5, -7, 4, 3,
    -6, -6, -6, -6, -5, -5, -5, -5,
    -5, -5, -4, -6, -6, -6, -4, -4,
    -16, -16, -4, -4, -7, -7, -3, -4,
    -3, -4, -3, -3, -3, -3, -3, -3,
    4, 4, 5, 4, -6, -6, -6, -6,
    -6, 4, -24, -24, -5, -5, -5, -5,
    -5, -24, -24, -24, -24, -32, -32, -4,
    -5, -4, -4, -7, -7, -3, -4, -3,
    -4, 4, 4, -29, -29, -9, -4, -4,
    -4, 4, -4, -5, -4, 12, 4, 4,
    4, -5, 4, 4, -25, -25, -4, -3,
    -3, -3, 3, -3, -4, -3, -29, -29,
    -5, -5, -5, -5, -5, -5, 4, 4,
    -25, -25, -4, -3, -3, -3, 3, -3,
    -4, -3, -4, -4, -4, -4, -4, -4,
    -5, -5
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t roboto30 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 31,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO30*/

