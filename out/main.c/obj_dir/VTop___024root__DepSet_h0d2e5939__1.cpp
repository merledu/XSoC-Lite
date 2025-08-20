// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___nba_comb__TOP__1(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_comb__TOP__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3;
    Top__DOT__core__DOT__Execute__DOT___io_ALUresult_T_3 = 0;
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
    CData/*4:0*/ Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3;
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT___shiftedSig_T_3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_126;
    VlWide<3>/*95:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_130;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_142;
    VlWide<3>/*95:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_146;
    VlWide<3>/*95:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_150;
    VlWide<3>/*95:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_162;
    VlWide<3>/*95:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_166;
    VlWide<3>/*95:0*/ __Vtemp_167;
    // Body
    vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
        = ((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__imem__DOT__sram_rdata_o
            : 0U);
    vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o
            : 0U);
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
    vlSelfRef.io_pin = ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                         ? vlSelfRef.Top__DOT__core__DOT__MEM_io_readData
                         : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                             ? ((IData)(4U) + vlSelfRef.Top__DOT__core__DOT__mem_reg_pc)
                             : vlSelfRef.Top__DOT__core__DOT__mem_reg_result));
    vlSelfRef.io_rvfi_rd_wdata_0 = ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)
                                     ? vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data
                                     : vlSelfRef.io_pin);
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
    vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1 
        = (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7) 
            & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0)) 
               | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0) 
                  & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1))))
            ? (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0)) 
                & (0U == (0xf8000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))
                ? 0U : vlSelfRef.io_pin) : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0);
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
    __Vtemp_2[0U] = (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                         >> 0x1fU)) ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                      : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                  & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter) 
                                                     - (IData)(1U))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5[2U] 
        = (0x7fffffffU & __Vtemp_3[2U]);
    VL_EXTENDS_WI(65,32, __Vtemp_6, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_9, (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)));
    __Vtemp_10[0U] = __Vtemp_9[0U];
    __Vtemp_10[1U] = __Vtemp_9[1U];
    __Vtemp_10[2U] = (1U & __Vtemp_9[2U]);
    VL_MULS_WWW(65, __Vtemp_11, __Vtemp_7, __Vtemp_10);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
        = (((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
            | (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)))
            ? ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)) 
               * (QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)))
            : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                ? (((QData)((IData)(__Vtemp_11[1U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_11[0U])))
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
    __Vtemp_13[0U] = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_13[1U] = 0U;
    __Vtemp_13[2U] = 0U;
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2 
        = VL_GTE_W(3, __Vtemp_13, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
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
    __Vtemp_17[0U] = vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend;
    __Vtemp_17[1U] = 0U;
    __Vtemp_17[2U] = 0U;
    VL_SUB_W(3, __Vtemp_18, __Vtemp_17, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5);
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = 0ULL;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[0U] = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] = 0U;
        vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] = 0U;
    } else if (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) {
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
                    = __Vtemp_18[0U];
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[1U] 
                    = __Vtemp_18[1U];
                vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28[2U] 
                    = (0x7fffffffU & __Vtemp_18[2U]);
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
    __Vtemp_29[0U] = 0U;
    __Vtemp_29[1U] = 0U;
    __Vtemp_29[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_30, __Vtemp_29, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_33[0U] = 0U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_34, __Vtemp_33, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_30[1U] >> 2U)) | (0xffU 
                                                 & (__Vtemp_34[1U] 
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
    __Vtemp_37[0U] = 0U;
    __Vtemp_37[1U] = 0U;
    __Vtemp_37[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_38, __Vtemp_37, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_41[0U] = 0U;
    __Vtemp_41[1U] = 0U;
    __Vtemp_41[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_42, __Vtemp_41, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_45[0U] = 0U;
    __Vtemp_45[1U] = 0U;
    __Vtemp_45[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_46, __Vtemp_45, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_49[0U] = 0U;
    __Vtemp_49[1U] = 0U;
    __Vtemp_49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_50, __Vtemp_49, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_53[0U] = 0U;
    __Vtemp_53[1U] = 0U;
    __Vtemp_53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_54, __Vtemp_53, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_57[0U] = 0U;
    __Vtemp_57[1U] = 0U;
    __Vtemp_57[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_58, __Vtemp_57, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_61[0U] = 0U;
    __Vtemp_61[1U] = 0U;
    __Vtemp_61[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_62, __Vtemp_61, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_65[0U] = 0U;
    __Vtemp_65[1U] = 0U;
    __Vtemp_65[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_66, __Vtemp_65, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_69[0U] = 0U;
    __Vtemp_69[1U] = 0U;
    __Vtemp_69[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_70, __Vtemp_69, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_38[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_42[0U]) 
                                   | (1U & (__Vtemp_46[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_50[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_54[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_58[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_62[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_66[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_70[1U] 
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
    __Vtemp_73[0U] = (IData)(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                               ? 0x1fffffffffffffULL
                               : 0ULL));
    __Vtemp_73[1U] = ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                         ? (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                         : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                       << 0x15U) | (IData)((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                              ? 0x1fffffffffffffULL
                                              : 0ULL) 
                                            >> 0x20U)));
    __Vtemp_73[2U] = (0x3fffU & (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                   ? (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig)
                                   : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig) 
                                 >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_74, __Vtemp_73, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_74[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_74[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_74[2U]);
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra 
        = (0U != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                  & (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                          << 1U)))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                    << 1U)))) & (3U 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                    << 2U)));
    __Vtemp_76[0U] = 0U;
    __Vtemp_76[1U] = 0U;
    __Vtemp_76[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_77, __Vtemp_76, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_80[0U] = 0U;
    __Vtemp_80[1U] = 0U;
    __Vtemp_80[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_81, __Vtemp_80, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_77[1U] >> 2U)) | (0xffU 
                                                 & (__Vtemp_81[1U] 
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
    __Vtemp_84[0U] = 0U;
    __Vtemp_84[1U] = 0U;
    __Vtemp_84[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_85, __Vtemp_84, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_88[0U] = 0U;
    __Vtemp_88[1U] = 0U;
    __Vtemp_88[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_89, __Vtemp_88, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_92[0U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_93, __Vtemp_92, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_96[0U] = 0U;
    __Vtemp_96[1U] = 0U;
    __Vtemp_96[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_97, __Vtemp_96, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_100[0U] = 0U;
    __Vtemp_100[1U] = 0U;
    __Vtemp_100[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_101, __Vtemp_100, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_104[0U] = 0U;
    __Vtemp_104[1U] = 0U;
    __Vtemp_104[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_105, __Vtemp_104, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_108[0U] = 0U;
    __Vtemp_108[1U] = 0U;
    __Vtemp_108[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_109, __Vtemp_108, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_112[0U] = 0U;
    __Vtemp_112[1U] = 0U;
    __Vtemp_112[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_113, __Vtemp_112, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_116[0U] = 0U;
    __Vtemp_116[1U] = 0U;
    __Vtemp_116[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_117, __Vtemp_116, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_85[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_89[0U]) 
                                   | (1U & (__Vtemp_93[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_97[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_101[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_105[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_109[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_113[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_117[1U] 
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
    __Vtemp_120[0U] = (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    __Vtemp_120[1U] = (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                               >> 0x20U));
    __Vtemp_120[2U] = 0U;
    VL_SHIFTL_WWI(81,81,5, __Vtemp_121, __Vtemp_120, 
                  (0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
        = __Vtemp_121[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
        = __Vtemp_121[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[2U] 
        = (0x1ffffU & __Vtemp_121[2U]);
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
    __Vtemp_123[0U] = (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_123[1U] = (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                               >> 0x20U));
    __Vtemp_123[2U] = 0U;
    __Vtemp_123[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_124, __Vtemp_123, 
                  ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_124[0U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_124[1U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_124[2U];
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_124[3U]);
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
    __Vtemp_126[0U] = 0U;
    __Vtemp_126[1U] = 0U;
    __Vtemp_126[2U] = 1U;
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
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_127, __Vtemp_126, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_130[0U] = 0U;
    __Vtemp_130[1U] = 0U;
    __Vtemp_130[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_131, __Vtemp_130, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xff00U & (__Vtemp_127[1U] >> 2U)) | (0xffU 
                                                  & (__Vtemp_131[1U] 
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
    __Vtemp_134[0U] = 0U;
    __Vtemp_134[1U] = 0U;
    __Vtemp_134[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_135, __Vtemp_134, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_138[0U] = 0U;
    __Vtemp_138[1U] = 0U;
    __Vtemp_138[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_139, __Vtemp_138, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_142[0U] = 0U;
    __Vtemp_142[1U] = 0U;
    __Vtemp_142[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_143, __Vtemp_142, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_146[0U] = 0U;
    __Vtemp_146[1U] = 0U;
    __Vtemp_146[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_147, __Vtemp_146, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_150[0U] = 0U;
    __Vtemp_150[1U] = 0U;
    __Vtemp_150[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_151, __Vtemp_150, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_154[0U] = 0U;
    __Vtemp_154[1U] = 0U;
    __Vtemp_154[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_155, __Vtemp_154, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_158[0U] = 0U;
    __Vtemp_158[1U] = 0U;
    __Vtemp_158[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_159, __Vtemp_158, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_162[0U] = 0U;
    __Vtemp_162[1U] = 0U;
    __Vtemp_162[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_163, __Vtemp_162, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_166[0U] = 0U;
    __Vtemp_166[1U] = 0U;
    __Vtemp_166[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_167, __Vtemp_166, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
        = (((0x100U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
             ? 0U : ((0x80U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                      ? ((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                          ? 0U : ((4U & (__Vtemp_135[0U] 
                                         << 2U)) | 
                                  ((2U & __Vtemp_139[0U]) 
                                   | (1U & (__Vtemp_143[0U] 
                                            >> 2U)))))
                      : (7U | (((0x40U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))
                                 ? (((0x155540U & ((IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                     | (0x2aaa80U & 
                                        (VL_SHIFTL_III(16,16,32, (IData)(Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32), 1U) 
                                         << 6U))) | 
                                    (((0x20U & (__Vtemp_147[1U] 
                                                >> 0x15U)) 
                                      | ((0x10U & (
                                                   __Vtemp_151[1U] 
                                                   >> 0x17U)) 
                                         | (8U & (__Vtemp_155[1U] 
                                                  >> 0x19U)))) 
                                     | ((4U & (__Vtemp_159[1U] 
                                               >> 0x1bU)) 
                                        | ((2U & (__Vtemp_163[1U] 
                                                  >> 0x1dU)) 
                                           | (__Vtemp_167[1U] 
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

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__5(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead) 
           | (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_5 = 
        ((1U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         & (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    vlSelfRef.Top__DOT__dmem__DOT__sram_we_i = ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite)) 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);
void VTop___024root___eval_act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTop___024root___eval_nba(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/mhussain/Desktop/nucleusrv/out/main.c/Top.v", 7500, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/mhussain/Desktop/nucleusrv/out/main.c/Top.v", 7500, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/mhussain/Desktop/nucleusrv/out/main.c/Top.v", 7500, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
