#include "ula_tb.h"

void ula_tb::aciona(){

    wait(1, SC_NS);

    #if SIZE==32

    cout << "ADD" << endl;
    OPCODE = ADD;
    A=0x0000001a; B=0x00000091;   // Valor esperado Z=0x000000ab
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "+" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "SUB" << endl;
    OPCODE = SUB;
    A=0x00000020; B=0x00000001;   //Valor esperado Z=0x0000001f
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "-" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "AND" << endl;
    OPCODE = AND;
    A = 0xffff000a; B=0x0000fffa; //Valor esperado Z=A&B=0xa=(10)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "&" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "OR" << endl;
    OPCODE = OR;
    A = 0xffff0000; B=0x0000ffff; //Valor esperado Z=A|B=0xffffffff=(-1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "|" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "NOT" << endl;
    OPCODE = NOT;
    A = 0xfffffffe;     //Valor esperado |=~A=(1)dec
    wait(1, SC_NS);
    cout << std::hex << "~" << "0x" << A << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "XOR" << endl;
    OPCODE = XOR;
    A = 0x0f0f0f0f; B = 0xf0f0f0f0; //Valor esperado Z=A^B=0xffffffff=(-1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "^" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "BYPASS" << endl;
    OPCODE = BYPASS;
    A = 0x00000010; //Valor esperado Z=0x10=(16)dec
    wait(1, SC_NS);
    cout << std::hex << "A=" << "0x" << A << " ;Z=" << "0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "SLT" << endl;
    OPCODE = SLT;
    A = 0x00000000; B = 0x00000001;  //Valor esperado Z=0x1=(1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << " SLT " << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    #elif SIZE==16

    cout << "ADD" << endl;
    OPCODE = ADD;
    A=0x00aa; B=0x0011;   // Valor esperado Z=0x00bb
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "+" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "SUB" << endl;
    OPCODE = SUB;
    A=0xbbaa; B=0x2211;   //Valor esperado Z=0x9999
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "-" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "AND" << endl;
    OPCODE = AND;
    A = 0xff00; B=0x00ff; //Valor esperado Z=A&B=0x0=(0)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "&" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "OR" << endl;
    OPCODE = OR;
    A = 0xff00; B=0x00ff; //Valor esperado Z=A|B=0xffff=(-1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "|" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "NOT" << endl;
    OPCODE = NOT;
    A = 0xfffe;     //Valor esperado |=~A=(1)dec
    wait(1, SC_NS);
    cout << std::hex << "~" << "0x" << A << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "XOR" << endl;
    OPCODE = XOR;
    A = 0x0f0f; B = 0xf0f0; //Valor esperado Z=A^B=0xffff=(-1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << "^" << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "BYPASS" << endl;
    OPCODE = BYPASS;
    A = 0x0010; //Valor esperado Z=0x10=(16)dec
    wait(1, SC_NS);
    cout << std::hex << "A=" << "0x" << A << " ;Z=" << "0x" << Z << "\nzero=" << zero << endl << endl;

    cout << "SLT" << endl;
    OPCODE = SLT;
    A = 0x0000; B = 0x0001;  //Valor esperado Z=0x1=(1)dec
    wait(1, SC_NS);
    cout << std::hex << "0x" << A << " SLT " << "0x" << B << "=0x" << Z << "\nzero=" << zero << endl << endl;

    #endif

}
