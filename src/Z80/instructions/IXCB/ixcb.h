#ifndef __IXCB_H__
#define __IXCB_H__

class IXCB;

#include "../../log/log.h"
#include "../../z80.h"

#include "../../cpu/instruction/instruction.h"
#include "../../cpufunctions/rotate/rotate.h"
#include "../../cpufunctions/bit/bit.h"

class IXCB{

public:
    IXCB(Z80* z80);
    ~IXCB();

    void                        fetch(Instruction&);

    void                        exec(Instruction);          //These instructions don't have any operands!

private:
    Z80* z;

    Rotate* rot;
    Bit* bit;

    void                        p_fillArrays();
    uint8_t*                    _opCycles;
};

#endif