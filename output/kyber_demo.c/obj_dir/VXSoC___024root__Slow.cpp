// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXSoC.h for the primary calling header

#include "VXSoC__pch.h"
#include "VXSoC__Syms.h"
#include "VXSoC___024root.h"

void VXSoC___024root___ctor_var_reset(VXSoC___024root* vlSelf);

VXSoC___024root::VXSoC___024root(VXSoC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VXSoC___024root___ctor_var_reset(this);
}

void VXSoC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VXSoC___024root::~VXSoC___024root() {
}
