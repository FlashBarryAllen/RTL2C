// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLE_ADDER__SYMS_H_
#define VERILATED_VSIMPLE_ADDER__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsimple_adder.h"

// INCLUDE MODULE CLASSES
#include "Vsimple_adder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsimple_adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsimple_adder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsimple_adder___024root        TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vsimple_adder__Syms(VerilatedContext* contextp, const char* namep, Vsimple_adder* modelp);
    ~Vsimple_adder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
