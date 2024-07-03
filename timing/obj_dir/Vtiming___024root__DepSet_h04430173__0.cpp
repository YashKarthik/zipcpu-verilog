// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtiming.h for the primary calling header

#include "Vtiming__pch.h"
#include "Vtiming__Syms.h"
#include "Vtiming___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtiming___024root___dump_triggers__act(Vtiming___024root* vlSelf);
#endif  // VL_DEBUG

void Vtiming___024root___eval_triggers__act(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtiming___024root___dump_triggers__act(vlSelf);
    }
#endif
}
