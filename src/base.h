#ifndef BASE_H
#define BASE_H

#include <stdint.h>

// Sized types

typedef int8_t int8;
typedef uint8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;

// Boolean datatype

typedef uint8_t bool;

#define true 1
#define false 0

// Port access

uint8 inb( uint16 port );
uint16 inw( uint16 port );
void outb( uint16 port, uint8 value );

// Word to byte conversion

#define word_lbyte( x ) (x & 0xFF)
#define word_hbyte( x ) ((x & 0xFF00) >> 8)

// Dword to word conversion

#define dword_lword( x ) (x & 0xFFFF)
#define dword_hword( x ) ((x & 0xFFFF) >> 16)

#endif
