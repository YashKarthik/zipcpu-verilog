// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaskbus.h for the primary calling header

#include "Vmaskbus__pch.h"
#include "Vmaskbus___024root.h"

VL_ATTR_COLD void Vmaskbus___024root___eval_static(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmaskbus___024root___eval_initial(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vmaskbus___024root___eval_final(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__stl(Vmaskbus___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmaskbus___024root___eval_phase__stl(Vmaskbus___024root* vlSelf);

VL_ATTR_COLD void Vmaskbus___024root___eval_settle(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmaskbus___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("maskbus.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmaskbus___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__stl(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmaskbus___024root___ico_sequent__TOP__0(Vmaskbus___024root* vlSelf);

VL_ATTR_COLD void Vmaskbus___024root___eval_stl(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmaskbus___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmaskbus___024root___eval_triggers__stl(Vmaskbus___024root* vlSelf);

VL_ATTR_COLD bool Vmaskbus___024root___eval_phase__stl(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmaskbus___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmaskbus___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__ico(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__act(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmaskbus___024root___dump_triggers__nba(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmaskbus___024root___ctor_var_reset(Vmaskbus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmaskbus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmaskbus___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_sw = VL_RAND_RESET_I(9);
    vlSelf->o_led = VL_RAND_RESET_I(9);
}
