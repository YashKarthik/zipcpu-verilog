// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmaskbus__pch.h"

//============================================================
// Constructors

Vmaskbus::Vmaskbus(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmaskbus__Syms(contextp(), _vcname__, this)}
    , i_sw{vlSymsp->TOP.i_sw}
    , o_led{vlSymsp->TOP.o_led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmaskbus::Vmaskbus(const char* _vcname__)
    : Vmaskbus(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmaskbus::~Vmaskbus() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmaskbus___024root___eval_debug_assertions(Vmaskbus___024root* vlSelf);
#endif  // VL_DEBUG
void Vmaskbus___024root___eval_static(Vmaskbus___024root* vlSelf);
void Vmaskbus___024root___eval_initial(Vmaskbus___024root* vlSelf);
void Vmaskbus___024root___eval_settle(Vmaskbus___024root* vlSelf);
void Vmaskbus___024root___eval(Vmaskbus___024root* vlSelf);

void Vmaskbus::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmaskbus::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmaskbus___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmaskbus___024root___eval_static(&(vlSymsp->TOP));
        Vmaskbus___024root___eval_initial(&(vlSymsp->TOP));
        Vmaskbus___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmaskbus___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmaskbus::eventsPending() { return false; }

uint64_t Vmaskbus::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmaskbus::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmaskbus___024root___eval_final(Vmaskbus___024root* vlSelf);

VL_ATTR_COLD void Vmaskbus::final() {
    Vmaskbus___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmaskbus::hierName() const { return vlSymsp->name(); }
const char* Vmaskbus::modelName() const { return "Vmaskbus"; }
unsigned Vmaskbus::threads() const { return 1; }
void Vmaskbus::prepareClone() const { contextp()->prepareClone(); }
void Vmaskbus::atClone() const {
    contextp()->threadPoolpOnClone();
}
