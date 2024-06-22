// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaskbus.h for the primary calling header

#include "Vmaskbus__pch.h"
#include "Vmaskbus__Syms.h"
#include "Vmaskbus___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__stl(Vmaskbus___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmaskbus___024root___eval_triggers__stl(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmaskbus___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
