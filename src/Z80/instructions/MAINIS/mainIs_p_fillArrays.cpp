#include "mainIs.h"

void MainIS::p_fillArrays(){

    //  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  A,  B,  C,  D,  E,  F
    this->_opBytes = new uint8_t[256] {
        0,  2,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0, 	0, 	1, 	0,     //0x00
        1,  2,  0,  0,  0,  0,  1,  0,  1,  0,  0,  0,  0, 	0, 	1, 	0,     //0x10
        1,  2,  2,  0,  0,  0,  1,  0,  1,  0,  2,  0,  0, 	0, 	1, 	0,     //0x20
        1,  2,  2,  0,  0,  0,  1,  0,  1,  0,  2,  0,  0, 	0, 	1, 	0,     //0x30

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x40
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x50
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x60
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x70

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x80
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0x90
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0xA0
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,     //0xB0

        0,  0,  2,  2,  2,  0,  1,  0,  0,  0,  2,  0,  2,  2,  1,  0,     //0xC0
        0,  0,  2,  1,  2,  0,  1,  0,  0,  0,  2,  1,  2,  0,  1,  0,     //0xD0
        0,  0,  2,  0,  2,  0,  1,  0,  0,  0,  2,  0,  2,  0,  1,  0,     //0xE0
        0,  0,  2,  0,  2,  0,  1,  0,  0,  0,  2,  0,  2,  0,  1,  0      //0xF0
    };

    //  Instructions marked with [opcode] will add their own
    //  cycles to the cpu, because their cycles are action-dependent
    //  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  A,  B,  C,  D,  E,  F
    this->_opCycles = new uint8_t[256]{
        4,  10, 7,  6,  4,  4,  7,  4,  4,  11, 7,  6,  4,  4,  7,  4,      //0x00
        0,  10, 7,  6,  4,  4,  7,  4,  12, 11, 7,  6,  4,  4,  7,  3,      //0x10      [0x10]
        0,  10, 16, 6,  4,  4,  7,  4,  0,  11, 16, 6,  4,  4,  7,  4,      //0x20      [0x20, 0x28]
        0,  10, 13, 6,  11, 11, 10, 4,  0,  11, 13, 6,  4,  4,  7,  4,      //0x30      [0x30, 0x38]

        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0x40
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0x50
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0x60
        7,  7,  7,  7,  7,  7,  4,  7,  4,  4,  4,  4,  4,  4,  7,  4,      //0x70
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0x80
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0x90
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0xA0
        4,  4,  4,  4,  4,  4,  7,  4,  4,  4,  4,  4,  4,  4,  7,  4,      //0xB0

        0,  10, 10, 10, 0,  11, 7,  11, 0,  10, 10, 0,  0,  17, 7,  11,     //0xC0      [0xC0, 0xC4, 0xC8]
        0,  10, 10, 11, 0,  11, 7,  11, 0,  4,  10, 11, 0,  0,  7,  11,     //0xD0      [0xD0, 0xD4, 0xD8, 0xDC]
        0,  10, 10, 19, 0,  11, 7,  11, 0,  4,  10, 4,  0,  0,  7,  11,     //0xE0      [0xE0, 0xE4, 0xE8, 0XEC]
        0,  10, 10, 4,  0,  11, 7,  11, 0,  6,  10, 4,  0,  0,  7,  11      //0xF0      [0xF0, 0xF4, 0xF8, 0xFC]
    };
}