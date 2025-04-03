// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_adder.h for the primary calling header

#include "Vsimple_adder__pch.h"
#include "Vsimple_adder__Syms.h"
#include "Vsimple_adder___024root.h"

void Vsimple_adder___024root___ctor_var_reset(Vsimple_adder___024root* vlSelf);

Vsimple_adder___024root::Vsimple_adder___024root(Vsimple_adder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , a("a")
    , b("b")
    , sum("sum")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple_adder___024root___ctor_var_reset(this);
}

void Vsimple_adder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsimple_adder___024root::~Vsimple_adder___024root() {
}
