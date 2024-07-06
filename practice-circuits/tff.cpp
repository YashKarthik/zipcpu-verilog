#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtff.h"

#define MAX_SIM_TIME 300
int sim_time = 0;
int posedge_cnt = 0;

int main(int argc, char** argv, char** env) {
    srand (time(NULL));
    Verilated::commandArgs(argc, argv);
    Vtff *circuit = new Vtff;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    circuit->trace(m_trace, 5);
    m_trace->open("tff-trace.vcd");

    while (sim_time < MAX_SIM_TIME) {
        circuit->t_in = rand() % 2;
        circuit->n_reset = 1;
        if (sim_time % (MAX_SIM_TIME / 3) == 0) {
            circuit->n_reset = 0;
        }

        circuit->clk ^= 1;
        circuit->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete circuit;
    exit(EXIT_SUCCESS);
}
