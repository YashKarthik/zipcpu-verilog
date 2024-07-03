// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtiming.h for the primary calling header

#include "Vtiming__pch.h"
#include "Vtiming__Syms.h"
#include "Vtiming___024root.h"

void Vtiming___024root___ctor_var_reset(Vtiming___024root* vlSelf);

Vtiming___024root::Vtiming___024root(Vtiming__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtiming___024root___ctor_var_reset(this);
}

void Vtiming___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtiming___024root::~Vtiming___024root() {
}
