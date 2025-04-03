// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_adder.h for the primary calling header

#include "Vsimple_adder__pch.h"
#include "Vsimple_adder__Syms.h"
#include "Vsimple_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__ico(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_adder___024root___eval_triggers__ico(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_adder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__act(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_adder___024root___eval_triggers__act(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
