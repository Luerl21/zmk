/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4
#define LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_4 uint8_t
    bluetooth_advertising_4_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

        0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x3e, 0x00, 0x30, 0x60, 0x00, 0xc1, 0x80, 0x60, 
        0x30, 0x01, 0xbe, 0xc0, 0x40, 0x10, 0x01, 0x7f, 0x40, 0x80, 0x08, 0x02, 0xff, 0xa0, 0x8f, 0x88, 
        0x02, 0xff, 0xa0, 0x80, 0x08, 0x02, 0xff, 0xa0, 0x8f, 0x88, 0x02, 0xff, 0xa0, 0x80, 0x08, 0x02, 
        0xff, 0xa0, 0x40, 0x11, 0xf1, 0x7f, 0x40, 0x60, 0x36, 0x0d, 0xbe, 0xc0, 0x30, 0x6c, 0x06, 0xc1, 
        0x80, 0x0f, 0x88, 0x02, 0x3e, 0x00, 0x00, 0x11, 0x81, 0x00, 0x00, 0x00, 0x10, 0x61, 0x00, 0x00, 
        0x00, 0x10, 0x11, 0x00, 0x00, 0x00, 0x10, 0x61, 0x00, 0x00, 0x00, 0x11, 0x81, 0x00, 0x00, 0x0f, 
        0x88, 0x02, 0x3e, 0x00, 0x30, 0x6c, 0x06, 0xc1, 0x80, 0x60, 0x36, 0x0d, 0x80, 0xc0, 0x40, 0x11, 
        0xf1, 0x00, 0x40, 0x80, 0x08, 0x02, 0x3e, 0x20, 0x80, 0x08, 0x02, 0x00, 0x20, 0x8f, 0x88, 0x02, 
        0x3e, 0x20, 0x80, 0x08, 0x02, 0x00, 0x20, 0x80, 0x08, 0x02, 0x3e, 0x20, 0x40, 0x10, 0x01, 0x00, 
        0x40, 0x60, 0x30, 0x01, 0x80, 0xc0, 0x30, 0x60, 0x00, 0xc1, 0x80, 0x0f, 0x80, 0x00, 0x3e, 0x00
};

const lv_img_dsc_t bluetooth_advertising_4 = {
    .header.always_zero = 0,
    .header.w = 35,
    .header.h = 32,
    .data_size = 168,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = bluetooth_advertising_4_map,
};
