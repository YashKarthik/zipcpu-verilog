// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtiming.h for the primary calling header

#include "Vtiming__pch.h"
#include "Vtiming___024root.h"

VlCoroutine Vtiming___024root___eval_initial__TOP__Vtiming__0(Vtiming___024root* vlSelf);

void Vtiming___024root___eval_initial(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_initial\n"); );
    // Body
    Vtiming___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtiming___024root___eval_initial__TOP__Vtiming__0(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF_NX("Current time = %^\nHello World\n",0,
                 64,VL_TIME_UNITED_D(1),-12);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "timing.v", 
                                       5);
    VL_WRITEF_NX("Current time = %^\n",0,64,VL_TIME_UNITED_D(1),
                 -12);
    VL_FINISH_MT("timing.v", 7, "");
}

void Vtiming___024root___eval_act(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_act\n"); );
}

void Vtiming___024root___eval_nba(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_nba\n"); );
}

void Vtiming___024root___timing_resume(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtiming___024root___eval_triggers__act(Vtiming___024root* vlSelf);

bool Vtiming___024root___eval_phase__act(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtiming___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtiming___024root___timing_resume(vlSelf);
        Vtiming___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtiming___024root___eval_phase__nba(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtiming___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtiming___024root___dump_triggers__nba(Vtiming___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtiming___024root___dump_triggers__act(Vtiming___024root* vlSelf);
#endif  // VL_DEBUG

void Vtiming___024root___eval(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtiming___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("timing.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtiming___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("timing.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtiming___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtiming___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtiming___024root___eval_debug_assertions(Vtiming___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtiming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtiming___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
