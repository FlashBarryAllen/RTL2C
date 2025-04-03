// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsimple_adder__Syms.h"


void Vsimple_adder___024root__trace_chg_0_sub_0(Vsimple_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimple_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root__trace_chg_0\n"); );
    // Init
    Vsimple_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_adder___024root*>(voidSelf);
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimple_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_adder___024root__trace_chg_0_sub_0(Vsimple_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->__Vcellinp__simple_adder__a),32);
        bufp->chgIData(oldp+1,(vlSelf->__Vcellinp__simple_adder__b),32);
        bufp->chgIData(oldp+2,((vlSelf->__Vcellinp__simple_adder__a 
                                + vlSelf->__Vcellinp__simple_adder__b)),32);
    }
}

void Vsimple_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root__trace_cleanup\n"); );
    // Init
    Vsimple_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_adder___024root*>(voidSelf);
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
