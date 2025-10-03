// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXSoC.h for the primary calling header

#include "VXSoC__pch.h"
#include "VXSoC___024root.h"

VL_ATTR_COLD void VXSoC___024root___eval_static(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_static\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__XSoC__DOT__babyKyber__DOT__bkyber_rst_n__0 
        = vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n;
}

VL_ATTR_COLD void VXSoC___024root___eval_initial__TOP(VXSoC___024root* vlSelf);

VL_ATTR_COLD void VXSoC___024root___eval_initial(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_initial\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VXSoC___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<14>/*447:0*/ VXSoC__ConstPool__CONST_hf2b71a71_0;
extern const VlWide<14>/*447:0*/ VXSoC__ConstPool__CONST_h032076c6_0;

VL_ATTR_COLD void VXSoC___024root___eval_initial__TOP(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_initial__TOP\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_rvfi_mode_0 = 3U;
    VL_READMEM_N(true, 32, 268435456, 0, VL_CVT_PACK_STR_NW(14, VXSoC__ConstPool__CONST_hf2b71a71_0)
                 ,  &(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 268435456, 0, VL_CVT_PACK_STR_NW(14, VXSoC__ConstPool__CONST_h032076c6_0)
                 ,  &(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VXSoC___024root___eval_final(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_final\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__stl(VXSoC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VXSoC___024root___eval_phase__stl(VXSoC___024root* vlSelf);

VL_ATTR_COLD void VXSoC___024root___eval_settle(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_settle\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VXSoC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/mhussain/XSoC-Lite/output/kyber_demo.c/XSoC.v", 8020, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VXSoC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__stl(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___dump_triggers__stl\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VXSoC___024root___stl_sequent__TOP__0(VXSoC___024root* vlSelf);
VL_ATTR_COLD void VXSoC___024root____Vm_traceActivitySetAll(VXSoC___024root* vlSelf);

VL_ATTR_COLD void VXSoC___024root___eval_stl(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_stl\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VXSoC___024root___stl_sequent__TOP__0(vlSelf);
        VXSoC___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VXSoC___024root___stl_sequent__TOP__0(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___stl_sequent__TOP__0\n"); );
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
    IData/*31:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142 = 0;
    CData/*4:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    CData/*4:0*/ XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3;
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1 = 0;
    CData/*0:0*/ XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2;
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2 = 0;
    CData/*0:0*/ XSoC__DOT__uart__DOT__uart_rx__DOT___T_11;
    XSoC__DOT__uart__DOT__uart_rx__DOT___T_11 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_274;
    VlWide<3>/*95:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_278;
    VlWide<3>/*95:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_282;
    VlWide<3>/*95:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_294;
    VlWide<3>/*95:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_298;
    VlWide<3>/*95:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_342;
    VlWide<3>/*95:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_346;
    VlWide<3>/*95:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    VlWide<3>/*95:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    VlWide<3>/*95:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    VlWide<3>/*95:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    VlWide<3>/*95:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    VlWide<3>/*95:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    VlWide<3>/*95:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    VlWide<3>/*95:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    VlWide<3>/*95:0*/ __Vtemp_416;
    VlWide<3>/*95:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_420;
    VlWide<3>/*95:0*/ __Vtemp_421;
    VlWide<3>/*95:0*/ __Vtemp_424;
    VlWide<3>/*95:0*/ __Vtemp_425;
    VlWide<3>/*95:0*/ __Vtemp_428;
    VlWide<3>/*95:0*/ __Vtemp_429;
    VlWide<3>/*95:0*/ __Vtemp_432;
    VlWide<3>/*95:0*/ __Vtemp_433;
    VlWide<3>/*95:0*/ __Vtemp_436;
    VlWide<3>/*95:0*/ __Vtemp_437;
    VlWide<3>/*95:0*/ __Vtemp_440;
    VlWide<3>/*95:0*/ __Vtemp_441;
    VlWide<3>/*95:0*/ __Vtemp_444;
    VlWide<3>/*95:0*/ __Vtemp_445;
    VlWide<3>/*95:0*/ __Vtemp_448;
    VlWide<3>/*95:0*/ __Vtemp_449;
    VlWide<3>/*95:0*/ __Vtemp_452;
    VlWide<3>/*95:0*/ __Vtemp_453;
    VlWide<3>/*95:0*/ __Vtemp_456;
    VlWide<3>/*95:0*/ __Vtemp_457;
    VlWide<3>/*95:0*/ __Vtemp_460;
    VlWide<3>/*95:0*/ __Vtemp_461;
    VlWide<4>/*127:0*/ __Vtemp_463;
    VlWide<4>/*127:0*/ __Vtemp_464;
    VlWide<3>/*95:0*/ __Vtemp_466;
    VlWide<3>/*95:0*/ __Vtemp_467;
    VlWide<3>/*95:0*/ __Vtemp_470;
    VlWide<3>/*95:0*/ __Vtemp_471;
    VlWide<3>/*95:0*/ __Vtemp_474;
    VlWide<3>/*95:0*/ __Vtemp_475;
    VlWide<3>/*95:0*/ __Vtemp_478;
    VlWide<3>/*95:0*/ __Vtemp_479;
    VlWide<3>/*95:0*/ __Vtemp_482;
    VlWide<3>/*95:0*/ __Vtemp_483;
    VlWide<3>/*95:0*/ __Vtemp_486;
    VlWide<3>/*95:0*/ __Vtemp_487;
    VlWide<3>/*95:0*/ __Vtemp_490;
    VlWide<3>/*95:0*/ __Vtemp_491;
    VlWide<3>/*95:0*/ __Vtemp_494;
    VlWide<3>/*95:0*/ __Vtemp_495;
    VlWide<3>/*95:0*/ __Vtemp_498;
    VlWide<3>/*95:0*/ __Vtemp_499;
    VlWide<3>/*95:0*/ __Vtemp_502;
    VlWide<3>/*95:0*/ __Vtemp_503;
    VlWide<3>/*95:0*/ __Vtemp_506;
    VlWide<3>/*95:0*/ __Vtemp_507;
    // Body
    vlSelfRef.io_rvfi_insn_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins;
    vlSelfRef.io_rvfi_rd_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra;
    vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc;
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___counter_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4 
        = (0x3fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                    - (IData)(1U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle 
        = (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange 
        = ((0x40008000U <= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result) 
           & (0x40008fffU >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg)) 
           | (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg)));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.io_rvfi_rs1_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_2;
    vlSelfRef.io_rvfi_rs2_addr_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_2;
    vlSelfRef.io_rvfi_rs1_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_1;
    vlSelfRef.io_rvfi_rs2_rdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_2;
    vlSelfRef.io_rvfi_pc_wdata_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_6;
    vlSelfRef.io_rvfi_mem_wmask_0 = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint4_REG;
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___r_Clock_Count_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count)));
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins))));
    if (vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req 
            = vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req 
            = vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg;
    } else {
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req = 0U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req = 0U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x4000716cU == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))
            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg 
               >> 2U) : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__io_is_f_o_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_f));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
           | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
              & (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT___state_reg_T_3 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg)) 
           | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg)) 
              & (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
    vlSelfRef.io_rvfi_mem_addr_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_7)
                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_8
                                     : 0U);
    vlSelfRef.io_rvfi_mem_rdata_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_9)
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_rd
                                      : 0U);
    vlSelfRef.io_rvfi_mem_wdata_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_10)
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_11
                                      : 0U);
    vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)
            ? 0U : (IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__readyReg) 
           | (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg));
    vlSelfRef.XSoC__DOT__uart__DOT___GEN_29 = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_done) 
                                               | ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr) 
                                                  & (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_status)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite));
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0U == (0x7000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x1000U == (0x7000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)));
    if (vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) {
        vlSelfRef.XSoC__DOT__uart_io_wdata = vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__datReg;
        vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr 
            = vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__adrReg;
    } else {
        vlSelfRef.XSoC__DOT__uart_io_wdata = 0U;
        vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr = 0U;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x40007164U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stbReg));
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__weReg));
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
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stbReg));
    XSoC__DOT__uart__DOT__uart_rx__DOT___T_11 = ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count) 
                                                 < 
                                                 (0xffffU 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__uart__DOT__control) 
                                                     - (IData)(1U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
              >> 0x19U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
            << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                       << 1U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & ((0x18000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
              | (0x58000053U == (0xfe00007fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
        = ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))
            ? vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram_rdata_o
            : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange 
        = ((0x40007000U <= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result) 
           & (0x40007fffU >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
           & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en)) 
              & ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                 | ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                    | ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                       | (7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)))))));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 
        = ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0)) 
           & (0U != (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                              >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x40007168U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid)) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
           | (4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
              & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode 
        = (7U & ((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3))
                  ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data 
                     >> 5U) : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg))
            ? vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o
            : 0U);
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 
        = (1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 
        = (1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins)))));
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
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_5 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid));
    vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12)
            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22)
                : 0xfU));
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
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 4U;
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
    vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid 
        = (((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid) 
            & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg)) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1 
        = (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
           + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc);
    vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack 
        = (((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid) 
            & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg)) 
           & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
            << 4U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                       << 3U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7 
        = (((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction)) 
            | (0x53U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction)))
            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
               >> 0x19U) : 0U);
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall 
        = (1U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
                  | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) 
                     & (0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)))) 
                 | ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
                    | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                       | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7))))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24) 
           | ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
              & ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                 | ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                    | ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)) 
                       | (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3)))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr)) 
            & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4)) 
           & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx 
        = (((IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr)) 
           & (IData)(XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
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
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 4U;
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en)
            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg)
            : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
           | (4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_readData 
        = ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata
            : ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3))
                ? ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                    ? ((((0x80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                          ? 0xffffffU : 0U) << 8U) 
                       | (0xffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata))
                    : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                        ? ((((0x8000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                              ? 0xffffffU : 0U) << 8U) 
                           | (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                       >> 8U))) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   ((((0x800000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                                          >> 0x10U)))
                                                    : 
                                                   ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x1fU)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x18U)))))
                : ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3))
                    ? ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                        ? (0xffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                        : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                            ? (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                        >> 8U)) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x10U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata, 0x18U))))
                    : ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3))
                        ? ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                            ? (0xffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                            : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                                ? (0xffffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 8U))
                                : VL_SHIFTR_III(32,32,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata, 0x10U)))
                        : ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                            ? ((((0x8000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | (0xffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata))
                            : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset))
                                ? ((((0x800000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                                    >> 8U)))
                                : ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                      >> 0x1fU) ? 0xffffU
                                      : 0U) << 0x10U) 
                                   | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata 
                                      >> 0x10U))))))));
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
    vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack 
        = ((IData)(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid) 
           & (IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT__validReg));
    vlSelfRef.XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we) 
           & (IData)(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid));
    vlSelfRef.XSoC__DOT__uartHostAdapter__DOT___GEN_27 
        = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__respReg));
    vlSelfRef.XSoC__DOT__uart_io_ren = ((~ (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we)) 
                                        & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack));
    vlSelfRef.XSoC__DOT__uart_io_we = ((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we) 
                                       & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack));
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
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite) 
           & (IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1));
    XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_0 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite)) 
           & (IData)(XSoC__DOT__hostAdapter__DOT____VdfgRegularize_hb3129d61_0_1));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_12 
        = ((0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall)) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.io_pin = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg))
                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_readData
                         : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg))
                             ? ((IData)(4U) + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc)
                             : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_result));
    vlSelfRef.XSoC__DOT__hostAdapter__DOT___GEN_27 
        = ((IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__respReg));
    vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_wen_Req 
        = ((IData)(vlSelfRef.XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0) 
           & (IData)(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en)
            ? ((0x20U > (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter)) 
               & (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1))
            : (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 
        = ((IData)(vlSelfRef.reset) ? 0U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24)
                                             ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)
                                             : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5)
            ? ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
               & ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   ? (1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready)))
            : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
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
    __Vtemp_266[0U] = 0U;
    __Vtemp_266[1U] = 0U;
    __Vtemp_266[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_267, __Vtemp_266, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_270[0U] = 0U;
    __Vtemp_270[1U] = 0U;
    __Vtemp_270[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_271, __Vtemp_270, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_274[0U] = 0U;
    __Vtemp_274[1U] = 0U;
    __Vtemp_274[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_275, __Vtemp_274, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_278[0U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_279, __Vtemp_278, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_282[0U] = 0U;
    __Vtemp_282[1U] = 0U;
    __Vtemp_282[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_283, __Vtemp_282, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_286[0U] = 0U;
    __Vtemp_286[1U] = 0U;
    __Vtemp_286[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_287, __Vtemp_286, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_290[0U] = 0U;
    __Vtemp_290[1U] = 0U;
    __Vtemp_290[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_291, __Vtemp_290, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_294[0U] = 0U;
    __Vtemp_294[1U] = 0U;
    __Vtemp_294[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_295, __Vtemp_294, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_298[0U] = 0U;
    __Vtemp_298[1U] = 0U;
    __Vtemp_298[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_299, __Vtemp_298, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
             ? 0U : ((0x80U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                      ? ((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                          ? 0U : ((4U & (__Vtemp_267[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_271[0U]) 
                                   | (1U & (__Vtemp_275[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                 ? (((0x155540U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_279[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_283[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_287[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_291[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_295[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_299[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                    >> 0x19U)));
    vlSelfRef.io_rvfi_rd_wdata_0 = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)
                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data
                                     : vlSelfRef.io_pin);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData2 
        = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra) 
             == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                          >> 0x14U))) & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)) 
                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                                         | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1) 
                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
            ? (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)) 
                & (0U == (0x1f00000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
                ? 0U : vlSelfRef.io_pin) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
        = ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
            ? vlSelfRef.io_pin : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
                                   : ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd3
                                       : 0U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___inputMux2_T_4 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
            : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlSelfRef.io_pin : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd1
            : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
                : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                    ? vlSelfRef.io_pin : 0U)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData1 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7) 
            & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0) 
                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
            ? (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (0U == (0xf8000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))
                ? 0U : vlSelfRef.io_pin) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_1)) 
            & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                         >> 0x14U)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U))))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
            : (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_1)) 
                & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                             >> 0x14U)) == (0x1fU & 
                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                             >> 7U))))
                ? vlSelfRef.io_pin : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist 
        = ((0x400000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
            ? 0U : ((0x200000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                     ? 1U : ((0x100000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                              ? 2U : ((0x80000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd2
            : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___inputMux2_T_4);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc
            : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1))
                ? 0U : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = ((0x16U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
              >> 0x1fU));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist 
        = ((0x400000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
            ? 0U : ((0x200000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                     ? 1U : ((0x100000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                              ? 2U : ((0x80000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
        = (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_0)) 
            & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                         >> 0xfU)) == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))))
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
            : (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_0)) 
                & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                             >> 0xfU)) == (0x1fU & 
                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                            >> 7U))))
                ? vlSelfRef.io_pin : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                          << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                         << 1U)) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist))
                       : (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78 
        = (((0x80000000U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in) 
            | (0x80000000U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)) 
           & ((0U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in) 
              | (0U == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc)
            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1
            : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_imm);
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_a_reg;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_b_reg;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            ^ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
           >> 0x1fU);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
            >> 0x1fU) ^ (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd 
        = (((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
             ^ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
            >> 0x1fU) ^ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op) 
                         >> 1U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1 
        = ((0x400000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
            ? 0U : ((0x200000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                     ? 1U : ((0x100000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                              ? 2U : ((0x80000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)
            ? (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
            : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                          << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                         << 1U)) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist))
                       : (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush 
        = ((((0U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                           >> 0xcU))) ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                         == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
              : ((1U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                               >> 0xcU))) ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                             != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                  : ((4U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                   >> 0xcU))) ? VL_LTS_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                      : ((5U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))) ? 
                         VL_GTES_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                          : ((6U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 < vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
            & ((0x33U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
               & ((0x13U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                  & ((0x73U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                     & ((3U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                        & ((0x23U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                           & (0x63U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))) 
           | (0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3 
        = (7U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)
                   ? 0U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                           >> 6U)) | ((0U != (0x7fffffU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)) 
                                      & (3U == (3U 
                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                                   >> 7U))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            >> 0x1fU) == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                 ^ ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                     >> 0x1fU) ^ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                          << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                         << 1U)) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1))
                       : (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    if ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
         >> 0x1fU)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1fU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0U;
    } else if ((0x40000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1eU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 1U;
    } else if ((0x20000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1dU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 2U;
    } else if ((0x10000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1cU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 3U;
    } else if ((0x8000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1bU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 4U;
    } else if ((0x4000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1aU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 5U;
    } else if ((0x2000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x19U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 6U;
    } else if ((0x1000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x18U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 7U;
    } else if ((0x800000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x17U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 8U;
    } else if ((0x400000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x16U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 9U;
    } else if ((0x200000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x15U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xaU;
    } else if ((0x100000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x14U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xbU;
    } else if ((0x80000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x13U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xcU;
    } else if ((0x40000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x12U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xdU;
    } else if ((0x20000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x11U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xeU;
    } else if ((0x10000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x10U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xfU;
    } else if ((0x8000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xfU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x10U;
    } else if ((0x4000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xeU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x11U;
    } else if ((0x2000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xdU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x12U;
    } else if ((0x1000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xcU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x13U;
    } else if ((0x800U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xbU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x14U;
    } else if ((0x400U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xaU;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x15U;
    } else if ((0x200U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 9U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x16U;
    } else if ((0x100U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 8U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x17U;
    } else if ((0x80U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 7U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x18U;
    } else if ((0x40U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 6U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x19U;
    } else if ((0x20U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 5U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1aU;
    } else if ((0x10U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 4U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1bU;
    } else if ((8U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 3U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1cU;
    } else if ((4U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 2U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1dU;
    } else if ((2U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 1U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1eU;
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1fU;
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S 
        = ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN 
        = (IData)(((0x180U == (0x180U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))) 
                   & (0U != (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_stall 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1) 
           | ((((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7)) 
                & ((4U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                 >> 0xcU))) | ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                    >> 0xcU))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                       >> 0xcU))) 
                                                  | (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                         >> 0xcU))))))) 
               | ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7)) 
                  | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7)))) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush)));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC 
        = (IData)((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)) 
            << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp)));
    __Vtemp_342[0U] = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                           >> 0x1fU)) ? (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                        : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b);
    __Vtemp_342[1U] = 0U;
    __Vtemp_342[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_343, __Vtemp_342, 
                  (0x3fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                            - (IData)(1U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[0U] 
        = __Vtemp_343[0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[1U] 
        = __Vtemp_343[1U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[2U] 
        = (0x7fffffffU & __Vtemp_343[2U]);
    VL_EXTENDS_WI(65,32, __Vtemp_346, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a);
    __Vtemp_347[0U] = __Vtemp_346[0U];
    __Vtemp_347[1U] = __Vtemp_346[1U];
    __Vtemp_347[2U] = (1U & __Vtemp_346[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_349, (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b)));
    __Vtemp_350[0U] = __Vtemp_349[0U];
    __Vtemp_350[1U] = __Vtemp_349[1U];
    __Vtemp_350[2U] = (1U & __Vtemp_349[2U]);
    VL_MULS_WWW(65, __Vtemp_351, __Vtemp_347, __Vtemp_350);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
        = (((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
            | (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)))
            ? ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a)) 
               * (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b)))
            : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                ? (((QData)((IData)(__Vtemp_351[1U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_351[0U])))
                : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                    ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                    : 0ULL)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags) 
           ^ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 
        = (((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
               ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
                  << 1U) : 0U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
                                   ? 0x400000U : 0U)) 
            | (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5))
                ? 0x800000U : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                       ? 0U : (0x7fffffU 
                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z 
                                                  >> 1U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN 
        = (IData)(((0x180U == (0x180U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1))) 
                   & (0U != (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (IData)((0xffffffffULL & (((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) 
                                           << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist)) 
                                          >> 0x1fU))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig 
        = (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
           << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (0x7fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
                           << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23 
        = (7U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)
                   ? 0U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                           >> 6U)) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
           & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_stall)) 
              & (1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_stall)) 
           & (1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    __Vtemp_353[0U] = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_353[1U] = 0U;
    __Vtemp_353[2U] = 0U;
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2 
        = VL_GTE_W(3, __Vtemp_353, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3 
        = (((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                  & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                     & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))
            ? ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6)
                    ? (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                               >> 0x20U)) : ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                              ? (((
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                    >> 0x1fU)) 
                                                  & (0U 
                                                     != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                                  ? 
                                                 (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                              : ((5U 
                                                  == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                                   ? 
                                                  ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend
                                                    : 0U))))))
            : 0U);
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9 
        = (1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN) 
                    | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43 
        = (7U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)
                   ? 0U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                           >> 6U)) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = (1U & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig 
                  >> 7U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA 
        = (IData)((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
            << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
            << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)));
    vlSelfRef.XSoC__DOT__core__DOT__imem__DOT___state_reg_T_5 
        = ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc_io_halt 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
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
    __Vtemp_357[0U] = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_357[1U] = 0U;
    __Vtemp_357[2U] = 0U;
    VL_SUB_W(3, __Vtemp_358, __Vtemp_357, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    if (vlSelfRef.reset) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
    } else if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) {
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
                    = __Vtemp_358[0U];
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] 
                    = __Vtemp_358[1U];
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] 
                    = (0x7fffffffU & __Vtemp_358[2U]);
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           | (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB 
        = (IData)((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
            << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
            << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
             & (0U != (1U & (IData)(((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                     >> 7U))))) | (
                                                   (((2U 
                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                                    | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                                       & (3U 
                                                          == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
            ? ((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                 & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                    & (0U != (1U & (IData)(((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                            >> 7U))))))
                 ? 0x3fffffeU : 0x3ffffffU) & ((IData)(1U) 
                                               + VL_SHIFTR_III(26,26,32, 
                                                               (0x3ffffffU 
                                                                & (IData)(
                                                                          ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                                           >> 7U))), 1U)))
            : ((0x1ffffffU & VL_SHIFTR_III(26,26,32, 
                                           (0x3ffffffU 
                                            & (IData)(
                                                      ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                       >> 7U))), 1U)) 
               | (((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                   ? 1U : 0U)));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3 
        = ((4U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
            ? (0x1fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
            : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                                        >> 2U)))) 
                                    << 0x17U) | (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))) 
                                  << (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                 >> 0x1fU)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
              >> 0x1fU));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN 
        = ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
               >> 0x16U)) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
              | (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
              & (0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem 
        = (((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S)) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))
              ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                 << 1U) : 0U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                  ? ((0x6000000U & 
                                      (((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                         >> 0x16U) 
                                        - (IData)(1U)) 
                                       << 0x19U)) | 
                                     (0x1ffffffU & 
                                      VL_SHIFTL_III(25,25,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig, 3U)))
                                  : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                             ? 0U : 
                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
                                             << 1U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne 
        = ((~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
               >> 2U)) & (0xffU == (0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5 
        = ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
               >> 0x16U)) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
        = (0x3ffffffffffffULL & ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig)) 
                                 * (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                     + VL_EXTENDS_II(11,10, ((0x200U 
                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                                 << 7U)) 
                                             | ((0x100U 
                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                                    << 6U)) 
                                                | (0xffU 
                                                   & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
           == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
        = (0x3ffU & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                      + (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)) 
                     - (IData)(0x100U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps 
        = (0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                     - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                      + VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp))) 
                     - (IData)(0xe5U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)
            ? (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
            : 0U);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)
             ? 0x1ffU : 0x3fU) & ((0x7ffU & VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & ((IData)(0xc0U) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_EXTENDS_II(10,9, 
                                                                               (0x40U 
                                                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1)))))))) 
                                  + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                            (3U 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                >> 0x18U))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig 
        = ((0x3fffffffeULL & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                              >> 0x15U)) | (QData)((IData)(
                                                           (0U 
                                                            != 
                                                            (0x3fffffU 
                                                             & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
                                                                << (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3)))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S 
        = (1U & ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                  ? ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                     & (~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                           >> 0x1fU))) : ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                          & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129 
        = ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
               >> 0x1fU)) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            >> 0x1fU) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem 
        = (0x1fffffffU & (VL_EXTENDS_II(29,28, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                          - VL_EXTENDS_II(29,28, ((
                                                   (((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                                        ? 
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                                        << 1U)
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                                          & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                                             & (9U 
                                                                == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))))
                                                          ? 0x1000000U
                                                          : 0U)) 
                                                     | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                                         ? 0x2800000U
                                                         : 0U)) 
                                                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                                        ? 0U
                                                        : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                          & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                                                       ? 0x1000000U
                                                       : 0U)) 
                                                  | (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                      & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                      << 1U)
                                                      : 0U)))));
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
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                 & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                 | ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = (((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                 | ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                        >> 0x16U)) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN)))) 
             | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
               & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)))) 
           | ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
               & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC)) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((0x7fffffeU & ((IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                   >> 0x16U)) << 1U)) 
           | (0U != (0x3fffffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp), (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps) 
              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
                 < vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps) 
           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
              == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB));
    __Vtemp_369[0U] = 0U;
    __Vtemp_369[1U] = 0U;
    __Vtemp_369[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_370, __Vtemp_369, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_373[0U] = 0U;
    __Vtemp_373[1U] = 0U;
    __Vtemp_373[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_374, __Vtemp_373, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_370[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_374[1U] 
                                                     >> 0x12U)));
    if (VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist 
            = (0x1fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                        - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)));
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist 
            = (0x1fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps));
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum 
        = (0x7ffffffU & (((((VL_LTES_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)) 
                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                << 2U) : 0U) | (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)) 
                                                 & VL_LTES_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)))
                                                 ? 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig
                              : 0U)) - (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                        << 1U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign 
        = ((0U != (0x1fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps) 
                            >> 5U))) & (IData)(((0x3e0U 
                                                 != 
                                                 (0x3e0U 
                                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd) 
                     - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 
        = (0x3fffffffU & ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)))
                           ? ((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                   ? (VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                      << 0x19U) : 0U) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5)
                                     ? 0x1000000U : 0U)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                    ? (VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                       << 0x17U) : 0U)) 
                               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                   ? 0U : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                              | (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                  & VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))
                                  ? (((IData)(1U) << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                     >> 2U) : 0U)) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
            | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN)) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | (((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                >> 0x1fU) == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                              >> 0x1fU)) & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs) 
                                            | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros)) 
                 & (((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                         >> 0x1fU)) & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU)) | 
                    ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs)) 
                     & (((~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags) 
                             | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags))) 
                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                            >> 0x1fU)) | ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                              >> 0x1fU)) 
                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags)))))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
        = (0x7ffffffU & (VL_GTS_III(27, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)
                          ? (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)
                          : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign)
            ? 0x1fU : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
           & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign)) 
              & (1U >= (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
        = ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           | ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
              | VL_GTS_III(11, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign) 
            << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                            - (IData)(0x81U))) 
                                          | (((IData)(
                                                      (0x1c0U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf))
                                              ? 0xffU
                                              : 0U)) 
                                         << 0x17U)) 
                         | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? (0xffffffU 
                                             & ((0xffffffU 
                                                 & ((0x7fc00000U 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                             >> 6U))) 
                                                        << 0x16U)) 
                                                    | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                       >> 1U))) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                          : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf)
                                              ? 0U : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact 
        = ((4U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
            ? (0U != (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))
            : (0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr 
        = (((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
              & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                   >> 2U) & ((3U == (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                   >> 0x16U)))) 
                             | (3U == (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                     >> 2U) & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                       >> 0x16U))) 
                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))) 
               & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                   >> 0x1fU) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))) 
           | ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
              & ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                     >> 0x1fU)) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 
        = (((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
            | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))
            ? (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2)) 
                   & (1U >= (0x1fU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                      - (IData)(1U)))))) 
               | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))
            : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 
        = (0x1fU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                      | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))
                          ? ((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                              ? ((1U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
                                  ? 0x18U : 0x19U) : 0x1aU)
                          : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2)
                                     ? 0U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                             - (IData)(1U)))) 
                    | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2 
        = ((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                         >> 0x18U))) ? 0U : ((0U != 
                                              (3U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 0x16U)))
                                              ? 1U : 
                                             ((0U != 
                                               (3U 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x14U)))
                                               ? 2U
                                               : ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 0x12U)))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                        >> 0x10U)))
                                                    ? 4U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                         >> 0xeU)))
                                                     ? 5U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                          >> 0xcU)))
                                                      ? 6U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                           >> 0xaU)))
                                                       ? 7U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                            >> 8U)))
                                                        ? 8U
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                             >> 6U)))
                                                         ? 9U
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                              >> 4U)))
                                                          ? 0xaU
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                               >> 2U)))
                                                           ? 0xbU
                                                           : 0xcU))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                          << 5U)) >> (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant 
        = ((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)) 
           & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2 
        = (IData)(((0x1fffffff800000ULL == (0x1fffffff800000ULL 
                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig)) 
                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow 
        = (1U & ((4U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
                  ? ((0x20U <= (0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                     | ((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                         ? ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                             >> 0x1fU) ? ((0x1fU == 
                                           (0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                          & (IData)(
                                                    ((0ULL 
                                                      != 
                                                      (0x3fffffff800000ULL 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig)) 
                                                     | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr))))
                             : ((0x1fU == (0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                | ((0x1eU == (0xffU 
                                              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2))))
                         : ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                             >> 0x1fU) | (((0x1fU == 
                                            (0xffU 
                                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                           & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                      >> 0x35U))) 
                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2)))))
                  : ((0xfU != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                     & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU) & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr)))));
    __Vtemp_377[0U] = 0U;
    __Vtemp_377[1U] = 0U;
    __Vtemp_377[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_378, __Vtemp_377, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_381[0U] = 0U;
    __Vtemp_381[1U] = 0U;
    __Vtemp_381[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_382, __Vtemp_381, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_385[0U] = 0U;
    __Vtemp_385[1U] = 0U;
    __Vtemp_385[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_386, __Vtemp_385, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_389[0U] = 0U;
    __Vtemp_389[1U] = 0U;
    __Vtemp_389[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_390, __Vtemp_389, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_393[0U] = 0U;
    __Vtemp_393[1U] = 0U;
    __Vtemp_393[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_394, __Vtemp_393, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_397[0U] = 0U;
    __Vtemp_397[1U] = 0U;
    __Vtemp_397[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_398, __Vtemp_397, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_401[0U] = 0U;
    __Vtemp_401[1U] = 0U;
    __Vtemp_401[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_402, __Vtemp_401, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_405[0U] = 0U;
    __Vtemp_405[1U] = 0U;
    __Vtemp_405[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_406, __Vtemp_405, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_409[0U] = 0U;
    __Vtemp_409[1U] = 0U;
    __Vtemp_409[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_410, __Vtemp_409, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_378[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_382[0U]) 
                                   | (1U & (__Vtemp_386[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_390[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_394[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_398[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_402[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_406[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_410[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                            >> 0x2fU))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
        = (0x3ffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags) 
                       | VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)))
                       ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)
                       : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                     - ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)
                         ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                            << 1U) : (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
        = (0x1ffffffffffffffULL & ((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))) 
                                   << ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                                       << 1U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != (((((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                        >> 0x16U))) 
                                                   << 6U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                          >> 0x12U))) 
                                                     << 5U)) 
                                                 | (((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                          >> 0xeU))) 
                                                     << 4U) 
                                                    | ((0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                            >> 0xaU))) 
                                                       << 3U))) 
                                                | (((0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                         >> 6U))) 
                                                    << 2U) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                            >> 2U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))))) 
                                               & ((((0x40U 
                                                     & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                       (7U 
                                                                        & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                           >> 2U))) 
                                                        << 5U)) 
                                                    | (0x20U 
                                                       & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                         (7U 
                                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                             >> 2U))) 
                                                          << 3U))) 
                                                   | ((0x10U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                             >> 2U))) 
                                                          << 1U)) 
                                                      | (8U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                               >> 2U))) 
                                                            >> 1U)))) 
                                                  | ((4U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        (7U 
                                                                         & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                            >> 2U))) 
                                                         >> 3U)) 
                                                     | ((2U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                               >> 2U))) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             (7U 
                                                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                                >> 2U))) 
                                                              >> 7U)))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                    >> 0x16U))) << 6U) 
                     | ((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                        >> 0x12U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                             >> 0xeU))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                   >> 0xaU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                       >> 6U))) << 2U) 
                      | (((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                          >> 2U))) 
                          << 1U) | (0U != (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_413[0U] = (IData)(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                ? 0x1fffffffffffffULL
                                : 0ULL));
    __Vtemp_413[1U] = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                          ? (~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                          : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                        << 0x15U) | (IData)((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                               ? 0x1fffffffffffffULL
                                               : 0ULL) 
                                             >> 0x20U)));
    __Vtemp_413[2U] = (0x3fffU & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                    ? (~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                                  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_414, __Vtemp_413, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_414[0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_414[1U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_414[2U]);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    __Vtemp_416[0U] = 0U;
    __Vtemp_416[1U] = 0U;
    __Vtemp_416[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_417, __Vtemp_416, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_420[0U] = 0U;
    __Vtemp_420[1U] = 0U;
    __Vtemp_420[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_421, __Vtemp_420, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_417[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_421[1U] 
                                                     >> 0x12U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
              & ((~ (0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                          >> 0x18U))))) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
        = (0xfffffffU & (((0x7fffff8U & ((VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                           ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                           : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig) 
                                         << 3U)) + 
                          ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
        = (0x1ffffffffffffULL & ((0xffffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA)) 
                                     * (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB)))) 
                                 + (0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                        >> 3U)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152 
        = ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
             | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
            << 4U) | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                      & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
            | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))
            ? ((((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                 == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                 ? 0x80000000U : 0U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                         ? 0U : 0x7fffffffU))
            : ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                  >> 0x1fU) ? (~ (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                          >> 0x17U)))
                  : (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                             >> 0x17U))) + (1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr) 
                                                  ^ 
                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                   >> 0x1fU)))) 
               | ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & (((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns) 
                      & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                          >> 0x1fU))) 
                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                       & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB))) 
                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
                      & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                         & (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))) 
                  | (((~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                          | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))) 
                      & ((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                               >> 0x18U)))) 
                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags))) 
                     & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU) ^ VL_GTS_III(27, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))) 
                 | ((~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                        | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))) 
                    & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)) 
                       & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                           : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                              >> 0x1fU))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = (0x7ffffffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)
                          ? (0x7fffffeU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                           << 1U)) : 
                         ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                           ? (0x7ffffffU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                             >> 1U) 
                                            | (1U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                           : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
        = (0x3ffffffU & (((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                           << 0xdU) | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                       >> 0x13U)) + 
                         (1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                        >> 0x30U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
            ? ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra)) 
               & (7U == (7U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
            : ((0U != (7U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
               | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                          << 1U)) | (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                      << 1U)) | (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC))) 
                                 >> 0x20U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
           >> 0xfU);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                          >> 0xbU)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    __Vtemp_424[0U] = 0U;
    __Vtemp_424[1U] = 0U;
    __Vtemp_424[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_425, __Vtemp_424, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_428[0U] = 0U;
    __Vtemp_428[1U] = 0U;
    __Vtemp_428[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_429, __Vtemp_428, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_432[0U] = 0U;
    __Vtemp_432[1U] = 0U;
    __Vtemp_432[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_433, __Vtemp_432, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_436[0U] = 0U;
    __Vtemp_436[1U] = 0U;
    __Vtemp_436[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_437, __Vtemp_436, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_440[0U] = 0U;
    __Vtemp_440[1U] = 0U;
    __Vtemp_440[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_441, __Vtemp_440, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_444[0U] = 0U;
    __Vtemp_444[1U] = 0U;
    __Vtemp_444[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_445, __Vtemp_444, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_448[0U] = 0U;
    __Vtemp_448[1U] = 0U;
    __Vtemp_448[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_449, __Vtemp_448, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_452[0U] = 0U;
    __Vtemp_452[1U] = 0U;
    __Vtemp_452[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_453, __Vtemp_452, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_456[0U] = 0U;
    __Vtemp_456[1U] = 0U;
    __Vtemp_456[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_457, __Vtemp_456, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_425[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_429[0U]) 
                                   | (1U & (__Vtemp_433[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_437[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_441[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_445[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_449[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_453[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_457[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                    >> 0x1aU)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)
                                  ? (~ (((QData)((IData)(
                                                         vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    __Vtemp_460[0U] = (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    __Vtemp_460[1U] = (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                               >> 0x20U));
    __Vtemp_460[2U] = 0U;
    VL_SHIFTL_WWI(81,81,5, __Vtemp_461, __Vtemp_460, 
                  (0x1fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
        = __Vtemp_461[0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
        = __Vtemp_461[1U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[2U] 
        = (0x1ffffU & __Vtemp_461[2U]);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                          >> 0x32U))) ? 0U : ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x30U))))
                                               ? 1U
                                               : ((0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x2eU))))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2cU))))
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x2aU))))
                                                     ? 4U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x28U))))
                                                      ? 5U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x26U))))
                                                       ? 6U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x24U))))
                                                        ? 7U
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x22U))))
                                                         ? 8U
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                      >> 0x20U))))
                                                          ? 9U
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))
                                                           ? 0xaU
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 0x1cU))))
                                                            ? 0xbU
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                         >> 0x1aU))))
                                                             ? 0xcU
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x18U))))
                                                              ? 0xdU
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 0x16U))))
                                                               ? 0xeU
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                            >> 0x14U))))
                                                                ? 0xfU
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x12U))))
                                                                 ? 0x10U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                              >> 0x10U))))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                               >> 0xeU))))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))
                                                                         ? 0x18U
                                                                         : 0x19U)))))))))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    __Vtemp_463[0U] = (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_463[1U] = (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                               >> 0x20U));
    __Vtemp_463[2U] = 0U;
    __Vtemp_463[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_464, __Vtemp_463, 
                  ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_464[0U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_464[1U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_464[2U];
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_464[3U]);
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 6U)))) << 3U) 
           | (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 4U)))) << 2U) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    __Vtemp_466[0U] = 0U;
    __Vtemp_466[1U] = 0U;
    __Vtemp_466[2U] = 1U;
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum 
            = (0x3ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
            = (0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                         - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)));
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum 
            = (0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd) 
                         - (IData)(0x18U)));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
            = (0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                         - ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                            << 1U)));
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_467, __Vtemp_466, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_470[0U] = 0U;
    __Vtemp_470[1U] = 0U;
    __Vtemp_470[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_471, __Vtemp_470, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_467[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_471[1U] 
                                                     >> 0x12U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)) 
              & (0U == (0xc0000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U]))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC) 
                       & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                   | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                       & ((2U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd))) 
                      & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                  | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                     & ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                        & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))))) 
                 | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                    & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                       & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)
                           ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)
                           : ((0U == (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))
                               ? (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                               : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                  ^ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                     >> 2U))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0xaU)))) << 5U) 
           | (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 8U)))) << 4U) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                               >> 0x2fU)))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut) 
                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0xeU)))) << 7U) 
           | (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0xcU)))) << 6U) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0x12U)))) << 9U) 
           | (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x10U)))) << 8U) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5 
        = (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0x16U)))) << 0xbU) 
           | (((0U != (3U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x14U)))) << 0xaU) 
              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)
            ? ((0x7fffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                               << 9U) | (0x1feU & (
                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                   >> 0x17U)))) 
               | ((0U != (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                >> 0x15U))) | ((0U 
                                                != 
                                                ((((((0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                  >> 0x15U)))) 
                                                     << 6U) 
                                                    | ((0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0x11U)))) 
                                                       << 5U)) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0xdU)))) 
                                                       << 4U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                      >> 9U)))) 
                                                         << 3U))) 
                                                  | (((0U 
                                                       != 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                   >> 5U)))) 
                                                      << 2U) 
                                                     | (((0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                      >> 1U)))) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))) 
                                                 & (((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        (7U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                             >> 2U)))) 
                                                         << 4U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                            << 2U)) 
                                                        | (8U 
                                                           & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))))))) 
                                                    | ((4U 
                                                        & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                          (7U 
                                                                           & (~ 
                                                                              ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                               >> 2U)))) 
                                                           >> 2U)) 
                                                       | ((2U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                              >> 4U)) 
                                                          | (1U 
                                                             & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                               (7U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                                >> 6U))))))) 
                                               | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                   ? 
                                                  (0U 
                                                   != 
                                                   (0xffffffU 
                                                    & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (0x1ffffffU 
                                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))
            : ((0x7fffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                               << 7U) | (0x7eU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x19U)))) 
               | (IData)(((0U != (0x3800000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U])) 
                          | (0U != ((((((0U != (3U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x18U)))) 
                                        << 6U) | ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                       >> 0xaU))) 
                                                  << 5U)) 
                                      | (((0U != (3U 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                     >> 8U))) 
                                          << 4U) | 
                                         ((0U != (3U 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                     >> 6U))) 
                                          << 3U))) 
                                     | (((0U != (3U 
                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                                    >> 4U))) 
                                         << 2U) | (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                    & (((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                      >> 1U)))) 
                                                  << 4U)) 
                                        | ((0x10U & 
                                            (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                           | (8U & 
                                              VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U))))))) 
                                       | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                (0xfU 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                     >> 1U)))) 
                                                 >> 2U)) 
                                          | ((2U & 
                                              (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                   >> 1U)))) 
                                               >> 4U)) 
                                             | (1U 
                                                & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 6U)))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x4000000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    __Vtemp_474[0U] = 0U;
    __Vtemp_474[1U] = 0U;
    __Vtemp_474[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_475, __Vtemp_474, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_478[0U] = 0U;
    __Vtemp_478[1U] = 0U;
    __Vtemp_478[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_479, __Vtemp_478, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_482[0U] = 0U;
    __Vtemp_482[1U] = 0U;
    __Vtemp_482[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_483, __Vtemp_482, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_486[0U] = 0U;
    __Vtemp_486[1U] = 0U;
    __Vtemp_486[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_487, __Vtemp_486, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_490[0U] = 0U;
    __Vtemp_490[1U] = 0U;
    __Vtemp_490[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_491, __Vtemp_490, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_494[0U] = 0U;
    __Vtemp_494[1U] = 0U;
    __Vtemp_494[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_495, __Vtemp_494, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_498[0U] = 0U;
    __Vtemp_498[1U] = 0U;
    __Vtemp_498[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_499, __Vtemp_498, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_502[0U] = 0U;
    __Vtemp_502[1U] = 0U;
    __Vtemp_502[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_503, __Vtemp_502, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_506[0U] = 0U;
    __Vtemp_506[1U] = 0U;
    __Vtemp_506[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_507, __Vtemp_506, 
                   (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_475[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_479[0U]) 
                                   | (1U & (__Vtemp_483[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_487[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_491[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_495[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_499[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_503[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_507[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                    >> 0x1aU)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut) 
           | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x4000000U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((0x4000000U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((0x4000000U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((0x4000000U 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                            ? 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 2U)
                                                            : 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 1U))) 
                                                       | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x4000004U 
                                                                      == 
                                                                      (0x4000004U 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((0x4000000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                       ? 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else if (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((0x4000000U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((0x4000000U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((0x4000000U 
                                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                            ? 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 2U)
                                                            : 
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 1U))) 
                                                       | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x4000004U 
                                                                      == 
                                                                      (0x4000004U 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((0x4000000U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                       ? 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else if ((7U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                >> 0x2fU)))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                 >> 0x2fU)))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x2fU)))
                                                            ? (IData)(
                                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x17U))
                                                            : (IData)(
                                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x16U)))) 
                                                       | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x800000800000ULL 
                                                                      == 
                                                                      (0x800000800000ULL 
                                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                  >> 0x2fU)))
                                                       ? 
                                                      (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((0xdU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                | ((0xeU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                   | ((0x12U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))
                ? (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                    | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                       | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                   << 4U) : (((0x16U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                              | (0x17U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))
                              ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                              : ((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                  ? (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152)
                                  : ((0x10U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                      ? (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152)
                                      : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                                          ? ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                    << 2U))) 
                                             | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
                                                            ((0x2000000U 
                                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                              ? 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 2U)
                                                              : 
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U))) 
                                                           & ((0x2000000U 
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                               ? 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x19U)
                                                               : 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x18U))) 
                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                             & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                                 & ((0x2000000U 
                                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                                     ? 
                                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                                     >> 1U)
                                                                     : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                   & ((IData)(
                                                                              (0x2000002U 
                                                                               == 
                                                                               (0x2000002U 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                                                      | (0U 
                                                                         != 
                                                                         (3U 
                                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                                        & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                           & (VL_GTES_III(2, 0U, 
                                                                          (3U 
                                                                           & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                                                              >> 8U))) 
                                                              & ((0x2000000U 
                                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                                  ? 
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U)
                                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))
                                          : 0U)))));
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((0xaU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                ? ((0x80000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
                   | (0x7fffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                : ((0xbU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                    ? (((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                            >> 0x1fU)) << 0x1fU) | 
                       (0x7fffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                    : ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                        ? (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign) 
                            << 0x1fU) | (0x7fffffffU 
                                         & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                        : ((0xdU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                            ? ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71)
                                ? 0x7fc00000U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)
                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1
                                                  : 
                                                 ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)
                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                   : 
                                                  ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78)
                                                    ? 0x80000000U
                                                    : 
                                                   (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq) 
                                                     | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                     : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)))))
                            : ((0xeU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                ? ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71)
                                    ? 0x7fc00000U : 
                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)
                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1
                                     : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)
                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                         : ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78)
                                             ? 0U : 
                                            (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq) 
                                              | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt))
                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                              : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)))))
                                : ((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out
                                    : ((0x10U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out
                                        : ((0x11U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                            : ((0x18U 
                                                == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                    ? 
                                                   ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq))
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                     ? 
                                                    ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt))
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                      ? 
                                                     ((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                      & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt)))
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                       ? 
                                                      ((((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN)) 
                                                           & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
                                                          << 9U) 
                                                         | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                                             << 8U) 
                                                            | (((~ 
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                  >> 0x1fU)) 
                                                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                               << 7U))) 
                                                        | (((VL_LTES_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                                                             & (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129)) 
                                                            << 6U) 
                                                           | (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129) 
                                                               & VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                                              << 5U))) 
                                                       | (((((~ 
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                               >> 0x1fU)) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                   >> 0x1cU) 
                                                                  & ((0U 
                                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                                                     << 3U))) 
                                                              | (((IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142) 
                                                                  & VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                                                 << 2U))) 
                                                          | (((VL_LTES_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                                                               & (IData)(XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142)) 
                                                              << 1U) 
                                                             | ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                 >> 0x1fU) 
                                                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)))))
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                         ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4
                                                         : 
                                                        ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                                                          ? 
                                                         ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
                                                           << 0x1fU) 
                                                          | ((0x7f800000U 
                                                              & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                    - (IData)(0x81U))) 
                                                                  | (((IData)(
                                                                              (0x1c0U 
                                                                               == 
                                                                               (0x1c0U 
                                                                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf))
                                                                      ? 0xffU
                                                                      : 0U)) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                                    ? 
                                                                   (0xffffffU 
                                                                    & ((0xffffffU 
                                                                        & ((0x7fc00000U 
                                                                            & ((0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                                >> 6U))) 
                                                                               << 0x16U)) 
                                                                           | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                                              >> 1U))) 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                                                    : 
                                                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf)
                                                                     ? 0U
                                                                     : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))
                                                          : 0U))))))))))))))));
    }
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result 
        = (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en) 
            & ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg)) 
               & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready)))
            ? XSoC__DOT__core__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3
            : (((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready))
                ? XSoC__DOT__core__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3
                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst)
                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out
                    : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out
                        : (IData)((0x7fffffffffffffffULL 
                                   & ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                       ? (QData)((IData)(
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                          & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                       : ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                           ? (QData)((IData)(
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                              | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                           : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                               ? (QData)((IData)(
                                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                  + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                               : ((3U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                      - vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                    ? (QData)((IData)(
                                                                      VL_LTS_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                     ? (QData)((IData)(
                                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                        < vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                      ? 
                                                     ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1)) 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                      : (QData)((IData)(
                                                                        ((7U 
                                                                          == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                          ? 
                                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                          : 
                                                                         ((8U 
                                                                           == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                           : 
                                                                          ((9U 
                                                                            == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                            ? 
                                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                            ^ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)
                                                                            : 0U))))))))))))))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT___npc_T_2 
        = ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush)
            ? ((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1
                : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                    ? ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0)) 
                         & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                      >> 0xfU)) == 
                            (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                      >> 7U)))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result
                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1) 
                       + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out)
                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1))
            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc_io_halt)
                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg
                : ((IData)(4U) + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg)));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data 
        = ((0x4000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)
            ? (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)) : ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data
                                      : ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                          ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data
                                          : ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                              ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data
                                              : ((3U 
                                                  == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                  ? vlSelfRef.io_pin
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                   ? 
                                                  ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0)))))));
    vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
        = ((3U == (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                         >> 0xcU))) ? ((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)
            : ((2U == (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                             >> 0xcU))) ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                           | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)
                : ((1U == (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                 >> 0xcU))) ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data
                    : 0U)));
    if ((0x305U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                    >> 0x14U))) {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
            = (7U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
    } else {
        vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG;
        if ((0x341U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                        >> 0x14U))) {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                = (7U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
        } else {
            vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
            if ((0x304U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                    = (7U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
            } else {
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
                vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                    = (7U & ((3U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U)) ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                   >> 5U)
                              : ((1U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                                  : ((2U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U))
                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                      : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)))));
            }
        }
    }
}
