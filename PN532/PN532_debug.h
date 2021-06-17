#ifndef __DEBUG_H__
#define __DEBUG_H__

//#define DEBUG_PN532

#include "Arduino.h"

#ifdef ARDUINO_SAMD_VARIANT_COMPLIANCE
    #define SERIAL SerialUSB
#else
    #define SERIAL Serial
#endif

#ifdef DEBUG_PN532
#define DMSG(args...)       SERIAL.print(args)
#define DMSG_STR(str)       SERIAL.println(str)
#define DMSG_HEX(num)       SERIAL.print(' '); SERIAL.print((num>>4)&0x0F, HEX); SERIAL.print(num&0x0F, HEX)
#define DMSG_INT(num)       SERIAL.print(' '); SERIAL.print(num)
#else
#define DMSG(args...)
#define DMSG_STR(str)
#define DMSG_HEX(num)
#define DMSG_INT(num)
#endif

#endif
