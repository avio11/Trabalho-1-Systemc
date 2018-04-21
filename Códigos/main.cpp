#include "systemc.h"
#include "sistema.h" //ultima versao
int sc_main(int argc, char* argv[]){
    sistema sys("sys");
    sys.create_vcd();

    sc_start();

    sys.close_vcd();

    return 0;
}
