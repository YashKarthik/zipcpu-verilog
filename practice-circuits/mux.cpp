#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include "verilated.h"
#include "Vmux.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vmux *tb, VerilatedVcdC *tfp) {
    tb->eval();

    tb->data_0 = 0;
    tb->data_1 = 1;
    tb->data_2 = 2;
    tb->data_3 = 3;
    tb->data_4 = 4;
    tb->data_5 = 5;
    tb->data_6 = 6;
    tb->data_7 = 7;

    tb->sel = tickcount;
    tb->eval();

    if (tfp) {
        tfp->dump(tickcount * 10);
    }

    tb->eval();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmux *tb = new Vmux;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("./mux-trace.vcd");

    for (int i=0; i < 20; i++) {
        tick(i, tb, tfp);
    }

    tfp->close();
}
