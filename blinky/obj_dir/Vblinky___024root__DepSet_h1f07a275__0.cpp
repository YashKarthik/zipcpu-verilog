// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky__pch.h"
#include "Vblinky___024root.h"

void Vblinky___024root___eval_act(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_act\n"); );
}

void Vblinky___024root___nba_sequent__TOP__0(Vblinky___024root* vlSelf);

void Vblinky___024root___eval_nba(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vblinky___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vblinky___024root___nba_sequent__TOP__0(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->blinky__DOT__counter = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelf->blinky__DOT__counter)));
    vlSelf->o_led = (1U & ((IData)(vlSelf->blinky__DOT__counter) 
                           >> 3U));
}

void Vblinky___024root___eval_triggers__act(Vblinky___024root* vlSelf);

bool Vblinky___024root___eval_phase__act(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vblinky___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vblinky___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vblinky___024root___eval_phase__nba(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vblinky___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__nba(Vblinky___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinky___024root___dump_triggers__act(Vblinky___024root* vlSelf);
#endif  // VL_DEBUG

void Vblinky___024root___eval(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vblinky___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("blinky.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vblinky___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("blinky.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vblinky___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vblinky___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vblinky___024root___eval_debug_assertions(Vblinky___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
}
#endif  // VL_DEBUG
