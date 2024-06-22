// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaskbus.h for the primary calling header

#include "Vmaskbus__pch.h"
#include "Vmaskbus__Syms.h"
#include "Vmaskbus___024root.h"

void Vmaskbus___024root___ctor_var_reset(Vmaskbus___024root* vlSelf);

Vmaskbus___024root::Vmaskbus___024root(Vmaskbus__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmaskbus___024root___ctor_var_reset(this);
}

void Vmaskbus___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmaskbus___024root::~Vmaskbus___024root() {
}
