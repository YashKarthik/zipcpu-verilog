// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky__pch.h"
#include "Vblinky__Syms.h"
#include "Vblinky___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__stl(Vblinky___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblinky___024root___eval_triggers__stl(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vblinky___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
