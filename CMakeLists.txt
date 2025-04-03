cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(simple_adder)

include_directories("./include/systemc/")
include_directories("./RTL/obj_dir/")
include_directories("./include/verilator")

link_directories("./libs/systemc/")
link_directories("./RTL/obj_dir/")

add_executable(${PROJECT_NAME} 
    ${CMAKE_SOURCE_DIR}/sc_main.cpp
)

target_link_libraries(${PROJECT_NAME} debug libsystemc_debug.a optimized libsystemc.a)
target_link_libraries(${PROJECT_NAME} debug libVsimple_adder.a optimized libVsimple_adder.a)
target_link_libraries(${PROJECT_NAME} debug libverilated.a optimized libverilated.a)