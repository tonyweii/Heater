#ifndef _BMP_H_
#define _BMP_H_

// const char button_exit[] = {
// 15,15,0xF0,0x0C,0x02,0x82,0xC1,0xA1,0x81,0x89,0x89,0x09,0xF9,0x02,0x02,0x0C,0xF0,0x07,
// 0x18,0x20,0x20,0x41,0x42,0x40,0x48,0x48,0x48,0x4F,0x60,0x20,0x18,0x07,/*"E:\Program\通用库\图标库\图标库\退出.bmp",0*/
// /* (15 X 15 )*/

// };

// const char button_next[] = {
// 15,15,0xF0,0x0C,0x02,0xC2,0xC1,0xC1,0xC1,0xC1,0xF9,0xF1,0xE1,0xC2,0x82,0x0C,0xF0,0x07,
// 0x18,0x20,0x21,0x41,0x41,0x41,0x41,0x4F,0x47,0x43,0x61,0x20,0x18,0x07,/*"E:\Program\通用库\图标库\图标库\下一步.bmp",0*/
// /* (15 X 15 )*/

// };

// const char jt_right[] = {
// 5,9,0xFF,0xFE,0x7C,0x38,0x10,0x01,0x00,0x00,0x00,0x00,/*"E:\Program\通用库\图标库\图标库\向右箭头5-9.bmp",0*/
// /* (5 X 9 )*/

// };
// const char jt_down[] = {
// 9,5,0x01,0x03,0x07,0x0F,0x1F,0x0F,0x07,0x03,0x01,/*"E:\Program\通用库\图标库\图标库\向下箭头9-5.bmp",0*/
// /* (9 X 5 )*/

// };

const char circle_shi[] = {
9,9,0x38,0xFE,0xFE,0xFF,0xFF,0xFF,0xFE,0xFE,0x38,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x00,/*"E:\Program\通用库\图标库\图标库\实心选择圆.bmp",0*/
/* (9 X 9 )*/

};

const char circle_kong[] = {
9,9,0x38,0xC6,0x82,0x01,0x01,0x01,0x82,0xC6,0x38,0x00,0x00,0x00,0x01,0x01,0x01,0x00,
0x00,0x00,/*"E:\Program\通用库\图标库\图标库\空心选择圆.bmp",0*/
/* (9 X 9 )*/

};

// const char switch_turn[] ={
// 18,3,0x02,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x05,0x05,0x05,0x05,0x05,0x05,0x05,
// 0x05,0x02,/*"E:\Program\通用库\图标库\图标库\开关条18-3.bmp",0*/

// };

// const char bmp_wifi[][30] ={
// 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
// 0x00,0x00,0x00,0x00,0x00,0x02,0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,/*"F:\User_DHX_Data\Program\通用库\图标库\图标库\wifi1.bmp",0*/
// /* (15 X 11 )*/
// 0x00,0x00,0x00,0x00,0x80,0x80,0x40,0x40,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
// 0x00,0x00,0x00,0x00,0x00,0x02,0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,/*"F:\User_DHX_Data\Program\通用库\图标库\图标库\wifi2.bmp",0*/
// /* (15 X 11 )*/
// 0x00,0x00,0x20,0x10,0x90,0x88,0x48,0x48,0x48,0x88,0x90,0x10,0x20,0x00,0x00,0x00,
// 0x00,0x00,0x00,0x00,0x00,0x02,0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,/*"F:\User_DHX_Data\Program\通用库\图标库\图标库\wifi3.bmp",0*/
// /* (15 X 11 )*/
// 0x08,0x04,0x22,0x12,0x91,0x89,0x49,0x49,0x49,0x89,0x91,0x12,0x22,0x04,0x08,0x00,
// 0x00,0x00,0x00,0x00,0x00,0x02,0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,/*"F:\User_DHX_Data\Program\通用库\图标库\图标库\wifi4.bmp",0*/
// /* (15 X 11 )*/
// 0xFC,0x02,0x02,0x02,0x24,0xA8,0xF8,0x88,0xF8,0xA8,0x24,0x02,0x02,0x02,0xFC,0x01,
// 0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x02,0x02,0x01,/*"E:\Program\通用库\图标库\图标库\蝴蝶结15-11.bmp",0*/
// /* (15 X 11 )*/

// };

const char number[10][80] = // 20*32
	{
		// 0
		{
			0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, // 0
		},

		// 1
		{
			0x00, 0x00, 0x70, 0x70, 0x38, 0x38, 0x1C, 0x1C, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
			0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, /*1*/
																											/* 1*/
		},
		// 2
		{
			0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
			0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03,
			0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\2-20X32.bmp",0*/
																											/* 2*/
		},
		// 3
		{
			0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
			0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
			0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\3-20X32.bmp",0*/
																											/* (3 )*/
		},
		// 4
		{
			0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
			0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
			0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\4-20X32.bmp",0*/
																											/* (4 )*/
		},
		// 5
		{
			0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
			0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
			0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\5-20X32.bmp",0*/
																											/* (20 X 32 )*/
		},
		// 6
		{
			0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
			0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03,
			0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\6-20X32.bmp",0*/
																											/* (20 X 32 )*/
		},

		{
			0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xfF, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\7-20X32.bmp",0*/
																										   /* (20 X 32 )*/
		},
		{
			0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
			0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03,
			0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\8-20X32.bmp",0*/
																											/* (20 X 32 )*/
		},
		{
			0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
			0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
			0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
			0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0,
			0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, /*"F:\ÐÂ½¨ÎÄ¼þ¼Ð\Æô·²¿Æ´´AT51V105Àý³Ì\ÏîÄ¿¹¤³Ì\×Ö¿â\9-20X32.bmp",0*/
																											/* (20 X 32 )*/
		}

};

const char heating[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x38, 0x1C, 0x07,
	0x07, 0x1C, 0x38, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x70, 0x3C, 0x0F, 0xC3, 0x20, 0x10, 0xC0, 0x20,
	0x10, 0xC0, 0x20, 0x10, 0x03, 0x0F, 0x3C, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xC0, 0xF0, 0x3C, 0x0E, 0x07, 0x01, 0x80, 0x80, 0x80, 0x80, 0xC1, 0xA6, 0x98, 0xC1,
	0xA6, 0x98, 0xC1, 0xA6, 0x98, 0x80, 0x80, 0x80, 0x01, 0x07, 0x0E, 0x3C, 0xF0, 0xC0, 0x80, 0x00,
	0x06, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
	0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x0F, 0x06, /*"E:\Program\通用库\图标库\图标库\加热中32-28.bmp",0*/
																									/* (32 X 28 )*/

};
/* (32 X 28 )*/

const char page2_bmp0[] = {
	4, 56, 28, 0x04, 0x02, 0xFF, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x04, 0x04,
	0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0xE0, 0x10, 0x10,
	0x08, 0xC8, 0x24, 0x14, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x80, 0x40,
	0x20, 0x10, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01,
	0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x50, 0x48, 0xC8, 0x44, 0x44, 0x42, 0x53, 0xC9, 0xC7,
	0xC0, 0xD0, 0xC9, 0xC6, 0xC0, 0xD0, 0xC9, 0xC6, 0xC0, 0x50, 0x49, 0x46, 0x40, 0xC0, 0x40, 0x40,
	0x20, 0x20, 0xFF, 0x24, 0x22, 0x21, 0x20, 0x20, 0xA0, 0xA0, 0x60, 0x60, 0x20, 0x20, 0x10, 0x10,
	0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
	0x02, 0xFF, 0x02, 0x02, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x02, 0x02,
	0xC2, 0x7A, 0x7A, 0xC2, 0x02, 0xFF, 0x02, 0x02, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x0F, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0F, 0x05, 0x05, /*"E:\Program\通用库\图标库\图标库\加热模式64-32.bmp",0*/
																									/* (56 X 28 )*/
};
const char page2_bmp1[] = {
	1, 61, 32, 0x04, 0x02, 0xFF, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x08, 0x04,
	0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
	0x04, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0xFF, 0x24, 0x22, 0x21, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0xA8, 0x70, 0x20, /*"E:\Program\通用库\图标库\图标库\曲线64-32.bmp",0*/
							/* (61 X 32 )*/
};
const char page2_bmp2[] = {
	16, 32, 32, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x30, 0x80, 0x40, 0x40, 0x20, 0x23, 0x13, 0x13, 0x13, 0x1F,
	0x1F, 0x13, 0x13, 0x13, 0x23, 0x20, 0x40, 0x40, 0x80, 0x30, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x81, 0x71, 0x0C, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0C, 0x71, 0x81, 0x00, 0x00,
	0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F,
	0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, /*"E:\Program\通用库\图标库\图标库\定时器32-32.bmp",0*/
																									/* (32 X 32 )*/
};

const char page2_bmp3[] = {
	9, 46, 32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0,
	0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
	0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
	0x7F, 0x7F, 0x7F, 0xFC, 0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xE0, 0xC0, 0x00, 0xC0, 0xE7, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xDF, 0x11, 0x11, 0x11, 0xDF, 0xFF, 0xFF, 0xFF, 0x1F, 0xEF, 0xD7, 0xBB, 0xBB,
	0x7B, 0xBB, 0xBB, 0xD7, 0xEF, 0x1E, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE,
	0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0xFF,
	0xEF, 0xEF, 0xE0, 0xE0, 0xE0, 0xEF, 0xEF, 0xFF, 0xFF, 0xFC, 0xFB, 0xF5, 0xEE, 0xEE, 0xEF, 0xEE,
	0xEE, 0xF5, 0xFB, 0xFC, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,
	0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, /*"E:\Program\通用库\图标库\图标库\IOT.bmp",0*/
													/* (46 X 32 )*/
};

const char page2_bmp4[] = {
	16, 32, 32, 0x00, 0x00, 0x00, 0x00, 0x70, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E,
	0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x01, 0x03, 0x01, 0x00, 0xC0, 0xF0, 0x38, 0x18, 0x0C, 0x0C,
	0x0C, 0x18, 0x38, 0xF0, 0xC0, 0x00, 0x01, 0x03, 0x01, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x80, 0xC0, 0x80, 0x00, 0x03, 0x0F, 0x1C, 0x18, 0x30, 0x30,
	0x30, 0x18, 0x1C, 0x0F, 0x03, 0x00, 0x80, 0xC0, 0x80, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0E, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C,
	0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, /*"E:\Program\通用库\图标库\图标库\光32-32.bmp",0*/
																									/* (32 X 32 )*/
};
const char page2_bmp5[] = {
	16, 31, 32, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xF0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0xC0,
	0xE0, 0xE0, 0xE0, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x1F, 0x0F, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x0F, 0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xE0, 0xE0, 0xE0, 0xE0, 0x03, 0x07,
	0x07, 0x07, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
	0xF0, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00,
	0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x03, 0x07, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x07,
	0x07, 0x03, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, /*"E:\Program\通用库\图标库\图标库\齿轮31-32.bmp",0*/
																			/* (31 X 32 )*/
};
const char page2_bmp6[] = {
	16, 32, 32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFC, 0xFE, 0x7E, 0x7E,
	0x7E, 0x7E, 0xFE, 0xFC, 0xF8, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x80, 0xE0, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x30,
	0x30, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE0, 0x80,
	0x07, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7C,
	0x7C, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, /*"E:\Program\通用库\图标库\图标库\感叹号32-32.bmp",0*/
																									/* (32 X 32 )*/
};
const char page2_bmp7[] = {
	16, 32, 32, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFE, 0xFE, 0xBF, 0xBF, 0xBF, 0xFF, 0x1F, 0xCF,
	0x67, 0xCF, 0x1F, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xC0, 0x80, 0x00, 0x00,
	0xF0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7E, 0x3E, 0x9F, 0xC0, 0x7F,
	0x00, 0x7F, 0xC0, 0x9F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF0,
	0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xE7, 0xEE, 0xCC,
	0xC8, 0xCC, 0xEE, 0xE7, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x07,
	0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x9F, 0xCF, 0xE7, 0xF3, 0xF9, 0xFC,
	0xFC, 0xF9, 0xF3, 0xE7, 0xCF, 0x8F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, /*"C:\Users\DHX\Desktop\温度.bmp",0*/
};

const char page2_bmp8[] = {
	16, 32, 32, 0x00, 0xF8, 0xFC, 0xF8, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x78, 0x7C, 0x3C, 0x1E, 0x1E, 0x1E,
	0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1C, 0x3C, 0x7C, 0xF8, 0xF0, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3D, 0x3C, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x0F, 0x0F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x70, 0xF0, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x3C, 0xBC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x1E, 0x3C, 0x38, 0x78, 0x78, 0x78, 0x70,
	0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3E, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x1F, 0x3F, 0x3F, /*"C:\Users\DHX\Desktop\恢复系统默认.bmp",0*/
};

const char less[] = {
	16, 30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x90, 0x48, 0x24, 0x12, 0x09, 0x07,
	0xC0, 0x20, 0x10, 0xC8, 0x24, 0x12, 0x09, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x02, 0x04, 0x09, 0x12, 0x24, 0x48, 0x90, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x09, 0x12, 0x24, 0x38, /*"E:\Program\通用库\图标库\图标库\小于16-30.bmp",0*/
																									/* (16 X 30 )*/
};

#endif
