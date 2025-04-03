#include <iostream>
#include <systemc.h>
#include "Vsimple_adder.h"

SC_MODULE(AdderWrapper) {
public:
    sc_in<uint32_t> a_in; // 修改这里
    sc_in<uint32_t> b_in; // 同样修改这里
    sc_out<uint32_t> sum_out;

    Vsimple_adder* dut;

    SC_CTOR(AdderWrapper) {
        dut = new Vsimple_adder("dut");
        dut->a(a_in);
        dut->b(b_in);
        dut->sum(sum_out);

        SC_THREAD(process);
    }

    ~AdderWrapper() {
        delete dut;
    }

    void process() {
        while (true) {
            //dut->eval();
            wait(1, SC_NS);
        }
    }
};

int sc_main(int argc, char* argv[]) {
    AdderWrapper adder("adder");

    sc_signal<uint32_t> a_sig; // 修改这里
    sc_signal<uint32_t> b_sig; // 修改这里
    sc_signal<uint32_t> sum_sig; // 修改这里

    adder.a_in(a_sig);
    adder.b_in(b_sig);
    adder.sum_out(sum_sig);

    a_sig = 5;
    b_sig = 10;

    sc_start(10, SC_NS);

    std::cout << "Sum: " << sum_sig << std::endl;

    return 0;
}