// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXSoC.h for the primary calling header

#include "VXSoC__pch.h"
#include "VXSoC___024root.h"

void VXSoC___024root___ico_sequent__TOP__0(VXSoC___024root* vlSelf);

void VXSoC___024root___eval_ico(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_ico\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VXSoC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VXSoC___024root___ico_sequent__TOP__0(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___ico_sequent__TOP__0\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins))));
    __Vtemp_4[0U] = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    VL_SUB_W(3, __Vtemp_5, __Vtemp_4, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 
            = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24)
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)
                : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg));
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) {
            if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                    = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                           >> 0x1fU)) ? (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                        : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a);
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
            } else if ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))) {
                if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2) {
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                        = ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)) 
                           + (1ULL << (0x3fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                                                - (IData)(1U)))));
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                        = __Vtemp_5[0U];
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] 
                        = __Vtemp_5[1U];
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] 
                        = (0x7fffffffU & __Vtemp_5[2U]);
                } else {
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                        = (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
                }
            } else {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                    = (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                    = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
            }
        } else {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                = (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
        }
    }
}

void VXSoC___024root___eval_triggers__ico(VXSoC___024root* vlSelf);

bool VXSoC___024root___eval_phase__ico(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_phase__ico\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VXSoC___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VXSoC___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VXSoC___024root___eval_act(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_act\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VXSoC___024root___nba_sequent__TOP__0(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_sequent__TOP__1(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_sequent__TOP__2(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_sequent__TOP__3(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_sequent__TOP__4(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_comb__TOP__0(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_comb__TOP__1(VXSoC___024root* vlSelf);
void VXSoC___024root___nba_sequent__TOP__5(VXSoC___024root* vlSelf);

void VXSoC___024root___eval_nba(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_nba\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VXSoC___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VXSoC___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void VXSoC___024root___nba_sequent__TOP__0(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_sequent__TOP__0\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0;
    // Body
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0U;
    vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0 = 0U;
    vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v24 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n)))) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i = 2U;
    }
    if (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) {
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i = 4U;
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i = 2U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [0U][0U];
            vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0 = 1U;
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [0U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [0U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [0U][3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v4 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [1U][0U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v5 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [1U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v6 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [1U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v7 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [1U][3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v8 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [2U][0U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v9 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [2U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v10 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [2U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v11 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [2U][3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v12 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [3U][0U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v13 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [3U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v14 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [3U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v15 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                [3U][3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v16 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [0U][0U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v17 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [0U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v18 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [0U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v19 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [0U][3U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v20 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [1U][0U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v21 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [1U][1U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v22 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [1U][2U];
            vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v23 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                [1U][3U];
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger) {
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [3U];
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger) {
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [3U];
        }
    } else {
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 1U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 1U;
        vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v24 = 1U;
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_decryption_done 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_key_done 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] = 0U;
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__key_done_next 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger));
}

VL_INLINE_OPT void VXSoC___024root___nba_sequent__TOP__1(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_sequent__TOP__1\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13;
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2 = 0;
    CData/*0:0*/ XSoC__DOT__uart__DOT__uart_rx__DOT___T_11;
    XSoC__DOT__uart__DOT__uart_rx__DOT___T_11 = 0;
    CData/*0:0*/ __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = 0;
    CData/*0:0*/ __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = 0;
    CData/*0:0*/ __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en = 0;
    CData/*5:0*/ __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter = 0;
    CData/*5:0*/ __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter = 0;
    CData/*0:0*/ __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg;
    __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 = 0;
    IData/*31:0*/ __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 = 0;
    CData/*2:0*/ __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main;
    __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main = 0;
    CData/*0:0*/ __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg;
    __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v7 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v8;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v8 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v9;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v9 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v10;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v10 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v11;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v11 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v12;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v12 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v13;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v13 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v14;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v14 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v15;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v15 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v7 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v7 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v9;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v9 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v1;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v2;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v3;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v4;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v5;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v6;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v7;
    __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v7 = 0;
    CData/*0:0*/ __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v8;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_106;
    VlWide<3>/*95:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_123;
    // Body
    __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg = vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg;
    __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg 
        = vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v8 = 0U;
    __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
        = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__message;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2;
    __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8 = 0U;
    __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v9 = 0U;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.reset)))))) {
        VL_FWRITEF_NX(0x80000002U,"[MEMFETCH] writeEnable: %1#, aluResultIn: 0x%x, writeData: 0x%x\n",0,
                      1,vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite,
                      32,vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result,
                      32,vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd);
    }
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = 0xfU;
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = 0U;
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg 
        = (0xfffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2);
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg 
        = vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i;
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane;
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest;
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid)));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid;
    if ((1U & (~ (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n)))) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j = 4U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg 
        = (0xfffffffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result 
                         >> 2U));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stbReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stbReg));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack))) 
                                                   && (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction)));
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en)
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U))
                                                        ? 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4))
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U))
                                                         ? 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4))
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U))
                                                          ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9)
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9)
                                                           : 
                                                          ((0x304U 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U))
                                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))
                                                             ? 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                             >> 4U)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U))
                                                              ? 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                              >> 4U)
                                                              : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9))))))))
                                                       : 
                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4)))));
    __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en)
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U))
                                                        ? 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3))
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U))
                                                         ? 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3))
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U))
                                                          ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7)
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7)
                                                           : 
                                                          ((0x304U 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U))
                                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))
                                                             ? 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                             >> 3U)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U))
                                                              ? 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                              >> 3U)
                                                              : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7))))))))
                                                       : 
                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en)
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U))
                                                        ? 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2))
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U))
                                                         ? 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2))
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U))
                                                          ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5)
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5)
                                                           : 
                                                          ((0x304U 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U))
                                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))
                                                             ? 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                             >> 2U)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U))
                                                              ? 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                              >> 2U)
                                                              : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5))))))))
                                                       : 
                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en)
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U))
                                                        ? 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
                                                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0))
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U))
                                                         ? 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0))
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U))
                                                          ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1)
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1)
                                                           : 
                                                          ((0x304U 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U))
                                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                                              : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1))))))))
                                                       : 
                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en)
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U))
                                                        ? 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1))
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U))
                                                         ? 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1))
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U))
                                                          ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3)
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3)
                                                           : 
                                                          ((0x304U 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U))
                                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))
                                                             ? 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                             >> 1U)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U))
                                                              ? 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                              >> 1U)
                                                              : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3))))))))
                                                       : 
                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_11 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_7 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_6 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_5;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG = 0U;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = 0U;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg 
        = (0x3fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient 
        = (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U];
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__readyReg 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_1));
    vlSelfRef.XSoC__DOT__uart__DOT__rx_clr = ((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.XSoC__DOT__uart__DOT___GEN_25));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT__respReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg)
                                                    ? 
                                                   ((1U 
                                                     & (~ (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg))) 
                                                    && (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_27))
                                                    : (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_27)));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_11));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT__stbReg = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_10));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__validReg = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0) 
                                                 | ((~ (IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we)) 
                                                    & (IData)(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid))));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__respReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg)
                                                    ? 
                                                   ((1U 
                                                     & (~ (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg))) 
                                                    && (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_27))
                                                    : (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_27)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack))) 
                                                   && (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_9)));
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg_REG));
    if ((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
               | (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
            = (0x3ffffffU & (VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem
                              : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem));
        if (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
             | VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z 
                = (0U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem);
        }
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__io_is_f_o_REG 
        = (1U & (((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
                  | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7))) 
                 | (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_2 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_1;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_2 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_1;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_f 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (7U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                   | ((0x27U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                      | ((0x43U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                         | ((0x47U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                            | ((0x4bU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                               | ((0x4fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                  | (0x53U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_9 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_10 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
        = (0x3ffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14);
    if (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
         | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_2 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_2 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_0 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_0;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_1;
    __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en)
                                                    ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_12)
                                                    : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_8 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result;
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1) {
        if ((0x1eU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x1cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x1bU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xdU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x17U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xbU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xeU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x14U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x12U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x19U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x10U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x15U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((8U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xaU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x11U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x13U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x16U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x18U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x1aU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x1dU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
        if ((0x1fU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31 
                = vlSelfRef.io_rvfi_rd_wdata_0;
        }
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0));
    if (vlSelfRef.reset) {
        __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter = 0x20U;
    } else if (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u))) {
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid) {
            __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter = 0x20U;
        } else if ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))) {
            __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4;
        }
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter 
        = __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter;
    if (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) {
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i = 4U;
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger) {
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [0U][0U];
            __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0 = 1U;
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v1 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [0U][1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v2 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [0U][2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v3 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [0U][3U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v4 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [1U][0U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v5 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [1U][1U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v6 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [1U][2U];
            __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v7 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                [1U][3U];
        }
    } else {
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v8 = 1U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v7;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey__v8) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[1U][3U] = 0U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__selReg = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__adrReg = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__datReg = 0U;
        __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg = 0U;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg 
            = __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg;
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__weReg = 0U;
        __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg 
            = __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__dataReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9 = 0U;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__dataReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG 
            = __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG 
            = __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg = 0U;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg = 0U;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg = 0U;
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd1 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_rd = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_a_reg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_b_reg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg = 0U;
        __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter = 0U;
    } else {
        if (vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg) {
            if (vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg) {
                __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg = 0U;
            }
        } else {
            __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg 
                = vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack;
        }
        vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg 
            = __Vdly__XSoC__DOT__hostAdapter__DOT__stateReg;
        if (vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg) {
            if (vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg) {
                __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg = 0U;
            }
        } else {
            __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg 
                = vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack;
        }
        vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg 
            = __Vdly__XSoC__DOT__uartHostAdapter__DOT__stateReg;
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg = 1U;
        } else if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg = 2U;
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__imem__DOT___state_reg_T_3) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg = 1U;
        } else if (vlSelfRef.XSoC__DOT__core__DOT__imem__DOT___state_reg_T_5) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg = 2U;
        }
        if (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
             | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid 
                = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                    | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2)) 
                       & (1U == (0x1fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                          - (IData)(1U)))))) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        }
        if (vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack) {
            vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__dataReg 
                = ((0x14U == (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                    ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_status)
                    : ((8U == (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                        ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_reg)
                        : 0U));
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en) {
            if ((0x300U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                if ((0x342U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))) {
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30;
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29;
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28;
                }
                if ((0x342U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))) {
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
                }
            }
            if ((0x300U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG 
                    = (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0x15U));
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG 
                    = (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0x11U));
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG 
                    = (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 0xbU));
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG 
                    = (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 7U));
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG 
                    = (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                             >> 3U));
            }
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp 
            = ((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                ? 2U : ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                         ? 2U : ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                 | ((3U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                    & ((0x23U != (0x7fU 
                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                       & ((0x63U != 
                                           (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))));
        if (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0) 
             & (0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra)))) {
            if ((0x12U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x11U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x10U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x19U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x18U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x17U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1fU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x16U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1eU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((8U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xeU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x14U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xdU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1bU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x13U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x15U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xaU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1dU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0xbU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((0x1aU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
            if ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9 
                    = vlSelfRef.io_rvfi_rd_wdata_0;
            }
        }
        if (vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) {
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__dataReg 
                = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Resp;
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data 
            = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                 << 5U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                            << 4U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                      << 3U))) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG 
            = __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG 
            = __Vdly__XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG;
        if ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite)) 
              & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg)) 
             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange))) {
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite;
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg = 0U;
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_addrRequest;
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange)
                    ? 0xfU : 0U);
        } else if ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite) 
                     & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg)) 
                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange))) {
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite;
            if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange) {
                vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg 
                    = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd;
                vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg = 0xfU;
            } else {
                vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg = 0U;
                vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg = 0U;
            }
            vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_addrRequest;
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd1 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData1;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_rd 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_readData;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_pc;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memToReg;
        if ((((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
              & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en))) 
             & ((((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                  | (5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))) 
                 | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))) 
                | (7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_a_reg 
                = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1))
                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc
                    : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1))
                        ? 0U : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_b_reg 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc)
                    ? ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd2
                        : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___inputMux2_T_4)
                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_imm);
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3;
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) {
            __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter 
                = ((0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter))
                    ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___counter_T_1)
                    : 0U);
        }
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter 
        = __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en 
        = __Vdly__XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en;
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stbReg));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4 
        = (0x3fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                    - (IData)(1U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
            << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                       << 1U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)));
    vlSelfRef.io_rvfi_pc_wdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_6;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_5 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_4;
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__weReg));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__readyReg) 
           | (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg));
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stbReg));
    if (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) {
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_encryption_done = 1U;
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients 
                = (0xfU & vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__message);
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients = 0U;
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0U] 
        = ((1U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1U] 
        = ((2U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2U] 
        = ((4U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3U] 
        = ((8U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
           | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
              & (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT___state_reg_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg)) 
           | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg)) 
              & (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg_REG 
        = (1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en))));
    vlSelfRef.XSoC__DOT__uart__DOT__rx_status = ((1U 
                                                  & (~ (IData)(vlSelfRef.reset))) 
                                                 && (IData)(vlSelfRef.XSoC__DOT__uart__DOT___GEN_29));
    vlSelfRef.io_rvfi_rs2_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_2;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG;
    vlSelfRef.io_rvfi_rs1_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_2;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memRead));
    vlSelfRef.io_rvfi_mem_wdata_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_10)
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_11
                                      : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint4_REG 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12)
            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22)
                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite)
                    ? 0xfU : 0U)));
    vlSelfRef.io_rvfi_mem_wmask_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint4_REG;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memWrite));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr));
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode;
        if ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z 
                = (0x3ffU & ((IData)(0x80U) + VL_EXTENDS_II(10,9, 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                                                                >> 1U)))));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA;
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z 
                = (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
        } else {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div)));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z 
                = (0x3ffU & (((VL_LTES_III(11, 0x1c0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))
                                ? 6U : (0xfU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div) 
                                                >> 6U))) 
                              << 6U) | (0x3fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z 
                = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                   | (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z 
                = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z 
                = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div))) 
                   | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
                      & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                         & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)))));
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z 
            = (1U & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                      >> 0x1fU) ^ ((9U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                      >> 0x1fU))));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_result = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd3 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__rx_reg = 0U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_result 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result;
        if ((2U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset 
                = (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result);
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3 
                = (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                         >> 0xcU));
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd3 
            = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra) 
                 == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                     >> 0x1bU)) & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                ? vlSelfRef.io_pin : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2);
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins;
        if ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle)) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17;
        }
        if (vlSelfRef.XSoC__DOT__uart__DOT__rx_done) {
            vlSelfRef.XSoC__DOT__uart__DOT__rx_reg 
                = vlSelfRef.XSoC__DOT__uart__DOT__rx;
        }
    }
    if (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n) {
        if (VL_UNLIKELY((vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_wen_Req))) {
            VL_WRITEF_NX("checking\n",0);
            if ((0x40007000U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007004U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007008U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000700cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007010U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007014U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007018U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000701cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007020U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007024U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007028U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000702cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007030U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007034U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007038U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000703cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007040U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007044U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007048U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000704cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007050U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007054U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007058U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000705cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007060U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007064U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007068U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000706cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007070U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007074U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007078U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000707cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007164U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000;
                __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0 = 1U;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v4 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v4 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v4 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v5 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v5 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v5 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v6 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v6 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v6 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v7 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v7 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v7 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v8 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v9 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v10 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v11 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v12 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v13 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v14 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v15 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033;
            }
            if ((0x40007080U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007084U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007088U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000708cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007090U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007094U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007098U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x4000709cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070a0U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070a4U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070a8U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070acU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070b0U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070b4U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070b8U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070bcU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070c0U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070c4U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070c8U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070ccU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x400070d0U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req;
            } else if ((0x40007168U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) {
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00;
                __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0 = 1U;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v0 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0;
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext000 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][0U][0U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext001 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][0U][1U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext002 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][0U][2U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext003 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][0U][3U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext010 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][1U][0U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext011 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][1U][1U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext012 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][1U][2U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext013 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [0U][1U][3U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext100 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [1U][0U][0U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext101 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [1U][0U][1U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext102 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [1U][0U][2U];
                vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext103 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                    [1U][0U][3U];
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01;
                __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1 = 1U;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v1 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v2 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v3 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v4 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v4 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v5 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v5 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v6 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v6 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v7 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13;
                __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v7 
                    = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_wen_Req)))) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Resp 
                = (((((((((0x40007200U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                          | (0x40007204U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                         | (0x40007208U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                        | (0x4000720cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                       | (0x40007210U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                      | (0x40007214U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                     | (0x40007218U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                    | (0x4000721cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                    ? ((0x40007200U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                        ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                       [0U][0U][0U] : ((0x40007204U 
                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                        ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                       [0U][0U][1U]
                                        : ((0x40007208U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                           [0U][0U]
                                           [2U] : (
                                                   (0x4000720cU 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                   [0U]
                                                   [0U]
                                                   [3U]
                                                    : 
                                                   ((0x40007210U 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                    [0U]
                                                    [1U]
                                                    [0U]
                                                     : 
                                                    ((0x40007214U 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                     [0U]
                                                     [1U]
                                                     [1U]
                                                      : 
                                                     ((0x40007218U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                      [0U]
                                                      [1U]
                                                      [2U]
                                                       : 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                      [0U]
                                                      [1U]
                                                      [3U])))))))
                    : (((((((((0x40007220U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                              | (0x40007224U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                             | (0x40007228U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                            | (0x4000722cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                           | (0x40007230U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                          | (0x40007234U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                         | (0x40007238U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                        | (0x4000723cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                        ? ((0x40007220U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                           [0U][2U][0U] : ((0x40007224U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                           [0U][2U]
                                           [1U] : (
                                                   (0x40007228U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                   [0U]
                                                   [2U]
                                                   [2U]
                                                    : 
                                                   ((0x4000722cU 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                    [0U]
                                                    [2U]
                                                    [3U]
                                                     : 
                                                    ((0x40007230U 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                     [0U]
                                                     [3U]
                                                     [0U]
                                                      : 
                                                     ((0x40007234U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                      [0U]
                                                      [3U]
                                                      [1U]
                                                       : 
                                                      ((0x40007238U 
                                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                        ? 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                       [0U]
                                                       [3U]
                                                       [2U]
                                                        : 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                       [0U]
                                                       [3U]
                                                       [3U])))))))
                        : (((((((((0x40007240U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                                  | (0x40007244U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                 | (0x40007248U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                | (0x4000724cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                               | (0x40007250U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                              | (0x40007254U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                             | (0x40007258U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                            | (0x4000725cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                            ? ((0x40007240U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                               [1U][0U][0U] : ((0x40007244U 
                                                == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                               [1U]
                                               [0U]
                                               [1U]
                                                : (
                                                   (0x40007248U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                   [1U]
                                                   [0U]
                                                   [2U]
                                                    : 
                                                   ((0x4000724cU 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                    [1U]
                                                    [0U]
                                                    [3U]
                                                     : 
                                                    ((0x40007250U 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                     [1U]
                                                     [1U]
                                                     [0U]
                                                      : 
                                                     ((0x40007254U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                      [1U]
                                                      [1U]
                                                      [1U]
                                                       : 
                                                      ((0x40007258U 
                                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                        ? 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                       [1U]
                                                       [1U]
                                                       [2U]
                                                        : 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                       [1U]
                                                       [1U]
                                                       [3U])))))))
                            : (((((((((0x40007260U 
                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                                      | (0x40007264U 
                                         == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                     | (0x40007268U 
                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                    | (0x4000726cU 
                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                   | (0x40007270U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                  | (0x40007274U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                 | (0x40007278U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                | (0x4000727cU == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                                ? ((0x40007260U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                    ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                   [1U][2U][0U] : (
                                                   (0x40007264U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                   [1U]
                                                   [2U]
                                                   [1U]
                                                    : 
                                                   ((0x40007268U 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                    [1U]
                                                    [2U]
                                                    [2U]
                                                     : 
                                                    ((0x4000726cU 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                     [1U]
                                                     [2U]
                                                     [3U]
                                                      : 
                                                     ((0x40007270U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                      [1U]
                                                      [3U]
                                                      [0U]
                                                       : 
                                                      ((0x40007274U 
                                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                        ? 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                       [1U]
                                                       [3U]
                                                       [1U]
                                                        : 
                                                       ((0x40007278U 
                                                         == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                         ? 
                                                        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                        [1U]
                                                        [3U]
                                                        [2U]
                                                         : 
                                                        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                                        [1U]
                                                        [3U]
                                                        [3U])))))))
                                : (((((((((0x40007280U 
                                           == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                                          | (0x40007284U 
                                             == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                         | (0x40007288U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                        | (0x4000728cU 
                                           == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                       | (0x40007290U 
                                          == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                      | (0x40007294U 
                                         == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                     | (0x40007298U 
                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                    | (0x4000729cU 
                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                                    ? ((0x40007280U 
                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                        ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                       [0U][0U][0U]
                                        : ((0x40007284U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                           [0U][0U]
                                           [1U] : (
                                                   (0x40007288U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                   [0U]
                                                   [0U]
                                                   [2U]
                                                    : 
                                                   ((0x4000728cU 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                    [0U]
                                                    [0U]
                                                    [3U]
                                                     : 
                                                    ((0x40007290U 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                     [0U]
                                                     [1U]
                                                     [0U]
                                                      : 
                                                     ((0x40007294U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                      [0U]
                                                      [1U]
                                                      [1U]
                                                       : 
                                                      ((0x40007298U 
                                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                        ? 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                       [0U]
                                                       [1U]
                                                       [2U]
                                                        : 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                       [0U]
                                                       [1U]
                                                       [3U])))))))
                                    : (((((((((0x400072a0U 
                                               == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req) 
                                              | (0x400072a4U 
                                                 == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                             | (0x400072a8U 
                                                == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                            | (0x400072acU 
                                               == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                           | (0x400072b0U 
                                              == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                          | (0x400072b4U 
                                             == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                         | (0x400072b8U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)) 
                                        | (0x400072bcU 
                                           == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req))
                                        ? ((0x400072a0U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                           [1U][0U]
                                           [0U] : (
                                                   (0x400072a4U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                   [1U]
                                                   [0U]
                                                   [1U]
                                                    : 
                                                   ((0x400072a8U 
                                                     == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                     ? 
                                                    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                    [1U]
                                                    [0U]
                                                    [2U]
                                                     : 
                                                    ((0x400072acU 
                                                      == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                      ? 
                                                     vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                     [1U]
                                                     [0U]
                                                     [3U]
                                                      : 
                                                     ((0x400072b0U 
                                                       == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                       ? 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                      [1U]
                                                      [1U]
                                                      [0U]
                                                       : 
                                                      ((0x400072b4U 
                                                        == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                        ? 
                                                       vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                       [1U]
                                                       [1U]
                                                       [1U]
                                                        : 
                                                       ((0x400072b8U 
                                                         == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                         ? 
                                                        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                        [1U]
                                                        [1U]
                                                        [2U]
                                                         : 
                                                        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                                        [1U]
                                                        [1U]
                                                        [3U])))))))
                                        : ((0x400072c0U 
                                            == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                            ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__message
                                            : ((0x400072c4U 
                                                == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decimal_value
                                                : (
                                                   (0x400072c8U 
                                                    == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b) 
                                                                    >> 3U)))) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b))
                                                    : 0U)))))))));
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__i = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk5__DOT__i = 4U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8 = 1U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Resp = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 = 0U;
        __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext000 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext001 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext002 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext003 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext010 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext011 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext012 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext013 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext100 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext101 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext102 = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext103 = 0U;
        __VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v9 = 1U;
    }
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z 
            = (9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp));
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
           | (4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
            << 1U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_3[1U] >> 2U)) | (0xffU 
                                                & (__Vtemp_7[1U] 
                                                   >> 0x12U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.io_rvfi_rs2_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_2;
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_1));
    vlSelfRef.io_rvfi_rs1_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_1;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
              & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    vlSelfRef.io_rvfi_mem_rdata_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_9)
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_rd
                                      : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_0 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0;
    vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___counter_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                   | ((0x13U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                      & ((0x73U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                         & ((3U 
                                                             != 
                                                             (0x7fU 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                            & ((0x23U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                               & ((0x63U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101))))))));
    vlSelfRef.io_rvfi_mem_addr_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_7)
                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_8
                                     : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0));
    vlSelfRef.io_rvfi_insn_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins;
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 
        = (1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins)))));
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack 
        = (((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid) 
            & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg)) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
            << 4U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                       << 3U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo)));
    if (vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) {
        vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid 
            = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid) 
               & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req 
            = vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req 
            = vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg;
    } else {
        vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req = 0U;
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__message 
        = __Vdly__XSoC__DOT__babyKyber__DOT__bkyber__DOT__message;
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg__v7;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v7;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v7;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v8;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v9;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v10;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v11;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v12;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v13;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v14;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg__v15;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][0U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v0;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1__v7;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][0U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][1U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][2U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][3U] 
            = __VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__r__v7;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v8) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][0U] = 0U;
    }
    if (__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg__v9) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[2U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[3U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[1U][3U] = 0U;
    }
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_27 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__respReg));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_4 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_3;
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack 
        = ((IData)(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid) 
           & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__validReg));
    vlSelfRef.XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we) 
           & (IData)(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle 
        = (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
              >> 0x19U));
    vlSelfRef.XSoC__DOT__uart__DOT__rx_done = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG 
        = (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                    >> 0x14U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG 
        = (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                    >> 0xfU));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memRead 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x33U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                   & ((0x13U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                      & ((0x73U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                         & ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                            | ((0x23U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                               & ((0x63U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                  & ((0x37U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                     & ((0x17U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                        & ((0x6fU 
                                                                            != 
                                                                            (0x7fU 
                                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                           & ((0x67U 
                                                                               != 
                                                                               (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                              & (7U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memWrite 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x13U 
                                                    != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                                   & ((0x33U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                      & ((0x13U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                         & ((0x73U 
                                                             != 
                                                             (0x7fU 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                            & ((3U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                               & ((0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                  | ((0x63U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                     & ((0x37U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                        & ((0x17U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                           & ((0x6fU 
                                                                               != 
                                                                               (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                              & ((0x67U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((7U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & (0x27U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [2U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [2U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [2U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [2U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [3U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [3U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [3U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
        [3U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid)) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1;
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_pc = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memToReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_imm = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3 = 0U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data;
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en) {
            if ((0x300U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                if ((0x342U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))) {
                    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG 
                        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36;
                }
            }
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_pc 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memToReg 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memToReg;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_imm 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1 
            = ((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                ? 0U : ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                         ? 0U : ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                      ? 2U
                                                      : 
                                                     (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3 
            = (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                     >> 0xcU));
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp))
            ? 2U : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp))
                     ? 0xfU : ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                ? ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc)) 
                                          | (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7) 
                                                >> 5U))))
                                    ? 2U : 3U) : ((1U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                   ? 6U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7))
                                                       ? 8U
                                                       : 7U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                       ? 0U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                        ? 1U
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                                                         ? 9U
                                                         : 0xfU))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
           & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en)) 
              & ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                 | ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                    | ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                       | (7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode 
        = (7U & ((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                  ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data 
                     >> 5U) : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)));
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd2 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result = 0U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd2 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData2;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange 
        = ((0x40008000U <= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result) 
           & (0x40008fffU >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x4000716cU == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    if ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12 = 1U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22 = 3U;
    } else if ((1U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12 = 2U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22 = 6U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12 
            = ((2U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                ? 4U : 8U);
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22 = 0xcU;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x40007164U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange 
        = ((0x40007000U <= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result) 
           & (0x40007fffU >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x40007168U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wra));
    vlSelfRef.io_rvfi_rd_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_1));
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__rx = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memToReg = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wra = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg = 0U;
        __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_wra = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_1 = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__rx_en = 0U;
        vlSelfRef.XSoC__DOT__uart__DOT__control = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg = 0xfffffffcU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins = 0U;
    } else {
        if (vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_3) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg = 1U;
        } else if (vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_5) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg = 2U;
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins;
        vlSelfRef.XSoC__DOT__uart__DOT__rx = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data 
            = (((1U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                        >> 0x14U)) | (3U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)))
                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                   | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0)
                         ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5)
                         : 0U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f)
                                   ? ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4) 
                                        << 4U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2) 
                                                     << 2U))) 
                                      | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1) 
                                          << 1U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0)))
                                   : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_f)
                                              ? ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2) 
                                                        << 2U))) 
                                                 | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0)))
                                              : 0U)))
                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data);
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memToReg 
            = ((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                ? 0U : ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                         ? 0U : ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                           ? 1U : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                         ? 2U
                                                         : 
                                                        (7U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wra 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_wra;
        if ((1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall)))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0 
                = ((0x13U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_wra 
                = (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                            >> 7U));
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_1 
                = ((0x13U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr));
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 
            = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24)
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)
                : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg));
        if ((0U != (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
            if ((1U != (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                if ((2U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg 
                        = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_9;
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
            __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
                = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)
                    ? 1U : 0U);
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count = 0U;
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index = 0U;
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV = 0U;
        } else {
            if ((1U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
                    = (((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count) 
                        == (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                    (0xffffU 
                                                     & ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__control) 
                                                        - (IData)(1U))), 1U)))
                        ? ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)
                            ? 2U : 0U) : 1U);
                vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count 
                    = (((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count) 
                        == (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                    (0xffffU 
                                                     & ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__control) 
                                                        - (IData)(1U))), 1U)))
                        ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_1)
                        : (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___r_Clock_Count_T_1));
            } else if ((2U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
                    = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_8;
                vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count 
                    = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_7;
            } else {
                __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
                    = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_17;
                vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count 
                    = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_16;
            }
            if ((1U != (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                if ((2U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index 
                        = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_10;
                }
                if ((2U != (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
                    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV 
                        = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_18;
                }
            }
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg;
        if (((~ (IData)(vlSelfRef.XSoC__DOT__uart_io_ren)) 
             & (IData)(vlSelfRef.XSoC__DOT__uart_io_we))) {
            if ((0U != (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))) {
                if ((4U != (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))) {
                    vlSelfRef.XSoC__DOT__uart__DOT__rx_en 
                        = vlSelfRef.XSoC__DOT__uart__DOT___GEN_8;
                }
            }
            if ((0U == (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))) {
                vlSelfRef.XSoC__DOT__uart__DOT__control 
                    = (0xffffU & vlSelfRef.XSoC__DOT__uart_io_wdata);
            }
        }
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT___npc_T_2;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
            = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush)
                ? 0U : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction);
    }
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg)) 
           | (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0U == (0x7000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x1000U == (0x7000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12)
            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22)
                : 0xfU));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 
        = (1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)))));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_27 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__respReg));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_wen_Req 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    __Vtemp_90[0U] = 0U;
    __Vtemp_90[1U] = 0U;
    __Vtemp_90[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_91, __Vtemp_90, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_94[0U] = 0U;
    __Vtemp_94[1U] = 0U;
    __Vtemp_94[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_95, __Vtemp_94, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_98[0U] = 0U;
    __Vtemp_98[1U] = 0U;
    __Vtemp_98[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_99, __Vtemp_98, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_102[0U] = 0U;
    __Vtemp_102[1U] = 0U;
    __Vtemp_102[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_103, __Vtemp_102, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_106[0U] = 0U;
    __Vtemp_106[1U] = 0U;
    __Vtemp_106[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_107, __Vtemp_106, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_110[0U] = 0U;
    __Vtemp_110[1U] = 0U;
    __Vtemp_110[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_111, __Vtemp_110, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_114[0U] = 0U;
    __Vtemp_114[1U] = 0U;
    __Vtemp_114[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_115, __Vtemp_114, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_118[0U] = 0U;
    __Vtemp_118[1U] = 0U;
    __Vtemp_118[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_119, __Vtemp_118, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_122[0U] = 0U;
    __Vtemp_122[1U] = 0U;
    __Vtemp_122[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_123, __Vtemp_122, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
             ? 0U : ((0x80U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                      ? ((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                          ? 0U : ((4U & (__Vtemp_91[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_95[0U]) 
                                   | (1U & (__Vtemp_99[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                 ? (((0x155540U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_103[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_107[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_111[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_115[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_119[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_123[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                    >> 0x19U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
           | ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
              & ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                 | ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                    | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                       | (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)))))));
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid 
            = ((0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)) 
               & (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1));
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid 
            = XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
              | (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u 
        = ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | (7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s 
        = ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
           | (4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)));
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 4U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_addrRequest 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange)
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
            : 0U);
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_1 = 
        ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg) 
         | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange)) 
            & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite));
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg));
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 4U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
        = (((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
               ? ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                   ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                      >> 0x18U) : ((1U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                    ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                       >> 0x18U) : 
                                   ((2U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                     ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                        >> 0x18U) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd)))
               : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                   ? ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                       ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                          >> 0x18U) : ((1U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                           >> 0x18U)
                                        : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                           >> 8U)))
                   : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                      >> 0x18U))) << 0x18U) | (0xff0000U 
                                               & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x10U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                       : 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                       >> 0x18U))))
                                                    : 
                                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x10U)
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                       ? 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                       >> 8U)
                                                       : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd))
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U))) 
                                                  << 0x10U))) 
           | ((0xff00U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                            ? ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                   >> 8U) : ((1U == 
                                              (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                              : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                 >> 0x10U)))
                            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                ? ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                    ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                       >> 8U) : ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                  : 
                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                  >> 0x18U)))
                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                   >> 8U))) << 8U)) 
              | (0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                           ? ((0U == (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                               : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                  >> 8U)) : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                  : 
                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                  >> 0x10U))
                                              : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_3 
        = vlSelfRef.XSoC__DOT__core__DOT__core__DOT___npc_T_2;
    vlSelfRef.XSoC__DOT__uart__DOT___GEN_29 = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_done) 
                                               | ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr) 
                                                  & (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_status)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_f 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_12 
        = ((0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite) 
           & (IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1));
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite)) 
           & (IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst 
        = ((0x43U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
           | ((0x47U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
              | ((0x4bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                 | ((0x4fU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                    | ((0x53U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                       | ((0x8000053U == (0xfe00007fU 
                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                          | ((0x10000053U == (0xfe00007fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                             | ((0x20000053U == (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                | ((0x20001053U == 
                                    (0xfe00707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                   | ((0x20002053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                      | ((0x28000053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                         | ((0x28001053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                            | ((0xc0000053U 
                                                == 
                                                (0xfff0007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                               | ((0xc0100053U 
                                                   == 
                                                   (0xfff0007fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                  | ((0xe0000053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                     | ((0xa0002053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                        | ((0xa0001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                           | ((0xa0000053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                              | ((0xe0001053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                                 | ((0xd0000053U 
                                                                     == 
                                                                     (0xfff0007fU 
                                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                                    | ((0xd0100053U 
                                                                        == 
                                                                        (0xfff0007fU 
                                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                                                       | (0xf0000053U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & ((0x18000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
              | (0x58000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp 
        = ((0x43U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
            ? 1U : ((0x47U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                     ? 2U : ((0x4bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                              ? 3U : ((0x4fU == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                       ? 4U : ((0x53U 
                                                == 
                                                (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                ? 5U
                                                : (
                                                   (0x8000053U 
                                                    == 
                                                    (0xfe00007fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                    ? 6U
                                                    : 
                                                   ((0x10000053U 
                                                     == 
                                                     (0xfe00007fU 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                     ? 7U
                                                     : 
                                                    ((0x18000053U 
                                                      == 
                                                      (0xfe00007fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                      ? 8U
                                                      : 
                                                     ((0x58000053U 
                                                       == 
                                                       (0xfe00007fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                       ? 9U
                                                       : 
                                                      ((0x20000053U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                        ? 0xaU
                                                        : 
                                                       ((0x20001053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                         ? 0xbU
                                                         : 
                                                        ((0x20002053U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                          ? 0xcU
                                                          : 
                                                         ((0x28000053U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                           ? 0xdU
                                                           : 
                                                          ((0x28001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                            ? 0xeU
                                                            : 
                                                           ((0xc0000053U 
                                                             == 
                                                             (0xfff0007fU 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                             ? 0xfU
                                                             : 
                                                            ((0xc0100053U 
                                                              == 
                                                              (0xfff0007fU 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                              ? 0x10U
                                                              : 
                                                             ((0xe0000053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                               ? 0x11U
                                                               : 
                                                              ((0xa0002053U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                ? 0x12U
                                                                : 
                                                               ((0xa0001053U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                 ? 0x13U
                                                                 : 
                                                                ((0xa0000053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0xe0001053U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0xd0000053U 
                                                                    == 
                                                                    (0xfff0007fU 
                                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0xd0100053U 
                                                                     == 
                                                                     (0xfff0007fU 
                                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0xf0000053U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))
                                                                      ? 0x18U
                                                                      : 0U))))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC 
        = ((((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                       >> 7U)) == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                   >> 0x1bU)) & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_2)))
            ? 1U : ((((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                >> 7U)) == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                            >> 0x1bU)) 
                     & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_2) 
                        & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                     ? 2U : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA 
        = ((((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2) 
             & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                          >> 7U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                               >> 0xfU)))) 
            & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0))))
            ? 1U : ((((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11) 
                      & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                                  >> 0xfU)))) 
                     & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0)) 
                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
                     ? 2U : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB 
        = ((((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2) 
             & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                          >> 7U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                               >> 0x14U)))) 
            & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1))))
            ? 1U : ((((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11) 
                      & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                                  >> 0x14U)))) 
                     & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1)) 
                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
                     ? 2U : 0U));
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main 
        = __Vdly__XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5)
            ? ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
               & ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   ? (1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready)))
            : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_9 = 
        ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0) 
         | ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2) 
            | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction)));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_10 
        = ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0) 
           | ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2) 
              | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stbReg)));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_11 
        = ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0) 
           | ((IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2) 
              | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall 
        = (1U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
                  | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) 
                     & (0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)))) 
                 | ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
                    | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                       | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 
        = ((9U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling 
        = ((0x13U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | (0x14U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
              | ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                 | (4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9 
        = ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op 
        = ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
            ? 3U : ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                     ? 2U : (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___r_Clock_Count_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                                      >> 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                                      >> 3U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                                      >> 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                                      >> 1U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall)) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)));
    vlSelfRef.XSoC__DOT__uart_io_ren = ((~ (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we)) 
                                        & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack));
    vlSelfRef.XSoC__DOT__uart_io_we = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we) 
                                       & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack));
    if (vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) {
        vlSelfRef.XSoC__DOT__uart_io_wdata = vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__datReg;
        vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr 
            = vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__adrReg;
    } else {
        vlSelfRef.XSoC__DOT__uart_io_wdata = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr = 0U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__io_is_f_o_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_f));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                               & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)
            ? 0U : (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count));
    vlSelfRef.XSoC__DOT__uart__DOT___GEN_8 = (1U & 
                                              ((0xcU 
                                                == 
                                                (0xffU 
                                                 & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                ? vlSelfRef.XSoC__DOT__uart_io_wdata
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                    ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0xffU 
                                                      & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr)) 
                                                    & (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)))));
    vlSelfRef.XSoC__DOT__uart__DOT___GEN_25 = (((~ (IData)(vlSelfRef.XSoC__DOT__uart_io_ren)) 
                                                & (IData)(vlSelfRef.XSoC__DOT__uart_io_we))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                    ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xffU 
                                                      & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                     ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr)
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xffU 
                                                       & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                      ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0xffU 
                                                        & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                                       ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr)
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0xffU 
                                                         & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr)) 
                                                       & vlSelfRef.XSoC__DOT__uart_io_wdata)))))
                                                : (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr));
    XSoC__DOT__uart__DOT__uart_rx__DOT___T_11 = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count) 
                                                 < 
                                                 (0xffffU 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__control) 
                                                     - (IData)(1U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))
            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg 
               >> 2U) : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr 
        = ((7U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           | ((0x43U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              | ((0x47U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 | ((0x4bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    | ((0x4fU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       | ((0x53U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          | ((0x8000053U == (0xfe00007fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                             | ((0x10000053U == (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x18000053U == 
                                    (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x58000053U 
                                       == (0xfe00007fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x20000053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x20001053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x20002053U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x28000053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0x28001053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                     | ((0xd0000053U 
                                                         == 
                                                         (0xfff0007fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0xd0100053U 
                                                            == 
                                                            (0xfff0007fU 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                           | (0xf0000053U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en 
        = ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           & (0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
        = ((((3U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
             | ((0xfU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                | ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                   | ((0x1bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                      | ((0x67U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                         | (0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))) 
            | (7U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
            ? ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                  >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
               | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                  >> 0x14U)) : (((0x17U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                 | (0x37U == (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
                                 ? (0xfffff000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)
                                 : (((0x23U == (0x7fU 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                     | (0x27U == (0x7fU 
                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
                                     ? ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0x1fU)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0xfe0U 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))
                                     : ((0x63U == (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                         ? ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0x1fU)
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU) 
                                            | (((0x1000U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 7U)))))
                                         : (((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0x1fU)
                                                ? 0x7ffU
                                                : 0U) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                                | (0x800U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
        = ((3U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                   >> 0x14U)) ? (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                  << 5U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))
            : ((2U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                       >> 0x14U)) ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                : ((1U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                           >> 0x14U)) ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10)
                    : ((0x304U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG
                        : ((0x341U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG
                            : ((0x305U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U))
                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG
                                : ((0x342U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG
                                    : ((0x300U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U))
                                        ? (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                            << 0x15U) 
                                           | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                               << 0x11U) 
                                              | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                       << 3U)))))
                                        : ((0xf14U 
                                            == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                            : ((0x301U 
                                                == 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG
                                                : 0U))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
           & (0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7 
        = ((((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
             | (IData)((0x5013U == (0x707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))) 
            | (0x53U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
               >> 0x19U) : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump 
        = ((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
            ? 0U : ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                     ? 0U : ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                              ? 0U : ((3U == (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                       ? 0U : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                ? 0U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                       ? 1U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 0U))))))))));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7 
        = ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
           & (0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                              >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra) 
           == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 
        = ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0)) 
           & (0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                              >> 7U))));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1 
        = ((0xc0000053U == (0xfff0007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           | ((0xc0100053U == (0xfff0007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              | ((0xe0000053U == (0xfe00707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 | ((0xa0002053U == (0xfe00707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    | ((0xa0001053U == (0xfe00707fU 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       | ((0xa0000053U == (0xfe00707fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          | (0xe0001053U == (0xfe00707fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13 
        = ((0x43U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           | (0x47U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)));
    if (XSoC__DOT__uart__DOT__uart_rx__DOT___T_11) {
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_8 = 2U;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_10 
            = (7U & (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index));
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_9 
            = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg;
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_7 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count)));
    } else {
        if ((7U > (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index))) {
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_8 = 2U;
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index)));
        } else {
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_8 = 3U;
            vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_10 
                = (7U & 0U);
        }
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_9 
            = (((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg) 
                << 7U) | (0x7fU & ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg) 
                                   >> 1U)));
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_7 = 0U;
    }
    if ((3U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))) {
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_17 
            = ((IData)(XSoC__DOT__uart__DOT__uart_rx__DOT___T_11)
                ? 3U : 4U);
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_18 
            = (1U & ((~ (IData)(XSoC__DOT__uart__DOT__uart_rx__DOT___T_11)) 
                     | (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV)));
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_16 
            = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_7;
    } else {
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_17 
            = ((4U == (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main))
                ? 0U : (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main));
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_18 
            = (1U & ((4U != (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main)) 
                     & (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV)));
        vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_16 
            = vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1 
        = (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
           + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall) 
           | ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7)) 
              & ((4U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                               >> 0xcU))) | ((5U == 
                                              (7U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                             | ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU))) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr)) 
            & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4)) 
           & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx 
        = (((IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr)) 
           & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite 
        = ((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           | ((0x13U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              | ((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 | ((3U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    | ((0x23U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       & ((0x63U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          & ((0x37U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                             | ((0x17U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((7U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x27U 
                                             != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x43U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x47U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x4bU 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x4fU 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                        & ((0x53U 
                                                            != 
                                                            (0xfe00007fU 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                           & ((0x8000053U 
                                                               != 
                                                               (0xfe00007fU 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                              & ((0x10000053U 
                                                                  != 
                                                                  (0xfe00007fU 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                 & ((0x18000053U 
                                                                     != 
                                                                     (0xfe00007fU 
                                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                    & ((0x58000053U 
                                                                        != 
                                                                        (0xfe00007fU 
                                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                       & ((0x20000053U 
                                                                           != 
                                                                           (0xfe00707fU 
                                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                          & ((0x20001053U 
                                                                              != 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                             & ((0x20002053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0x28000053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0x28001053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xd0000053U 
                                                                                != 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xd0100053U 
                                                                                != 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xf0000053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                                & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101 
        = ((0x37U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           & ((0x17U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              & ((0x6fU != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 & ((0x67U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    & ((7U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       & ((0x27U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          & ((0x43U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                             | ((0x47U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x4bU == (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x4fU == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x53U == 
                                          (0xfe00007fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x8000053U 
                                             == (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x10000053U 
                                                == 
                                                (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x18000053U 
                                                   == 
                                                   (0xfe00007fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0x58000053U 
                                                      == 
                                                      (0xfe00007fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                     | ((0x20000053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0x20001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                           | ((0x20002053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                              | ((0x28000053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                 | ((0x28001053U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                    | ((0xd0000053U 
                                                                        == 
                                                                        (0xfff0007fU 
                                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                       | ((0xd0100053U 
                                                                           == 
                                                                           (0xfff0007fU 
                                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                          | ((0xf0000053U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                                             | (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1 
        = ((0x27U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
           | ((IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13) 
              | ((0x4bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 | ((0x4fU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    | ((0x53U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       | ((0x8000053U == (0xfe00007fU 
                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          | ((0x10000053U == (0xfe00007fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                             | ((0x18000053U == (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x20000053U == 
                                    (0xfe00707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x20001053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x20002053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x28000053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x28001053U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               | ((0xa0002053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0xa0001053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                     | (0xa0000053U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2 
        = ((IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13) 
           | ((0x4bU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              | (0x4fU == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
           & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr)) 
               & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4)) 
              & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
           & (((IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4) 
               & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr)) 
              & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)
            ? ((0x1fU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U)))
                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U)))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U)))
                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U)))
                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                >> 0x14U)))
                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x14U)))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x14U)))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x14U)))
                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x14U)))
                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x14U)))
                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x14U)))
                                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x14U)))
                                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x14U)))
                                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x14U)))
                                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x14U)))
                                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                           >> 0x14U)))
                                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                            >> 0x14U)))
                                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                             >> 0x14U)))
                                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : ((0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))) ? ((0x1fU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31
                                                : (
                                                   (0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26
                                                        : 
                                                       ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U)))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25
                                                         : 
                                                        ((0x18U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U)))
                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U)))
                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23
                                                           : 
                                                          ((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                >> 0x14U)))
                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22
                                                            : 
                                                           ((0x15U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x14U)))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21
                                                             : 
                                                            ((0x14U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x14U)))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20
                                                              : 
                                                             ((0x13U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x14U)))
                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19
                                                               : 
                                                              ((0x12U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x14U)))
                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18
                                                                : 
                                                               ((0x11U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x14U)))
                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x14U)))
                                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16
                                                                  : 
                                                                 ((0xfU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x14U)))
                                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15
                                                                   : 
                                                                  ((0xeU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x14U)))
                                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14
                                                                    : 
                                                                   ((0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x14U)))
                                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13
                                                                     : 
                                                                    ((0xcU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x14U)))
                                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12
                                                                      : 
                                                                     ((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                           >> 0x14U)))
                                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11
                                                                       : 
                                                                      ((0xaU 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                            >> 0x14U)))
                                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10
                                                                        : 
                                                                       ((9U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                             >> 0x14U)))
                                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9
                                                                         : 
                                                                        ((8U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                              >> 0x14U)))
                                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8
                                                                          : 
                                                                         ((7U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                               >> 0x14U)))
                                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7
                                                                           : 
                                                                          ((6U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6
                                                                            : 
                                                                           ((5U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5
                                                                             : 
                                                                            ((4U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4
                                                                              : 
                                                                             ((3U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3
                                                                               : 
                                                                              ((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1
                                                                                 : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0)))))))))))))))))))))))))))))))
                : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2)
            ? ((0x1fU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                          >> 0x1bU)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                              >> 0x1bU)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                  >> 0x1bU)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                      >> 0x1bU)) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                          >> 0x1bU))
                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                              >> 0x1bU))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                  >> 0x1bU))
                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                             >> 0x1bU))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 0x1bU))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1bU))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1bU))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                       >> 0x1bU))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 0x1bU))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0x1bU))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1bU))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0x1bU))
                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0x1bU))
                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0x1bU))
                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0x1bU))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0x1bU))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                >> 0x1bU))
                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x1bU))
                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x1bU))
                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x1bU))
                                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x1bU))
                                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x1bU))
                                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x1bU))
                                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x1bU))
                                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x1bU))
                                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x1bU))
                                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x1bU))
                                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
           | ((0x53U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
              | ((0x8000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                 | ((0x10000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                    | ((0x18000053U == (0xfe00007fU 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                       | ((0x58000053U == (0xfe00007fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                          | ((0x20000053U == (0xfe00707fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                             | ((0x20001053U == (0xfe00707fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x20002053U == 
                                    (0xfe00707fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x28000053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x28001053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x2000000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 
        = ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
             & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))
            ? 6U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem)
                     ? 5U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)
                              ? 4U : ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                                        & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)) 
                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                       & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))
                                       ? 3U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem)
                                                ? 2U
                                                : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)
            ? ((0x1fU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                   >> 0xfU))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0xfU)))
                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0xfU)))
                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)))
                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0xfU)))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0xfU)))
                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0xfU)))
                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                >> 0xfU)))
                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                 >> 0xfU)))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                  >> 0xfU)))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                   >> 0xfU)))
                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                    >> 0xfU)))
                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                     >> 0xfU)))
                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                      >> 0xfU)))
                                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                       >> 0xfU)))
                                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                        >> 0xfU)))
                                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                         >> 0xfU)))
                                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                          >> 0xfU)))
                                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                           >> 0xfU)))
                                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                            >> 0xfU)))
                                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                             >> 0xfU)))
                                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : ((0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                >> 0xfU))) ? ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)))
                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27
                                                      : 
                                                     ((0x1aU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26
                                                       : 
                                                      ((0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                             >> 0xfU)))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                              >> 0xfU)))
                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23
                                                          : 
                                                         ((0x16U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                               >> 0xfU)))
                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22
                                                           : 
                                                          ((0x15U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                >> 0xfU)))
                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21
                                                            : 
                                                           ((0x14U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                 >> 0xfU)))
                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20
                                                             : 
                                                            ((0x13U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                  >> 0xfU)))
                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19
                                                              : 
                                                             ((0x12U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                   >> 0xfU)))
                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18
                                                               : 
                                                              ((0x11U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                    >> 0xfU)))
                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                     >> 0xfU)))
                                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16
                                                                 : 
                                                                ((0xfU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                      >> 0xfU)))
                                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                       >> 0xfU)))
                                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                        >> 0xfU)))
                                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                         >> 0xfU)))
                                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                          >> 0xfU)))
                                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                           >> 0xfU)))
                                                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10
                                                                       : 
                                                                      ((9U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                            >> 0xfU)))
                                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9
                                                                        : 
                                                                       ((8U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                             >> 0xfU)))
                                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                              >> 0xfU)))
                                                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                               >> 0xfU)))
                                                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5
                                                                            : 
                                                                           ((4U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                             ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3
                                                                              : 
                                                                             ((2U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1
                                                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0)))))))))))))))))))))))))))))))
                : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
}

VL_INLINE_OPT void VXSoC___024root___nba_sequent__TOP__2(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_sequent__TOP__2\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg)) 
               & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xffU & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff00U & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffffffU & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg)) 
               & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xffU & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff00U & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg))) {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem[vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg] 
                = ((0xffffffU & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem
                    [vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg));
        }
    }
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wdata_o = 0U;
    if (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg)) 
         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg))) {
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram_rdata_o 
            = vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem
            [vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg];
    }
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wmask_o = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__addr_o = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wmask_o = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wdata_o = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__addr_o = 0U;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wmask_o = 0xfU;
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__addr_o 
            = (0x1fffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2);
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wmask_o 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane;
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wdata_o 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest;
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__addr_o 
            = (0x1fffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result 
                          >> 2U));
    }
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__we_o 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i));
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__csb 
        = ((IData)(vlSelfRef.reset) || (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid))));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__csb 
        = ((IData)(vlSelfRef.reset) || (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid))));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__we_o 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    if (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg)) 
         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg))) {
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o 
            = vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem
            [vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg];
    }
}

VL_INLINE_OPT void VXSoC___024root___nba_sequent__TOP__3(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_sequent__TOP__3\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rvalid = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rvalid = 0U;
    } else {
        if (vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i) {
            if (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i))) {
                vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rvalid = 1U;
            }
        } else {
            vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rvalid = 0U;
        }
        if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid) {
            if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid) {
                vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rvalid = 1U;
            }
        } else {
            vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rvalid = 0U;
        }
    }
}

VL_INLINE_OPT void VXSoC___024root___nba_sequent__TOP__4(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_sequent__TOP__4\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v1;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v2;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v3;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v4;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v5;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v6;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v7;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v8;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v9;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v10;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v11;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v12;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v13;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v14;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v15;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v16;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v17;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v18;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v19;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][0U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v20;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][1U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v21;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][2U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v22;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][3U] 
            = vlSelfRef.__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v23;
    }
    if (vlSelfRef.__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v24) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][2U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[0U][3U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][0U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][1U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][2U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][2U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][2U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][2U][3U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][3U][0U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][3U][1U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][3U][2U] = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[1U][3U][3U] = 0U;
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [1U][1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][3U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][3U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][3U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][3U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][2U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][2U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][2U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][2U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
        [0U][0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][0U];
}

VL_INLINE_OPT void VXSoC___024root___nba_comb__TOP__0(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___nba_comb__TOP__0\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][3U] = 0U;
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                          [0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                          [1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                          [2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                          [3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [0U][0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [1U][0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [0U][0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [0U][0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [0U][0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [1U][0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [1U][0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [1U][0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [0U][1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [1U][1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [0U][1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [0U][1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [0U][1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [1U][1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [1U][1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [1U][1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [0U][2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [1U][2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [0U][2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [0U][2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [0U][2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [1U][2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [1U][2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [1U][2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [0U][3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
               [1U][3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [0U][3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [0U][3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [0U][3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                          [1U][3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
               [1U][3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] = 0U;
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
               [0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
               [1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
               [2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
               [3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                          [0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                          [1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                          [2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                          [3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [0U][0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [1U][0U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][0U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][0U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][0U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [0U][1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [1U][1U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][1U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][1U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][1U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [0U][2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [1U][2U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][2U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][2U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][2U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [0U][3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
               [1U][3U]);
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][3U], (IData)(0x11U)));
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][3U]) ? vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][3U] : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = ((vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
            [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2
            [0U]) - vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [3U]);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                      [0U]) ? ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                               [0U]) : VL_MODDIVS_III(32, 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = ((vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
            [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2
            [1U]) - vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [2U]);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                      [1U]) ? ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                               [1U]) : VL_MODDIVS_III(32, 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = ((vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
            [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2
            [2U]) - vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [1U]);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                      [2U]) ? ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                               [2U]) : VL_MODDIVS_III(32, 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = ((vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2
            [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2
            [3U]) - vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [0U]);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                      [3U]) ? ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                               [3U]) : VL_MODDIVS_III(32, 
                                                      vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][0U] - (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [0U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [0U]));
    if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U])) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]);
        if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [0U])) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
                = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U]);
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [0U], (IData)(0x11U));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][1U] - (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [1U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [1U]));
    if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U])) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [1U]);
        if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [1U])) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
                = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U]);
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [1U], (IData)(0x11U));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][2U] - (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [2U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [2U]));
    if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U])) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [2U]);
        if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [2U])) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
                = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U]);
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [2U], (IData)(0x11U));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][3U] - (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [3U] + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [3U]));
    if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U])) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [3U]);
        if (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [3U])) {
            vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
                = ((IData)(0x11U) + vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U]);
        }
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [3U], (IData)(0x11U));
    }
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (VL_GTS_III(32, 5U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [0U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [0U])
                                     ? 9U : 0U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (VL_GTS_III(32, 5U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [1U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [1U])
                                     ? 9U : 0U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (VL_GTS_III(32, 5U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [2U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [2U])
                                     ? 9U : 0U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (VL_GTS_III(32, 5U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [3U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [3U])
                                     ? 9U : 0U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b 
        = ((0xeU & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b)) 
           | ((9U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]) ? 1U : 0U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b 
        = ((0xdU & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [1U]) ? 1U : 0U) << 1U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b 
        = ((0xbU & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [2U]) ? 1U : 0U) << 2U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b 
        = ((7U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [3U]) ? 1U : 0U) << 3U));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decimal_value 
        = (((((1U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b))
               ? 8U : 0U) | ((2U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b))
                              ? 4U : 0U)) | ((4U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b))
                                              ? 2U : 0U)) 
           | ((8U & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b))
               ? 1U : 0U));
    VL_WRITEF_NX("decimal_value = %0#\n",0,32,vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decimal_value);
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][3U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][2U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][1U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][0U];
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
}
