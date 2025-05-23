// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_adder.h for the primary calling header

#include "Vsimple_adder__pch.h"
#include "Vsimple_adder___024root.h"

VL_INLINE_OPT void Vsimple_adder___024root___ico_sequent__TOP__0(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__simple_adder__a, vlSelf->a);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__simple_adder__b, vlSelf->b);
    VL_ASSIGN_SII(32,vlSelf->sum, (vlSelf->__Vcellinp__simple_adder__a 
                                   + vlSelf->__Vcellinp__simple_adder__b));
}

void Vsimple_adder___024root___eval_ico(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsimple_adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsimple_adder___024root___eval_triggers__ico(Vsimple_adder___024root* vlSelf);

bool Vsimple_adder___024root___eval_phase__ico(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsimple_adder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vsimple_adder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsimple_adder___024root___eval_act(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_act\n"); );
}

void Vsimple_adder___024root___eval_nba(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_nba\n"); );
}

void Vsimple_adder___024root___eval_triggers__act(Vsimple_adder___024root* vlSelf);

bool Vsimple_adder___024root___eval_phase__act(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimple_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsimple_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsimple_adder___024root___eval_phase__nba(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsimple_adder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__ico(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__nba(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_adder___024root___dump_triggers__act(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_adder___024root___eval(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vsimple_adder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("simple_adder/simple_adder.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsimple_adder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsimple_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("simple_adder/simple_adder.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsimple_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("simple_adder/simple_adder.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsimple_adder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsimple_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsimple_adder___024root___eval_debug_assertions(Vsimple_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
