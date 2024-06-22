// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky__pch.h"
#include "Vblinky__Syms.h"
#include "Vblinky___024root.h"

void Vblinky___024root___ctor_var_reset(Vblinky___024root* vlSelf);

Vblinky___024root::Vblinky___024root(Vblinky__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vblinky___024root___ctor_var_reset(this);
}

void Vblinky___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vblinky___024root::~Vblinky___024root() {
}
