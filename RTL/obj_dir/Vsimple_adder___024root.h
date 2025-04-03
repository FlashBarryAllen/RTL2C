// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimple_adder.h for the primary calling header

#ifndef VERILATED_VSIMPLE_ADDER___024ROOT_H_
#define VERILATED_VSIMPLE_ADDER___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsimple_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimple_adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vcellinp__simple_adder__b;
    IData/*31:0*/ __Vcellinp__simple_adder__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<uint32_t> a;
    sc_core::sc_in<uint32_t> b;
    sc_core::sc_out<uint32_t> sum;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsimple_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimple_adder___024root(Vsimple_adder__Syms* symsp, const char* v__name);
    ~Vsimple_adder___024root();
    VL_UNCOPYABLE(Vsimple_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
