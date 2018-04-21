#include "ula.h"

void ula::proc(){

    sc_int<SIZE> temp;
    switch(OPCODE.read()){
        case ADD:
            temp = (A.read() + B.read());
            break;
        case SUB:
            temp = (A.read() - B.read());
            break;
        case AND:
            temp = (A.read() & B.read());
            break;
        case OR:
            temp = (A.read() | B.read());
            break;
        case NOT:
            temp = ~(A.read());
            break;
        case XOR:
            temp = (A.read() ^ B.read());
            break;
        case BYPASS:
            temp = A.read();
            break;
        case SLT:
            if(A.read() < B.read()) temp = 1;
            else temp = 0;
            break;
    }
    Z.write(temp);

    if(temp==0) zero = 1;
    else zero = 0;
}
