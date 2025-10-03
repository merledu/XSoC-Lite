// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXSoC.h for the primary calling header

#include "VXSoC__pch.h"
#include "VXSoC__Syms.h"
#include "VXSoC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__ico(VXSoC___024root* vlSelf);
#endif  // VL_DEBUG

void VXSoC___024root___eval_triggers__ico(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_triggers__ico\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VXSoC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__act(VXSoC___024root* vlSelf);
#endif  // VL_DEBUG

void VXSoC___024root___eval_triggers__act(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_triggers__act\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clock)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__XSoC__DOT__babyKyber__DOT__bkyber_rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__XSoC__DOT__babyKyber__DOT__bkyber_rst_n__0 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VXSoC___024root___dump_triggers__act(vlSelf);
    }
#endif
}
