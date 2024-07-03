// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtiming.h for the primary calling header

#ifndef VERILATED_VTIMING___024ROOT_H_
#define VERILATED_VTIMING___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtiming__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtiming___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtiming__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtiming___024root(Vtiming__Syms* symsp, const char* v__name);
    ~Vtiming___024root();
    VL_UNCOPYABLE(Vtiming___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
