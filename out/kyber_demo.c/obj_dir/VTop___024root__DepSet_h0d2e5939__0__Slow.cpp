// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<16>/*511:0*/ VTop__ConstPool__CONST_hea5f94e6_0;
extern const VlWide<16>/*511:0*/ VTop__ConstPool__CONST_hf6de0e16_0;

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_rvfi_mode_0 = 3U;
    vlSelfRef.io_uart_req_valid = 0U;
    vlSelfRef.io_uart_req_bits_addrRequest = 0U;
    vlSelfRef.io_uart_req_bits_dataRequest = 0U;
    vlSelfRef.io_uart_req_bits_activeByteLane = 0U;
    vlSelfRef.io_uart_req_bits_isWrite = 0U;
    vlSelfRef.io_uart_rsp_ready = 0U;
    vlSelfRef.io_uart_cio_uart_tx_o = 0U;
    vlSelfRef.io_uart_cio_uart_intr_tx_o = 0U;
    VL_READMEM_N(true, 32, 268435456, 0, VL_CVT_PACK_STR_NW(16, VTop__ConstPool__CONST_hea5f94e6_0)
                 ,  &(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 268435456, 0, VL_CVT_PACK_STR_NW(16, VTop__ConstPool__CONST_hf6de0e16_0)
                 ,  &(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/mhussain/XSoC-Lite/nucleusrv/../out/kyber_demo.c/Top.v", 7021, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        VTop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4;
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7;
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4;
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7;
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1;
    Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13;
    Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT___GEN_1;
    Top__DOT__core__DOT__Execute__DOT___GEN_1 = 0;
    IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3;
    Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2;
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11;
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142 = 0;
    CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 = 0;
    SData/*15:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 = 0;
    CData/*0:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 = 0;
    CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    VlWide<3>/*95:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_128;
    VlWide<3>/*95:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_140;
    VlWide<3>/*95:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_144;
    VlWide<3>/*95:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_148;
    VlWide<3>/*95:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_167;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<3>/*95:0*/ __Vtemp_170;
    VlWide<3>/*95:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_186;
    VlWide<3>/*95:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_190;
    VlWide<3>/*95:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_194;
    VlWide<3>/*95:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_206;
    VlWide<3>/*95:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_210;
    VlWide<3>/*95:0*/ __Vtemp_211;
    // Body
    vlSelfRef.io_rvfi_insn_0 = vlSelfRef.Top__DOT__core__DOT__mem_reg_ins;
    vlSelfRef.io_rvfi_rd_addr_0 = vlSelfRef.Top__DOT__core__DOT__mem_reg_wra;
    vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.Top__DOT__core__DOT__mem_reg_pc;
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr 
        = ((7U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           | ((0x43U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              | ((0x47U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 | ((0x4bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    | ((0x4fU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       | ((0x53U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          | ((0x8000053U == (0xfe00007fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x10000053U == (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x18000053U == 
                                    (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x58000053U 
                                       == (0xfe00007fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x20000053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x20001053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x20002053U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x28000053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0x28001053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                     | ((0xd0000053U 
                                                         == 
                                                         (0xfff0007fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0xd0100053U 
                                                            == 
                                                            (0xfff0007fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                           | (0xf0000053U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en 
        = ((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           & (0U != (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___counter_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4 
        = (0x3fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                    - (IData)(1U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle 
        = (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum));
    vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange 
        = ((0x40008000U <= vlSelfRef.Top__DOT__core__DOT__ex_reg_result) 
           & (0x40008fffU >= vlSelfRef.Top__DOT__core__DOT__ex_reg_result));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_3 = 
        ((0U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         | (2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)));
    vlSelfRef.io_rvfi_rs1_addr_0 = vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_2;
    vlSelfRef.io_rvfi_rs2_addr_0 = vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_2;
    vlSelfRef.io_rvfi_rs1_rdata_0 = vlSelfRef.Top__DOT__core__DOT__REG_1;
    vlSelfRef.io_rvfi_rs2_rdata_0 = vlSelfRef.Top__DOT__core__DOT__REG_2;
    vlSelfRef.io_rvfi_pc_wdata_0 = vlSelfRef.Top__DOT__core__DOT__REG_6;
    vlSelfRef.io_rvfi_mem_wmask_0 = vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint4_REG;
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.Top__DOT__core__DOT__mem_reg_ins))));
    vlSelfRef.io_key_enable_trigger = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                       & (0x40007164U 
                                          == vlSelfRef.Top__DOT__core__DOT__ex_reg_result));
    vlSelfRef.io_encryption_enable_trigger = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                              & (0x40007168U 
                                                 == vlSelfRef.Top__DOT__core__DOT__ex_reg_result));
    vlSelfRef.io_decryption_enable_trigger = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                                              & (0x4000716cU 
                                                 == vlSelfRef.Top__DOT__core__DOT__ex_reg_result));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2 
        = ((1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))
            ? (vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg 
               >> 2U) : 0U);
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__io_is_f_o_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_is_f));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
           | ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
              & (2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_0));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_1));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_2));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_3));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_4));
    vlSelfRef.Top__DOT__imem__DOT___state_reg_T_3 = 
        ((0U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg)) 
         | ((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg)) 
            & (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
    vlSelfRef.io_rvfi_mem_addr_0 = ((IData)(vlSelfRef.Top__DOT__core__DOT__REG_7)
                                     ? vlSelfRef.Top__DOT__core__DOT__REG_8
                                     : 0U);
    vlSelfRef.io_rvfi_mem_rdata_0 = ((IData)(vlSelfRef.Top__DOT__core__DOT__REG_9)
                                      ? vlSelfRef.Top__DOT__core__DOT__mem_reg_rd
                                      : 0U);
    vlSelfRef.io_rvfi_mem_wdata_0 = ((IData)(vlSelfRef.Top__DOT__core__DOT__REG_10)
                                      ? vlSelfRef.Top__DOT__core__DOT__REG_11
                                      : 0U);
    if ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))) {
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12 = 1U;
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22 = 3U;
    } else if ((1U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))) {
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12 = 2U;
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22 = 6U;
    } else {
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12 
            = ((2U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                ? 4U : 8U);
        vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22 = 0xcU;
    }
    vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0U == (0x7000U & vlSelfRef.Top__DOT__core__DOT__ex_reg_ins)));
    vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
           & (0x1000U == (0x7000U & vlSelfRef.Top__DOT__core__DOT__ex_reg_ins)));
    vlSelfRef.io_baby_kyber_req_valid = ((0x40007000U 
                                          <= vlSelfRef.Top__DOT__core__DOT__ex_reg_result) 
                                         & (0x40007fffU 
                                            >= vlSelfRef.Top__DOT__core__DOT__ex_reg_result));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
        = ((((3U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
             | ((0xfU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                | ((0x13U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                   | ((0x1bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                      | ((0x67U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                         | (0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))) 
            | (7U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
            ? ((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                  >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
               | (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                  >> 0x14U)) : (((0x17U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                 | (0x37U == (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
                                 ? (0xfffff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)
                                 : (((0x23U == (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     | (0x27U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
                                     ? ((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x1fU)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0xfe0U 
                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))
                                     : ((0x63U == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                         ? ((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x1fU)
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU) 
                                            | (((0x1000U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 7U)))))
                                         : (((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x1fU)
                                                ? 0x7ffU
                                                : 0U) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                                | (0x800U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
              >> 0x19U));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
            << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                       << 1U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
           & (0U != (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7 
        = ((((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
             | (IData)((0x5013U == (0x707fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))) 
            | (0x53U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
            ? (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
               >> 0x19U) : 0U);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst 
        = ((0x43U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
           | ((0x47U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
              | ((0x4bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                 | ((0x4fU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                    | ((0x53U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                       | ((0x8000053U == (0xfe00007fU 
                                          & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                          | ((0x10000053U == (0xfe00007fU 
                                              & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                             | ((0x20000053U == (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                | ((0x20001053U == 
                                    (0xfe00707fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                   | ((0x20002053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                      | ((0x28000053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                         | ((0x28001053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                            | ((0xc0000053U 
                                                == 
                                                (0xfff0007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                               | ((0xc0100053U 
                                                   == 
                                                   (0xfff0007fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                  | ((0xe0000053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                     | ((0xa0002053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                        | ((0xa0001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                           | ((0xa0000053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                              | ((0xe0001053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                                 | ((0xd0000053U 
                                                                     == 
                                                                     (0xfff0007fU 
                                                                      & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                                    | ((0xd0100053U 
                                                                        == 
                                                                        (0xfff0007fU 
                                                                         & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                                                       | (0xf0000053U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluOp))
            ? 2U : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluOp))
                     ? 0xfU : ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                ? ((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc)) 
                                          | (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7) 
                                                >> 5U))))
                                    ? 2U : 3U) : ((1U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                   ? 6U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                      ? 
                                                     ((0x20U 
                                                       & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7))
                                                       ? 8U
                                                       : 7U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                       ? 0U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                        ? 1U
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                                                         ? 9U
                                                         : 0xfU))))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump 
        = ((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
            ? 0U : ((0x13U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                     ? 0U : ((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                              ? 0U : ((3U == (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                       ? 0U : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                ? 0U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                       ? 1U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 0U))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & ((0x18000053U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
              | (0x58000053U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
        = ((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__imem__DOT__sram_rdata_o
            : 0U);
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7 
        = ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
           & (0U != (0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                              >> 7U))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra) 
           == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___T_24 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
           & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en)) 
              & ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                 | ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                    | ((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                       | (7U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 
        = ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 
        = (((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_0)) 
           & (0U != (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                              >> 7U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out 
        = (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid)) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)));
    Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1 
        = ((0xc0000053U == (0xfff0007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           | ((0xc0100053U == (0xfff0007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              | ((0xe0000053U == (0xfe00707fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 | ((0xa0002053U == (0xfe00707fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    | ((0xa0001053U == (0xfe00707fU 
                                        & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       | ((0xa0000053U == (0xfe00707fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          | (0xe0001053U == (0xfe00707fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13 
        = ((0x43U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           | (0x47U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
           | (4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
              & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
            << 1U) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_3[1U] >> 2U)) | (0xffU 
                                                & (__Vtemp_7[1U] 
                                                   >> 0x12U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode 
        = (7U & ((7U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3))
                  ? (vlSelfRef.Top__DOT__core__DOT__id_reg_fcsr_o_data 
                     >> 5U) : (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp 
        = ((0x43U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
            ? 1U : ((0x47U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                     ? 2U : ((0x4bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                              ? 3U : ((0x4fU == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                       ? 4U : ((0x53U 
                                                == 
                                                (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                ? 5U
                                                : (
                                                   (0x8000053U 
                                                    == 
                                                    (0xfe00007fU 
                                                     & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                    ? 6U
                                                    : 
                                                   ((0x10000053U 
                                                     == 
                                                     (0xfe00007fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                     ? 7U
                                                     : 
                                                    ((0x18000053U 
                                                      == 
                                                      (0xfe00007fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                      ? 8U
                                                      : 
                                                     ((0x58000053U 
                                                       == 
                                                       (0xfe00007fU 
                                                        & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                       ? 9U
                                                       : 
                                                      ((0x20000053U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                        ? 0xaU
                                                        : 
                                                       ((0x20001053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                         ? 0xbU
                                                         : 
                                                        ((0x20002053U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                          ? 0xcU
                                                          : 
                                                         ((0x28000053U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                           ? 0xdU
                                                           : 
                                                          ((0x28001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                            ? 0xeU
                                                            : 
                                                           ((0xc0000053U 
                                                             == 
                                                             (0xfff0007fU 
                                                              & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                             ? 0xfU
                                                             : 
                                                            ((0xc0100053U 
                                                              == 
                                                              (0xfff0007fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                              ? 0x10U
                                                              : 
                                                             ((0xe0000053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                               ? 0x11U
                                                               : 
                                                              ((0xa0002053U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                ? 0x12U
                                                                : 
                                                               ((0xa0001053U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                 ? 0x13U
                                                                 : 
                                                                ((0xa0000053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0xe0001053U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0xd0000053U 
                                                                    == 
                                                                    (0xfff0007fU 
                                                                     & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0xd0100053U 
                                                                     == 
                                                                     (0xfff0007fU 
                                                                      & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0xf0000053U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelfRef.Top__DOT__core__DOT__id_reg_ins))
                                                                      ? 0x18U
                                                                      : 0U))))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC 
        = ((((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                       >> 7U)) == (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                   >> 0x1bU)) & ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_2)))
            ? 1U : ((((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                >> 7U)) == (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                            >> 0x1bU)) 
                     & ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_2) 
                        & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                     ? 2U : 0U));
    vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o
            : 0U);
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2 
        = (1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.Top__DOT__core__DOT__ex_reg_ins)))));
    Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11 
        = (1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
                    & (0U == (0xf80U & vlSelfRef.Top__DOT__core__DOT__mem_reg_ins)))));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_5 = 
        ((1U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         & (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    vlSelfRef.Top__DOT__dmem__DOT__sram_we_i = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite)) 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
        = (((((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
               ? ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                   ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                      >> 0x18U) : ((1U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                    ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                       >> 0x18U) : 
                                   ((2U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                     ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x18U) : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))
               : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                   ? ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                       ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                          >> 0x18U) : ((1U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                        ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                           >> 0x18U)
                                        : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                           >> 8U)))
                   : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                      >> 0x18U))) << 0x18U) | (0xff0000U 
                                               & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x10U)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                       ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                       : 
                                                      (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                       >> 0x18U))))
                                                    : 
                                                   ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x10U)
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                       ? 
                                                      (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                       >> 8U)
                                                       : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd))
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U))) 
                                                  << 0x10U))) 
           | ((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                            ? ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                   >> 8U) : ((1U == 
                                              (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                              ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                              : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                 >> 0x10U)))
                            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                ? ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                    ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                       >> 8U) : ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                  ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                  : 
                                                 (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                  >> 0x18U)))
                                : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                   >> 8U))) << 8U)) 
              | (0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                           ? ((0U == (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                               ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                               : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                  >> 8U)) : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                  ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                  : 
                                                 (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                  >> 0x10U))
                                              : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))));
    vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
            ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12)
            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22)
                : 0xfU));
    if (vlSelfRef.io_baby_kyber_req_valid) {
        vlSelfRef.io_baby_kyber_req_bits_activeByteLane = 0xfU;
        vlSelfRef.io_baby_kyber_req_bits_addrRequest 
            = vlSelfRef.Top__DOT__core__DOT__ex_reg_result;
        vlSelfRef.io_baby_kyber_req_bits_dataRequest 
            = vlSelfRef.Top__DOT__core__DOT__ex_reg_wd;
        vlSelfRef.io_baby_kyber_rsp_ready = 1U;
        vlSelfRef.io_baby_kyber_req_bits_isWrite = vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite;
    } else {
        vlSelfRef.io_baby_kyber_req_bits_activeByteLane = 0U;
        vlSelfRef.io_baby_kyber_req_bits_addrRequest = 0U;
        vlSelfRef.io_baby_kyber_req_bits_dataRequest = 0U;
        vlSelfRef.io_baby_kyber_rsp_ready = 0U;
        vlSelfRef.io_baby_kyber_req_bits_isWrite = 0U;
    }
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1 
        = (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
           + vlSelfRef.Top__DOT__core__DOT__if_reg_pc);
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
            << 4U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                       << 3U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
    vlSelfRef.Top__DOT__core__DOT__func7 = (((0x33U 
                                              == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction)) 
                                             | (0x53U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction)))
                                             ? (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                >> 0x19U)
                                             : 0U);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_2 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___T_24) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall 
        = (1U & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___T_24) 
                  | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en) 
                     & (0x20U > (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter)))) 
                 | ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                    | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                       | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7))))));
    Top__DOT__core__DOT__Execute__DOT___GEN_1 = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___T_24) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                                                    & ((0U 
                                                        == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                                                       | ((1U 
                                                           == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                                                          | ((2U 
                                                              == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)) 
                                                             | (3U 
                                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3)))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx 
        = (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_is_csr)) 
            & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4)) 
           & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx 
        = (((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_is_csr)) 
           & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite 
        = ((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           | ((0x13U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              | ((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 | ((3U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    | ((0x23U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       & ((0x63U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          & ((0x37U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x17U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((7U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x27U 
                                             != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x43U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x47U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x4bU 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x4fU 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                        & ((0x53U 
                                                            != 
                                                            (0xfe00007fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                           & ((0x8000053U 
                                                               != 
                                                               (0xfe00007fU 
                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                              & ((0x10000053U 
                                                                  != 
                                                                  (0xfe00007fU 
                                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                 & ((0x18000053U 
                                                                     != 
                                                                     (0xfe00007fU 
                                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                    & ((0x58000053U 
                                                                        != 
                                                                        (0xfe00007fU 
                                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                       & ((0x20000053U 
                                                                           != 
                                                                           (0xfe00707fU 
                                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                          & ((0x20001053U 
                                                                              != 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                             & ((0x20002053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0x28000053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0x28001053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xd0000053U 
                                                                                != 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xd0100053U 
                                                                                != 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & ((0xf0000053U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                                & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101 
        = ((0x37U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           & ((0x17U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              & ((0x6fU != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 & ((0x67U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    & ((7U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       & ((0x27U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          & ((0x43U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x47U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x4bU == (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x4fU == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x53U == 
                                          (0xfe00007fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x8000053U 
                                             == (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x10000053U 
                                                == 
                                                (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x18000053U 
                                                   == 
                                                   (0xfe00007fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0x58000053U 
                                                      == 
                                                      (0xfe00007fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                     | ((0x20000053U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0x20001053U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                           | ((0x20002053U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                              | ((0x28000053U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                 | ((0x28001053U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                    | ((0xd0000053U 
                                                                        == 
                                                                        (0xfff0007fU 
                                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                       | ((0xd0100053U 
                                                                           == 
                                                                           (0xfff0007fU 
                                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                          | ((0xf0000053U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                             | (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en)
            ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__op_reg)
            : (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f3));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
              | (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u 
        = ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | (7U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s 
        = ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
           | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1 
        = ((0x27U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
           | ((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13) 
              | ((0x4bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 | ((0x4fU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    | ((0x53U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       | ((0x8000053U == (0xfe00007fU 
                                          & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          | ((0x10000053U == (0xfe00007fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x18000053U == (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x20000053U == 
                                    (0xfe00707fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x20001053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x20002053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x28000053U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x28001053U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0xa0002053U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                  | ((0xa0001053U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                     | (0xa0000053U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2 
        = ((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_13) 
           | ((0x4bU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              | (0x4fU == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
           | (4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 
        = ((9U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling 
        = ((0x13U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | (0x14U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
              | ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                 | (4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9 
        = ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op 
        = ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
            ? 3U : ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                     ? 2U : (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    vlSelfRef.Top__DOT__core__DOT__MEM_io_readData 
        = ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3))
            ? vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata
            : ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3))
                ? ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                    ? ((((0x80U & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                          ? 0xffffffU : 0U) << 8U) 
                       | (0xffU & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata))
                    : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                        ? ((((0x8000U & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                              ? 0xffffffU : 0U) << 8U) 
                           | (0xffU & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                       >> 8U))) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   ((((0x800000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                                          >> 0x10U)))
                                                    : 
                                                   ((((vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x1fU)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x18U)))))
                : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3))
                    ? ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                        ? (0xffU & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                        : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                            ? (0xffU & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                        >> 8U)) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                                       >> 0x10U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata, 0x18U))))
                    : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3))
                        ? ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                            ? (0xffffU & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                            : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                                ? (0xffffU & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 8U))
                                : VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata, 0x10U)))
                        : ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                            ? ((((0x8000U & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | (0xffffU & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata))
                            : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset))
                                ? ((((0x800000U & vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                                    >> 8U)))
                                : ((((vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                      >> 0x1fU) ? 0xffffU
                                      : 0U) << 0x10U) 
                                   | (vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
                                      >> 0x10U))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA 
        = ((((IData)(Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2) 
             & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                          >> 7U)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                               >> 0xfU)))) 
            & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                  & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0))))
            ? 1U : ((((IData)(Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11) 
                      & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0xfU)))) 
                     & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                         & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
                     ? 2U : 0U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB 
        = ((((IData)(Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_2) 
             & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                          >> 7U)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                               >> 0x14U)))) 
            & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1) 
                  & (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1))))
            ? 1U : ((((IData)(Top__DOT__core__DOT__Execute__DOT__ForwardingUnit__DOT___T_11) 
                      & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                  >> 0x14U)))) 
                     & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1)) 
                         & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
                     ? 2U : 0U));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
        = ((3U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                   >> 0x14U)) ? (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                  << 5U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))
            : ((2U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                       >> 0x14U)) ? (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                : ((1U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                           >> 0x14U)) ? (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10)
                    : ((0x304U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG
                        : ((0x341U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG
                            : ((0x305U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U))
                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG
                                : ((0x342U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))
                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG
                                    : ((0x300U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U))
                                        ? (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                            << 0x15U) 
                                           | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                               << 0x11U) 
                                              | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                     << 7U) 
                                                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                       << 3U)))))
                                        : ((0xf14U 
                                            == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))
                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                            : ((0x301U 
                                                == 
                                                (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U))
                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG
                                                : 0U))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_12 
        = ((0x20U > (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_2));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall)) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)));
    vlSelfRef.Top__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall) 
           | ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7)) 
              & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU))) | ((5U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                             | ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU))) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xcU))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
           & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_csr)) 
               & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4)) 
              & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
           & (((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4) 
               & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_csr)) 
              & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)
            ? ((0x1fU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U))) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))
                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U)))
                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U)))
                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U)))
                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U)))
                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                >> 0x14U)))
                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x14U)))
                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x14U)))
                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x14U)))
                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x14U)))
                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x14U)))
                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x14U)))
                                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x14U)))
                                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x14U)))
                                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x14U)))
                                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x14U)))
                                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                           >> 0x14U)))
                                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                            >> 0x14U)))
                                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                             >> 0x14U)))
                                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : ((0U != (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))) ? ((0x1fU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31
                                                : (
                                                   (0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26
                                                        : 
                                                       ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0x14U)))
                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25
                                                         : 
                                                        ((0x18U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U)))
                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                               >> 0x14U)))
                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23
                                                           : 
                                                          ((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                >> 0x14U)))
                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22
                                                            : 
                                                           ((0x15U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x14U)))
                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21
                                                             : 
                                                            ((0x14U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x14U)))
                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20
                                                              : 
                                                             ((0x13U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x14U)))
                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19
                                                               : 
                                                              ((0x12U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x14U)))
                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18
                                                                : 
                                                               ((0x11U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x14U)))
                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x14U)))
                                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16
                                                                  : 
                                                                 ((0xfU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x14U)))
                                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15
                                                                   : 
                                                                  ((0xeU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x14U)))
                                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14
                                                                    : 
                                                                   ((0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x14U)))
                                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13
                                                                     : 
                                                                    ((0xcU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x14U)))
                                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12
                                                                      : 
                                                                     ((0xbU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                           >> 0x14U)))
                                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11
                                                                       : 
                                                                      ((0xaU 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                            >> 0x14U)))
                                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10
                                                                        : 
                                                                       ((9U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                             >> 0x14U)))
                                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9
                                                                         : 
                                                                        ((8U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                              >> 0x14U)))
                                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8
                                                                          : 
                                                                         ((7U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                               >> 0x14U)))
                                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7
                                                                           : 
                                                                          ((6U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6
                                                                            : 
                                                                           ((5U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5
                                                                             : 
                                                                            ((4U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4
                                                                              : 
                                                                             ((3U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3
                                                                               : 
                                                                              ((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0x14U)))
                                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1
                                                                                 : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0)))))))))))))))))))))))))))))))
                : 0U));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2)
            ? ((0x1fU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                          >> 0x1bU)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                              >> 0x1bU)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1bU)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x1bU)) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x1bU))
                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x1bU))
                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x1bU))
                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x1bU))
                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x1bU))
                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1bU))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x1bU))
                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x1bU))
                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x1bU))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x1bU))
                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x1bU))
                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0x1bU))
                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0x1bU))
                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0x1bU))
                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x1bU))
                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                               >> 0x1bU))
                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                >> 0x1bU))
                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                 >> 0x1bU))
                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                  >> 0x1bU))
                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                   >> 0x1bU))
                                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                    >> 0x1bU))
                                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                     >> 0x1bU))
                                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                      >> 0x1bU))
                                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                       >> 0x1bU))
                                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                        >> 0x1bU))
                                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                         >> 0x1bU))
                                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                          >> 0x1bU))
                                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : 0U);
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
           | ((0x53U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
              | ((0x8000053U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                 | ((0x10000053U == (0xfe00007fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                    | ((0x18000053U == (0xfe00007fU 
                                        & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                       | ((0x58000053U == (0xfe00007fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                          | ((0x20000053U == (0xfe00707fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x20001053U == (0xfe00707fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x20002053U == 
                                    (0xfe00707fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x28000053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x28001053U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT____VdfgRegularize_hdf9f7659_0_1))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.io_pin = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                         ? vlSelfRef.Top__DOT__core__DOT__MEM_io_readData
                         : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                             ? ((IData)(4U) + vlSelfRef.Top__DOT__core__DOT__mem_reg_pc)
                             : vlSelfRef.Top__DOT__core__DOT__mem_reg_result));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 
        = ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
             & (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                 & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))
            ? 6U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem)
                     ? 5U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)
                              ? 4U : ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                                        & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                           & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                       & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))
                                       ? 3U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem)
                                                ? 2U
                                                : (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en)
            ? ((0x20U > (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter)) 
               & (IData)(Top__DOT__core__DOT__Execute__DOT___GEN_1))
            : (IData)(Top__DOT__core__DOT__Execute__DOT___GEN_1));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5)
            ? ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
               & ((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   ? (1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))
                   : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready)))
            : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)
            ? ((0x1fU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                   >> 0xfU))) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xfU)))
                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xfU)))
                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)))
                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)))
                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0xfU)))
                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0xfU)))
                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                               >> 0xfU)))
                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                >> 0xfU)))
                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                 >> 0xfU)))
                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                  >> 0xfU)))
                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                   >> 0xfU)))
                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                    >> 0xfU)))
                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                     >> 0xfU)))
                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                      >> 0xfU)))
                                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                       >> 0xfU)))
                                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                        >> 0xfU)))
                                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                         >> 0xfU)))
                                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                          >> 0xfU)))
                                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                           >> 0xfU)))
                                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                            >> 0xfU)))
                                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                             >> 0xfU)))
                                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1
                                                                         : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0)))))))))))))))))))))))))))))))
            : ((0U != (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                >> 0xfU))) ? ((0x1fU 
                                               == (0x1fU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31
                                               : ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)))
                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27
                                                      : 
                                                     ((0x1aU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26
                                                       : 
                                                      ((0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                             >> 0xfU)))
                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0xfU)))
                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23
                                                          : 
                                                         ((0x16U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                               >> 0xfU)))
                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22
                                                           : 
                                                          ((0x15U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                >> 0xfU)))
                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21
                                                            : 
                                                           ((0x14U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                 >> 0xfU)))
                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20
                                                             : 
                                                            ((0x13U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                  >> 0xfU)))
                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19
                                                              : 
                                                             ((0x12U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                   >> 0xfU)))
                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18
                                                               : 
                                                              ((0x11U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                    >> 0xfU)))
                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                     >> 0xfU)))
                                                                 ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16
                                                                 : 
                                                                ((0xfU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                      >> 0xfU)))
                                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                       >> 0xfU)))
                                                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                        >> 0xfU)))
                                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                         >> 0xfU)))
                                                                     ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                          >> 0xfU)))
                                                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                           >> 0xfU)))
                                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10
                                                                       : 
                                                                      ((9U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                            >> 0xfU)))
                                                                        ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9
                                                                        : 
                                                                       ((8U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                             >> 0xfU)))
                                                                         ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                              >> 0xfU)))
                                                                          ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                               >> 0xfU)))
                                                                           ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5
                                                                            : 
                                                                           ((4U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                             ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                              ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3
                                                                              : 
                                                                             ((2U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                               ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                                                >> 0xfU)))
                                                                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1
                                                                                : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0)))))))))))))))))))))))))))))))
                : 0U));
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_11, __Vtemp_10, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_15, __Vtemp_14, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_18[0U] = 0U;
    __Vtemp_18[1U] = 0U;
    __Vtemp_18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_19, __Vtemp_18, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_22[0U] = 0U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_23, __Vtemp_22, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_26[0U] = 0U;
    __Vtemp_26[1U] = 0U;
    __Vtemp_26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_27, __Vtemp_26, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_30[0U] = 0U;
    __Vtemp_30[1U] = 0U;
    __Vtemp_30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_31, __Vtemp_30, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_35, __Vtemp_34, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_38[0U] = 0U;
    __Vtemp_38[1U] = 0U;
    __Vtemp_38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_39, __Vtemp_38, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_42[0U] = 0U;
    __Vtemp_42[1U] = 0U;
    __Vtemp_42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_43, __Vtemp_42, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                          ? 0U : ((4U & (__Vtemp_11[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_15[0U]) 
                                   | (1U & (__Vtemp_19[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_23[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_27[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_31[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_35[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_39[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_43[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                    >> 0x19U)));
    vlSelfRef.io_rvfi_rd_wdata_0 = ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)
                                     ? vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data
                                     : vlSelfRef.io_pin);
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData2 
        = ((((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra) 
             == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                          >> 0x14U))) & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)) 
                                          & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
                                         | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1) 
                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
            ? (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1)) 
                & (0U == (0x1f00000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
                ? 0U : vlSelfRef.io_pin) : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
        = ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
            ? vlSelfRef.io_pin : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                   ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
                                   : ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC))
                                       ? vlSelfRef.Top__DOT__core__DOT__id_reg_rd3
                                       : 0U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
            ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
            : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlSelfRef.io_pin : 0U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
            ? vlSelfRef.Top__DOT__core__DOT__id_reg_rd1
            : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
                : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                    ? vlSelfRef.io_pin : 0U)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7) 
            & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0) 
                  & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
            ? (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (0U == (0xf8000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
                ? 0U : vlSelfRef.io_pin) : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 
        = (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_1)) 
            & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                         >> 0x14U)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U))))
            ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
            : (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_1)) 
                & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                             >> 0x14U)) == (0x1fU & 
                                            (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                             >> 7U))))
                ? vlSelfRef.io_pin : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData2));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist 
        = ((0x400000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
            ? 0U : ((0x200000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                     ? 1U : ((0x100000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                              ? 2U : ((0x80000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
            ? vlSelfRef.Top__DOT__core__DOT__id_reg_rd2
            : vlSelfRef.Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
            ? vlSelfRef.Top__DOT__core__DOT__id_reg_pc
            : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                ? 0U : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = ((0x16U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
              >> 0x1fU));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist 
        = ((0x400000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
            ? 0U : ((0x200000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                     ? 1U : ((0x100000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                              ? 2U : ((0x80000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
        = (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_0)) 
            & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                         >> 0xfU)) == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))))
            ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
            : (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_0)) 
                & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                             >> 0xfU)) == (0x1fU & 
                                           (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                            >> 7U))))
                ? vlSelfRef.io_pin : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                          << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                         << 1U)) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist))
                       : (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78 
        = (((0x80000000U == vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in) 
            | (0x80000000U == vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)) 
           & ((0U == vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in) 
              | (0U == vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc)
            ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1
            : vlSelfRef.Top__DOT__core__DOT__id_reg_imm);
    if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_a_reg;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_b_reg;
    } else {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2;
    }
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            ^ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
           >> 0x1fU);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
            >> 0x1fU) ^ (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd 
        = (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
             ^ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
            >> 0x1fU) ^ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op) 
                         >> 1U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1 
        = ((0x400000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
            ? 0U : ((0x200000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                     ? 1U : ((0x100000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                              ? 2U : ((0x80000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                       ? 3U : ((0x40000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                ? 4U
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                    ? 5U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                     ? 6U
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                      ? 7U
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                       ? 8U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                        ? 9U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                          ? 0xbU
                                                          : 
                                                         ((0x400U 
                                                           & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                           ? 0xcU
                                                           : 
                                                          ((0x200U 
                                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                            ? 0xdU
                                                            : 
                                                           ((0x100U 
                                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                             ? 0xeU
                                                             : 
                                                            ((0x80U 
                                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                              ? 0xfU
                                                              : 
                                                             ((0x40U 
                                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20U 
                                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                ? 0x11U
                                                                : 
                                                               ((0x10U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                 ? 0x12U
                                                                 : 
                                                                ((8U 
                                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)
                                                                    ? 0x15U
                                                                    : 0x16U))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)
            ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)
            : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                          << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                         << 1U)) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist))
                       : (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush 
        = ((((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                           >> 0xcU))) ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                         == vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
              : ((1U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU))) ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                             != vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                  : ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                   >> 0xcU))) ? VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                      : ((5U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))) ? 
                         VL_GTES_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                          : ((6U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 < vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 >= vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
            & ((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
               & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                  & ((0x73U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                     & ((3U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                        & ((0x23U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                           & (0x63U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))) 
           | (0U != (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3 
        = (7U & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)
                   ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                           >> 6U)) | ((0U != (0x7fffffU 
                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)) 
                                      & (3U == (3U 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                                   >> 7U))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            >> 0x1fU) == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                 ^ ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                     >> 0x1fU) ^ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
        = (0x7fffffU & ((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                         >> 0x17U)))
                         ? (0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                          << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                         << 1U)) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1 
        = (0x1ffU & (((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                       >> 0x17U))) ? 
                      (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1))
                       : (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                   >> 0x17U))) + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    if ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
         >> 0x1fU)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1fU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0U;
    } else if ((0x40000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1eU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 1U;
    } else if ((0x20000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1dU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 2U;
    } else if ((0x10000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1cU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 3U;
    } else if ((0x8000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1bU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 4U;
    } else if ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x1aU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 5U;
    } else if ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x19U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 6U;
    } else if ((0x1000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x18U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 7U;
    } else if ((0x800000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x17U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 8U;
    } else if ((0x400000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x16U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 9U;
    } else if ((0x200000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x15U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xaU;
    } else if ((0x100000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x14U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xbU;
    } else if ((0x80000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x13U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xcU;
    } else if ((0x40000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x12U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xdU;
    } else if ((0x20000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x11U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xeU;
    } else if ((0x10000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0x10U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0xfU;
    } else if ((0x8000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xfU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x10U;
    } else if ((0x4000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xeU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x11U;
    } else if ((0x2000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xdU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x12U;
    } else if ((0x1000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xcU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x13U;
    } else if ((0x800U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xbU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x14U;
    } else if ((0x400U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0xaU;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x15U;
    } else if ((0x200U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 9U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x16U;
    } else if ((0x100U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 8U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x17U;
    } else if ((0x80U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 7U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x18U;
    } else if ((0x40U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 6U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x19U;
    } else if ((0x20U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 5U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1aU;
    } else if ((0x10U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 4U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1bU;
    } else if ((8U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 3U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1cU;
    } else if ((4U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 2U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1dU;
    } else if ((2U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 1U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1eU;
    } else {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = 0x1fU;
    }
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S 
        = ((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN 
        = (IData)(((0x180U == (0x180U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))) 
                   & (0U != (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1) 
           | ((((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                 >> 0xcU))) | ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                    >> 0xcU))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                       >> 0xcU))) 
                                                  | (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                         >> 0xcU))))))) 
               | ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                  | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)))) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                               & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC 
        = (IData)((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)) 
            << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp)));
    __Vtemp_46[0U] = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                          >> 0x1fU)) ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                       : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b);
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_47, __Vtemp_46, 
                  (0x3fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                            - (IData)(1U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[0U] 
        = __Vtemp_47[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[1U] 
        = __Vtemp_47[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[2U] 
        = (0x7fffffffU & __Vtemp_47[2U]);
    VL_EXTENDS_WI(65,32, __Vtemp_50, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a);
    __Vtemp_51[0U] = __Vtemp_50[0U];
    __Vtemp_51[1U] = __Vtemp_50[1U];
    __Vtemp_51[2U] = (1U & __Vtemp_50[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_53, (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)));
    __Vtemp_54[0U] = __Vtemp_53[0U];
    __Vtemp_54[1U] = __Vtemp_53[1U];
    __Vtemp_54[2U] = (1U & __Vtemp_53[2U]);
    VL_MULS_WWW(65, __Vtemp_55, __Vtemp_51, __Vtemp_54);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
        = (((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
            | (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)))
            ? ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)) 
               * (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)))
            : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                ? (((QData)((IData)(__Vtemp_55[1U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_55[0U])))
                : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                    ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                    : 0ULL)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags) 
           ^ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 
        = (((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
                  << 1U) : 0U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
                                   ? 0x400000U : 0U)) 
            | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5))
                ? 0x800000U : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                       ? 0U : (0x7fffffU 
                                               & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z 
                                                  >> 1U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN 
        = (IData)(((0x180U == (0x180U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1))) 
                   & (0U != (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (IData)((0xffffffffULL & (((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn)) 
                                           << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist)) 
                                          >> 0x1fU))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig 
        = (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
           << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (0x7fU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn 
                           << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23 
        = (7U & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)
                   ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                           >> 6U)) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7 
        = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)) 
           & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall)) 
              & (1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall)) 
           & (1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    __Vtemp_57[0U] = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_57[1U] = 0U;
    __Vtemp_57[2U] = 0U;
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2 
        = VL_GTE_W(3, __Vtemp_57, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3 
        = (((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
               | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                  & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                     & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))
            ? ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6)
                    ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                               >> 0x20U)) : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                              ? (((
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                    >> 0x1fU)) 
                                                  & (0U 
                                                     != vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                                  ? 
                                                 (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                              : ((5U 
                                                  == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                                  ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                                   ? 
                                                  ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                                    ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend
                                                    : 0U))))))
            : 0U);
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9 
        = (1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN) 
                    | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43 
        = (7U & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)
                   ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                           >> 6U)) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = (1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig 
                  >> 7U) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA 
        = (IData)((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
            << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
            << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)));
    vlSelfRef.Top__DOT__imem__DOT___state_reg_T_5 = 
        ((1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg)) 
         & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    vlSelfRef.Top__DOT__core__DOT__pc_io_halt = ((IData)(vlSelfRef.Top__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1) 
                                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    __Vtemp_61[0U] = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_61[1U] = 0U;
    __Vtemp_61[2U] = 0U;
    VL_SUB_W(3, __Vtemp_62, __Vtemp_61, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_19 = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
    } else {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_19 
            = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___T_24)
                ? (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)
                : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f7_reg));
        if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) {
            if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid) {
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                    = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                        & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                           >> 0x1fU)) ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a);
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
            } else if ((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))) {
                if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2) {
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                        = ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)) 
                           + (1ULL << (0x3fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                                                - (IData)(1U)))));
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                        = __Vtemp_62[0U];
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] 
                        = __Vtemp_62[1U];
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] 
                        = (0x7fffffffU & __Vtemp_62[2U]);
                } else {
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                        = (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                        = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
                }
            } else {
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                    = (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                    = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
            }
        } else {
            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 
                = (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient));
            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] 
                = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
        }
    }
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN 
        = (IData)((7U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB 
        = (IData)((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
            << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
            << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
            << 6U) | (0x3fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
             & (0U != (1U & (IData)(((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                     >> 7U))))) | (
                                                   (((2U 
                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                                    | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                                       & (3U 
                                                          == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
            ? ((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                 & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                    & (0U != (1U & (IData)(((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                            >> 7U))))))
                 ? 0x3fffffeU : 0x3ffffffU) & ((IData)(1U) 
                                               + VL_SHIFTR_III(26,26,32, 
                                                               (0x3ffffffU 
                                                                & (IData)(
                                                                          ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                                           >> 7U))), 1U)))
            : ((0x1ffffffU & VL_SHIFTR_III(26,26,32, 
                                           (0x3ffffffU 
                                            & (IData)(
                                                      ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                       >> 7U))), 1U)) 
               | (((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                   ? 1U : 0U)));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3 
        = ((4U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
            ? (0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
            : 0U);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                                        >> 2U)))) 
                                    << 0x17U) | (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))) 
                                  << (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & ((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
              & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                 >> 0x1fU)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
              >> 0x1fU));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN 
        = ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
               >> 0x16U)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
              | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
           & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
              & (0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem 
        = (((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S)) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))
              ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                 << 1U) : 0U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                  ? ((0x6000000U & 
                                      (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                         >> 0x16U) 
                                        - (IData)(1U)) 
                                       << 0x19U)) | 
                                     (0x1ffffffU & 
                                      VL_SHIFTL_III(25,25,32, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig, 3U)))
                                  : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                             ? 0U : 
                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
                                             << 1U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne 
        = ((~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
               >> 2U)) & (0xffU == (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5 
        = ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 
               >> 0x16U)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
        = (0x3ffffffffffffULL & ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig)) 
                                 * (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                     + VL_EXTENDS_II(11,10, ((0x200U 
                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                                 << 7U)) 
                                             | ((0x100U 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                                    << 6U)) 
                                                | (0xffU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
           == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
        = (0x3ffU & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                      + (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)) 
                     - (IData)(0x100U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps 
        = (0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                     - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                      + VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp))) 
                     - (IData)(0xe5U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)
            ? (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
            : 0U);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)
             ? 0x1ffU : 0x3fU) & ((0x7ffU & VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & ((IData)(0xc0U) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_EXTENDS_II(10,9, 
                                                                               (0x40U 
                                                                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1)))))))) 
                                  + (0x7ffU & VL_EXTENDS_II(11,10, 
                                                            (3U 
                                                             & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                >> 0x18U))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig 
        = ((0x3fffffffeULL & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                              >> 0x15U)) | (QData)((IData)(
                                                           (0U 
                                                            != 
                                                            (0x3fffffU 
                                                             & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 
                                                                << (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3)))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S 
        = (1U & ((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                  ? ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                     & (~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                           >> 0x1fU))) : ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                          & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129 
        = ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
               >> 0x1fU)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
            >> 0x1fU) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem 
        = (0x1fffffffU & (VL_EXTENDS_II(29,28, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                          - VL_EXTENDS_II(29,28, ((
                                                   (((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                                        ? 
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                                        << 1U)
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                                          & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                                             & (9U 
                                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))))
                                                          ? 0x1000000U
                                                          : 0U)) 
                                                     | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                                         ? 0x2800000U
                                                         : 0U)) 
                                                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                                        ? 0U
                                                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                          & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                                                       ? 0x1000000U
                                                       : 0U)) 
                                                  | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                      << 1U)
                                                      : 0U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x2000000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                 & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                 | ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc 
        = (((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                 | ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                        >> 0x16U)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN)))) 
             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
               & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)))) 
           | ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
               & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC)) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((0x7fffffeU & ((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                   >> 0x16U)) << 1U)) 
           | (0U != (0x3fffffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags 
        = (VL_LTS_III(10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp), (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps) 
              & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
                 < vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps) 
           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA 
              == vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB));
    __Vtemp_73[0U] = 0U;
    __Vtemp_73[1U] = 0U;
    __Vtemp_73[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_74, __Vtemp_73, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_77[0U] = 0U;
    __Vtemp_77[1U] = 0U;
    __Vtemp_77[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_78, __Vtemp_77, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_74[1U] >> 2U)) | (0xffU 
                                                 & (__Vtemp_78[1U] 
                                                    >> 0x12U)));
    if (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist 
            = (0x1fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)));
    } else {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
            = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist 
            = (0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps));
    }
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum 
        = (0x7ffffffU & (((((VL_LTES_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                << 2U) : 0U) | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)) 
                                                 & VL_LTES_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)))
                                                 ? 
                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig 
                                                 << 1U)
                                                 : 0U)) 
                          | (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                              ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig
                              : 0U)) - (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                        << 1U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign 
        = ((0U != (0x1fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps) 
                            >> 5U))) & (IData)(((0x3e0U 
                                                 != 
                                                 (0x3e0U 
                                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd) 
                     - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 
        = (0x3fffffffU & ((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)))
                           ? ((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                   ? (VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                      << 0x19U) : 0U) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5)
                                     ? 0x1000000U : 0U)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                    ? (VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                       << 0x17U) : 0U)) 
                               | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                   ? 0U : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                              | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                  & VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))
                                  ? (((IData)(1U) << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                     >> 2U) : 0U)) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN)) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                >> 0x1fU) == (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                              >> 0x1fU)) & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros)) 
                 & (((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                         >> 0x1fU)) & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU)) | 
                    ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs)) 
                     & (((~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags))) 
                         & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                            >> 0x1fU)) | ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                              >> 0x1fU)) 
                                          & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags)))))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
        = (0x7ffffffU & (VL_GTS_III(27, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)
                          ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)
                          : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign)
            ? 0x1fU : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
           & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign)) 
              & (1U >= (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
        = ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
           | ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)) 
              | VL_GTS_III(11, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign) 
            << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                            - (IData)(0x81U))) 
                                          | (((IData)(
                                                      (0x1c0U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf))
                                              ? 0xffU
                                              : 0U)) 
                                         << 0x17U)) 
                         | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? (0xffffffU 
                                             & ((0xffffffU 
                                                 & ((0x7fc00000U 
                                                     & ((0U 
                                                         != 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                             >> 6U))) 
                                                        << 0x16U)) 
                                                    | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                       >> 1U))) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                          : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf)
                                              ? 0U : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact 
        = ((4U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
            ? (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))
            : (0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr 
        = (((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
              & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                   >> 2U) & ((3U == (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                   >> 0x16U)))) 
                             | (3U == (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                     >> 2U) & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                       >> 0x16U))) 
                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))) 
               & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                   >> 0x1fU) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))) 
           | ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
              & ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                     >> 0x1fU)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 
        = (((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))
            ? (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2)) 
                   & (1U >= (0x1fU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                      - (IData)(1U)))))) 
               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))
            : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 
        = (0x1fU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                      | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                          & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))
                          ? ((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                              ? ((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp))
                                  ? 0x18U : 0x19U) : 0x1aU)
                          : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2)
                                     ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                             - (IData)(1U)))) 
                    | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)) 
                 & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt) 
                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2 
        = ((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                         >> 0x18U))) ? 0U : ((0U != 
                                              (3U & 
                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 0x16U)))
                                              ? 1U : 
                                             ((0U != 
                                               (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x14U)))
                                               ? 2U
                                               : ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 0x12U)))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                        >> 0x10U)))
                                                    ? 4U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                         >> 0xeU)))
                                                     ? 5U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                          >> 0xcU)))
                                                      ? 6U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                           >> 0xaU)))
                                                       ? 7U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                            >> 8U)))
                                                        ? 8U
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                             >> 6U)))
                                                         ? 9U
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                              >> 4U)))
                                                          ? 0xaU
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                               >> 2U)))
                                                           ? 0xbU
                                                           : 0xcU))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                          << 5U)) >> (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant 
        = ((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3)) 
           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2 
        = (IData)(((0x1fffffff800000ULL == (0x1fffffff800000ULL 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig)) 
                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow 
        = (1U & ((4U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))
                  ? ((0x20U <= (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                     | ((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                         ? ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                             >> 0x1fU) ? ((0x1fU == 
                                           (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                          & (IData)(
                                                    ((0ULL 
                                                      != 
                                                      (0x3fffffff800000ULL 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig)) 
                                                     | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr))))
                             : ((0x1fU == (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                | ((0x1eU == (0xffU 
                                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2))))
                         : ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                             >> 0x1fU) | (((0x1fU == 
                                            (0xffU 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                           & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                      >> 0x35U))) 
                                          & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2)))))
                  : ((0xfU != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                     & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr)))));
    __Vtemp_81[0U] = 0U;
    __Vtemp_81[1U] = 0U;
    __Vtemp_81[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_82, __Vtemp_81, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_85[0U] = 0U;
    __Vtemp_85[1U] = 0U;
    __Vtemp_85[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_86, __Vtemp_85, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_89[0U] = 0U;
    __Vtemp_89[1U] = 0U;
    __Vtemp_89[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_90, __Vtemp_89, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_93[0U] = 0U;
    __Vtemp_93[1U] = 0U;
    __Vtemp_93[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_94, __Vtemp_93, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_97[0U] = 0U;
    __Vtemp_97[1U] = 0U;
    __Vtemp_97[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_98, __Vtemp_97, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_101[0U] = 0U;
    __Vtemp_101[1U] = 0U;
    __Vtemp_101[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_102, __Vtemp_101, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_105[0U] = 0U;
    __Vtemp_105[1U] = 0U;
    __Vtemp_105[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_106, __Vtemp_105, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_109[0U] = 0U;
    __Vtemp_109[1U] = 0U;
    __Vtemp_109[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_110, __Vtemp_109, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_113[0U] = 0U;
    __Vtemp_113[1U] = 0U;
    __Vtemp_113[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_114, __Vtemp_113, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_82[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_86[0U]) 
                                   | (1U & (__Vtemp_90[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_94[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_98[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_102[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_106[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_110[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_114[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                            >> 0x2fU))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
        = (0x3ffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags) 
                       | VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps)))
                       ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp)
                       : (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                     - ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)
                         ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                            << 1U) : (1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
        = (0x1ffffffffffffffULL & ((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))) 
                                   << ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                                       << 1U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != (((((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                        >> 0x16U))) 
                                                   << 6U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                          >> 0x12U))) 
                                                     << 5U)) 
                                                 | (((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                          >> 0xeU))) 
                                                     << 4U) 
                                                    | ((0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                            >> 0xaU))) 
                                                       << 3U))) 
                                                | (((0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                         >> 6U))) 
                                                    << 2U) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                            >> 2U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))))) 
                                               & ((((0x40U 
                                                     & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                       (7U 
                                                                        & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                           >> 2U))) 
                                                        << 5U)) 
                                                    | (0x20U 
                                                       & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                         (7U 
                                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                             >> 2U))) 
                                                          << 3U))) 
                                                   | ((0x10U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                             >> 2U))) 
                                                          << 1U)) 
                                                      | (8U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                               >> 2U))) 
                                                            >> 1U)))) 
                                                  | ((4U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        (7U 
                                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                            >> 2U))) 
                                                         >> 3U)) 
                                                     | ((2U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                               >> 2U))) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             (7U 
                                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                                >> 2U))) 
                                                              >> 7U)))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                    >> 0x16U))) << 6U) 
                     | ((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                        >> 0x12U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                             >> 0xeU))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                   >> 0xaU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                       >> 6U))) << 2U) 
                      | (((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                          >> 2U))) 
                          << 1U) | (0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_117[0U] = (IData)(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                ? 0x1fffffffffffffULL
                                : 0ULL));
    __Vtemp_117[1U] = ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                          ? (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                          : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                        << 0x15U) | (IData)((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                               ? 0x1fffffffffffffULL
                                               : 0ULL) 
                                             >> 0x20U)));
    __Vtemp_117[2U] = (0x3fffU & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                    ? (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                                  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_118, __Vtemp_117, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_118[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_118[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_118[2U]);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    __Vtemp_120[0U] = 0U;
    __Vtemp_120[1U] = 0U;
    __Vtemp_120[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_121, __Vtemp_120, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_124[0U] = 0U;
    __Vtemp_124[1U] = 0U;
    __Vtemp_124[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_125, __Vtemp_124, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_121[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_125[1U] 
                                                     >> 0x12U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
              & ((~ (0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                          >> 0x18U))))) 
                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
        = (0xfffffffU & (((0x7fffff8U & ((VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                           ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                           : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig) 
                                         << 3U)) + 
                          ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                            ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))) 
                         + (1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
        = (0x1ffffffffffffULL & ((0xffffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA)) 
                                     * (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB)))) 
                                 + (0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                        >> 3U)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152 
        = ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
            << 4U) | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                      & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))
            ? ((((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                 == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                 ? 0x80000000U : 0U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                         ? 0U : 0x7fffffffU))
            : ((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                  >> 0x1fU) ? (~ (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                          >> 0x17U)))
                  : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                             >> 0x17U))) + (1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr) 
                                                  ^ 
                                                  (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                   >> 0x1fU)))) 
               | ((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & (((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns) 
                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                          >> 0x1fU))) 
                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                       & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB))) 
                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
                      & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                         & (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))) 
                  | (((~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                          | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))) 
                      & ((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                               >> 0x18U)))) 
                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags))) 
                     & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                         >> 0x1fU) ^ VL_GTS_III(27, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))) 
                 | ((~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                        | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))) 
                    & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)) 
                       & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                           ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                           : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                              >> 0x1fU))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = (0x7ffffffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags)
                          ? (0x7fffffeU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                           << 1U)) : 
                         ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                           ? (0x7ffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                             >> 1U) 
                                            | (1U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                           : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
        = (0x3ffffffU & (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                           << 0xdU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                       >> 0x13U)) + 
                         (1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                        >> 0x30U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
            ? ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra)) 
               & (7U == (7U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
            : ((0U != (7U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                          << 1U)) | (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
                                      << 1U)) | (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC))) 
                                 >> 0x20U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
           >> 0xfU);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                          >> 0xbU)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    __Vtemp_128[0U] = 0U;
    __Vtemp_128[1U] = 0U;
    __Vtemp_128[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_129, __Vtemp_128, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_132[0U] = 0U;
    __Vtemp_132[1U] = 0U;
    __Vtemp_132[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_133, __Vtemp_132, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_136[0U] = 0U;
    __Vtemp_136[1U] = 0U;
    __Vtemp_136[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_137, __Vtemp_136, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_140[0U] = 0U;
    __Vtemp_140[1U] = 0U;
    __Vtemp_140[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_141, __Vtemp_140, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_144[0U] = 0U;
    __Vtemp_144[1U] = 0U;
    __Vtemp_144[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_145, __Vtemp_144, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_148[0U] = 0U;
    __Vtemp_148[1U] = 0U;
    __Vtemp_148[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_149, __Vtemp_148, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_152[0U] = 0U;
    __Vtemp_152[1U] = 0U;
    __Vtemp_152[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_153, __Vtemp_152, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_156[0U] = 0U;
    __Vtemp_156[1U] = 0U;
    __Vtemp_156[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_157, __Vtemp_156, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_160[0U] = 0U;
    __Vtemp_160[1U] = 0U;
    __Vtemp_160[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_161, __Vtemp_160, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_129[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_133[0U]) 
                                   | (1U & (__Vtemp_137[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_141[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_145[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_149[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_153[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_157[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_161[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                    >> 0x1aU)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)
                                  ? (~ (((QData)((IData)(
                                                         vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    __Vtemp_164[0U] = (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    __Vtemp_164[1U] = (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                               >> 0x20U));
    __Vtemp_164[2U] = 0U;
    VL_SHIFTL_WWI(81,81,5, __Vtemp_165, __Vtemp_164, 
                  (0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
        = __Vtemp_165[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
        = __Vtemp_165[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[2U] 
        = (0x1ffffU & __Vtemp_165[2U]);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                          >> 0x32U))) ? 0U : ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x30U))))
                                               ? 1U
                                               : ((0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x2eU))))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2cU))))
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x2aU))))
                                                     ? 4U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x28U))))
                                                      ? 5U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x26U))))
                                                       ? 6U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x24U))))
                                                        ? 7U
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x22U))))
                                                         ? 8U
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                      >> 0x20U))))
                                                          ? 9U
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))
                                                           ? 0xaU
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 0x1cU))))
                                                            ? 0xbU
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                         >> 0x1aU))))
                                                             ? 0xcU
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x18U))))
                                                              ? 0xdU
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 0x16U))))
                                                               ? 0xeU
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                            >> 0x14U))))
                                                                ? 0xfU
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x12U))))
                                                                 ? 0x10U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                              >> 0x10U))))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                               >> 0xeU))))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))
                                                                         ? 0x18U
                                                                         : 0x19U)))))))))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    __Vtemp_167[0U] = (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_167[1U] = (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                               >> 0x20U));
    __Vtemp_167[2U] = 0U;
    __Vtemp_167[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_168, __Vtemp_167, 
                  ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_168[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_168[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_168[2U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_168[3U]);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 6U)))) << 3U) 
           | (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 4U)))) << 2U) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    __Vtemp_170[0U] = 0U;
    __Vtemp_170[1U] = 0U;
    __Vtemp_170[2U] = 1U;
    if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum 
            = (0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
            = (0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                         - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)));
    } else {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum 
            = (0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd) 
                         - (IData)(0x18U)));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp 
            = (0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                         - ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                            << 1U)));
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_171, __Vtemp_170, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_174[0U] = 0U;
    __Vtemp_174[1U] = 0U;
    __Vtemp_174[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_175, __Vtemp_174, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_171[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_175[1U] 
                                                     >> 0x12U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)) 
              & (0U == (0xc0000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U]))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC) 
                       & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                   | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                       & ((2U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                          & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd))) 
                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
                  | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                     & ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                        & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))))) 
                 | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                    & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                       & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)
                           ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)
                           : ((0U == (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                            >> 0x12U)))
                               ? (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                               : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                  ^ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                     >> 2U))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0xaU)))) << 5U) 
           | (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 8U)))) << 4U) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                               >> 0x2fU)))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12), 4U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut) 
                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
           | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
              & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0xeU)))) << 7U) 
           | (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0xcU)))) << 6U) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22), 2U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0x12U)))) << 9U) 
           | (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x10U)))) << 8U) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5 
        = (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                  >> 0x16U)))) << 0xbU) 
           | (((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x14U)))) << 0xaU) 
              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant)
            ? ((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                               << 9U) | (0x1feU & (
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                   >> 0x17U)))) 
               | ((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                >> 0x15U))) | ((0U 
                                                != 
                                                ((((((0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                  >> 0x15U)))) 
                                                     << 6U) 
                                                    | ((0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0x11U)))) 
                                                       << 5U)) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                    >> 0xdU)))) 
                                                       << 4U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                      >> 9U)))) 
                                                         << 3U))) 
                                                  | (((0U 
                                                       != 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                   >> 5U)))) 
                                                      << 2U) 
                                                     | (((0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                      >> 1U)))) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))) 
                                                 & (((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        (7U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                             >> 2U)))) 
                                                         << 4U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                            << 2U)) 
                                                        | (8U 
                                                           & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))))))) 
                                                    | ((4U 
                                                        & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                          (7U 
                                                                           & (~ 
                                                                              ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                               >> 2U)))) 
                                                           >> 2U)) 
                                                       | ((2U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                              >> 4U)) 
                                                          | (1U 
                                                             & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                               (7U 
                                                                                & (~ 
                                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U)))) 
                                                                >> 6U))))))) 
                                               | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                   ? 
                                                  (0U 
                                                   != 
                                                   (0xffffffU 
                                                    & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (0x1ffffffU 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))
            : ((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                               << 7U) | (0x7eU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                  >> 0x19U)))) 
               | (IData)(((0U != (0x3800000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U])) 
                          | (0U != ((((((0U != (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x18U)))) 
                                        << 6U) | ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                       >> 0xaU))) 
                                                  << 5U)) 
                                      | (((0U != (3U 
                                                  & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                     >> 8U))) 
                                          << 4U) | 
                                         ((0U != (3U 
                                                  & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                     >> 6U))) 
                                          << 3U))) 
                                     | (((0U != (3U 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                                    >> 4U))) 
                                         << 2U) | (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                    & (((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                      >> 1U)))) 
                                                  << 4U)) 
                                        | ((0x10U & 
                                            (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                           | (8U & 
                                              VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U))))))) 
                                       | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                (0xfU 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                     >> 1U)))) 
                                                 >> 2U)) 
                                          | ((2U & 
                                              (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                   >> 1U)))) 
                                               >> 4U)) 
                                             | (1U 
                                                & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 6U)))))))))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x4000000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    __Vtemp_178[0U] = 0U;
    __Vtemp_178[1U] = 0U;
    __Vtemp_178[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_179, __Vtemp_178, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_182[0U] = 0U;
    __Vtemp_182[1U] = 0U;
    __Vtemp_182[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_183, __Vtemp_182, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_186[0U] = 0U;
    __Vtemp_186[1U] = 0U;
    __Vtemp_186[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_187, __Vtemp_186, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_190[0U] = 0U;
    __Vtemp_190[1U] = 0U;
    __Vtemp_190[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_191, __Vtemp_190, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_194[0U] = 0U;
    __Vtemp_194[1U] = 0U;
    __Vtemp_194[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_195, __Vtemp_194, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_198[0U] = 0U;
    __Vtemp_198[1U] = 0U;
    __Vtemp_198[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_199, __Vtemp_198, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_202[0U] = 0U;
    __Vtemp_202[1U] = 0U;
    __Vtemp_202[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_203, __Vtemp_202, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_206[0U] = 0U;
    __Vtemp_206[1U] = 0U;
    __Vtemp_206[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_207, __Vtemp_206, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_210[0U] = 0U;
    __Vtemp_210[1U] = 0U;
    __Vtemp_210[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_211, __Vtemp_210, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_179[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_183[0U]) 
                                   | (1U & (__Vtemp_187[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_191[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_195[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_199[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_203[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_207[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_211[1U] 
                                              >> 0x1fU)))))
                                 : 0x3fffffU) << 3U)))) 
           | (1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                    >> 0x1aU)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                          | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? ((((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                               & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)))
                               ? (~ (1U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                           << 1U)))
                               : 0x3ffffffU) & ((IData)(1U) 
                                                + (0x1ffffffU 
                                                   & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                       >> 2U) 
                                                      | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))
                          : ((0x1ffffffU & ((~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74) 
                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 2U))) 
                             | (((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                 ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                    >> 1U) : 0U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(4, 3U, (0xfU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                         >> 7U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut) 
           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)) 
           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
        = (0x7fffffU & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                          | (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4))
                          ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0x400000U : 0U) : (
                                                   (0x4000000U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                        | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                            ? 0x7fffffU : 0U)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut 
        = (((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                 ? 0x1bfU : 0x1ffU) & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                         ? 0x17fU : 0x1ffU) 
                                       & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                            ? 0x6bU
                                            : 0x1ffU) 
                                          & (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_ha36442bc_0_4)
                                               ? 0x3fU
                                               : 0x1ffU) 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))))) 
              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                  ? 0x6bU : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                     ? 0x17fU : 0U)) 
            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0x1c0U : 0U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6) {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((0x4000000U 
                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((0x4000000U 
                                                      & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((0x4000000U 
                                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                            ? 
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 2U)
                                                            : 
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 1U))) 
                                                       | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x4000004U 
                                                                      == 
                                                                      (0x4000004U 
                                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((0x4000000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                       ? 
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf)
                                                  ? 0U
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9) {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((0x4000000U 
                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((0x4000000U 
                                                      & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((0x4000000U 
                                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                            ? 
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 2U)
                                                            : 
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                            >> 1U))) 
                                                       | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x4000004U 
                                                                      == 
                                                                      (0x4000004U 
                                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((0x4000000U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                       ? 
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf)
                                                  ? 0U
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else if ((7U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))) {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                            << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                >> 0x2fU)))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                     >> 1U))) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                 >> 0x2fU)))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x19U)
                                                      : 
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                      >> 0x18U))) 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                    & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x2fU)))
                                                            ? (IData)(
                                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x17U))
                                                            : (IData)(
                                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                       >> 0x16U)))) 
                                                       | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                          & ((IData)(
                                                                     (0x800000800000ULL 
                                                                      == 
                                                                      (0x800000800000ULL 
                                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))) 
                                                             | (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                             & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                & (VL_GTES_III(2, 0U, 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                                                   >> 8U))) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                                  >> 0x2fU)))
                                                       ? 
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       >> 1U)
                                                       : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                      << 1U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                << 0x1fU) | ((0x7f800000U & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? 0U
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                   - (IData)(0x81U))) 
                                              | (((IData)(
                                                          (0x1c0U 
                                                           == 
                                                           (0x1c0U 
                                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf))
                                                  ? 0xffU
                                                  : 0U)) 
                                             << 0x17U)) 
                             | (0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? (0xffffffU 
                                                 & ((0xffffffU 
                                                     & ((0x7fc00000U 
                                                         & ((0U 
                                                             != 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 >> 6U))) 
                                                            << 0x16U)) 
                                                        | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                           >> 1U))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                              : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf)
                                                  ? 0U
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))));
    } else {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 
            = (((0xdU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                | ((0xeU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                   | ((0x12U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))
                ? (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                       | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                          & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                   << 4U) : (((0x16U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                              | (0x17U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))
                              ? ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                              : ((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                  ? (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152)
                                  : ((0x10U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                      ? (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_152)
                                      : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                                          ? ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                    << 2U))) 
                                             | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
                                                            ((0x2000000U 
                                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                              ? 
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 2U)
                                                              : 
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                              >> 1U))) 
                                                           & ((0x2000000U 
                                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                               ? 
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x19U)
                                                               : 
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x18U))) 
                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit) 
                                                             & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                                                 & ((0x2000000U 
                                                                     & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                                     ? 
                                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                                     >> 1U)
                                                                     : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                   & ((IData)(
                                                                              (0x2000002U 
                                                                               == 
                                                                               (0x2000002U 
                                                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                                                      | (0U 
                                                                         != 
                                                                         (3U 
                                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))))) 
                                                        & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                           & (VL_GTES_III(2, 0U, 
                                                                          (3U 
                                                                           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                                                              >> 8U))) 
                                                              & ((0x2000000U 
                                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                                  ? 
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                                  >> 1U)
                                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                      & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                         | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))
                                          : 0U)))));
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out 
            = ((0xaU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                ? ((0x80000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1) 
                   | (0x7fffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                : ((0xbU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                    ? (((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                            >> 0x1fU)) << 0x1fU) | 
                       (0x7fffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                    : ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                        ? (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign) 
                            << 0x1fU) | (0x7fffffffU 
                                         & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))
                        : ((0xdU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                            ? ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71)
                                ? 0x7fc00000U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)
                                                  ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1
                                                  : 
                                                 ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)
                                                   ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                   : 
                                                  ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78)
                                                    ? 0x80000000U
                                                    : 
                                                   (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq) 
                                                     | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt))
                                                     ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                     : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)))))
                            : ((0xeU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                ? ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_71)
                                    ? 0x7fc00000U : 
                                   ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN)
                                     ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1
                                     : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN)
                                         ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                         : ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_78)
                                             ? 0U : 
                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq) 
                                              | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt))
                                              ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                              : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)))))
                                : ((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                    ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out
                                    : ((0x10U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                        ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out
                                        : ((0x11U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                            ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                            : ((0x18U 
                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                    ? 
                                                   ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq))
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                     ? 
                                                    ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt))
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                      ? 
                                                     ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT____VdfgRegularize_h9a83d715_0_9) 
                                                      & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt)))
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                       ? 
                                                      ((((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN)) 
                                                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN)) 
                                                          << 9U) 
                                                         | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                                             << 8U) 
                                                            | (((~ 
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                  >> 0x1fU)) 
                                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
                                                               << 7U))) 
                                                        | (((VL_LTES_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                                                             & (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129)) 
                                                            << 6U) 
                                                           | (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_129) 
                                                               & VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                                              << 5U))) 
                                                       | (((((~ 
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                               >> 0x1fU)) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                   >> 0x1cU) 
                                                                  & ((0U 
                                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                                                     << 3U))) 
                                                              | (((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142) 
                                                                  & VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))) 
                                                                 << 2U))) 
                                                          | (((VL_LTES_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)) 
                                                               & (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_142)) 
                                                              << 1U) 
                                                             | ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                                 >> 0x1fU) 
                                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)))))
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                        ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))
                                                         ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4
                                                         : 
                                                        ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                                                          ? 
                                                         ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
                                                           << 0x1fU) 
                                                          | ((0x7f800000U 
                                                              & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                    - (IData)(0x81U))) 
                                                                  | (((IData)(
                                                                              (0x1c0U 
                                                                               == 
                                                                               (0x1c0U 
                                                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf))
                                                                      ? 0xffU
                                                                      : 0U)) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                                    ? 
                                                                   (0xffffffU 
                                                                    & ((0xffffffU 
                                                                        & ((0x7fc00000U 
                                                                            & ((0U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                                >> 6U))) 
                                                                               << 0x16U)) 
                                                                           | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                                              >> 1U))) 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))
                                                                    : 
                                                                   ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf)
                                                                     ? 0U
                                                                     : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))
                                                          : 0U))))))))))))))));
    }
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en) 
            & ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f7_reg)) 
               & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready)))
            ? Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3
            : (((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready))
                ? Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3
                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst)
                    ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out
                    : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out)
                        ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out
                        : (IData)((0x7fffffffffffffffULL 
                                   & ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                       ? (QData)((IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                          & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                       : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                           ? (QData)((IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                              | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                           : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                               ? (QData)((IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                  + vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                               : ((3U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                      - vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                    ? (QData)((IData)(
                                                                      VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                     ? (QData)((IData)(
                                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                        < vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                      ? 
                                                     ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1)) 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                      : (QData)((IData)(
                                                                        ((7U 
                                                                          == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                          ? 
                                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                          : 
                                                                         ((8U 
                                                                           == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2))
                                                                           : 
                                                                          ((9U 
                                                                            == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                                            ? 
                                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                            ^ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)
                                                                            : 0U))))))))))))))))));
    vlSelfRef.Top__DOT__core__DOT___npc_T_2 = ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush)
                                                ? (
                                                   (1U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                                     ? 
                                                    ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                                                       & ((0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0xfU)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                              >> 7U))))
                                                       ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                                       : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1) 
                                                     + vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out)
                                                     : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1))
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                                    ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg)));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data 
        = ((0x4000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)
            ? (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)) : ((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                      ? vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data
                                      : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                          ? vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data
                                          : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                              ? vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data
                                              : ((3U 
                                                  == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                  ? vlSelfRef.io_pin
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                   ? 
                                                  ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o
                                                    : vlSelfRef.Top__DOT__core__DOT__ex_reg_result)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                                    : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0)))))));
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
        = ((3U == (3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                         >> 0xcU))) ? ((~ vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                                       & vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)
            : ((2U == (3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                             >> 0xcU))) ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                           | vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)
                : ((1U == (3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                 >> 0xcU))) ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data
                    : 0U)));
    if ((0x305U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                    >> 0x14U))) {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
            = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
            = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
            = (7U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
    } else {
        vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG;
        if ((0x341U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                        >> 0x14U))) {
            vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
            vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
            vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                = (7U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
        } else {
            vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
            if ((0x304U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
                vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                    = (7U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
            } else {
                vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
                vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                    = (7U & ((3U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U)) ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                                   >> 5U)
                              : ((1U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
                                  : ((2U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U))
                                      ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                      : (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)))));
            }
        }
    }
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vm_traceActivitySetAll\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_pin = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16207443735074991514ull);
    vlSelf->io_rvfi_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15971361884192775342ull);
    vlSelf->io_rvfi_insn_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15393335235419124997ull);
    vlSelf->io_rvfi_mode_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9565124315714342597ull);
    vlSelf->io_rvfi_rs1_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 395553558653311007ull);
    vlSelf->io_rvfi_rs2_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3301718950503354687ull);
    vlSelf->io_rvfi_rs1_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7124432557259551040ull);
    vlSelf->io_rvfi_rs2_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3884955738329156995ull);
    vlSelf->io_rvfi_rd_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2796284851443349471ull);
    vlSelf->io_rvfi_rd_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3861872693894957672ull);
    vlSelf->io_rvfi_pc_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2866446156202246209ull);
    vlSelf->io_rvfi_pc_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9972575577211197152ull);
    vlSelf->io_rvfi_mem_addr_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15080012428953147170ull);
    vlSelf->io_rvfi_mem_wmask_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17363735412187247935ull);
    vlSelf->io_rvfi_mem_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 377794054647356148ull);
    vlSelf->io_rvfi_mem_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10227977567897458104ull);
    vlSelf->io_baby_kyber_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554692628294031887ull);
    vlSelf->io_baby_kyber_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16443826310821125462ull);
    vlSelf->io_baby_kyber_req_bits_addrRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7707315385987392801ull);
    vlSelf->io_baby_kyber_req_bits_dataRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14559721283365480765ull);
    vlSelf->io_baby_kyber_req_bits_activeByteLane = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4838941212394560061ull);
    vlSelf->io_baby_kyber_req_bits_isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8939804136838127761ull);
    vlSelf->io_baby_kyber_rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15708968191612203602ull);
    vlSelf->io_baby_kyber_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17331470449003939925ull);
    vlSelf->io_baby_kyber_rsp_bits_dataResponse = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8213535110714158873ull);
    vlSelf->io_baby_kyber_rsp_bits_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5156245338624332306ull);
    vlSelf->io_baby_kyber_cio_babykyber_intr_key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15037156062303913174ull);
    vlSelf->io_baby_kyber_cio_babykyber_intr_encrypt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7360931172935619668ull);
    vlSelf->io_baby_kyber_cio_babykyber_intr_decrypt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17664562341577363850ull);
    vlSelf->io_key_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18057400664158703202ull);
    vlSelf->io_encryption_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1036701551864288412ull);
    vlSelf->io_decryption_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012556649567943475ull);
    vlSelf->io_uart_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18298714730642951940ull);
    vlSelf->io_uart_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370391757107605819ull);
    vlSelf->io_uart_req_bits_addrRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7855067371116837704ull);
    vlSelf->io_uart_req_bits_dataRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8827755540142380011ull);
    vlSelf->io_uart_req_bits_activeByteLane = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7949528756472643612ull);
    vlSelf->io_uart_req_bits_isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13960340411547251145ull);
    vlSelf->io_uart_rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9104980006247034698ull);
    vlSelf->io_uart_rsp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9203959511997391102ull);
    vlSelf->io_uart_rsp_bits_dataResponse = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12848649244523846886ull);
    vlSelf->io_uart_rsp_bits_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18403914886653201943ull);
    vlSelf->io_uart_cio_uart_rx_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12129839764705886793ull);
    vlSelf->io_uart_cio_uart_tx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5553555151199953701ull);
    vlSelf->io_uart_cio_uart_intr_tx_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2283119966064486511ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15820581905724612248ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch_io_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16208470121026490988ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11638217934071863274ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_ex_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3578129058684220000ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17318241992195928751ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5762238502129067020ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251812962637945316ull);
    vlSelf->Top__DOT__core__DOT__MEM_io_readData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15048728053221919951ull);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13298916861006795997ull);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18323672988693214562ull);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9892619048523715123ull);
    vlSelf->Top__DOT__core__DOT__pc_io_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 793966942917603234ull);
    vlSelf->Top__DOT__core__DOT__if_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9759603301135075314ull);
    vlSelf->Top__DOT__core__DOT__if_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15983592653951725223ull);
    vlSelf->Top__DOT__core__DOT__id_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7396726890130375470ull);
    vlSelf->Top__DOT__core__DOT__id_reg_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11587918954104721403ull);
    vlSelf->Top__DOT__core__DOT__id_reg_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7626085777440089645ull);
    vlSelf->Top__DOT__core__DOT__id_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5994929904077841860ull);
    vlSelf->Top__DOT__core__DOT__id_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4658752627890937609ull);
    vlSelf->Top__DOT__core__DOT__id_reg_f7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 747705321075635045ull);
    vlSelf->Top__DOT__core__DOT__id_reg_f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1981345340138783108ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17937658120476614128ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983506636364531906ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11463444902567042497ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4456854793406019582ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3917720662921216235ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16234379186671907071ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5650189212383544448ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7796494352677247334ull);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15637195533692755304ull);
    vlSelf->Top__DOT__core__DOT__id_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9856219648118546545ull);
    vlSelf->Top__DOT__core__DOT__id_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11325184122357116159ull);
    vlSelf->Top__DOT__core__DOT__id_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803225253478884488ull);
    vlSelf->Top__DOT__core__DOT__id_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13750054748215811040ull);
    vlSelf->Top__DOT__core__DOT__id_reg_f_read_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13007513657610959846ull);
    vlSelf->Top__DOT__core__DOT__id_reg_rd3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13307069489072670692ull);
    vlSelf->Top__DOT__core__DOT__id_reg_fcsr_o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7992582520776915604ull);
    vlSelf->Top__DOT__core__DOT__id_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1125306841638575781ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5155500146570649492ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6018010729483972406ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9615142733167409925ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5986853830553868407ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11100986064842734483ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924633340119869340ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17754398686846422790ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13810390343015031727ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14877317731552769637ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17258149501349052821ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5680951166608325188ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8493161327854823050ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 254062048187381507ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072408107396340594ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_except_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6806017385284115164ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_except_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2728636818889901392ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_except_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7204456692532129323ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_except_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6955125682223777341ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_f_except_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2701478781422428051ull);
    vlSelf->Top__DOT__core__DOT__ex_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11793157055368837453ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10945123101509796193ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1851887037556940470ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5556781823665309571ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8089868426764159742ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13236094636745195199ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11315839148635129734ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13589183075255376695ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1841409098155287146ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6321458370522729317ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8799839393077207805ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5996990603432594023ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9958660981729926080ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_except_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15662987201771064563ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_except_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239849638649211683ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_except_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6191296360111376411ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_except_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12296755374368864318ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_f_except_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11285750087348876760ull);
    vlSelf->Top__DOT__core__DOT__mem_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808181943679370922ull);
    vlSelf->Top__DOT__core__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3511344409467812970ull);
    vlSelf->Top__DOT__core__DOT___npc_T_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11533847737976129557ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint4_REG = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 190679588088991931ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_0_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16722375890011398141ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_0_REG_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 394457867222442540ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_0_REG_2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1226188887227092864ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_1_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17791282156215233972ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_1_REG_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10386281828524263209ull);
    vlSelf->Top__DOT__core__DOT__io_rvfi_uint5_1_REG_2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3168443572478338024ull);
    vlSelf->Top__DOT__core__DOT__REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13973290798428657225ull);
    vlSelf->Top__DOT__core__DOT__REG_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8383351227687579584ull);
    vlSelf->Top__DOT__core__DOT__REG_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15700774572726652100ull);
    vlSelf->Top__DOT__core__DOT__REG_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9614829988747812992ull);
    vlSelf->Top__DOT__core__DOT__REG_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8376013714424222644ull);
    vlSelf->Top__DOT__core__DOT__REG_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4960678024728943299ull);
    vlSelf->Top__DOT__core__DOT__REG_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17321477514459782777ull);
    vlSelf->Top__DOT__core__DOT__REG_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 407003596135734057ull);
    vlSelf->Top__DOT__core__DOT__REG_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4953340511465574071ull);
    vlSelf->Top__DOT__core__DOT__REG_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15303602854582729695ull);
    vlSelf->Top__DOT__core__DOT__REG_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2923242443969269583ull);
    vlSelf->Top__DOT__core__DOT__REG_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 237106285166556075ull);
    vlSelf->Top__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617217608296116592ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 317673066698472441ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3787814750713887495ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12282547082948787336ull);
    vlSelf->Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 16469163234112824569ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9576869060801493894ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5985196797493226647ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18223893843154320828ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2005652290392933709ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18215003469959955771ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9276380769924771705ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7329508823906620658ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6782985700379807684ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18256255881293626434ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12835325102279916838ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10625427090929506145ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7004138588189738299ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4597035651843950930ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7682186190612014933ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2998725154671484607ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8102397294568410995ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__readData1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2428133334259354033ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__readData2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1629901157150393344ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15251938385191201937ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7596895050196938405ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1137870243608377631ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14700260718824635900ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16332809235360607991ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18031930673844314030ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6191895310368778887ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1345175989100413378ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13156757272759363012ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10325828459680951697ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15314981904350623908ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17444332114892679734ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13198929836364859338ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5901368220636286015ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231232703076066366ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11140378032756676126ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11923480474520411148ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10172101898604183434ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3090478300546492262ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18090079317306865819ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2624827937112555661ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955496714076792275ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5623685851762975210ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13033195479050137388ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9227089666919139156ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9681411094980513579ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8332911377962936003ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776695588403336345ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14156311136412489983ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5150930288425587447ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184016058522852478ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8540422219614118517ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5543351854546709577ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064166923738565018ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15799555787452166067ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1265345715956332935ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1094581765147320321ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5869709275735553111ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8285695785453984831ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9104142779443755409ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18423052151873782354ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1557099059077124314ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18262609765555214915ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17052743388092657746ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9784692434503190298ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1739523433509301315ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11862903832181710077ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13233212595962775277ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 511875266724377711ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1882184030505597567ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15140218310556182777ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12132791525296270644ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15385962923297257715ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16529164864965964010ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3680149164146137822ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1957102510580349405ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13486475684096489851ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2326465005345909589ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14472098383124934235ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15825782541925115497ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8198597731899521725ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10220482089012163019ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14605508218182901769ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7012705691636978011ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6572886073009037473ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1344439924003592274ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16839015285658834022ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9246212759112901944ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7530477804468280683ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3180714070906865108ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18174330550199543531ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11923864971955083227ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2219700509730451105ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5312775522737043367ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6059729152054466138ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15479535666015073715ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13776720672714960485ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2004042344310611118ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15327984174357658022ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2657504872338097059ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12417457768849633092ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17859622441383501519ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11887419260407578728ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5190050005237914304ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6519690371339686468ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15250291194120683682ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10147958950702718877ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11417747050234105231ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11458413091276974596ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13931795318679271471ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3071910206450115687ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17734817912183099621ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11614863578399405777ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3469173913155813171ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1385615665496628156ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15398699946375938971ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12420591991659860764ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14893974219062177649ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8167083413509938570ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13105468933653832039ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16384579574316781311ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12600743206340218445ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2347794565879690356ull);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16360878846759134857ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14558698917237770532ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13643455208777645353ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2865575165771393427ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10593869910822386778ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8403667051103067208ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11693224316643247933ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11430901101969929777ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12035464292416094077ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu_io_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 484541345959794762ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17497405495168956798ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4561739062036546456ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12383750051660631603ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3495745508305703726ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8407721909570025718ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17692233427808292103ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__src_a_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6162961534383654835ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__src_b_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1810642629152711061ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__op_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9967258715222386428ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__div_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14637224214579447857ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__f7_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12841552057517201411ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__counter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5463151787660893501ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___T_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263246385280460929ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11742653643864457566ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___counter_T_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2844593267700753366ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17425761353729833127ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14904213885774311560ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12563365278407606042ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__io_is_f_o_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12711300235969520178ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6391901874549294118ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7624938594401319079ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12782812122721502958ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4137531928145855309ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17934040914902529723ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13407194948907526541ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17564477777924682551ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7880821788610456398ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10544053816987121287ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5, __VscopeHash, 4389074772623139035ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17216526791740083486ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28, __VscopeHash, 15083570671905420549ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2577172859378592712ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16308003325678732550ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13717438004732048680ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8457972368569856115ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217155322054107673ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022283093247873690ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9852410521607945009ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 75968674262328647ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7774557618854361547ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1905418138601278852ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5157690005663104071ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8966767257707652659ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6544770727155421822ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1333602214069111797ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3066499268360518896ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13040817503489098298ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11416560452574575656ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4428660357362655563ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9427229630454226067ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15702496659601913089ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16925839315876489586ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17110967526156624833ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7449925078738843132ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14824695179123515624ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7339345123172538632ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15405006568143811572ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14090634716810807541ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2499802793113780823ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9399918102466090617ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5335957539365276584ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10295798940522684263ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16366229917524767598ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3708699575989233323ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4516658118544317765ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13570404319624133855ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12147126454372126697ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5175088349826822368ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9234790601582139934ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11325428298609866745ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5877955160785649923ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14159611819585870754ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6160401084510498175ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16277250913630010958ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6260413119270315294ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10924957861766882360ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11615208169351840282ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17991868547147914560ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4116967023600725063ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16301384948179861226ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15635802592331242618ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16246583767859219909ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7393890685047258048ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10167540948670790497ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2648609629501398375ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12859272203586877923ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7859471312760147753ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10085307402306743105ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827660257184296579ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6633597185070635663ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16487326930753219622ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, __VscopeHash, 4762867598728608830ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643633171623208691ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1833885467115460551ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17351866200148360430ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10397249098967944580ull);
    VL_SCOPED_RAND_RESET_W(75, vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum, __VscopeHash, 3094708682285788934ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7937192350782736512ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T, __VscopeHash, 9024637850945499542ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 1912041379512239161ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9650610767720924437ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2473253392947913810ull);
    VL_SCOPED_RAND_RESET_W(114, vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T, __VscopeHash, 14856399488562427296ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17102232889602659500ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672464816850631231ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5032119206560255845ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13995001559198054529ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 848979201410963949ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11197221913865633314ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11370999598164391314ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 979810366266647574ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8530504714546190465ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8814965962886440450ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12854007196330815355ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2132867249597166095ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17230080498073194862ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 13280607475000886719ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7613215956902695259ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14492204660302263274ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 13642777965996683386ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8614240945829993008ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6885951662816971062ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9417870325922521523ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 11131520370875492201ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18022664933293090457ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1828252225820121954ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11820502805654071191ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5810959362270537544ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13153415008076606593ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5056059105309426358ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17706121394170843068ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9077475265299378168ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16381405945341711401ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2167154816898467358ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12743646443362235324ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13613688374552252336ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11056266848943411369ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387436383788043399ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 757175046849222261ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 660870790162714888ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9209265798999480401ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12333029886926831969ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13174550717982496574ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 14344876093844294474ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 6917003204436967069ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18440600797032942413ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 10656421321929784210ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 60431274067041118ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4128162428729031640ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 11175838837436115224ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12984651573439935398ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 204509391940609306ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874714138618018655ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17914077209585922000ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3570377154034682210ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5123059387072210019ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15191280292669515507ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 18194875084179084543ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14250259863175889949ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4677059766658805095ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16261347338739273456ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 6241259460454940091ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16973641041620723238ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13944845413658308423ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626205316438587489ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832489974693067168ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3783238802030941412ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11157771645562005757ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12729153911975080510ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17445536917766442479ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15562899583550817825ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254221212845653667ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1067902983281445515ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3217616344531883451ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701080888747344118ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16509137604656609830ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1843382074273830571ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2493532768671464934ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606936475591701216ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1850965107942246331ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 564898342802338810ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14078838903487115004ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 4590822576369873464ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17683050969420274372ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11557962579819554661ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8349604472091594139ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17965723463989216449ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 612166623246790446ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12534289935129398846ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3725309727039494298ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6193686340769600276ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13765116633063958483ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14909485351765495423ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8899264764969621608ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2336887802015399118ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16118690578751560039ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18096695736473730162ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6213364504803580247ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11045181495857614018ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17777218581203694790ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7582192745064460677ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12489180872562310488ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8448779557167865180ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2394631376015323838ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699999845691962619ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17563203909490492161ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18220047930261149262ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8058888268287485879ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12890139028839972701ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8160714129880993549ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11454843281552931756ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16613045074311648096ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 11076454805814979914ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16991968118316147308ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6005300787198849657ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012991665069194895ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10924429217289795005ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15833594639281526748ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 833090763742517055ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4270360967625550083ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7755584517674536968ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13234781394056923363ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17590498395581435652ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10411200133875219976ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8616767543754283427ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17323229064546232573ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10442692675658998040ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14443821681062501681ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5074428333182319134ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7397096987164189505ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6921369706224885103ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 2206712179550056852ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 12238887547841242547ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 7736206951119534455ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2883055075137866469ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1736531603014654230ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515330456170356280ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 3218049593936199236ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530575547335404663ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7258926030512278913ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 15578190319369983903ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5556428901582841872ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9734571793325086406ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4663129970709287498ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4116918851086295194ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 16817757665563498481ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6323604521671256385ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2463878170840976942ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15113653298035036505ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10603251711627705302ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7899205279951083196ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12676610796797233503ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13863449680550543646ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6869179146513036527ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17347153131617540823ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15314343846374196018ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12527174121653787971ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15780577488582355947ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13346091045396547566ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2548021227639027551ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5725347386670152566ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14962231719037305189ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1906648266083979669ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5353942697685336976ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 17850888210800009345ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11396360571885553186ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10161582699401065418ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12448425222268919571ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1309806221077788725ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1611347847708577101ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16484159661403859370ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 366930714379077911ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17588991555016478884ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2893448777744767885ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16443682063607178935ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12167729842643828829ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4082797899967091761ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12678237947870436381ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5454497847478990769ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10404660785924297742ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 240397156190525189ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7679278324878200383ull);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2261851127087559013ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16272705180690858112ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 142423151985622321ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13257058057198511917ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16429524085801093907ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13759618690187193549ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__uartAddrRange = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16760218982162088602ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860047324931808008ull);
    vlSelf->Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12583040978743079931ull);
    vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8015661129617657012ull);
    vlSelf->Top__DOT__dmem__DOT__sram_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 644236648882133371ull);
    vlSelf->Top__DOT__dmem__DOT__sram_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12616356228297539382ull);
    vlSelf->Top__DOT__dmem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9865916382177767034ull);
    vlSelf->Top__DOT__dmem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7863312864896820532ull);
    vlSelf->Top__DOT__dmem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9845392696219380715ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__csb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18308505061023612413ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__addr_o = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17646777704654198234ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6460780599701214627ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__wmask_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12878812600988613875ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1434201347279740470ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6468000845723812874ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5762233911647895186ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10282405731412773869ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16199319456215681763ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4064625883463221759ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4704710070574855938ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 552636500775481560ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17997920643606032887ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7090091760747118090ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 7353988584695637492ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17690292423237217478ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->Top__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7981404255414041519ull);
    }
    vlSelf->Top__DOT__imem__DOT__sram_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12600809837148253358ull);
    vlSelf->Top__DOT__imem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5959124850913550976ull);
    vlSelf->Top__DOT__imem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459613037795642303ull);
    vlSelf->Top__DOT__imem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9471145473431726134ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__csb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11901823220220209153ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11004009503919499020ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18414097266495857228ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3559931660680278066ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5646443853582277395ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12728801459018684521ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16101461421812609526ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11246882146717060725ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8704768212591670720ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11501922195134176525ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8474510581994655424ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 6291061957490493106ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7121356823774790603ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9601966165170632042ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5903150407345243601ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16015974356364628489ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12579920107914696778ull);
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
