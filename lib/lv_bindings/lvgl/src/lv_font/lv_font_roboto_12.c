#include "../../lvgl.h"

/*******************************************************************************
 * Size: 12 px
 * Bpp: 4
 * Opts: --no-compress --no-prefilter --bpp 4 --size 12 --font Roboto-Regular.woff -r 0x20-0x7F --font FontAwesome5-Solid+Brands+Regular.woff -r 61441,61448,61451,61452,61452,61453,61457,61459,61461,61465,61468,61473,61478,61479,61480,61502,61512,61515,61516,61517,61521,61522,61523,61524,61543,61544,61550,61552,61553,61556,61559,61560,61561,61563,61587,61589,61636,61637,61639,61671,61674,61683,61724,61732,61787,61931,62016,62017,62018,62019,62020,62087,62099,62212,62189,62810,63426,63650 --format lvgl -o lv_font_roboto_12.c --force-fast-kern-format
 ******************************************************************************/

#ifndef LV_FONT_ROBOTO_12
#define LV_FONT_ROBOTO_12 1
#endif

#if LV_FONT_ROBOTO_12
    
 /*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+F06D "" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x8, 0x70, 0x0, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0x30, 0x0, 0x9, 0xff, 0x30, 0x1,
    0xdf, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x5, 0xff,
    0xf4, 0x0, 0x1, 0xdf, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0xef, 0xff, 0x40, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0xf1, 0x5f, 0xff, 0xf4, 0x0, 0x0,
    0x5, 0xff, 0xff, 0xff, 0xff, 0x6a, 0xff, 0xff,
    0x40, 0x0, 0x0, 0xe, 0xff, 0xff, 0xff, 0xfb,
    0xdf, 0xff, 0xf4, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xff, 0xff, 0xdf, 0xff, 0xff, 0x70, 0x0, 0x0,
    0xe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x10, 0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0xff, 0xff, 0xfe, 0x62, 0x3a, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb6, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x10, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x70, 0x0, 0xbf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x1,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1,
    0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x4c, 0xff,
    0xff, 0xff, 0xfd, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0x68, 0x98, 0x62, 0x0, 0x0, 0x0,
    0x0,

    /* U+F185 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xe1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x54, 0x0, 0x0, 0x7, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x45, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xe9, 0x40, 0xe, 0xff, 0xff, 0xf1, 0x4,
    0x9e, 0xff, 0x10, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfe, 0xcf, 0xff, 0xff, 0xfc, 0xef, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xff,
    0xec, 0xce, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xa3, 0x0, 0x0,
    0x2a, 0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xff, 0xf6, 0x1, 0x69, 0x96, 0x10, 0x6f,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0x70, 0x4e, 0xff, 0xff, 0xe4, 0x7, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x3c, 0xfc, 0x3, 0xff,
    0xff, 0xff, 0xff, 0x30, 0xcf, 0xc3, 0x0, 0x0,
    0x0, 0x3b, 0xff, 0xf5, 0xc, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x5f, 0xff, 0xb3, 0x0, 0x3b, 0xff,
    0xff, 0xf1, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x1f, 0xff, 0xff, 0xb3, 0xef, 0xff, 0xff, 0xf0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf, 0xff,
    0xff, 0xfe, 0x6e, 0xff, 0xff, 0xf1, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xf2, 0x1f, 0xff, 0xff, 0xe6,
    0x0, 0x7e, 0xff, 0xf3, 0xd, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x3f, 0xff, 0xe7, 0x0, 0x0, 0x0,
    0x7e, 0xf9, 0x5, 0xff, 0xff, 0xff, 0xff, 0x60,
    0x9f, 0xe7, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0x20, 0x7f, 0xff, 0xff, 0xf8, 0x2, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xd1, 0x3,
    0xad, 0xda, 0x30, 0x1d, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xfd, 0x30, 0x0, 0x0,
    0x3, 0xdf, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0xff, 0xfb, 0x75, 0x57, 0xbf, 0xff,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xb6, 0x4f,
    0xff, 0xff, 0xf4, 0x5b, 0xff, 0xff, 0x10, 0x0,
    0x0, 0x0, 0xcb, 0x51, 0x0, 0xb, 0xff, 0xff,
    0xb0, 0x0, 0x5, 0xbc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F21E "" */
    0x0, 0x0, 0x2, 0x7a, 0xba, 0x61, 0x0, 0x0,
    0x0, 0x16, 0xab, 0xa8, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xff, 0xfe, 0x50, 0x0, 0x6,
    0xff, 0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x9f, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0xaf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x88, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x4, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x40, 0xa, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0xe, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0xf, 0xff, 0xff, 0xff, 0xff, 0x97, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0xf, 0xff, 0xff, 0xff, 0xfe, 0x0, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xc,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x5f, 0xff, 0xfc,
    0x1c, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7, 0xff,
    0xff, 0xff, 0xf2, 0x2, 0xd, 0xff, 0xf3, 0x3,
    0xff, 0xff, 0xff, 0xff, 0x70, 0x1, 0xef, 0xff,
    0xff, 0xb0, 0x5a, 0x7, 0xff, 0xb0, 0x0, 0xbf,
    0xff, 0xff, 0xfe, 0x10, 0x0, 0x38, 0x88, 0x88,
    0x30, 0xcf, 0x10, 0xff, 0x30, 0x90, 0x28, 0x88,
    0x88, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0x80, 0x8b, 0x5, 0xf5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3b, 0xbb, 0xbd, 0xff,
    0xe0, 0x23, 0xc, 0xfe, 0xbb, 0xbb, 0xb3, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xf6,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xfd, 0x0,
    0xcf, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xff, 0x67, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+F54B "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x14, 0x68, 0x99, 0x86, 0x41, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x48, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x71, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3b,
    0xdd, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0xf4, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0x40, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xf4, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x40,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0xf4, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x20, 0x2, 0x36, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xdf, 0xff, 0xff, 0xff, 0xff,
    0x92, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x48, 0xab, 0xa9,
    0x74, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0x8a, 0xba, 0x97, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5d, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0x0,
    0x23, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x50, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xf4, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xff, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xf4, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x40, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xf4, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff,
    0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xbd, 0xd3, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0x8d, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc7, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x46, 0x89, 0x98, 0x64, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 336, .box_w = 21, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 305, .adv_w = 448, .box_w = 28, .box_h = 29, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 711, .adv_w = 448, .box_w = 30, .box_h = 25, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1086, .adv_w = 560, .box_w = 35, .box_h = 29, .ofs_x = 0, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x118, 0x1b1, 0x4de
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 61549, .range_length = 1247, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0
};
/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_roboto_12 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if FOOT_HEART_CALORIES*/