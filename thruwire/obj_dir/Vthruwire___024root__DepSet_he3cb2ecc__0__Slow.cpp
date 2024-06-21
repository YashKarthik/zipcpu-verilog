// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire__Syms.h"
#include "Vthruwire___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__stl(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vthruwire___024root___eval_triggers__stl(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthruwire___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
