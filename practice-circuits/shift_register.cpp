#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vshift_register.h"

#define MAX_SIM_TIME 300
int sim_time = 0;
int posedge_cnt = 0;

int main(int argc, char** argv, char** env) {
    srand (time(NULL));
    Verilated::commandArgs(argc, argv);
    Vshift_register *circuit = new Vshift_register;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    circuit->trace(m_trace, 5);
    m_trace->open("register-trace.vcd");

    while (sim_time < MAX_SIM_TIME) {
        circuit->seq_in = rand() % 2;
        circuit->shift = rand() % 2;

        circuit->parallel_load = rand() % 2;
        circuit->parallel_in = rand() % 16;

        circuit->n_rst_in = 1;
        if (sim_time % (MAX_SIM_TIME / 3) == 0) {
            circuit->n_rst_in = 0;
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
