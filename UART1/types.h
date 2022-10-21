#ifndef TYPES_H
#define TYPES_H


typedef unsigned char u8_t;
typedef signed char s8_t;
typedef unsigned int u16_t;
typedef signed int s16_t;

typedef struct
{
	u8_t B0:1;
	u8_t B1:1;
	u8_t B2:1;
	u8_t B3:1;
	u8_t B4:1;
	u8_t B5:1;
	u8_t B6:1;
	u8_t B7:1;
}bits;

typedef union
{
	bits bit;
	u8_t byte;
}bit_byte_def_t;

#define NULL	0
#endif
