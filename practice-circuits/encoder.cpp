#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include "verilated.h"
#include "Vencoder.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vencoder *tb, VerilatedVcdC *tfp) {
    printf("here: i = %i\n", tickcount);
    tb->eval();

    tb->encoded_in = pow(2, tickcount);
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
    Vencoder *tb = new Vencoder;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("./encoder-trace.vcd");

    for (int i=0; i < 20; i++) {
        printf("In loop i =%i \n", i);
        tick(i, tb, tfp);
    }

    tfp->close();
}
