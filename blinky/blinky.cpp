#include <stdio.h>
#include <stdlib.h>
#include "Vblinky.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vblinky *tb, VerilatedVcdC *tfp) {
  tb->eval();
  if (tfp) {
    tfp->dump(tickcount * 10 - 2);
  }

  tb->i_clk = 1;
  tb->eval();
  if (tfp) {
    tfp->dump(tickcount * 10);
  }

  tb->i_clk = 0;
  tb->eval();
  if (tfp) {
    tfp->dump(tickcount * 10 + 5);
    tfp->flush();
  }
}

int main(int argc, char *argv[]) {
  int last_led;
  unsigned tickcount = 0;

  Verilated::commandArgs(argc, argv);
  Vblinky *tb = new Vblinky;

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  tb->trace(tfp, 99);
  tfp->open("./blinkytrace.vcd");

  last_led = tb->o_led;
  for (int k=0; k < (1 << 20); k++) {
    tick(++tickcount, tb, tfp);

    if (last_led != tb->o_led) {
      printf("k = %7d, ", k);
      printf("led = %d\n, ", tb->o_led);
    }

    last_led = tb->o_led;
  }


  return 0;
}
