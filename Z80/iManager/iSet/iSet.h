#ifndef __ISET_H__
#define __ISET_H__

class ISet;

#include "../../../z80.h"
#include "../../log/log.h"
#include "MAINIS/mainIs.h"

#include <stdint.h>

class ISet{

public:
    ISet(Z80*, Log*);

    //To get how many bytes of operators this IS needs
    uint8_t getOPBytes(uint8_t);

    //Execute the instruction specified
    void execIS(uint8_t*);

    //Get how many CPU cycles the IS needed
    uint8_t getISCycles(uint8_t);

private:
    Z80* z80;
    Log* log;
    MainIS* mainIS;

    uint16_t opsImplemented;
    uint8_t *opBytes;
};

#endif