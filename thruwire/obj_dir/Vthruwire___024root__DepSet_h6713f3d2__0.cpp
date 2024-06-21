// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire___024root.h"

void Vthruwire___024root___ico_sequent__TOP__0(Vthruwire___024root* vlSelf);

void Vthruwire___024root___eval_ico(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vthruwire___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vthruwire___024root___ico_sequent__TOP__0(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_led = vlSelf->i_sw;
}

void Vthruwire___024root___eval_triggers__ico(Vthruwire___024root* vlSelf);

bool Vthruwire___024root___eval_phase__ico(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vthruwire___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vthruwire___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vthruwire___024root___eval_act(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_act\n"); );
}

void Vthruwire___024root___eval_nba(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_nba\n"); );
}

void Vthruwire___024root___eval_triggers__act(Vthruwire___024root* vlSelf);

bool Vthruwire___024root___eval_phase__act(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vthruwire___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vthruwire___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vthruwire___024root___eval_phase__nba(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vthruwire___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__ico(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__nba(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__act(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG

void Vthruwire___024root___eval(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vthruwire___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("thruwire.v", 26, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vthruwire___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vthruwire___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("thruwire.v", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vthruwire___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("thruwire.v", 26, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vthruwire___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vthruwire___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vthruwire___024root___eval_debug_assertions(Vthruwire___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_sw & 0xfeU))) {
        Verilated::overWidthError("i_sw");}
}
#endif  // VL_DEBUG
