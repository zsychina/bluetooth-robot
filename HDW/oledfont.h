#ifndef _OLED_FONT_H_
#define _OLED_FONT_H_

//1206 ASCII�ַ�������
const unsigned char ascii_1206[95][12]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x30,0x00,0x40,0x00,0x30,0x00,0x40,0x00,0x00,0x00},/*""",2*/
{0x09,0x00,0x0B,0xC0,0x3D,0x00,0x0B,0xC0,0x3D,0x00,0x09,0x00},/*"#",3*/
{0x18,0xC0,0x24,0x40,0x7F,0xE0,0x22,0x40,0x31,0x80,0x00,0x00},/*"$",4*/
{0x18,0x00,0x24,0xC0,0x1B,0x00,0x0D,0x80,0x32,0x40,0x01,0x80},/*"%",5*/
{0x03,0x80,0x1C,0x40,0x27,0x40,0x1C,0x80,0x07,0x40,0x00,0x40},/*"&",6*/
{0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x20,0x40,0x40,0x20},/*"(",8*/
{0x00,0x00,0x40,0x20,0x20,0x40,0x1F,0x80,0x00,0x00,0x00,0x00},/*")",9*/
{0x09,0x00,0x06,0x00,0x1F,0x80,0x06,0x00,0x09,0x00,0x00,0x00},/*"*",10*/
{0x04,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x04,0x00,0x00,0x00},/*"+",11*/
{0x00,0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x20,0x01,0xC0,0x06,0x00,0x38,0x00,0x40,0x00,0x00,0x00},/*"/",15*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"0",16*/
{0x00,0x00,0x10,0x40,0x3F,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"1",17*/
{0x18,0xC0,0x21,0x40,0x22,0x40,0x24,0x40,0x18,0x40,0x00,0x00},/*"2",18*/
{0x10,0x80,0x20,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"3",19*/
{0x02,0x00,0x0D,0x00,0x11,0x00,0x3F,0xC0,0x01,0x40,0x00,0x00},/*"4",20*/
{0x3C,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x23,0x80,0x00,0x00},/*"5",21*/
{0x1F,0x80,0x24,0x40,0x24,0x40,0x34,0x40,0x03,0x80,0x00,0x00},/*"6",22*/
{0x30,0x00,0x20,0x00,0x27,0xC0,0x38,0x00,0x20,0x00,0x00,0x00},/*"7",23*/
{0x1B,0x80,0x24,0x40,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"8",24*/
{0x1C,0x00,0x22,0xC0,0x22,0x40,0x22,0x40,0x1F,0x80,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x04,0x60,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x00,0x00,0x04,0x00,0x0A,0x00,0x11,0x00,0x20,0x80,0x40,0x40},/*"<",28*/
{0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x09,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x40,0x40,0x20,0x80,0x11,0x00,0x0A,0x00,0x04,0x00},/*">",30*/
{0x18,0x00,0x20,0x00,0x23,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"?",31*/
{0x1F,0x80,0x20,0x40,0x27,0x40,0x29,0x40,0x1F,0x40,0x00,0x00},/*"@",32*/
{0x00,0x40,0x07,0xC0,0x39,0x00,0x0F,0x00,0x01,0xC0,0x00,0x40},/*"A",33*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x40,0x1B,0x80,0x00,0x00},/*"B",34*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x30,0x80,0x00,0x00},/*"C",35*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"D",36*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x40,0x30,0xC0,0x00,0x00},/*"E",37*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x2E,0x00,0x30,0x00,0x00,0x00},/*"F",38*/
{0x0F,0x00,0x10,0x80,0x20,0x40,0x22,0x40,0x33,0x80,0x02,0x00},/*"G",39*/
{0x20,0x40,0x3F,0xC0,0x04,0x00,0x04,0x00,0x3F,0xC0,0x20,0x40},/*"H",40*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x40,0x20,0x40,0x00,0x00},/*"I",41*/
{0x00,0x60,0x20,0x20,0x20,0x20,0x3F,0xC0,0x20,0x00,0x20,0x00},/*"J",42*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x0B,0x00,0x30,0xC0,0x20,0x40},/*"K",43*/
{0x20,0x40,0x3F,0xC0,0x20,0x40,0x00,0x40,0x00,0x40,0x00,0xC0},/*"L",44*/
{0x3F,0xC0,0x3C,0x00,0x03,0xC0,0x3C,0x00,0x3F,0xC0,0x00,0x00},/*"M",45*/
{0x20,0x40,0x3F,0xC0,0x0C,0x40,0x23,0x00,0x3F,0xC0,0x20,0x00},/*"N",46*/
{0x1F,0x80,0x20,0x40,0x20,0x40,0x20,0x40,0x1F,0x80,0x00,0x00},/*"O",47*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x24,0x00,0x18,0x00,0x00,0x00},/*"P",48*/
{0x1F,0x80,0x21,0x40,0x21,0x40,0x20,0xE0,0x1F,0xA0,0x00,0x00},/*"Q",49*/
{0x20,0x40,0x3F,0xC0,0x24,0x40,0x26,0x00,0x19,0xC0,0x00,0x40},/*"R",50*/
{0x18,0xC0,0x24,0x40,0x24,0x40,0x22,0x40,0x31,0x80,0x00,0x00},/*"S",51*/
{0x30,0x00,0x20,0x40,0x3F,0xC0,0x20,0x40,0x30,0x00,0x00,0x00},/*"T",52*/
{0x20,0x00,0x3F,0x80,0x00,0x40,0x00,0x40,0x3F,0x80,0x20,0x00},/*"U",53*/
{0x20,0x00,0x3E,0x00,0x01,0xC0,0x07,0x00,0x38,0x00,0x20,0x00},/*"V",54*/
{0x38,0x00,0x07,0xC0,0x3C,0x00,0x07,0xC0,0x38,0x00,0x00,0x00},/*"W",55*/
{0x20,0x40,0x39,0xC0,0x06,0x00,0x39,0xC0,0x20,0x40,0x00,0x00},/*"X",56*/
{0x20,0x00,0x38,0x40,0x07,0xC0,0x38,0x40,0x20,0x00,0x00,0x00},/*"Y",57*/
{0x30,0x40,0x21,0xC0,0x26,0x40,0x38,0x40,0x20,0xC0,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0x7F,0xE0,0x40,0x20,0x40,0x20,0x00,0x00},/*"[",59*/
{0x00,0x00,0x70,0x00,0x0C,0x00,0x03,0x80,0x00,0x40,0x00,0x00},/*"\",60*/
{0x00,0x00,0x40,0x20,0x40,0x20,0x7F,0xE0,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x20,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
{0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x00,0x00,0x02,0x80,0x05,0x40,0x05,0x40,0x03,0xC0,0x00,0x40},/*"a",65*/
{0x20,0x00,0x3F,0xC0,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"b",66*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x06,0x40,0x00,0x00},/*"c",67*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x24,0x40,0x3F,0xC0,0x00,0x40},/*"d",68*/
{0x00,0x00,0x03,0x80,0x05,0x40,0x05,0x40,0x03,0x40,0x00,0x00},/*"e",69*/
{0x00,0x00,0x04,0x40,0x1F,0xC0,0x24,0x40,0x24,0x40,0x20,0x00},/*"f",70*/
{0x00,0x00,0x02,0xE0,0x05,0x50,0x05,0x50,0x06,0x50,0x04,0x20},/*"g",71*/
{0x20,0x40,0x3F,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"h",72*/
{0x00,0x00,0x04,0x40,0x27,0xC0,0x00,0x40,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x10,0x00,0x10,0x04,0x10,0x27,0xE0,0x00,0x00,0x00,0x00},/*"j",74*/
{0x20,0x40,0x3F,0xC0,0x01,0x40,0x07,0x00,0x04,0xC0,0x04,0x40},/*"k",75*/
{0x20,0x40,0x20,0x40,0x3F,0xC0,0x00,0x40,0x00,0x40,0x00,0x00},/*"l",76*/
{0x07,0xC0,0x04,0x00,0x07,0xC0,0x04,0x00,0x03,0xC0,0x00,0x00},/*"m",77*/
{0x04,0x40,0x07,0xC0,0x04,0x40,0x04,0x00,0x03,0xC0,0x00,0x40},/*"n",78*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x40,0x03,0x80,0x00,0x00},/*"o",79*/
{0x04,0x10,0x07,0xF0,0x04,0x50,0x04,0x40,0x03,0x80,0x00,0x00},/*"p",80*/
{0x00,0x00,0x03,0x80,0x04,0x40,0x04,0x50,0x07,0xF0,0x00,0x10},/*"q",81*/
{0x04,0x40,0x07,0xC0,0x02,0x40,0x04,0x00,0x04,0x00,0x00,0x00},/*"r",82*/
{0x00,0x00,0x06,0x40,0x05,0x40,0x05,0x40,0x04,0xC0,0x00,0x00},/*"s",83*/
{0x00,0x00,0x04,0x00,0x1F,0x80,0x04,0x40,0x00,0x40,0x00,0x00},/*"t",84*/
{0x04,0x00,0x07,0x80,0x00,0x40,0x04,0x40,0x07,0xC0,0x00,0x40},/*"u",85*/
{0x04,0x00,0x07,0x00,0x04,0xC0,0x01,0x80,0x06,0x00,0x04,0x00},/*"v",86*/
{0x06,0x00,0x01,0xC0,0x07,0x00,0x01,0xC0,0x06,0x00,0x00,0x00},/*"w",87*/
{0x04,0x40,0x06,0xC0,0x01,0x00,0x06,0xC0,0x04,0x40,0x00,0x00},/*"x",88*/
{0x04,0x10,0x07,0x10,0x04,0xE0,0x01,0x80,0x06,0x00,0x04,0x00},/*"y",89*/
{0x00,0x00,0x04,0x40,0x05,0xC0,0x06,0x40,0x04,0x40,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x04,0x00,0x7B,0xE0,0x40,0x20,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x40,0x20,0x7B,0xE0,0x04,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x40,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x20,0x00,0x40,0x00},/*"~",94*/
};

//the logo of robomaster
/*const unsigned char LOGO_ROBOMASTER[128][8]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x40,0x00,0x00,0x00,0x00,0x00,0x00,0xFE},
{0x60,0x00,0x00,0x00,0x00,0x10,0x00,0x6C},
{0x70,0x00,0x00,0x00,0x00,0x30,0x00,0x00},
{0x78,0x00,0x00,0x00,0x00,0xF0,0x00,0x7C},
{0x7C,0x00,0x00,0x00,0x07,0xF0,0x00,0xFE},
{0x7E,0x00,0x00,0x00,0x3F,0xF0,0x00,0xC6},
{0x7F,0x00,0x00,0x01,0xFF,0xF0,0x00,0xC6},
{0x7F,0x80,0x00,0x0F,0xFF,0xF0,0x00,0xC6},
{0x7F,0xC0,0x00,0x7F,0xFF,0xF0,0x00,0xFE},
{0x7F,0xE0,0x03,0xFF,0xFF,0xF0,0x00,0x7C},
{0x7F,0xF0,0x3F,0xFF,0xFF,0xF0,0x00,0x02},
{0x7F,0xF8,0x3F,0xFF,0xFF,0xF0,0x00,0x06},
{0x7F,0xFC,0x3F,0xFF,0xFF,0xF0,0x00,0x1E},
{0x7F,0xFE,0x3F,0xFF,0xFF,0xF0,0x00,0xBC},
{0x7F,0xFF,0x3F,0xFF,0xFF,0xF0,0x00,0xE0},
{0x7F,0xFF,0xBF,0xFF,0xFF,0x80,0x00,0xF8},
{0x7F,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x3E},
{0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x0E},
{0x7F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xB8},
{0x7F,0xFF,0xFF,0xF8,0x00,0x00,0x00,0xE0},
{0x7F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0xFE},
{0x7F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x1E},
{0x7F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x02},
{0x7F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00},
{0x7F,0xEF,0xFF,0xF0,0x02,0x00,0x00,0x06},
{0x7F,0xE7,0xFF,0xF0,0x02,0x00,0x00,0x0E},
{0x7F,0xE3,0xFF,0xF0,0x02,0x00,0x00,0x1C},
{0x7F,0xE1,0xFF,0xF8,0x03,0x00,0x00,0xBA},
{0x7F,0xE0,0xFF,0xFC,0x03,0x00,0x00,0xF6},
{0x7F,0xE0,0x7F,0xFE,0x03,0x80,0x00,0xE6},
{0x7F,0xE0,0x3F,0xFF,0x03,0x80,0x00,0xF6},
{0x7F,0xE0,0x3F,0xFF,0x83,0xC0,0x00,0x3E},
{0x7F,0xE0,0x3F,0xFF,0xC3,0xC0,0x00,0x0E},
{0x7F,0xE0,0x3F,0xFF,0xE3,0xE0,0x00,0x02},
{0x7F,0xE0,0x3F,0xFF,0xF3,0xE0,0x00,0x00},
{0x7F,0xE0,0x3F,0xFF,0xFB,0xF0,0x00,0x02},
{0x7F,0xE0,0x3F,0xFF,0xFF,0xF0,0x00,0x66},
{0x7F,0xE0,0x3F,0xFF,0xFF,0xF8,0x00,0xF6},
{0x7F,0xE0,0x3F,0xFF,0xFF,0xF8,0x00,0xD6},
{0x7F,0xE0,0x3F,0xFF,0xFF,0xFC,0x00,0xD6},
{0x7F,0xF0,0x7F,0xFF,0xFF,0xFC,0x00,0xD6},
{0x7F,0xF8,0xFF,0xF7,0xFF,0xFE,0x00,0xD6},
{0x7F,0xFF,0xFF,0xF3,0xFF,0xFE,0x00,0xDE},
{0x3F,0xFF,0xFF,0xE1,0xFF,0xFF,0x00,0x8C},
{0x3F,0xFF,0xFF,0xE0,0xFF,0xCF,0x00,0x40},
{0x1F,0xFF,0xFF,0xC0,0x7F,0xC7,0x80,0xC0},
{0x1F,0xFF,0xFF,0xC0,0x3F,0xC3,0x80,0xC0},
{0x0F,0xFF,0xFF,0x80,0x1F,0xC1,0xC0,0xFE},
{0x07,0xFF,0xFF,0x00,0x0F,0xC0,0xC0,0xFE},
{0x03,0xFF,0xFE,0x00,0x07,0xC0,0x60,0xC0},
{0x01,0xFF,0xFC,0x00,0x03,0xC0,0x20,0xC0},
{0x00,0x7F,0xF0,0x00,0x01,0xC0,0x00,0x86},
{0x00,0x0F,0x80,0x00,0x00,0xC0,0x00,0x16},
{0x00,0x00,0x00,0x00,0x00,0x40,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD0},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD6},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};*/

//the logo of dlut
const unsigned char LOGO_DLUT[128][8]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00},
{0x00,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x00,0x00},
{0x00,0x00,0x3F,0xFE,0x3F,0xFE,0x00,0x00},
{0x00,0x00,0xFF,0x80,0x00,0xFF,0x80,0x00},
{0x00,0x03,0xFC,0x0D,0xB0,0x1F,0xC0,0x00},
{0x00,0x07,0xF0,0xEF,0xB6,0x07,0xF0,0x00},
{0x00,0x0F,0xC0,0xEF,0xBE,0xE1,0xF8,0x00},
{0x00,0x1F,0x90,0xFF,0xFF,0xE0,0xFC,0x00},
{0x00,0x3E,0x78,0xFA,0x3B,0xE0,0x3E,0x00},
{0x00,0x7D,0xF8,0x40,0x00,0xC0,0x1F,0x00},
{0x00,0xFB,0xF8,0x3F,0xEE,0x00,0x0F,0x80},
{0x01,0xF3,0xF9,0xFF,0xEF,0xC0,0x17,0xC0},
{0x03,0xEF,0xE7,0xFF,0xEF,0xF0,0x13,0xE0},
{0x07,0xDF,0xCF,0xFF,0xEF,0xF8,0x3F,0xE0},
{0x07,0xBF,0x3F,0xFD,0xEF,0xFE,0x30,0xF0},
{0x0F,0x3E,0x7F,0xE1,0xE3,0xFF,0x70,0xF8},
{0x0F,0x7E,0xFF,0x03,0xE0,0xFF,0xE0,0x78},
{0x1E,0xF9,0xFE,0x3F,0xEE,0x3F,0x80,0x3C},
{0x1E,0xF9,0xFC,0xFF,0xEF,0x9F,0xC1,0xBC},
{0x3D,0xDB,0xF9,0xFF,0xEF,0xCF,0xE3,0xDE},
{0x3D,0xF7,0xF3,0xFF,0xEF,0xE7,0xE3,0xFE},
{0x39,0xE7,0xE7,0xFD,0xEF,0xF3,0xF7,0xAE},
{0x7B,0x6F,0xCF,0xE1,0xE3,0xF9,0xF7,0x0F},
{0x7B,0xCF,0xDF,0xC1,0xE1,0xF9,0xFE,0x0F},
{0x73,0xCF,0x9F,0x81,0xE0,0xFC,0xF8,0x07},
{0x77,0xDF,0xBF,0x19,0xE2,0x7C,0xF8,0x07},
{0x77,0x9F,0x3E,0x1F,0xE7,0xBE,0xFC,0x77},
{0xF4,0x1F,0x3E,0x3F,0xE7,0xBE,0x7D,0xF7},
{0xFF,0x9F,0xFC,0x3F,0xE7,0x9E,0x7D,0xF7},
{0xFC,0xFF,0xFC,0x7F,0xF7,0xDF,0xFD,0xFF},
{0xEC,0x7F,0xFC,0xFE,0xFF,0x9F,0xFD,0xD7},
{0xEF,0xFF,0xFD,0xFF,0xFB,0x9F,0xFC,0x03},
{0xEF,0x7F,0xFC,0xFE,0xFF,0x9F,0xFC,0x07},
{0xEC,0x7F,0xFC,0x7F,0xF7,0x9F,0xFC,0x07},
{0xF0,0x1F,0xFC,0x3F,0xE1,0x9E,0x7C,0x37},
{0xF0,0x1F,0x3E,0x3F,0xE7,0xFE,0x7C,0xF7},
{0x70,0x1F,0x3E,0x1F,0xE7,0xFE,0xFC,0xE7},
{0x73,0xDF,0xBF,0x19,0xE7,0xFC,0xF8,0x67},
{0x76,0xCF,0x9F,0x81,0xE0,0xFC,0xF8,0x07},
{0x7F,0xCF,0xDF,0xC1,0xE1,0xF9,0xF8,0x0F},
{0x78,0xEF,0xCF,0xE1,0xE3,0xF9,0xF0,0x0F},
{0x3B,0xC7,0xE7,0xF9,0xEF,0xF3,0xF5,0x8E},
{0x3D,0xC7,0xF3,0xFF,0xEF,0xE7,0xE7,0xFE},
{0x3D,0x83,0xF9,0xFF,0xEF,0xCF,0xE3,0xDE},
{0x1E,0x01,0xFC,0xFF,0xEF,0x9F,0xC0,0xBC},
{0x1E,0x05,0xFE,0x3F,0xEE,0x3F,0xC0,0xBC},
{0x0F,0x0C,0xFF,0x07,0xE0,0xFF,0x80,0xF8},
{0x0F,0x3B,0x7F,0xE1,0xE3,0xFF,0x78,0xF8},
{0x07,0xB7,0xBF,0xFD,0xEF,0xFE,0xFC,0xF0},
{0x07,0xDF,0x9F,0xFF,0xEF,0xF8,0xFD,0xE0},
{0x03,0xEF,0xE7,0xFF,0xEF,0xF0,0x7F,0xE0},
{0x01,0xF7,0xB9,0xFF,0xEF,0xC0,0x1F,0xC0},
{0x00,0xF9,0xDC,0x7F,0xEE,0x00,0x0F,0x80},
{0x00,0x7D,0xFF,0x81,0xE0,0x80,0x1F,0x00},
{0x00,0x3E,0x3F,0xFF,0x6E,0xC0,0x3E,0x00},
{0x00,0x1F,0x1F,0xFF,0xFE,0xE0,0xFC,0x00},
{0x00,0x0F,0xC7,0xFE,0xFF,0xE1,0xF8,0x00},
{0x00,0x07,0xF0,0x7C,0xFE,0x87,0xF0,0x00},
{0x00,0x03,0xFC,0x04,0xE0,0x1F,0xC0,0x00},
{0x00,0x00,0xFF,0x80,0x00,0xFF,0x80,0x00},
{0x00,0x00,0x3F,0xFE,0x3F,0xFE,0x00,0x00},
{0x00,0x00,0x0F,0xFF,0xFF,0xF8,0x00,0x00},
{0x00,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};

//the logo1 of dut0bug
/*const unsigned char LOGO1_DUT0BUG[128][8]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00},
{0x00,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00},
{0x00,0x00,0x0F,0xFF,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x3F,0x80,0x01,0xFC,0x00,0x00},
{0x00,0x00,0xFC,0x00,0x00,0x3F,0x00,0x00},
{0x00,0x01,0xF0,0x00,0x00,0x0F,0xC0,0x00},
{0x00,0x03,0xC0,0x00,0x00,0x03,0xE0,0x00},
{0x00,0x07,0x80,0x00,0xC0,0x00,0xF0,0x00},
{0x00,0x0F,0x00,0x07,0xFC,0x00,0x78,0x00},
{0x00,0x3E,0x00,0x3F,0xFE,0x00,0x3C,0x00},
{0x00,0xE8,0x00,0x7F,0xFF,0x00,0x1E,0x00},
{0x00,0xFC,0x00,0xFF,0xFF,0x80,0x0F,0x00},
{0x01,0xF8,0x01,0xFF,0xFF,0xC0,0x07,0x80},
{0x01,0x60,0x01,0xFF,0xFF,0xE0,0x03,0x80},
{0x00,0x20,0x03,0xFF,0xFF,0xE0,0x01,0xC0},
{0x04,0x00,0x03,0xFF,0xFF,0xF0,0x01,0xC0},
{0x07,0x00,0x03,0xFF,0xFF,0xF0,0x00,0xE0},
{0x0F,0xC0,0x03,0xFF,0xFF,0xF0,0x00,0xE0},
{0x0F,0xC0,0x03,0xFF,0xFF,0xF0,0x00,0x70},
{0x1F,0x80,0x03,0xFF,0xFF,0xF0,0x00,0x18},
{0x17,0x80,0x03,0xFF,0xFF,0xF0,0x01,0xB8},
{0x03,0x00,0x03,0xFF,0xFF,0xF0,0x00,0xF8},
{0x00,0x00,0x03,0xFF,0xFF,0xF0,0x00,0xF8},
{0x2A,0x00,0x03,0xFF,0xFF,0xE0,0x00,0xDC},
{0x3E,0x00,0x03,0xFF,0xFF,0xC0,0x00,0xF4},
{0x7E,0x00,0x07,0xFF,0xFF,0xC0,0x00,0xE0},
{0x7E,0x00,0x07,0xFF,0xFF,0x80,0x00,0x04},
{0x7E,0x00,0x07,0xFF,0xFF,0x80,0x00,0x3C},
{0x3E,0x00,0x07,0x8F,0xFF,0x80,0x00,0x3C},
{0x00,0x00,0x07,0x80,0xFF,0x80,0x00,0x3C},
{0x00,0x00,0x07,0x80,0xFF,0x80,0x00,0x00},
{0x26,0x00,0x07,0x80,0xFF,0x80,0x00,0x3C},
{0x26,0x00,0x0F,0x80,0xE3,0x80,0x00,0x04},
{0x3E,0x00,0x03,0x80,0x03,0x80,0x00,0x7C},
{0x22,0x00,0x03,0xE0,0x03,0x80,0x00,0x0C},
{0x22,0x00,0x03,0x00,0x03,0x80,0x00,0x70},
{0x00,0x00,0x03,0x00,0x1F,0x80,0x00,0xD8},
{0x01,0x00,0x03,0x00,0xFF,0x80,0x00,0xE8},
{0x03,0x00,0x03,0x00,0xFF,0x80,0x00,0x38},
{0x0B,0x00,0x03,0x01,0xFF,0x80,0x00,0x70},
{0x0E,0x00,0x01,0x0F,0xFF,0x80,0x00,0x70},
{0x0F,0x80,0x01,0x1F,0xFF,0x80,0x00,0x70},
{0x04,0x80,0x01,0x3F,0xE3,0x80,0x00,0xE0},
{0x04,0x00,0x00,0x3E,0x03,0x80,0x01,0xE0},
{0x00,0x40,0x00,0x38,0x03,0x80,0x01,0xC0},
{0x01,0x70,0x00,0x70,0x73,0x80,0x03,0x80},
{0x01,0xF0,0x00,0x70,0x7F,0x80,0x07,0x80},
{0x01,0xF0,0x00,0x70,0x7F,0x80,0x0F,0x00},
{0x00,0xF8,0x00,0x70,0x7F,0x80,0x0E,0x00},
{0x00,0x7C,0x00,0x70,0x7C,0x00,0x3C,0x00},
{0x00,0x1E,0x00,0x70,0x00,0x00,0x78,0x00},
{0x00,0x0F,0x80,0x70,0x00,0x00,0xF0,0x00},
{0x00,0x07,0xC0,0x00,0x00,0x01,0xE0,0x00},
{0x00,0x01,0xF0,0x00,0x00,0x07,0xC0,0x00},
{0x00,0x00,0xFC,0x00,0x00,0x1F,0x80,0x00},
{0x00,0x00,0x3F,0x00,0x00,0xFE,0x00,0x00},
{0x00,0x00,0x0F,0xF8,0x1F,0xF8,0x00,0x00},
{0x00,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};*/

//the logo2 of dut0bug
const unsigned char LOGO2_DUT0BUG[128][8]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00},
{0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00},
{0x00,0x00,0x00,0x03,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x1F,0xE3,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x1F,0xE3,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x1F,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x1F,0xE3,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x1F,0xE3,0xC0,0x00,0x00,0x00},
{0x00,0x00,0x1F,0xE2,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00},
{0x00,0x00,0x00,0x00,0x08,0x70,0x00,0x00},
{0x00,0x00,0x00,0xF1,0x38,0x70,0x00,0x00},
{0x00,0x00,0x0E,0xF3,0x78,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xF8,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xFC,0xF0,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xFC,0xF0,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x1E,0xFD,0xFF,0xE0,0x00,0x00},
{0x00,0x00,0x1E,0xF1,0xEF,0xE0,0x00,0x00},
{0x00,0x00,0x3F,0xE1,0xEF,0xC0,0x00,0x00},
{0x00,0x00,0x3F,0xF0,0xE7,0xC0,0x00,0x00},
{0x00,0x00,0x3F,0xF0,0xE7,0xE0,0x00,0x00},
{0x00,0x00,0x3F,0xF0,0xEF,0xF0,0x00,0x00},
{0x00,0x00,0x3F,0xE0,0xFF,0xF0,0x00,0x00},
{0x00,0x00,0x3F,0xF0,0xFE,0xF0,0x00,0x00},
{0x00,0x00,0x3E,0xFC,0xFE,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xFC,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xFC,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xFF,0xF8,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xF7,0xF8,0x70,0x00,0x00},
{0x00,0x00,0x1E,0xF3,0x80,0x70,0x00,0x00},
{0x00,0x00,0x1C,0xF0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x07,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x87,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x07,0x87,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x0F,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0x80,0x00,0x00},
{0x00,0x00,0x07,0xFD,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00},
{0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x7F,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0x83,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xC0,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xE0,0x00,0x00,0x00},
{0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x00},
{0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFF,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xFE,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x80,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x00,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x03,0x03,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x03,0xC7,0xC0,0x00,0x00},
{0x00,0x00,0x07,0x03,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFF,0xC0,0x00,0x00},
{0x00,0x00,0x07,0xE3,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x00},
{0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};
const unsigned char BAD_APPLE[128][8]={

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x00},
{0x00,0x00,0x00,0x00,0x00,0x1F,0xF8,0x00},
{0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x0F},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x7F},
{0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF},
{0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF},
{0x00,0x00,0xFE,0x00,0x00,0x00,0x07,0xFF},
{0x00,0x07,0xFF,0x00,0x00,0x00,0x0F,0xFF},
{0x00,0x0F,0xFF,0x00,0x00,0x00,0x1F,0xFF},
{0x00,0x1F,0xFF,0x80,0x00,0x00,0x3F,0xFF},
{0x00,0x3F,0xFF,0xB8,0x00,0x07,0xFF,0xFF},
{0x00,0x7F,0xFF,0xFE,0x00,0x07,0xFF,0xFF},
{0x00,0xFF,0xFF,0xFF,0x00,0x03,0xFF,0xFF},
{0x00,0xFF,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF},
{0x00,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF},
{0x31,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0x00,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF},
{0x00,0x3F,0xFF,0xFF,0xFF,0xF0,0x0F,0xFF},
{0x00,0x07,0xFF,0xFF,0xFC,0x30,0x00,0x7F},
{0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x60},
{0x00,0x00,0x1F,0xFF,0xFF,0xC0,0x00,0x60},
{0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0xE0},
{0x00,0x00,0x00,0x00,0x01,0x00,0x00,0xC0},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};
	
#endif