// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtiming__pch.h"

//============================================================
// Constructors

Vtiming::Vtiming(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtiming__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtiming::Vtiming(const char* _vcname__)
    : Vtiming(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtiming::~Vtiming() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtiming___024root___eval_debug_assertions(Vtiming___024root* vlSelf);
#endif  // VL_DEBUG
void Vtiming___024root___eval_static(Vtiming___024root* vlSelf);
void Vtiming___024root___eval_initial(Vtiming___024root* vlSelf);
void Vtiming___024root___eval_settle(Vtiming___024root* vlSelf);
void Vtiming___024root___eval(Vtiming___024root* vlSelf);

void Vtiming::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtiming::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtiming___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtiming___024root___eval_static(&(vlSymsp->TOP));
        Vtiming___024root___eval_initial(&(vlSymsp->TOP));
        Vtiming___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtiming___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtiming::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtiming::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtiming::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtiming___024root___eval_final(Vtiming___024root* vlSelf);

VL_ATTR_COLD void Vtiming::final() {
    Vtiming___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtiming::hierName() const { return vlSymsp->name(); }
const char* Vtiming::modelName() const { return "Vtiming"; }
unsigned Vtiming::threads() const { return 1; }
void Vtiming::prepareClone() const { contextp()->prepareClone(); }
void Vtiming::atClone() const {
    contextp()->threadPoolpOnClone();
}
