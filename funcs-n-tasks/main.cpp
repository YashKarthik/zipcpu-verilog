#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include "verilated.h"
#include "Vmain.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vmain *tb, VerilatedVcdC *tfp) {
    tb->eval();
    if (tfp) {
        tfp->dump(tickcount * 10 - 10);
    }

    tb->clk = 1;
    if (tickcount % 3 == 0) {
        tb->trigger = 1;
    } else {
        tb->trigger = 0;
    }
    tb->eval();
    if (tfp) {
        tfp->dump(tickcount * 10);
    }

    tb->clk = 0;
    tb->eval();
    if (tfp) {
        tfp->dump(tickcount * 10 + 10);
        tfp->flush();
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmain *tb = new Vmain;
    unsigned tickcount = 0;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("./trace.vcd");

    tb->start = 0;
    tb->inc_step = 1;
    tb->eval();

    for (int i=0; i < 20; i++) {
        printf("%i\n", tb->count);
        tick(++i, tb, tfp);

    }
}
