// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMPLE_ADDER_H_
#define VERILATED_VSIMPLE_ADDER_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

class Vsimple_adder__Syms;
class Vsimple_adder___024root;
class VerilatedVcdSc;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsimple_adder VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsimple_adder__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<uint32_t> &a;
    sc_core::sc_in<uint32_t> &b;
    sc_core::sc_out<uint32_t> &sum;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsimple_adder___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vsimple_adder);
    virtual ~Vsimple_adder();
  private:
    VL_UNCOPYABLE(Vsimple_adder);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
