// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblinky__Syms.h"


VL_ATTR_COLD void Vblinky___024root__trace_init_sub__TOP__0(Vblinky___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("blinky", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vblinky___024root__trace_init_top(Vblinky___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_init_top\n"); );
    // Body
    Vblinky___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vblinky___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vblinky___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblinky___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblinky___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vblinky___024root__trace_register(Vblinky___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vblinky___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vblinky___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vblinky___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vblinky___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vblinky___024root__trace_const_0_sub_0(Vblinky___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vblinky___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_const_0\n"); );
    // Init
    Vblinky___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblinky___024root*>(voidSelf);
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vblinky___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vblinky___024root__trace_const_0_sub_0(Vblinky___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+4,(4U),32);
}

VL_ATTR_COLD void Vblinky___024root__trace_full_0_sub_0(Vblinky___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vblinky___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_full_0\n"); );
    // Init
    Vblinky___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblinky___024root*>(voidSelf);
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vblinky___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vblinky___024root__trace_full_0_sub_0(Vblinky___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblinky__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->i_clk));
    bufp->fullBit(oldp+2,(vlSelf->o_led));
    bufp->fullCData(oldp+3,(vlSelf->blinky__DOT__counter),4);
}
