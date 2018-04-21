#include "ula.h"
#include "ula_tb.h"
#include "systemc.h"

SC_MODULE(sistema){
    ula u;
    ula_tb ULA_TB;

    sc_trace_file* wave;

    sc_signal< sc_int<SIZE> > A, B, Z;
    sc_signal<sc_uint<3> > OPCODE;
    sc_signal<bool> zero;

    void create_vcd(){
        wave = sc_create_vcd_trace_file("wave");
        wave->set_time_unit(1,SC_NS);

        sc_trace(wave, A, "A");
        sc_trace(wave, B, "B");
        sc_trace(wave, OPCODE, "OPCODE");
        sc_trace(wave, Z, "Z");
        sc_trace(wave, zero, "zero");
    }
    void close_vcd(){
        sc_close_vcd_trace_file(wave);
        cout << "Criou wave.vcd" << endl;
    }

    SC_CTOR(sistema): u("u"), ULA_TB("ULA_TB") {
        u.OPCODE(OPCODE);     ULA_TB.OPCODE(OPCODE);
        u.A(A);               ULA_TB.A(A);
        u.B(B);               ULA_TB.B(B);
        u.Z(Z);               ULA_TB.Z(Z);
        u.zero(zero);         ULA_TB.zero(zero);
    }
};
