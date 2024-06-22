// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmaskbus.h for the primary calling header

#ifndef VERILATED_VMASKBUS___024ROOT_H_
#define VERILATED_VMASKBUS___024ROOT_H_  // guard

#include "verilated.h"


class Vmaskbus__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmaskbus___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(i_sw,8,0);
    VL_OUT16(o_led,8,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmaskbus__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmaskbus___024root(Vmaskbus__Syms* symsp, const char* v__name);
    ~Vmaskbus___024root();
    VL_UNCOPYABLE(Vmaskbus___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
