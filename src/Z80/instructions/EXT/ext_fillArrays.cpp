#include "instructions/extIS.h"

void ExtIS::p_fillArrays(){
    FUN();

    //  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  A,  B,  C,  D,  E,  F
    this->_opBytes = new uint8_t[256]{
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x00-0x0F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x10-0x1F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x20-0x2F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x30-0x3F

        0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,      //0x40-0x4F
        0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,      //0x50-0x5F
        0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,      //0x60-0x6F
        0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x70-0x7F

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x80-0x8F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x90-0x9F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xA0-0xAF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xB0-0xBF

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xC0-0xCF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xD0-0xDF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xE0-0xEF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xF0-0xFF
    };

    //  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  A,  B,  C,  D,  E,  F
    this->_opCycles = new uint8_t[256]{
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x00-0x0F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x10-0x1F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x20-0x2F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x30-0x3F

        12, 12, 15, 20, 8,  14, 8,  9,  12, 12, 15, 20, 8,  14, 8,  9,      //0x40-0x4F
        12, 12, 15, 20, 8,  14, 8,  9,  12, 12, 15, 20, 8,  14, 8,  9,      //0x50-0x5F
        12, 12, 15, 20, 8,  14, 8,  9,  12, 12, 15, 20, 8,  14, 8,  9,      //0x60-0x6F
        12, 12, 15, 20, 8,  14, 8,  0,  12, 12, 15, 20, 8,  14, 8,  0,      //0x70-0x7F

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x80-0x8F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0x90-0x9F
        16, 16, 16, 16, 0,  0,  0,  0,  16, 16, 16, 16, 0,  0,  0,  0,      //0xA0-0xAF
        16, 16, 16, 16, 0,  0,  0,  0,  16, 16, 16, 16, 0,  0,  0,  0,      //0xB0-0xBF

        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xC0-0xCF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xD0-0xDF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xE0-0xEF
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,      //0xF0-0xFF
    };
}