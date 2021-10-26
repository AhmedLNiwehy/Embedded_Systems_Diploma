/*
 * Platform_Types.h
 *
 * platform types for STMmicroelectronics ST30 following mapping to the ANCI C types
 *
 *  Created on: Oct 26, 2021þ
 *      Author: Ahmed L_Niwehy
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


// Symbols :

#define CPU_TYPE           CPU_TYPE_32
#define CPU_BIT_ORDER      LSB_FIRST
#define CPU_BYTE_ORDER     LOW_BYTE_FIRST

// Types :

typedef unsigned char        boolean;

typedef signed char          int8_t;
typedef unsigned char        uint8_t;
typedef signed short         int16_t;
typedef unsigned short       uint16_t;
typedef signed int           int32_t;
typedef unsigned int         uint32_t;
typedef signed long long     int64_t;
typedef unsigned long long   uint64_t;

typedef int8_t    sint8;
typedef uint8_t   uint8;
typedef int16_t   sint16;
typedef uint16_t  uint16;
typedef int32_t   sint32;
typedef uint32_t  uint32;
typedef int64_t   sint64;
typedef uint64_t  uint64;

typedef volatile int8_t     vint8_t;
typedef volatile uint8_t    vuint8_t;
typedef volatile int16_t    vint16_t;
typedef volatile uint16_t   vuint16_t;
typedef volatile int32_t    vint32_t;
typedef volatile uint32_t   vuint32_t;
typedef volatile int64_t    vint64_t;
typedef volatile uint64_t   vuint64_t;


#endif /* PLATFORM_TYPES_H_ */
