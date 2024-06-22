// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMASKBUS__SYMS_H_
#define VERILATED_VMASKBUS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmaskbus.h"

// INCLUDE MODULE CLASSES
#include "Vmaskbus___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmaskbus__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmaskbus* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmaskbus___024root             TOP;

    // CONSTRUCTORS
    Vmaskbus__Syms(VerilatedContext* contextp, const char* namep, Vmaskbus* modelp);
    ~Vmaskbus__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
