#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vlatch.h"

#define MAX_SIM_TIME 300
int sim_time = 0;
int posedge_cnt = 0;

int main(int argc, char** argv, char** env) {
    srand (time(NULL));
    Verilated::commandArgs(argc, argv);
    Vlatch *circuit = new Vlatch;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    circuit->trace(m_trace, 5);
    m_trace->open("latch-trace.vcd");

    while (sim_time < MAX_SIM_TIME) {
        circuit->d_in = rand() % 2;
        circuit->en_in = rand() % 2;;
        circuit->n_rst_in = 1;
        if (sim_time % (MAX_SIM_TIME / 3) == 0) {
            circuit->n_rst_in = 0;
        }

        circuit->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete circuit;
    exit(EXIT_SUCCESS);
}
