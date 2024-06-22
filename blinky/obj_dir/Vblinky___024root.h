// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblinky.h for the primary calling header

#ifndef VERILATED_VBLINKY___024ROOT_H_
#define VERILATED_VBLINKY___024ROOT_H_  // guard

#include "verilated.h"


class Vblinky__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vblinky___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_OUT8(o_led,0,0);
    CData/*3:0*/ blinky__DOT__counter;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vblinky__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vblinky___024root(Vblinky__Syms* symsp, const char* v__name);
    ~Vblinky___024root();
    VL_UNCOPYABLE(Vblinky___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
