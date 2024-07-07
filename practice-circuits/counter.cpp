#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcounter.h"

#define MAX_SIM_TIME 300
int sim_time = 0;
int posedge_cnt = 0;

int main(int argc, char** argv, char** env) {
    srand (time(NULL));
    Verilated::commandArgs(argc, argv);
    Vcounter *circuit = new Vcounter;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    circuit->trace(m_trace, 5);
    m_trace->open("counter-trace.vcd");

    circuit->start = 3;
    circuit->inc_step = 2;
    while (sim_time < MAX_SIM_TIME) {
        circuit->inc = rand() % 2;
        circuit->dec = !circuit->inc;
        circuit->n_rst = 1;
        if (sim_time % (MAX_SIM_TIME / 3) == 0) {
            circuit->n_rst = 0;
        }

        circuit->clk_in ^= 1;
        circuit->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete circuit;
    exit(EXIT_SUCCESS);
}
