#include "instructions/bitIS.h"

void BitIS::p_fillArrays(){
    FUN();

    //  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  A,  B,  C,  D,  E,  F
    this->_opCycles = new uint8_t[256]{
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x00
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x10
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x20
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x30

        8,  8,  8,  8,  8,  8,  12, 8,  8,  8,  8,  8,  8,  8,  12, 8,      //0x40
        8,  8,  8,  8,  8,  8,  12, 8,  8,  8,  8,  8,  8,  8,  12, 8,      //0x50
        8,  8,  8,  8,  8,  8,  12, 8,  8,  8,  8,  8,  8,  8,  12, 8,      //0x60
        8,  8,  8,  8,  8,  8,  12, 8,  8,  8,  8,  8,  8,  8,  12, 8,      //0x70

        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x80
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0x90
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xA0
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xB0
        
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xC0
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xD0
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xE0
        8,  8,  8,  8,  8,  8,  15, 8,  8,  8,  8,  8,  8,  8,  15, 8,      //0xF0
    };
}