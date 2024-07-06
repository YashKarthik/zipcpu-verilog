#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include "verilated.h"
#include "Vdecoder.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vdecoder *tb, VerilatedVcdC *tfp) {
    tb->eval();

    tb->bcd_in = tickcount;
    if (tickcount % 2 == 0) {
        tb->enable = 1;
    } else {
        tb->enable = 0;
    }
    tb->eval();

    if (tfp) {
        tfp->dump(tickcount * 10);
    }

    tb->enable = 0;
    tb->eval();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vdecoder *tb = new Vdecoder;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("./decoder-trace.vcd");

    for (int i=0; i < 9; i++) {
        printf("In loop i =%i \n", i);
        tick(i, tb, tfp);
    }

    tfp->close();
}
