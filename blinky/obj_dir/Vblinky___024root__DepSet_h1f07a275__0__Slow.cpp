// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky__pch.h"
#include "Vblinky___024root.h"

VL_ATTR_COLD void Vblinky___024root___eval_static(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vblinky___024root___eval_initial__TOP(Vblinky___024root* vlSelf);

VL_ATTR_COLD void Vblinky___024root___eval_initial(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_initial\n"); );
    // Body
    Vblinky___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
}

VL_ATTR_COLD void Vblinky___024root___eval_initial__TOP(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->blinky__DOT__counter = 0U;
}

VL_ATTR_COLD void Vblinky___024root___eval_final(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__stl(Vblinky___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vblinky___024root___eval_phase__stl(Vblinky___024root* vlSelf);

VL_ATTR_COLD void Vblinky___024root___eval_settle(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_settle\n"); );
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
            Vblinky___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("blinky.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vblinky___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__stl(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblinky___024root___stl_sequent__TOP__0(Vblinky___024root* vlSelf);

VL_ATTR_COLD void Vblinky___024root___eval_stl(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vblinky___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vblinky___024root___stl_sequent__TOP__0(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_led = (1U & ((IData)(vlSelf->blinky__DOT__counter) 
                           >> 3U));
}

VL_ATTR_COLD void Vblinky___024root___eval_triggers__stl(Vblinky___024root* vlSelf);

VL_ATTR_COLD bool Vblinky___024root___eval_phase__stl(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vblinky___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vblinky___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__act(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__nba(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblinky___024root___ctor_var_reset(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->o_led = VL_RAND_RESET_I(1);
    vlSelf->blinky__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
}
