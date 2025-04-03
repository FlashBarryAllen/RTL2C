VERILATOR_ROOT="/00_ycl/02_download/verilator-master"
#VERILATOR_ROOT=""
SYSTEMC_INCLUDE="./include/systemc"
SYSTEMC_LIBDIR="./lib/systemc"
SRC_DIR="./simple_adder"

export SYSTEMC_INCLUDE
export SYSTEMC_LIBDIR
export SRC_DIR

echo "*****************************"
echo "Value of VERILATOR_ROOT:   $VERILATOR_ROOT"
echo "Value of SYSTEMC_INCLUDE:  $SYSTEMC_INCLUDE"
echo "Value of SYSTEMC_LIBDIR:   $SYSTEMC_LIBDIR"
echo "Value of SRC_DIR:          $SRC_DIR"
echo "*****************************"

if [ -z "$VERILATOR_ROOT" ]; then
    VERILATOR="verilator"
else
    export VERILATOR_ROOT
    VERILATOR=${VERILATOR_ROOT}/bin/verilator
fi

${VERILATOR} --version

if [ -z "$SYSTEMC_INCLUDE" ]| [ -z "$SYSTEMC_LIBDIR" ]; then
    echo
    echo "%Skip: SYSTEMC_INCLUDE and SYSTEMC_LIBDIR not in environment"
    echo "(If you have SystemC see the README, and rrebuild Verilator)"
    echo
else
    echo "-- Verilator simple_adder"
    echo "-- VERILATE & COMPILE ------"
    ${VERILATOR} --sc -f ${SRC_DIR}/simple_adder.filelist --trace --vpi -Wno-fatal -top-module simple_adder
    make -C obj_dir -f Vsimple_adder.mk
    echo "-- DONE ----------------------------"
fi