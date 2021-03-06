
/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "hi255.h"
#define HI255_ARRAY_SIZE_2(x) (sizeof(x) / sizeof(x[0]))

const static struct hi255_i2c_reg_conf hi255_init_reg_sensor_start_settings[] =
{    
    //Model : FPCB Type
//Preview : SVGA (800*600) / 18.4~5fps
//Capture : UXGA (1600*1200) / 9.46fps
//MCLK : 24MHz
//PLL  : X2 (Capture PCLK : 48MHz)
//DATE : 2012.05.25
//EF44S
//======================================================

//[USERSET_0]
//DISP_DATE = "2011-03-28"
//DISP_NAME = "init"
//DISP_WIDTH = 800
//DISP_HEIGHT = 600
//DISP_FORMAT = YUV422_MIPI
//DISP_DATAORDER = YUYV
//MCLK = 24.00
//PLL = 2.00

//BEGIN

//I2C_ID = 0x40
//I2C_BYTE  = 0x11

/////// Start Sleep ///////
{0x03, 0x00},
{0x01, 0x31}, //sleep on
{0x01, 0x33}, //soft reset
{0x01, 0x31},
{0x08, 0x2f}, //20}, 
{0x0A, 0x00}, //3F}, 
{0x03, 0x20}, //page 20
{0x10, 0x0c}, //ae off
{0x03, 0x22}, //page 22
{0x10, 0x69}, //awb off
{0x03, 0x00},
{0x0b, 0xaa}, //ESD Check Register
{0x0c, 0xaa}, //ESD Check Register
{0x0d, 0xaa}, //ESD Check Register
{0x10, 0x95}, //15}, //11}, //Sub 1 + Preview 1 mode
{0x11, 0x83}, //90}, //B[2] Fixed Frame XY flip (90:Default)
{0x12, 0x04},
{0x20, 0x00},
{0x21, 0x04}, //0c}, 
{0x22, 0x00},
{0x23, 0x07}, //14},
{0x24, 0x04},
{0x25, 0xb0},
{0x26, 0x06},
{0x27, 0x40},
{0x28, 0x0c},
{0x29, 0x04},
{0x2A, 0x02},
{0x2B, 0x04},
{0x2C, 0x06},
{0x2D, 0x02},
{0x40, 0x01}, //Hblank 360
{0x41, 0x68}, 
{0x42, 0x00}, //Vblank 20
{0x43, 0x14}, 
{0x45, 0x04},
{0x46, 0x18},
{0x47, 0xd8},
{0x80, 0x2e}, //BLC
{0x81, 0x7e},
{0x82, 0x90},
{0x83, 0x00},
{0x84, 0x0c},
{0x85, 0x00},
{0x90, 0x14}, //BLC_TIME_TH_ON
{0x91, 0x14}, //BLC_TIME_TH_OFF 
{0x92, 0xd8}, //BLC_AG_TH_ON
{0x93, 0xd0}, //BLC_AG_TH_OFF
{0x94, 0xff},
{0x95, 0xff},
{0x96, 0xdc},
{0x97, 0xfe},
{0x98, 0x38},
{0x99, 0x43}, //OutDoor  BLC
{0x9a, 0x43},
{0x9b, 0x43},
{0x9c, 0x43},
{0xa0, 0x00}, //02}, //01},//Dark BLC
{0xa2, 0x00}, //02},
{0xa4, 0x00}, //02},
{0xa6, 0x00}, //02},
{0xa8, 0x43}, //Normal BLC
{0xaa, 0x43},
{0xac, 0x43},
{0xae, 0x43},
{0x03, 0x02},
{0x12, 0x03},
{0x13, 0x03},
{0x16, 0x00},
{0x17, 0x8C},
{0x18, 0x4c}, //Double_AG
{0x19, 0x00},
{0x1a, 0x39}, //Double_AG/ 38 ->39
{0x1c, 0x09},
{0x1d, 0x40},
{0x1e, 0x30},
{0x1f, 0x10},
{0x20, 0x77},
{0x21, 0xde},
{0x22, 0xa7},
{0x23, 0x30}, //CLAMP
{0x27, 0x3c},
{0x2b, 0x80},
{0x2e, 0x00}, //Power Saving
{0x2f, 0x00}, //Power Saving
{0x30, 0x05}, //For Hi-253 never no change 0x05
{0x50, 0x20},
{0x52, 0x01},
{0x53, 0xc1}, //Don't Touch Register
{0x54, 0xc0}, //Don't Touch Register
{0x55, 0x1c},
{0x56, 0x11},
{0x58, 0x22},
{0x59, 0x20}, 
{0x5d, 0xa2},
{0x5e, 0x5a},
{0x60, 0x87},
{0x61, 0x99},
{0x62, 0x88},
{0x63, 0x97},
{0x64, 0x88},
{0x65, 0x97},
{0x67, 0x0c},
{0x68, 0x0c},
{0x69, 0x0c},
{0x72, 0x89},
{0x73, 0x96},
{0x74, 0x89},
{0x75, 0x96},
{0x76, 0x89},
{0x77, 0x96},
{0x7c, 0x85},
{0x7d, 0xaf},
{0x80, 0x01},
{0x81, 0x7f},
{0x82, 0x13},
{0x83, 0x24},
{0x84, 0x7d},
{0x85, 0x81},
{0x86, 0x7d},
{0x87, 0x81},
{0x92, 0x48},
{0x93, 0x54},
{0x94, 0x7d},
{0x95, 0x81},
{0x96, 0x7d},
{0x97, 0x81},
{0xa0, 0x02},
{0xa1, 0x7b},
{0xa2, 0x02},
{0xa3, 0x7b},
{0xa4, 0x7b},
{0xa5, 0x02},
{0xa6, 0x7b},
{0xa7, 0x02},
{0xa8, 0x85},
{0xa9, 0x8c},
{0xaa, 0x85},
{0xab, 0x8c},
{0xac, 0x10},
{0xad, 0x16},
{0xae, 0x10},
{0xaf, 0x16},
{0xb0, 0x99},
{0xb1, 0xa3},
{0xb2, 0xa4},
{0xb3, 0xae},
{0xb4, 0x9b},
{0xb5, 0xa2},
{0xb6, 0xa6},
{0xb7, 0xac},
{0xb8, 0x9b},
{0xb9, 0x9f},
{0xba, 0xa6},
{0xbb, 0xaa},
{0xbc, 0x9b},
{0xbd, 0x9f},
{0xbe, 0xa6},
{0xbf, 0xaa}, 
{0xc4, 0x2c},
{0xc5, 0x43},
{0xc6, 0x63},
{0xc7, 0x79},
{0xc8, 0x2d},
{0xc9, 0x42},
{0xca, 0x2d},
{0xcb, 0x42},
{0xcc, 0x64},
{0xcd, 0x78},
{0xce, 0x64},
{0xcf, 0x78},
{0xd0, 0x0a},
{0xd1, 0x09},
{0xd4, 0x14}, //DCDC_TIME_TH_ON
{0xd5, 0x14}, //DCDC_TIME_TH_OFF 
{0xd6, 0xd8}, //DCDC_AG_TH_ON
{0xd7, 0xd0}, //DCDC_AG_TH_OFF
{0xe0, 0xc4},
{0xe1, 0xc4},
{0xe2, 0xc4},
{0xe3, 0xc4},
{0xe4, 0x00},
{0xe8, 0x80},
{0xe9, 0x40},
{0xea, 0x7f},
{0xf0, 0x01},
{0xf1, 0x01},
{0xf2, 0x01},
{0xf3, 0x01},
{0xf4, 0x01},
{0x03, 0x03}, //03 Page
{0x10, 0x10},
{0x03, 0x10}, //10 Page
{0x10, 0x03}, //CrYCbY // For Demoset 0x03
{0x12, 0x30},
{0x20, 0x00},
{0x30, 0x00},
{0x31, 0x00},
{0x32, 0x00},
{0x33, 0x00},
{0x34, 0x30},
{0x35, 0x00},
{0x36, 0x00},
{0x38, 0x00},
{0x3e, 0x58},
{0x3f, 0x00},
{0x40, 0x00},
{0x41, 0x1d}, //10},//Dy offset
{0x48, 0x80}, //Contrast Off (88:On)
{0x50, 0xd0}, 
{0x60, 0x67},
{0x61, 0x70}, //Sat B 
{0x62, 0x6b}, //Sat R
{0x63, 0xe0}, //Double_AG 50->d0
{0x64, 0x80}, //40->80 
{0x66, 0x42},
{0x67, 0x20},
{0x6a, 0x8a}, 
{0x6b, 0x74}, 
{0x6c, 0x7e}, 
{0x6d, 0x8a}, 
{0x03, 0x11}, //11 Page
{0x10, 0x7f},
{0x11, 0x40},
{0x12, 0x0a}, //Blue Max-Filter Delete
{0x13, 0xbb},
{0x26, 0x31}, //Double_AG 31->20
{0x27, 0x34}, //Double_AG 34->22
{0x28, 0x0f},
{0x29, 0x10},
{0x2b, 0x30},
{0x2c, 0x32},
{0x30, 0x70}, //Out2 D-LPF th
{0x31, 0x10},
{0x32, 0x58},
{0x33, 0x09},
{0x34, 0x06},
{0x35, 0x03},
{0x36, 0x70}, //Out1 D-LPF th
{0x37, 0x18},
{0x38, 0x58},
{0x39, 0x09},
{0x3a, 0x06},
{0x3b, 0x03},
{0x3c, 0x80}, //Indoor D-LPF th
{0x3d, 0x18},
{0x3e, 0x40},
{0x3f, 0x0c},
{0x40, 0x09},
{0x41, 0x06},
{0x42, 0x80}, //Dark1 D-LPF th
{0x43, 0x18},
{0x44, 0x58}, //40},
{0x45, 0x13},
{0x46, 0x10},
{0x47, 0x10},
{0x48, 0x90}, //Dark2 D-LPF th
{0x49, 0x40},
{0x4a, 0x58},
{0x4b, 0x13},
{0x4c, 0x10},
{0x4d, 0x11},
{0x4e, 0x80}, //Dark3 D-LPF th
{0x4f, 0x30},
{0x50, 0x80},
{0x51, 0x13},
{0x52, 0x10},
{0x53, 0x13},
{0x54, 0x11},
{0x55, 0x0D},
{0x56, 0x20},
{0x57, 0x01},
{0x58, 0x00},
{0x59, 0x00},
{0x5a, 0x1f},
{0x5b, 0x3F},
{0x5c, 0x00},
{0x60, 0x3f},
{0x62, 0x10},
{0x70, 0x06},
{0x03, 0x12}, //12 Page
{0x20, 0x0f},
{0x21, 0x0f},
{0x25, 0x30},
{0x28, 0x00},
{0x29, 0x00},
{0x2a, 0x00},
{0x30, 0x30},
{0x31, 0x38},
{0x32, 0x42},
{0x33, 0x60},
{0x34, 0x70},
{0x35, 0x80},
{0x36, 0xa0},
{0x40, 0xa0}, //Out2 th
{0x41, 0x40},
{0x42, 0xa0},
{0x43, 0x90},
{0x44, 0x90},
{0x45, 0x80},
{0x46, 0xb0}, //Out1 th
{0x47, 0x55},
{0x48, 0xa0},
{0x49, 0x90},
{0x4a, 0x90},
{0x4b, 0x80},
{0x4c, 0xb0}, //Indoor th
{0x4d, 0x40},
{0x4e, 0xB0},
{0x4f, 0x90},
{0x50, 0xC0},
{0x51, 0x80},
{0x52, 0xb0}, //Dark1 th
{0x53, 0x60},
{0x54, 0xc0},
{0x55, 0xc0},
{0x56, 0xc0},
{0x57, 0x70},
{0x58, 0x90}, //Dark2 th
{0x59, 0x40},
{0x5a, 0xd0},
{0x5b, 0xd0},
{0x5c, 0xd0},
{0x5d, 0x70},
{0x5e, 0x88}, //Dark3 th
{0x5f, 0x40},
{0x60, 0xe0},
{0x61, 0xe0},
{0x62, 0xe0},
{0x63, 0x80},
{0x70, 0x15},
{0x71, 0x01}, //Don't Touch register
{0x72, 0x18},
{0x73, 0x01}, //Don't Touch register
{0x74, 0x25},
{0x75, 0x15},
{0x80, 0x20},
{0x81, 0x40},
{0x82, 0x65},
{0x85, 0x1a},
{0x88, 0x00},
{0x89, 0x00},
{0x90, 0x5d}, //For Preview  
{0xD0, 0x0c}, //Don't Touch register 
{0xD1, 0x80},
{0xD2, 0x17}, 
{0xD3, 0x00},
{0xD4, 0x00},
{0xD5, 0x0f}, 
{0xD6, 0xff},
{0xD7, 0xff}, //End              
{0x3b, 0x06},
{0x3c, 0x06},
{0xc5, 0x30}, //55->48
{0xc6, 0x2a}, //48->40
{0x03, 0x13}, //13 Page 
{0x10, 0xab},
{0x11, 0x7b},
{0x12, 0x02}, //06},
{0x14, 0x00},
{0x20, 0x08}, //15}, 
{0x21, 0x05}, //13}, 
{0x22, 0x33},
{0x23, 0x04},
{0x24, 0x09},
{0x25, 0x08}, 
{0x26, 0x20},
{0x27, 0x30},
{0x29, 0x12},
{0x2a, 0x50},
{0x2b, 0x06}, //Low clip th
{0x2c, 0x07},
{0x25, 0x08},
{0x2d, 0x0c},
{0x2e, 0x12},
{0x2f, 0x12},
{0x50, 0x10}, //Out2 Edge
{0x51, 0x14},
{0x52, 0x12},
{0x53, 0x0c},
{0x54, 0x0f},
{0x55, 0x0f},
{0x56, 0x10}, //Out1 Edge
{0x57, 0x13},
{0x58, 0x12},
{0x59, 0x0c},
{0x5a, 0x0f},
{0x5b, 0x0f},
{0x5c, 0x0a}, //Indoor Edge
{0x5d, 0x0b},
{0x5e, 0x0a},
{0x5f, 0x08},
{0x60, 0x09},
{0x61, 0x08},
{0x62, 0x08}, //Dark1 Edge
{0x63, 0x09},
{0x64, 0x08},
{0x65, 0x06},
{0x66, 0x07},
{0x67, 0x06},
{0x68, 0x07}, //Dark2 Edge
{0x69, 0x08},
{0x6a, 0x07},
{0x6b, 0x06},
{0x6c, 0x07},
{0x6d, 0x06},
{0x6e, 0x07}, //Dark3 Edge
{0x6f, 0x08},
{0x70, 0x07},
{0x71, 0x06},
{0x72, 0x07},
{0x73, 0x06},
{0x80, 0xFD}, //2DY
{0x81, 0x1f},
{0x82, 0x01},
{0x83, 0x31},
{0x90, 0x3f}, 
{0x91, 0x3f}, 
{0x92, 0x33},
{0x93, 0x30},
{0x94, 0x05},
{0x95, 0x0a}, //18},
{0x97, 0x30},
{0x99, 0x35},
{0xa0, 0x01},
{0xa1, 0x02},
{0xa2, 0x01},
{0xa3, 0x02},
{0xa4, 0x02},
{0xa5, 0x04},
{0xa6, 0x04},
{0xa7, 0x06},
{0xa8, 0x05},
{0xa9, 0x08},
{0xaa, 0x05},
{0xab, 0x08},     
{0xb0, 0x22}, //Out2 
{0xb1, 0x2a},
{0xb2, 0x28},
{0xb3, 0x22},
{0xb4, 0x2a},
{0xb5, 0x28},
{0xb6, 0x22}, //Out1 
{0xb7, 0x2a},
{0xb8, 0x28},
{0xb9, 0x22},
{0xba, 0x2a},
{0xbb, 0x28},
{0xbc, 0x1e}, //27}, //Indoor 
{0xbd, 0x24}, //30},
{0xbe, 0x20}, //2a},
{0xbf, 0x1e}, //27},
{0xc0, 0x24}, //30},
{0xc1, 0x20}, //2a},
{0xc2, 0x1e}, //Dark1
{0xc3, 0x24},
{0xc4, 0x20},
{0xc5, 0x1e},
{0xc6, 0x24},
{0xc7, 0x20},
{0xc8, 0x18}, //Dark2
{0xc9, 0x20},
{0xca, 0x1e},
{0xcb, 0x18},
{0xcc, 0x20},
{0xcd, 0x1e},
{0xce, 0x18}, //Dark3
{0xcf, 0x20},
{0xd0, 0x1e},
{0xd1, 0x18},
{0xd2, 0x20},
{0xd3, 0x1e},
{0x03, 0x14}, //14 Page
{0x10, 0x11},
{0x14, 0x80}, // GX
{0x15, 0x80}, // GY
{0x16, 0x80}, // RX
{0x17, 0x80}, // RY
{0x18, 0x80}, // BX
{0x19, 0x80}, // BY
{0x20, 0x80}, 
{0x21, 0x80}, 
{0x22, 0x80},
{0x23, 0x80},
{0x24, 0x80},
{0x30, 0xc8},
{0x31, 0x2b},
{0x32, 0x00},
{0x33, 0x00},
{0x34, 0x90},
{0x40, 0x7a}, 
{0x50, 0x5e}, 
{0x60, 0x54}, 
{0x70, 0x5e}, 
{0x03, 0x15}, //15 Page
{0x10, 0x0f},
{0x14, 0x46}, //CMCOFSGH
{0x15, 0x36}, //CMCOFSGM
{0x16, 0x26}, //CMCOFSGL
{0x17, 0x3f}, //CMC SIGN           
{0x30, 0x9b}, //CMC
{0x31, 0x59},
{0x32, 0x02}, 
{0x33, 0x17}, 
{0x34, 0x65}, 
{0x35, 0x0e}, 
{0x36, 0x08}, 
{0x37, 0x45}, 
{0x38, 0x8d},              
{0x40, 0xa0}, //CMC MOFS
{0x41, 0x20},
{0x42, 0x00}, 
{0x43, 0x82}, 
{0x44, 0x87}, 
{0x45, 0x09}, 
{0x46, 0x81}, 
{0x47, 0x9d}, 
{0x48, 0x1e},         
{0x50, 0x8a}, //CMC POFS
{0x51, 0x14}, 
{0x52, 0x8a}, 
{0x53, 0x06}, 
{0x54, 0x07}, 
{0x55, 0x8d}, 
{0x56, 0x01}, 
{0x57, 0x10}, 
{0x58, 0x91}, 

{0x80, 0x00}, //03},
{0x85, 0x40}, 
{0x87, 0x02},
{0x88, 0x00},
{0x89, 0x00},
{0x8a, 0x00},

{0x03, 0x16}, //16 Page
{0x10, 0x31},
{0x18, 0xa1}, //5e}, // Double_AG
{0x19, 0xa0}, //5d}, // Double_AG
{0x1a, 0x0e},
{0x1b, 0x01},
{0x1c, 0xdc},
{0x1d, 0xfe},        
{0x30, 0x00}, //Gamma indoor
{0x31, 0x08}, //05},
{0x32, 0x13}, //10},
{0x33, 0x2c}, //2a},
{0x34, 0x5b},
{0x35, 0x7e},
{0x36, 0x97},
{0x37, 0xa9},
{0x38, 0xba},
{0x39, 0xc8},
{0x3a, 0xd3},
{0x3b, 0xdc},
{0x3c, 0xe3},
{0x3d, 0xe9},
{0x3e, 0xee},
{0x3f, 0xf2},
{0x40, 0xf6},
{0x41, 0xfb},
{0x42, 0xff},
{0x50, 0x00}, //Gamma outdoor
{0x51, 0x08},
{0x52, 0x1e},
{0x53, 0x36},
{0x54, 0x64},
{0x55, 0x83},
{0x56, 0x97},
{0x57, 0xa6},
{0x58, 0xb2},
{0x59, 0xbe},
{0x5a, 0xc8},
{0x5b, 0xd1},
{0x5c, 0xdb},
{0x5d, 0xe3},
{0x5e, 0xeb},
{0x5f, 0xf0},
{0x60, 0xf5},
{0x61, 0xf7},
{0x62, 0xf8},
{0x70, 0x05}, //Dark
{0x71, 0x17},
{0x72, 0x27},
{0x73, 0x41},
{0x74, 0x6c},
{0x75, 0x87},
{0x76, 0x9d},
{0x77, 0xb0},
{0x78, 0xc0},
{0x79, 0xcb},
{0x7a, 0xd3},
{0x7b, 0xdc},
{0x7c, 0xe3},
{0x7d, 0xe9},
{0x7e, 0xee},
{0x7f, 0xf2},
{0x80, 0xf6},
{0x81, 0xfb},
{0x82, 0xff},
{0x03, 0x17}, //17 Page
{0x10, 0xf7},
{0xC4, 0x3c}, //FLK200 
{0xC5, 0x32}, //FLK240 
{0x03, 0x18}, //18 Page
{0x10, 0x00}, //Scaling Off
{0x03, 0x20}, //20 Page
{0x11, 0x0c}, //1c}, EXP Nor
{0x18, 0x30},
{0x1a, 0x08},
{0x20, 0x01}, //05}, //AE Weight ON   
{0x21, 0x30},
{0x22, 0x10},
{0x23, 0x00},
{0x24, 0x00},
{0x28, 0xe7}, //ef}, //DG enable
{0x29, 0x0d}, //ad->0d
{0x2a, 0xFF}, //FF->03, Fixed Frame set : 0x03
{0x2b, 0x34}, //34->35 Fixed Frame set : 0x35
{0x2c, 0xc3}, //c2},
{0x2d, 0xff},
{0x2e, 0x33}, //13}, //33}, adp off
{0x30, 0xf8}, //f8->78
{0x32, 0x03},
{0x33, 0x2e},
{0x34, 0x30},
{0x35, 0xd4},
{0x36, 0xfe},
{0x37, 0x32},
{0x38, 0x04},
{0x39, 0x26}, //22},
{0x3a, 0xde}, //de},
{0x3b, 0x26}, //22},
{0x3c, 0xde}, //de},
{0x41, 0xa0}, //Fast AE
{0x43, 0x08},
{0x44, 0x1a},
{0x45, 0x40},
{0x46, 0xf0},
{0x47, 0xff},
{0x4d, 0x04},
{0x50, 0x45},
{0x51, 0x88},
{0x56, 0x03},
{0x57, 0xf7},
{0x58, 0x14},
{0x59, 0x88},
{0x5a, 0x04},
{0x60, 0x00},
{0x61, 0x00},
{0x62, 0x00}, 
{0x63, 0x00}, 
{0x64, 0x16}, //05}, 
{0x65, 0x94}, //50}, 
{0x66, 0x1a}, //06}, 
{0x67, 0xa4}, //90}, 
{0x68, 0x1a}, //06}, 
{0x69, 0xa4}, //90}, 
{0x6a, 0x16}, //05}, 
{0x6b, 0x94}, //50}, 
{0x6c, 0x00}, 
{0x6d, 0x00}, 
{0x6e, 0x00},
{0x6f, 0x00},
{0x70, 0x3d}, //40}, //74}, Y Target
{0x71, 0x82}, //82(+8)
{0x76, 0x43},
{0x77, 0x02}, //04},
{0x78, 0x22}, //23}, //24
{0x79, 0x29}, //46},     
{0x7a, 0x23}, 
{0x7b, 0x22}, 
{0x7d, 0x23},
{0x83, 0x04}, //EXP Normal 10.00 fps 
{0x84, 0x93}, 
{0x85, 0xe0},   
{0x86, 0x01}, //EXPMin 6000.00 fps
{0x87, 0xf4}, 
{0x88, 0x09}, //EXP Max 5.00 fps 
{0x89, 0x27}, 
{0x8a, 0xc0}, 
{0x8B, 0x75}, //EXP100 
{0x8C, 0x30}, 
{0x8D, 0x61}, //EXP120 
{0x8E, 0xa8}, 
{0x9c, 0x0d}, //EXP Limit 857.14 fps 
{0x9d, 0xac}, 
{0x9e, 0x01}, //EXP Unit 
{0x9f, 0xf4},  
{0xb0, 0x18},
{0xb1, 0x14},
{0xb2, 0xe0}, 
{0xb3, 0x18},
{0xb4, 0x1a},
{0xb5, 0x44},
{0xb6, 0x2f},
{0xb7, 0x28},
{0xb8, 0x25},
{0xb9, 0x22},
{0xba, 0x21},
{0xbb, 0x20},
{0xbc, 0x38}, 
{0xbd, 0x37}, 
{0xbe, 0x36}, 
{0xbf, 0x36}, 
{0xc0, 0x14}, 
{0xc1, 0x30}, 
{0xc2, 0x30}, 
{0xc3, 0x30}, 
{0xc4, 0x08}, 
{0xc8, 0x40}, //60}, //DG MAX 
{0xc9, 0x40},
{0x03, 0x22}, //22 Page
{0x10, 0xfd}, //AWB mode
{0x11, 0x2e},
{0x19, 0x01}, //Low On
{0x20, 0x10},
{0x21, 0x84}, 
{0x24, 0x01},
{0x30, 0x80},
{0x31, 0x80},
{0x38, 0x22}, 
{0x39, 0x34},
{0x40, 0x91}, //f1}, //fa}, //Y limit      
{0x41, 0x44}, //CDIFF
{0x42, 0x22}, //33}, //CSUM
{0x43, 0x91}, //f6},
{0x44, 0x44},
{0x45, 0x33},
{0x46, 0x00},   
{0x50, 0xb2}, //skin_color_th1
{0x51, 0x81}, //skin_color_th2
{0x52, 0x98}, //skin_color_th3
{0x80, 0x40}, //R gain
{0x81, 0x20}, //G gain
{0x82, 0x35}, //B gain               
{0x83, 0x5e}, //Indoor
{0x84, 0x24}, 
{0x85, 0x50},  
{0x86, 0x24},               
{0x87, 0x49}, //outdoor 1  
{0x88, 0x39},
{0x89, 0x37}, 
{0x8a, 0x29},             
{0x8b, 0x41}, //outdoor 2
{0x8c, 0x39}, 
{0x8d, 0x34}, 
{0x8e, 0x29}, 
{0x8f, 0x57},
{0x90, 0x55},
{0x91, 0x52},
{0x92, 0x4d},
{0x93, 0x48},
{0x94, 0x3f},
{0x95, 0x34},
{0x96, 0x2e},
{0x97, 0x26},
{0x98, 0x22},
{0x99, 0x21},
{0x9a, 0x21},
{0x9b, 0x66}, 
{0x9c, 0x66},
{0x9d, 0x48},
{0x9e, 0x38},
{0x9f, 0x30},
{0xa0, 0x60},
{0xa1, 0x34},
{0xa2, 0x6f},
{0xa3, 0xff},
{0xa4, 0x14}, //1500fps
{0xa5, 0x2c}, //700fps
{0xa6, 0xcf},
{0xad, 0x40},
{0xae, 0x4a},
{0xaf, 0x2f}, //28}, //low temp Rgain
{0xb0, 0x2d}, //26}, //low temp Rgain
{0xb1, 0x00}, //0x20 -> 0x00 0405 modify
{0xb4, 0xea},
{0xb8, 0x0a}, //a0}, //a2: b-2, R+2  //b4 B-3, R+4 lowtemp
{0xb9, 0x00},
{0x03, 0x48}, //48 Page MIPI           
{0x70, 0x05}, //PLL Setting //
{0x71, 0x30}, //18->30 Pllx1->Pllx2
{0x72, 0x85}, 
{0x70, 0x85}, //PLL Enable
{0x03, 0x48},
{0x03, 0x48},
{0x03, 0x48},
{0x03, 0x48},
{0x70, 0x95}, //CLK_GEN_ENABLE
{0x10, 0x1c}, //MIPI TX Setting
{0x11, 0x00}, //0x00 : not contious, 0x10 : continous
{0x12, 0x00},
{0x14, 0x30}, //0x10},
{0x16, 0x04},
{0x19, 0x00},
{0x1a, 0x32}, //0x22},
{0x1b, 0x17}, //0x0d},
{0x1c, 0x0e}, 
{0x1d, 0x0f}, 
{0x1e, 0x08}, //0x14}, 
{0x1f, 0x06}, //04}, 
{0x20, 0x00}, //02}, 
{0x23, 0x01},
{0x24, 0x1e},
{0x25, 0x00},
{0x26, 0x00},
{0x27, 0x01},
{0x28, 0x00},
{0x2a, 0x06},
{0x2b, 0x40},
{0x2c, 0x04},
{0x2d, 0xb0},
{0x30, 0x40},
{0x31, 0x06},
{0x32, 0x06}, 
{0x33, 0x0a},
{0x34, 0x02}, //01}, 
{0x35, 0x01},
{0x36, 0x03}, //01},
{0x37, 0x07},
{0x38, 0x02},
{0x39, 0x02},
{0x50, 0x00},
{0x03, 0x20},
{0x10, 0xdc}, // AUTO
{0x03, 0x22},
{0x10, 0xf9},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x03, 0x00},
{0x01, 0x30},
};

struct hi255_i2c_reg_conf hi255_effect_off_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x30},
{0x13, 0x0a},
{0x44, 0x80},
{0x45, 0x80},
};
struct hi255_i2c_reg_conf hi255_effect_mono_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x33},
{0x13, 0x0a},
{0x44, 0x80},
{0x45, 0x80},
};

struct hi255_i2c_reg_conf hi255_effect_negative_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x28},
{0x13, 0x00},
{0x44, 0x80},
{0x45, 0x80},

};
struct hi255_i2c_reg_conf hi255_effect_solarize_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x30},
{0x13, 0x0a},
{0x44, 0x80},
{0x45, 0x80},

};

struct hi255_i2c_reg_conf hi255_effect_posterize_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x30},
{0x13, 0x0a},
{0x44, 0x80},
{0x45, 0x80},

};

struct hi255_i2c_reg_conf hi255_effect_sepia_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x33},
{0x13, 0x0a},
{0x44, 0x70},
{0x45, 0x98},

};
struct hi255_i2c_reg_conf hi255_effect_aqua_reg_config_settings[] =
{
{0x03, 0x10},
{0x11, 0x03},
{0x12, 0x23},
{0x13, 0x00},
{0x44, 0x80},
{0x45, 0x04},

};

/*modify the error preview settings*/
struct hi255_i2c_reg_conf hi255_preview_reg_config_settings[] =
{
//DISP_DATE = "2011-03-28"
//DISP_NAME = "preview"
//DISP_WIDTH = 800
//DISP_HEIGHT = 600
//DISP_FORMAT = YUV422_MIPI
//DISP_DATAORDER = YUYV
//MCLK = 24.00
//PLL = 2.00

{0x03, 0x00},           
{0x01, 0x31},           
{0x03, 0x20},           
{0x18, 0x30},           
{0x10, 0x0c},           
{0x03, 0x22},           
{0x10, 0x69},           
{0x03, 0x00},          
{0x10, 0x95}, //15},       
{0x11, 0x83}, //90}, //B[2] Fixed Frame XY flip (90:Default)                           
{0x12, 0x04},           
{0x03, 0x12},         
{0xd2, 0x17},         
{0xd5, 0x0f},         
{0xd7, 0xff},         
{0x03, 0x18},           
{0x10, 0x00},           
{0x03, 0x22},           
{0x80, 0x40}, //38}, //R gain
{0x81, 0x20}, //G gain
{0x82, 0x35}, //B gain  
{0x03, 0x20}, //Page 20                                        
{0x2a, 0xff}, //FF->03, Fixed Frame set : 0x03                 
{0x2b, 0x34}, //34->35 Fixed Frame set : 0x35                                                                                
{0x88, 0x09}, //EXP Max 5.00 fps 
{0x89, 0x27}, 
{0x8a, 0xc0},                                                                                                     
{0x03, 0x17}, //Page 17                                        
{0xC4, 0x3c}, //FLK200                                         
{0xC5, 0x32}, //FLK240                                         
{0x03, 0x00}, //PAGE 0                                         
{0x90, 0x14}, //BLC_TIME_TH_ON
{0x91, 0x14}, //BLC_TIME_TH_OFF 
{0x92, 0xd8}, //BLC_AG_TH_ON
{0x93, 0xd0}, //BLC_AG_TH_OFF                                 
{0x03, 0x02}, //PAGE 2                                         
{0xd4, 0x14}, //DCDC_TIME_TH_ON
{0xd5, 0x14}, //DCDC_TIME_TH_OFF 
{0xd6, 0xd8}, //DCDC_AG_TH_ON
{0xd7, 0xd0}, //DCDC_AG_TH_OFF      
{0x03, 0x48},           
{0x70, 0x05},           
{0x71, 0x30},           
{0x72, 0x85},           
{0x70, 0x85},           
{0x03, 0x48},           
{0x03, 0x48},           
{0x03, 0x48},           
{0x03, 0x48},           
{0x70, 0x95},           
{0x10, 0x1c},           
{0x11, 0x00},           
{0x12, 0x00},           
{0x14, 0x30},           
{0x16, 0x04},           
{0x19, 0x00},           
{0x1a, 0x32},           
{0x1b, 0x17},           
{0x1c, 0x0e},           
{0x1d, 0x0f},           
{0x1e, 0x08},           
{0x1f, 0x06},           
{0x20, 0x00}, //0x02},           
{0x23, 0x01},           
{0x24, 0x1e},           
{0x25, 0x00},           
{0x26, 0x00},           
{0x27, 0x01},           
{0x28, 0x00},           
{0x2a, 0x06},           
{0x2b, 0x40},           
{0x2c, 0x04},           
{0x2d, 0xb0},           
{0x30, 0x40},           
{0x31, 0x06},           
{0x32, 0x06},           
{0x33, 0x0a},           
{0x34, 0x02},           
{0x35, 0x01},           
{0x36, 0x03},           
{0x37, 0x07},           
{0x38, 0x02},           
{0x39, 0x02},           
{0x50, 0x00},           
{0x03, 0x20},           
{0x10, 0xdc},           
{0x03, 0x22},           
{0x10, 0xf9},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},           
{0x03, 0x00},	
{0x03, 0x00},           
{0x01, 0x30},

};

struct hi255_i2c_reg_conf hi255_snapshot_reg_config_settings[] =
{
//DISP_DATE = "2011-03-28"
//DISP_NAME = "capture"
//DISP_WIDTH = 1600
//DISP_HEIGHT = 1200
//DISP_FORMAT = YUV422_MIPI
//DISP_DATAORDER = YUYV
//MCLK = 24.00
//PLL = 2.00

{0x03, 0x00},                     
{0x01, 0x31}, 
{0x03, 0x20},
{0x10, 0x0c},
{0x03, 0x22},
{0x10, 0x69},                                                                                     
{0x03, 0x00},         
{0x10, 0x04},        
{0x11, 0x83}, //90},         
{0x12, 0x04},        
{0x20, 0x00},
{0x21, 0x04}, //0c}, 
{0x22, 0x00},
{0x23, 0x07}, //14},
{0x03, 0x12},         
{0xd2, 0x67},         
{0xd5, 0x02},         
{0xd7, 0x18},                           
{0x03, 0x18},         
{0x10, 0x00},        
{0x03, 0x48},  
{0x70, 0x05},         
{0x71, 0x30},         
{0x72, 0x81},         
{0x70, 0x85},                              
{0x03, 0x48},         
{0x03, 0x48},         
{0x03, 0x48},         
{0x03, 0x48},        
{0x70, 0x95},         
{0x10, 0x1c},         
{0x11, 0x00},         
{0x12, 0x00},         
{0x14, 0x30},         
{0x16, 0x04},         
{0x19, 0x00},         
{0x1a, 0x32},         
{0x1b, 0x17},         
{0x1c, 0x0a},         
{0x1d, 0x0e},       
{0x1e, 0x07},         
{0x1f, 0x05},         
{0x20, 0x00},         
{0x23, 0x01},         
{0x24, 0x1e},         
{0x25, 0x00},         
{0x26, 0x00},         
{0x27, 0x01},         
{0x28, 0x00},         
{0x2a, 0x06},         
{0x2b, 0x40},         
{0x2c, 0x04},         
{0x2d, 0xb0},       
{0x30, 0x80},         
{0x31, 0x0c},         
{0x32, 0x0f},         
{0x33, 0x0a},         
{0x34, 0x03},     
{0x35, 0x03},         
{0x36, 0x01},         
{0x37, 0x07},         
{0x38, 0x02},         
{0x39, 0x03},         
{0x50, 0x00},        
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},         
{0x03, 0x00},              
{0x03, 0x00},         
{0x01, 0x30},
};

struct hi255_i2c_reg_conf hi255_wb_auto_reg_config_settings[] =
{

{0x03, 0x22},			
//{0x11, 0x2e},				
		
{0x83, 0x5e},
{0x84, 0x1e},
{0x85, 0x5e},
{0x86, 0x22},	
};

struct hi255_i2c_reg_conf hi255_wb_a_reg_config_settings[] =
{
{0x03, 0x22},
//{0x11, 0x28},		  
{0x80, 0x29},
{0x82, 0x54},
{0x83, 0x2e},
{0x84, 0x23},
{0x85, 0x58},
{0x86, 0x4f},
};

struct hi255_i2c_reg_conf hi255_wb_tl84_reg_config_settings[] =
{

{0x03, 0x22},
//{0x11, 0x28},
{0x80, 0x41},
{0x82, 0x42},
{0x83, 0x44},
{0x84, 0x34},
{0x85, 0x46},
{0x86, 0x3a},
};

struct hi255_i2c_reg_conf hi255_wb_f_reg_config_settings[] =
{
{0x03, 0x22},
//{0x11, 0x28},
{0x80, 0x41},
{0x82, 0x42},
{0x83, 0x44},
{0x84, 0x34},
{0x85, 0x46},
{0x86, 0x3a},
};

struct hi255_i2c_reg_conf hi255_wb_d65_reg_config_settings[] =
{
{0x03, 0x22},
//{0x11, 0x28},
{0x80, 0x71},
{0x82, 0x2b},
{0x83, 0x72},
{0x84, 0x70},
{0x85, 0x2b},
{0x86, 0x28},
};

struct hi255_i2c_reg_conf hi255_wb_d50_reg_config_settings[] =
{
{0x03, 0x22},
//{0x11, 0x28},		  
{0x80, 0x59},
{0x82, 0x29},
{0x83, 0x60},
{0x84, 0x50},
{0x85, 0x2f},
{0x86, 0x23},

};

struct hi255_reg hi255_regs =
{
    .hi255_init_reg_sensor_start             = hi255_init_reg_sensor_start_settings,
    .hi255_init_reg_sensor_start_size        = HI255_ARRAY_SIZE_2(hi255_init_reg_sensor_start_settings),
    .hi255_effect_off_reg_config             = hi255_effect_off_reg_config_settings,
    .hi255_effect_off_reg_config_size        = HI255_ARRAY_SIZE_2(hi255_effect_off_reg_config_settings),
    .hi255_effect_mono_reg_config            = hi255_effect_mono_reg_config_settings,
    .hi255_effect_mono_reg_config_size       = HI255_ARRAY_SIZE_2(hi255_effect_mono_reg_config_settings),
    .hi255_effect_negative_reg_config        = hi255_effect_negative_reg_config_settings,
    .hi255_effect_negative_reg_config_size   = HI255_ARRAY_SIZE_2(hi255_effect_negative_reg_config_settings),
    .hi255_effect_sepia_reg_config           = hi255_effect_sepia_reg_config_settings,
    .hi255_effect_sepia_reg_config_size      = HI255_ARRAY_SIZE_2(hi255_effect_sepia_reg_config_settings),
    .hi255_effect_aqua_reg_config            = hi255_effect_aqua_reg_config_settings,
    .hi255_effect_aqua_reg_config_size       = HI255_ARRAY_SIZE_2(hi255_effect_aqua_reg_config_settings),
    .hi255_effect_solarize_reg_config      = hi255_effect_solarize_reg_config_settings,
    .hi255_effect_solarize_reg_config_size = HI255_ARRAY_SIZE_2(hi255_effect_solarize_reg_config_settings),
    .hi255_effect_posterize_reg_config      = hi255_effect_posterize_reg_config_settings,
    .hi255_effect_posterize_reg_config_size = HI255_ARRAY_SIZE_2(hi255_effect_posterize_reg_config_settings),
    .hi255_preview_reg_config                = hi255_preview_reg_config_settings,
    .hi255_preview_reg_config_size           = HI255_ARRAY_SIZE_2(hi255_preview_reg_config_settings),
    .hi255_snapshot_reg_config               = hi255_snapshot_reg_config_settings,
    .hi255_snapshot_reg_config_size          = HI255_ARRAY_SIZE_2(hi255_snapshot_reg_config_settings),
    .hi255_wb_auto_reg_config                = hi255_wb_auto_reg_config_settings,
    .hi255_wb_auto_reg_config_size           = HI255_ARRAY_SIZE_2(hi255_wb_auto_reg_config_settings),
    .hi255_wb_a_reg_config                   = hi255_wb_a_reg_config_settings,
    .hi255_wb_a_reg_config_size              = HI255_ARRAY_SIZE_2(hi255_wb_a_reg_config_settings),
    .hi255_wb_tl84_reg_config                = hi255_wb_tl84_reg_config_settings,
    .hi255_wb_tl84_reg_config_size           = HI255_ARRAY_SIZE_2(hi255_wb_tl84_reg_config_settings),
    .hi255_wb_f_reg_config                   = hi255_wb_f_reg_config_settings,
    .hi255_wb_f_reg_config_size              = HI255_ARRAY_SIZE_2(hi255_wb_f_reg_config_settings),
    .hi255_wb_d65_reg_config                 = hi255_wb_d65_reg_config_settings,
    .hi255_wb_d65_reg_config_size            = HI255_ARRAY_SIZE_2(hi255_wb_d65_reg_config_settings),
    .hi255_wb_d50_reg_config                 = hi255_wb_d50_reg_config_settings,
    .hi255_wb_d50_reg_config_size            = HI255_ARRAY_SIZE_2(hi255_wb_d50_reg_config_settings),

};

