// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimple_adder__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vsimple_adder::Vsimple_adder(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vsimple_adder__Syms(contextp(), name(), this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , sum{vlSymsp->TOP.sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << a;
    sensitive << b;

}

//============================================================
// Destructor

Vsimple_adder::~Vsimple_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimple_adder___024root___eval_debug_assertions(Vsimple_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_adder___024root___eval_static(Vsimple_adder___024root* vlSelf);
void Vsimple_adder___024root___eval_initial(Vsimple_adder___024root* vlSelf);
void Vsimple_adder___024root___eval_settle(Vsimple_adder___024root* vlSelf);
void Vsimple_adder___024root___eval(Vsimple_adder___024root* vlSelf);

void Vsimple_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimple_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimple_adder___024root___eval_static(&(vlSymsp->TOP));
        Vsimple_adder___024root___eval_initial(&(vlSymsp->TOP));
        Vsimple_adder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimple_adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimple_adder::eventsPending() { return false; }

uint64_t Vsimple_adder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vsimple_adder___024root___eval_final(Vsimple_adder___024root* vlSelf);

VL_ATTR_COLD void Vsimple_adder::final() {
    Vsimple_adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimple_adder::hierName() const { return vlSymsp->name(); }
const char* Vsimple_adder::modelName() const { return "Vsimple_adder"; }
unsigned Vsimple_adder::threads() const { return 1; }
void Vsimple_adder::prepareClone() const { contextp()->prepareClone(); }
void Vsimple_adder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsimple_adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimple_adder___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsimple_adder___024root__trace_init_top(Vsimple_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimple_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_adder___024root*>(voidSelf);
    Vsimple_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsimple_adder___024root__trace_decl_types(tracep);
    Vsimple_adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimple_adder___024root__trace_register(Vsimple_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsimple_adder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vsimple_adder::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimple_adder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimple_adder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
