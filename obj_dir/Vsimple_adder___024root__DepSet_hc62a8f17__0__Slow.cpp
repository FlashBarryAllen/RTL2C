// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_adder.h for the primary calling header

#include "Vsimple_adder__pch.h"
#include "Vsimple_adder__Syms.h"
#include "Vsimple_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__stl(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_adder___024root___eval_triggers__stl(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_adder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
