// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,((0xfffffffU & VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__core__DOT__ex_reg_result, 2U))),32);
        bufp->chgIData(oldp+1,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        bufp->chgCData(oldp+2,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        bufp->chgBit(oldp+3,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgBit(oldp+4,((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))));
        bufp->chgBit(oldp+5,((1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
        bufp->chgIData(oldp+6,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2),32);
        bufp->chgBit(oldp+7,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
        bufp->chgBit(oldp+8,((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
        bufp->chgCData(oldp+9,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint4_REG),4);
        bufp->chgCData(oldp+10,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_2),5);
        bufp->chgCData(oldp+11,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_2),5);
        bufp->chgCData(oldp+12,(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgIData(oldp+13,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgIData(oldp+14,(vlSelfRef.Top__DOT__core__DOT__REG_1),32);
        bufp->chgIData(oldp+15,(vlSelfRef.Top__DOT__core__DOT__REG_2),32);
        bufp->chgIData(oldp+16,(vlSelfRef.Top__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+17,(vlSelfRef.Top__DOT__core__DOT__REG_6),32);
        bufp->chgBit(oldp+18,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange));
        bufp->chgIData(oldp+19,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                  ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
                                  : 0U)),32);
        bufp->chgIData(oldp+20,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                  ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                  : 0U)),32);
        bufp->chgCData(oldp+21,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange) 
                               & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite))));
        bufp->chgIData(oldp+23,(vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+24,(vlSelfRef.Top__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+25,(vlSelfRef.Top__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+26,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+27,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+28,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                          >> 7U))),5);
        bufp->chgIData(oldp+31,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+32,(vlSelfRef.Top__DOT__core__DOT__id_reg_ins),32);
        bufp->chgIData(oldp+33,(vlSelfRef.Top__DOT__core__DOT__ex_reg_result),32);
        bufp->chgBit(oldp+34,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+35,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+36,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+37,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+38,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+39,(vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+40,(vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+41,(vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgBit(oldp+42,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall));
        bufp->chgIData(oldp+43,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),32);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+45,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7),7);
        bufp->chgCData(oldp+46,((7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+47,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((3U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x23U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                              | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))));
        bufp->chgCData(oldp+48,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
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
                                                          ? 2U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                           ? 2U
                                                           : 
                                                          (7U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))))))),2);
        bufp->chgBit(oldp+49,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                               & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite))));
        bufp->chgBit(oldp+50,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                               & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr))));
        bufp->chgBit(oldp+51,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((3U == (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x23U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x63U 
                                               != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((0x37U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                 & ((0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                    & ((0x6fU 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                       & ((0x67U 
                                                           != 
                                                           (0x7fU 
                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                          & (7U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))))))));
        bufp->chgBit(oldp+52,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                               & ((0x33U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((3U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x23U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((0x63U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                 & ((0x37U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                    & ((0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                       & ((0x6fU 
                                                           != 
                                                           (0x7fU 
                                                            & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                          & ((0x67U 
                                                              != 
                                                              (0x7fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                             & ((7U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                                & (0x27U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))))))))));
        bufp->chgBit(oldp+53,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((3U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x23U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           & (0x63U 
                                              == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))));
        bufp->chgCData(oldp+54,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                  ? 2U : ((0x13U == 
                                           (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                           ? 2U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                   | ((3U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                      & ((0x23U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                         & ((0x63U 
                                                             != 
                                                             (0x7fU 
                                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))),2);
        bufp->chgCData(oldp+55,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump),2);
        bufp->chgCData(oldp+56,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))))),2);
        bufp->chgBit(oldp+57,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7)) 
                               & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                  | ((5U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                     | ((6U == (7U 
                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                        | (7U == (7U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))))))));
        bufp->chgBit(oldp+58,((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))));
        bufp->chgIData(oldp+59,(((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                << 3U))) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo))),32);
        bufp->chgBit(oldp+60,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0));
        bufp->chgBit(oldp+61,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_0));
        bufp->chgBit(oldp+62,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_1));
        bufp->chgBit(oldp+63,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_0));
        bufp->chgBit(oldp+64,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_1));
        bufp->chgBit(oldp+65,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_0));
        bufp->chgBit(oldp+66,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_1));
        bufp->chgBit(oldp+67,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_2));
        bufp->chgBit(oldp+68,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_3));
        bufp->chgBit(oldp+69,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_4));
        bufp->chgBit(oldp+70,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_0));
        bufp->chgBit(oldp+71,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_1));
        bufp->chgBit(oldp+72,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_2));
        bufp->chgBit(oldp+73,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_3));
        bufp->chgBit(oldp+74,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_4));
        bufp->chgBit(oldp+75,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0));
        bufp->chgBit(oldp+76,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_f));
        bufp->chgBit(oldp+77,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_f));
        bufp->chgBit(oldp+78,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0));
        bufp->chgBit(oldp+79,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1));
        bufp->chgBit(oldp+80,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2));
        bufp->chgBit(oldp+81,(((7U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x27U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x43U == (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x47U == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x4bU == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x4fU 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                              | (0x53U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgCData(oldp+82,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+83,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+84,(vlSelfRef.Top__DOT__core__DOT__id_reg_imm),32);
        bufp->chgIData(oldp+85,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd1),32);
        bufp->chgIData(oldp+86,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd2),32);
        bufp->chgIData(oldp+87,(vlSelfRef.Top__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+88,(vlSelfRef.Top__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+89,(vlSelfRef.Top__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+90,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+91,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+92,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+93,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgBit(oldp+94,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1));
        bufp->chgBit(oldp+95,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_2));
        bufp->chgIData(oldp+96,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd3),32);
        bufp->chgIData(oldp+97,(vlSelfRef.Top__DOT__core__DOT__id_reg_fcsr_o_data),32);
        bufp->chgBit(oldp+98,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_f));
        bufp->chgIData(oldp+99,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wd),32);
        bufp->chgCData(oldp+100,((7U & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+101,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                   ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12)
                                   : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                       ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22)
                                       : ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite)
                                           ? 0xfU : 0U)))),4);
        bufp->chgCData(oldp+102,(vlSelfRef.Top__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+103,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+104,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+105,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+106,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgCData(oldp+107,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+108,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+109,(vlSelfRef.Top__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgIData(oldp+110,(vlSelfRef.Top__DOT__core__DOT__mem_reg_rd),32);
        bufp->chgIData(oldp+111,(vlSelfRef.Top__DOT__core__DOT__mem_reg_result),32);
        bufp->chgCData(oldp+112,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgCData(oldp+113,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG),5);
        bufp->chgCData(oldp+114,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_1),5);
        bufp->chgCData(oldp+115,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG),5);
        bufp->chgCData(oldp+116,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_1),5);
        bufp->chgIData(oldp+117,(vlSelfRef.Top__DOT__core__DOT__REG),32);
        bufp->chgIData(oldp+118,(vlSelfRef.Top__DOT__core__DOT__REG_3),32);
        bufp->chgIData(oldp+119,(vlSelfRef.Top__DOT__core__DOT__REG_4),32);
        bufp->chgIData(oldp+120,(vlSelfRef.Top__DOT__core__DOT__REG_5),32);
        bufp->chgBit(oldp+121,(vlSelfRef.Top__DOT__core__DOT__REG_7));
        bufp->chgIData(oldp+122,(vlSelfRef.Top__DOT__core__DOT__REG_8),32);
        bufp->chgBit(oldp+123,(vlSelfRef.Top__DOT__core__DOT__REG_9));
        bufp->chgBit(oldp+124,(vlSelfRef.Top__DOT__core__DOT__REG_10));
        bufp->chgIData(oldp+125,(vlSelfRef.Top__DOT__core__DOT__REG_11),32);
        bufp->chgCData(oldp+126,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl),4);
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7) 
                                      >> 5U))));
        bufp->chgCData(oldp+128,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+129,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+130,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+131,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+132,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgCData(oldp+133,((vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgCData(oldp+134,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
        bufp->chgCData(oldp+135,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15),5);
        bufp->chgBit(oldp+136,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid));
        bufp->chgBit(oldp+137,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
        bufp->chgBit(oldp+138,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                                      & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                         & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
        bufp->chgCData(oldp+139,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp),5);
        bufp->chgCData(oldp+140,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode),3);
        bufp->chgBit(oldp+141,(((0x18000053U == (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                | (0x58000053U == (0xfe00007fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)))));
        bufp->chgBit(oldp+142,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
        bufp->chgBit(oldp+143,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out));
        bufp->chgIData(oldp+144,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_a_reg),32);
        bufp->chgIData(oldp+145,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_b_reg),32);
        bufp->chgCData(oldp+146,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__op_reg),3);
        bufp->chgBit(oldp+147,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en));
        bufp->chgCData(oldp+148,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f7_reg),6);
        bufp->chgCData(oldp+149,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter),6);
        bufp->chgBit(oldp+150,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst));
        bufp->chgBit(oldp+151,((1U & ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                                      | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                         | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)))))));
        bufp->chgBit(oldp+152,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__io_is_f_o_REG));
        bufp->chgCData(oldp+153,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op),2);
        bufp->chgBit(oldp+154,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+155,((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+156,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid))));
        bufp->chgBit(oldp+157,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))));
        bufp->chgQData(oldp+158,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+160,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                    << 4U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 << 2U))) 
                                  | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
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
                                      << 1U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgBit(oldp+161,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling));
        bufp->chgBit(oldp+162,((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+163,((0x16U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgSData(oldp+164,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+165,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+166,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+167,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+168,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf));
        bufp->chgBit(oldp+169,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
        bufp->chgSData(oldp+170,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+171,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+172,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+173,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+174,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+175,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             - (IData)(0x81U))) 
                                           | (((IData)(
                                                       (0x1c0U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgIData(oldp+176,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? (0xffffffU 
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
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf)
                                                    ? 0U
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+177,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
                                   << 0x1fU) | ((0x7f800000U 
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
                                                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgBit(oldp+178,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+179,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+180,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+181,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+182,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgCData(oldp+183,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z),3);
        bufp->chgBit(oldp+184,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+185,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
        bufp->chgBit(oldp+186,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
        bufp->chgBit(oldp+187,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
        bufp->chgBit(oldp+188,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z));
        bufp->chgBit(oldp+189,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z));
        bufp->chgSData(oldp+190,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z),10);
        bufp->chgIData(oldp+191,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgCData(oldp+192,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum),5);
        bufp->chgBit(oldp+193,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid));
        bufp->chgBit(oldp+194,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z));
        bufp->chgBit(oldp+195,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
        bufp->chgIData(oldp+196,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z),24);
        bufp->chgIData(oldp+197,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z),26);
        bufp->chgBit(oldp+198,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
        bufp->chgIData(oldp+199,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z),26);
        bufp->chgBit(oldp+200,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum))));
        bufp->chgBit(oldp+201,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
        bufp->chgBit(oldp+202,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        bufp->chgIData(oldp+203,((((IData)(1U) << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                  >> 2U)),30);
        bufp->chgBit(oldp+204,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+205,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+206,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+207,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+208,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+209,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                      >> 0x19U))));
        bufp->chgBit(oldp+211,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 8U)))));
        bufp->chgCData(oldp+212,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),8);
        bufp->chgBit(oldp+213,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 7U)))));
        bufp->chgCData(oldp+214,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),7);
        bufp->chgBit(oldp+215,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 6U)))));
        bufp->chgCData(oldp+216,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),6);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
        __Vtemp_4[0U] = __Vtemp_3[0U];
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
        bufp->chgWData(oldp+217,(__Vtemp_4),65);
        bufp->chgIData(oldp+220,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+221,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+222,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+223,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+224,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+225,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgBit(oldp+226,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgIData(oldp+227,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+228,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+229,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+230,((0x7fffffU & ((0x2000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+231,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+232,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+233,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                          >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))));
        bufp->chgBit(oldp+234,((IData)(((0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x2000002U 
                                           == (0x2000002U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))))));
        bufp->chgBit(oldp+235,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                     ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                        >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x2000002U 
                                               == (0x2000002U 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                      | (0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+236,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+237,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x2000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x2000000U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                            ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+238,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+239,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+240,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut));
        bufp->chgBit(oldp+241,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+242,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+243,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x2000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x2000000U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+245,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+246,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+247,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+248,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+249,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgCData(oldp+250,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
        bufp->chgIData(oldp+251,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
        bufp->chgIData(oldp+252,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
        bufp->chgBit(oldp+253,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
        bufp->chgBit(oldp+254,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
        bufp->chgIData(oldp+255,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgSData(oldp+256,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+257,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en));
        bufp->chgCData(oldp+258,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+259,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite));
        bufp->chgBit(oldp+260,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x63U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x37U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x6fU 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                        & ((0x67U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                           & ((7U 
                                                               != 
                                                               (0x7fU 
                                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                              & (0x27U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))))))))));
        bufp->chgBit(oldp+261,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr));
        bufp->chgCData(oldp+262,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgBit(oldp+263,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0));
        bufp->chgIData(oldp+264,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0),32);
        bufp->chgIData(oldp+265,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),32);
        bufp->chgIData(oldp+266,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2),32);
        bufp->chgCData(oldp+267,((3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+268,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+269,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+270,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+271,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+272,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+273,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+274,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo),3);
        bufp->chgIData(oldp+275,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+276,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG),32);
        bufp->chgIData(oldp+277,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+278,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+279,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+280,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+281,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+282,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+283,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+284,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+285,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+286,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+287,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+288,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+289,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10),32);
        bufp->chgIData(oldp+290,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+291,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))),32);
        bufp->chgBit(oldp+292,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+293,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+294,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                                 & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+295,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+296,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+297,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
                                 & (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgCData(oldp+298,((0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgIData(oldp+299,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+300,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+301,((0xfffff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),32);
        bufp->chgSData(oldp+302,(((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+303,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))),32);
        bufp->chgSData(oldp+304,((((0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x14U)) 
                                   | (0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                << 3U))) 
                                  | ((0x3f0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U))))),12);
        bufp->chgIData(oldp+305,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffffU
                                     : 0U) << 0xdU) 
                                  | (((0x1000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x13U)) 
                                      | (0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   << 4U))) 
                                     | ((0x7e0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U)))))),32);
        bufp->chgIData(oldp+306,(((0x80000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+307,((((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x1fU) ? 0x7ffU
                                      : 0U) << 0x15U) 
                                   | (0x100000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU))) 
                                  | (((0xff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                      | (0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 9U))) 
                                     | (0x7feU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))),32);
        bufp->chgIData(oldp+308,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0),32);
        bufp->chgIData(oldp+309,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1),32);
        bufp->chgIData(oldp+310,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2),32);
        bufp->chgIData(oldp+311,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3),32);
        bufp->chgIData(oldp+312,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4),32);
        bufp->chgIData(oldp+313,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5),32);
        bufp->chgIData(oldp+314,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6),32);
        bufp->chgIData(oldp+315,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7),32);
        bufp->chgIData(oldp+316,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8),32);
        bufp->chgIData(oldp+317,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9),32);
        bufp->chgIData(oldp+318,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10),32);
        bufp->chgIData(oldp+319,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11),32);
        bufp->chgIData(oldp+320,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12),32);
        bufp->chgIData(oldp+321,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13),32);
        bufp->chgIData(oldp+322,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14),32);
        bufp->chgIData(oldp+323,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15),32);
        bufp->chgIData(oldp+324,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16),32);
        bufp->chgIData(oldp+325,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17),32);
        bufp->chgIData(oldp+326,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18),32);
        bufp->chgIData(oldp+327,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19),32);
        bufp->chgIData(oldp+328,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20),32);
        bufp->chgIData(oldp+329,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21),32);
        bufp->chgIData(oldp+330,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22),32);
        bufp->chgIData(oldp+331,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23),32);
        bufp->chgIData(oldp+332,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24),32);
        bufp->chgIData(oldp+333,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25),32);
        bufp->chgIData(oldp+334,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26),32);
        bufp->chgIData(oldp+335,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27),32);
        bufp->chgIData(oldp+336,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28),32);
        bufp->chgIData(oldp+337,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29),32);
        bufp->chgIData(oldp+338,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30),32);
        bufp->chgIData(oldp+339,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31),32);
        bufp->chgIData(oldp+340,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0),32);
        bufp->chgIData(oldp+341,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1),32);
        bufp->chgIData(oldp+342,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2),32);
        bufp->chgIData(oldp+343,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3),32);
        bufp->chgIData(oldp+344,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4),32);
        bufp->chgIData(oldp+345,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5),32);
        bufp->chgIData(oldp+346,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6),32);
        bufp->chgIData(oldp+347,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7),32);
        bufp->chgIData(oldp+348,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8),32);
        bufp->chgIData(oldp+349,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9),32);
        bufp->chgIData(oldp+350,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10),32);
        bufp->chgIData(oldp+351,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11),32);
        bufp->chgIData(oldp+352,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12),32);
        bufp->chgIData(oldp+353,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13),32);
        bufp->chgIData(oldp+354,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14),32);
        bufp->chgIData(oldp+355,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15),32);
        bufp->chgIData(oldp+356,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16),32);
        bufp->chgIData(oldp+357,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17),32);
        bufp->chgIData(oldp+358,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18),32);
        bufp->chgIData(oldp+359,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19),32);
        bufp->chgIData(oldp+360,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20),32);
        bufp->chgIData(oldp+361,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21),32);
        bufp->chgIData(oldp+362,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22),32);
        bufp->chgIData(oldp+363,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23),32);
        bufp->chgIData(oldp+364,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24),32);
        bufp->chgIData(oldp+365,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25),32);
        bufp->chgIData(oldp+366,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26),32);
        bufp->chgIData(oldp+367,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27),32);
        bufp->chgIData(oldp+368,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28),32);
        bufp->chgIData(oldp+369,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29),32);
        bufp->chgIData(oldp+370,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30),32);
        bufp->chgIData(oldp+371,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31),32);
        bufp->chgCData(oldp+372,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg),2);
        bufp->chgCData(oldp+373,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset),2);
        bufp->chgCData(oldp+374,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+375,((3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result)),2);
        bufp->chgCData(oldp+376,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))
                                            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U))
                                                : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))),8);
        bufp->chgCData(oldp+377,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)))
                                            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)))
                                                : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))))),8);
        bufp->chgCData(oldp+378,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U)
                                                : (
                                                   (1U 
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
                                            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
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
                                                : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U))))),8);
        bufp->chgCData(oldp+379,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))
                                            : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)))
                                                : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U))))),8);
        bufp->chgSData(oldp+380,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)))
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                      ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                      : 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)))
                                                    : 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                   ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                   : 
                                                  (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))
                                               : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U))
                                                   : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd))))),16);
        bufp->chgSData(oldp+381,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)
                                                      : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))
                                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)
                                                      : 
                                                     (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                      >> 8U)))
                                                    : 
                                                   (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U))) 
                                              << 8U)) 
                                  | (0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
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
                                               : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
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
                                                   >> 0x10U)))))),16);
        bufp->chgIData(oldp+382,((0xfffffffU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_result 
                                                >> 2U))),28);
        bufp->chgCData(oldp+383,(vlSelfRef.Top__DOT__dmem__DOT__state_reg),2);
        bufp->chgBit(oldp+384,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+385,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+386,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+387,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+388,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+389,((0xfffffffU & vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2)),28);
        bufp->chgCData(oldp+390,(vlSelfRef.Top__DOT__imem__DOT__state_reg),2);
        bufp->chgBit(oldp+391,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+392,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+393,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+394,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+395,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+396,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1
                                   : ((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                       ? ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                                            & ((0x1fU 
                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                      >> 7U))))
                                            ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                            : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1) 
                                          + vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out)
                                       : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1))),32);
        bufp->chgIData(oldp+397,((((1U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)) 
                                   | (3U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)))
                                   ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                      | ((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0)
                                            ? (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_f)
                                            ? ((((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_4) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_3) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_2) 
                                                      << 2U))) 
                                               | (((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_0)))
                                            : 0U)) 
                                         | ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_f)
                                             ? ((((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_3) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_2) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_0)))
                                             : 0U)))
                                   : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
        bufp->chgIData(oldp+398,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(4U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+399,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(2U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+400,((IData)((0x7fffffffffffffffULL 
                                          & ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                              ? (QData)((IData)(
                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                     | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                      + vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                   : 
                                                  ((3U 
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
                                                                             : 0U))))))))))))))),32);
        bufp->chgIData(oldp+401,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                   ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                                   : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6)
                                       ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                                                  >> 0x20U))
                                       : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                           ? ((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                 >> 0x1fU)) 
                                               & (0U 
                                                  != vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                               ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                               : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                           : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                               ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                               : ((6U 
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
                                                    : 0U))))))),32);
        bufp->chgCData(oldp+402,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+403,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+404,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+405,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                      | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                                  << 4U)),5);
        bufp->chgBit(oldp+406,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+407,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                     ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 1U))) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x4000004U 
                                               == (0x4000004U 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                      | (0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+408,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x4000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x4000000U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                            ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+409,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x4000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x4000000U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+410,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))));
        bufp->chgBit(oldp+411,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU) ^ 
                                      ((9U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+412,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                & (9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
        bufp->chgBit(oldp+413,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))));
        bufp->chgIData(oldp+414,((((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                           << 1U) : 0U) 
                                      | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                          & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                             & (9U 
                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))))
                                          ? 0x1000000U
                                          : 0U)) | 
                                     ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                       ? 0x2800000U
                                       : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                                  ? 0U
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
                                   | ((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                             & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                                       ? 0x1000000U
                                       : 0U)) | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                                  ? 
                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                  << 1U)
                                                  : 0U))),27);
        bufp->chgBit(oldp+415,((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))));
        bufp->chgBit(oldp+416,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (0U != (1U & (IData)(
                                                        ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                         >> 7U))))) 
                                | ((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                       & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+417,((1U & ((0U == (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U)))
                                       ? (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                                       : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U))))));
        bufp->chgBit(oldp+418,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+419,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                     ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 1U))) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x4000004U 
                                               == (0x4000004U 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                      | (0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+420,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x4000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x4000000U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                            ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+421,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x4000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x4000000U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+422,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+423,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x2fU)))
                                     ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                >> 0x17U))
                                     : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                >> 0x16U)))) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x800000800000ULL 
                                               == (0x800000800000ULL 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))) 
                                      | (0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+424,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((1U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((1U & (IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                          >> 0x2fU)))
                                            ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                         & ((1U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+425,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((1U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((1U & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                             >> 0x2fU)))
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgIData(oldp+426,(((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                     >> 0x1fU) ? (~ (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                             >> 0x17U)))
                                     : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                >> 0x17U))) 
                                   + (1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr) 
                                            ^ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                               >> 0x1fU)))) 
                                  | ((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))),32);
        bufp->chgIData(oldp+427,(((((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                                    ? 0x80000000U : 0U) 
                                  | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                      ? 0U : 0x7fffffffU))),32);
        bufp->chgIData(oldp+428,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                   : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
        bufp->chgIData(oldp+429,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                   : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
        bufp->chgBit(oldp+430,((((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                     == vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                  : ((1U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                         != vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                      : ((4U == (7U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? VL_GTES_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  < vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                  : 
                                                 (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  >= vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
                                & ((0x33U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
                                             (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x23U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               & (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgIData(oldp+431,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                                   & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U))))
                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                   : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1)),32);
        bufp->chgBit(oldp+432,(((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU)))
                                 ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                    == vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                 : ((1U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)))
                                     ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                        != vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                     : ((4U == (7U 
                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                         ? VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                             ? VL_GTES_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                 : 
                                                (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
        bufp->chgIData(oldp+433,((vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+434,(((~ vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                                  & vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
        bufp->chgCData(oldp+435,(((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3)
                                   ? 1U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7)
                                            ? 2U : (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+436,(vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+437,(vlSelfRef.Top__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgBit(oldp+438,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+439,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+440,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+441,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+442,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+443,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+444,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+445,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+446,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+447,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__we_o));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+448,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        bufp->chgIData(oldp+449,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
        bufp->chgBit(oldp+450,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall));
        bufp->chgIData(oldp+451,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result),32);
        bufp->chgIData(oldp+452,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1),32);
        bufp->chgIData(oldp+453,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData2),32);
        bufp->chgBit(oldp+454,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush));
        bufp->chgBit(oldp+455,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5))));
        bufp->chgBit(oldp+456,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 1U))));
        bufp->chgBit(oldp+457,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 2U))));
        bufp->chgBit(oldp+458,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 3U))));
        bufp->chgBit(oldp+459,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 4U))));
        bufp->chgIData(oldp+460,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1),32);
        bufp->chgIData(oldp+461,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in),32);
        bufp->chgIData(oldp+462,(vlSelfRef.Top__DOT__core__DOT__MEM_io_readData),32);
        bufp->chgIData(oldp+463,(vlSelfRef.Top__DOT__core__DOT___npc_T_2),32);
        bufp->chgBit(oldp+464,(vlSelfRef.Top__DOT__core__DOT__pc_io_halt));
        bufp->chgCData(oldp+465,((7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+466,(vlSelfRef.Top__DOT__core__DOT__func7),7);
        bufp->chgBit(oldp+467,((((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                                 & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                  >> 0xcU))) 
                                    | ((5U == (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                >> 0xcU))) 
                                       | ((6U == (7U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                     >> 0xcU))) 
                                          | (7U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                               >> 0xcU))))))) 
                                | ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                                   | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7))))));
        bufp->chgIData(oldp+468,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        bufp->chgIData(oldp+469,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        bufp->chgIData(oldp+470,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
        bufp->chgIData(oldp+471,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
        bufp->chgIData(oldp+472,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2),32);
        bufp->chgIData(oldp+473,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out),32);
        bufp->chgQData(oldp+474,((((QData)((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))))),33);
        bufp->chgQData(oldp+476,((((QData)((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14))))),33);
        bufp->chgQData(oldp+478,((((QData)((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2))))),33);
        bufp->chgQData(oldp+480,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+482,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+484,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgBit(oldp+486,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt));
        bufp->chgBit(oldp+487,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq));
        bufp->chgBit(oldp+488,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt));
        bufp->chgIData(oldp+489,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out),32);
        bufp->chgCData(oldp+490,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
                                   << 2U) | ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                               & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                                & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))))),3);
        bufp->chgQData(oldp+491,((((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+493,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))),5);
        bufp->chgCData(oldp+494,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+495,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)),23);
        bufp->chgBit(oldp+496,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+497,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
        bufp->chgCData(oldp+498,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist),5);
        bufp->chgSData(oldp+499,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),9);
        bufp->chgBit(oldp+500,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                                             >> 7U)))));
        bufp->chgBit(oldp+501,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN));
        bufp->chgCData(oldp+502,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+503,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)),23);
        bufp->chgBit(oldp+504,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+505,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
        bufp->chgCData(oldp+506,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1),5);
        bufp->chgSData(oldp+507,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),9);
        bufp->chgBit(oldp+508,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                                             >> 7U)))));
        bufp->chgBit(oldp+509,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
        bufp->chgSData(oldp+510,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+511,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+512,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+513,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+514,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf));
        bufp->chgBit(oldp+515,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+516,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+517,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+518,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+519,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+520,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+521,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             - (IData)(0x81U))) 
                                           | (((IData)(
                                                       (0x1c0U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgIData(oldp+522,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+523,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   << 0x1fU) | ((0x7f800000U 
                                                 & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                | (0x7fffffU 
                                                   & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 
                                                      (0xffffffU 
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
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf)
                                                        ? 0U
                                                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+524,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+525,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+526,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+527,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+528,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf));
        bufp->chgBit(oldp+529,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+530,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+531,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+532,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+533,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+534,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+535,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             - (IData)(0x81U))) 
                                           | (((IData)(
                                                       (0x1c0U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgIData(oldp+536,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+537,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   << 0x1fU) | ((0x7f800000U 
                                                 & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                | (0x7fffffU 
                                                   & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 
                                                      (0xffffffU 
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
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf)
                                                        ? 0U
                                                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+538,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+539,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+540,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+541,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+542,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf));
        bufp->chgBit(oldp+543,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+544,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+545,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+546,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+547,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+548,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+549,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             - (IData)(0x81U))) 
                                           | (((IData)(
                                                       (0x1c0U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgIData(oldp+550,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+551,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   << 0x1fU) | ((0x7f800000U 
                                                 & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                | (0x7fffffU 
                                                   & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                       ? 
                                                      (0xffffffU 
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
                                                       : 
                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf)
                                                        ? 0U
                                                        : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+552,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+553,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+554,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+555,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+556,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf));
        bufp->chgBit(oldp+557,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+558,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+559,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+560,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+561,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+562,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+563,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                               : 0U)))),8);
        bufp->chgIData(oldp+564,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                    ? 0U
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+565,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4),32);
        bufp->chgBit(oldp+566,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                >> 0x1fU)));
        bufp->chgCData(oldp+567,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+568,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)),23);
        bufp->chgBit(oldp+569,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+570,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))));
        bufp->chgCData(oldp+571,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist),5);
        bufp->chgIData(oldp+572,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                               << 1U))),23);
        bufp->chgSData(oldp+573,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),9);
        bufp->chgBit(oldp+574,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero));
        bufp->chgBit(oldp+575,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                             >> 7U)))));
        bufp->chgBit(oldp+576,((IData)(((0x180U == 
                                         (0x180U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp))) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))))));
        bufp->chgSData(oldp+577,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),10);
        bufp->chgIData(oldp+578,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)) 
                                                << 0x17U)) 
                                  | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2)),25);
        bufp->chgBit(oldp+579,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                >> 0x1fU)));
        bufp->chgIData(oldp+580,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                               << 1U))),23);
        bufp->chgBit(oldp+581,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1));
        bufp->chgSData(oldp+582,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),10);
        bufp->chgIData(oldp+583,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)) 
                                                << 0x17U)) 
                                  | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6)),25);
        bufp->chgBit(oldp+584,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                >> 0x1fU)));
        bufp->chgIData(oldp+585,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                               << 1U))),23);
        bufp->chgBit(oldp+586,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3));
        bufp->chgSData(oldp+587,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),10);
        bufp->chgIData(oldp+588,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)) 
                                                << 0x17U)) 
                                  | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14)),25);
        bufp->chgSData(oldp+589,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),9);
        bufp->chgBit(oldp+590,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
        bufp->chgBit(oldp+591,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                             >> 1U)))));
        bufp->chgBit(oldp+592,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        bufp->chgBit(oldp+593,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgSData(oldp+594,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),10);
        bufp->chgIData(oldp+595,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),25);
        bufp->chgBit(oldp+596,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN));
        bufp->chgBit(oldp+597,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
        bufp->chgBit(oldp+598,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
        bufp->chgIData(oldp+599,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig),25);
        bufp->chgBit(oldp+600,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
        bufp->chgBit(oldp+601,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+602,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))));
        bufp->chgSData(oldp+603,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),10);
        bufp->chgIData(oldp+604,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig),25);
        bufp->chgBit(oldp+605,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+606,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN));
        bufp->chgBit(oldp+607,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+608,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+609,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+610,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+611,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgSData(oldp+612,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),9);
        bufp->chgBit(oldp+613,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                             >> 1U)))));
        bufp->chgBit(oldp+614,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
        bufp->chgBit(oldp+615,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns));
        bufp->chgSData(oldp+616,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps),10);
        bufp->chgCData(oldp+617,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist),5);
        bufp->chgBit(oldp+618,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign));
        bufp->chgCData(oldp+619,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist),5);
        bufp->chgBit(oldp+620,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags));
        bufp->chgIData(oldp+621,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum),27);
        bufp->chgIData(oldp+622,((0x3ffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)),26);
        bufp->chgBit(oldp+623,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))));
        bufp->chgBit(oldp+624,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 2U)))));
        bufp->chgBit(oldp+625,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 4U)))));
        bufp->chgBit(oldp+626,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 6U)))));
        bufp->chgBit(oldp+627,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 8U)))));
        bufp->chgBit(oldp+628,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+629,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+630,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+631,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+632,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+633,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+634,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+635,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                             >> 0x18U)))));
        bufp->chgCData(oldp+636,(((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                  >> 0xaU))) 
                                    << 5U) | (((0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                    >> 8U))) 
                                               << 4U) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 6U))) 
                                                 << 3U))) 
                                  | (((0U != (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                               >> 4U))) 
                                      << 2U) | (((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 2U))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)))))),6);
        bufp->chgSData(oldp+637,(((((((0U != (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                               >> 0x18U))) 
                                      << 0xcU) | ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 0x16U))) 
                                                  << 0xbU)) 
                                    | (((0U != (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x14U))) 
                                        << 0xaU) | 
                                       ((0U != (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x12U))) 
                                        << 9U))) | 
                                   (((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x10U))) 
                                     << 8U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                     >> 0xeU))) 
                                                << 7U) 
                                               | ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 0xcU))) 
                                                  << 6U)))) 
                                  | ((((0U != (3U & 
                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 0xaU))) 
                                       << 5U) | (((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 8U))) 
                                                  << 4U) 
                                                 | ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                         >> 6U))) 
                                                    << 3U))) 
                                     | (((0U != (3U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                    >> 4U))) 
                                         << 2U) | (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))))))),13);
        bufp->chgCData(oldp+638,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2),4);
        bufp->chgCData(oldp+639,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                                  << 1U)),5);
        bufp->chgIData(oldp+640,((0x7fffffeU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                                << 1U))),27);
        bufp->chgBit(oldp+641,((1U & (~ (0U != (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                                           >> 0x18U))))))));
        bufp->chgBit(oldp+642,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU) ^ 
                                      VL_GTS_III(27, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))));
        bufp->chgBit(oldp+643,((1U & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                       ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                          >> 0x1fU)))));
        bufp->chgIData(oldp+644,((0xffffffU & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                                ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig))),24);
        bufp->chgIData(oldp+645,((0xffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)),24);
        bufp->chgIData(oldp+646,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller),29);
        bufp->chgBit(oldp+647,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))));
        bufp->chgBit(oldp+648,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 2U)))));
        bufp->chgBit(oldp+649,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 6U)))));
        bufp->chgBit(oldp+650,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+651,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+652,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+653,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                             >> 0x16U)))));
        bufp->chgCData(oldp+654,((((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                   >> 0x16U))) 
                                     << 6U) | ((0U 
                                                != 
                                                (0xfU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                    >> 0x12U))) 
                                               << 5U)) 
                                   | (((0U != (0xfU 
                                               & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                  >> 0xeU))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                      >> 0xaU))) 
                                                 << 3U))) 
                                  | (((0U != (0xfU 
                                              & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                 >> 6U))) 
                                      << 2U) | (((0U 
                                                  != 
                                                  (0xfU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                      >> 2U))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)))))),7);
        bufp->chgSData(oldp+655,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                              >> 2U))))),9);
        bufp->chgCData(oldp+656,(((((0x40U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                 >> 2U))) 
                                              << 5U)) 
                                    | (0x20U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                   >> 2U))) 
                                                << 3U))) 
                                   | ((0x10U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                   >> 2U))) 
                                                << 1U)) 
                                      | (8U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                  >> 2U))) 
                                               >> 1U)))) 
                                  | ((4U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                               >> 2U))) 
                                            >> 3U)) 
                                     | ((2U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                  >> 2U))) 
                                               >> 5U)) 
                                        | (1U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                    >> 2U))) 
                                                 >> 7U)))))),7);
        bufp->chgIData(oldp+657,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller),27);
        bufp->chgIData(oldp+658,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                   ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                                   : (0x8000000U | 
                                      (0x7ffffffU & 
                                       (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))),28);
        bufp->chgIData(oldp+659,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum),28);
        bufp->chgIData(oldp+660,((0x7ffffffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                                 ? 
                                                (0x7ffffffU 
                                                 & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                                     >> 1U) 
                                                    | (1U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum))),27);
        bufp->chgBit(oldp+661,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+662,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros));
        bufp->chgBit(oldp+663,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))));
        bufp->chgBit(oldp+664,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+665,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+666,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 8U)))));
        bufp->chgCData(oldp+667,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+668,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 7U)))));
        bufp->chgCData(oldp+669,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+670,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 6U)))));
        bufp->chgCData(oldp+671,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_8[0U] = __Vtemp_7[0U];
        __Vtemp_8[1U] = __Vtemp_7[1U];
        __Vtemp_8[2U] = (1U & __Vtemp_7[2U]);
        bufp->chgWData(oldp+672,(__Vtemp_8),65);
        bufp->chgIData(oldp+675,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+676,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+677,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+678,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+679,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+680,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+681,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+682,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+683,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+684,((0x7fffffU & ((0x4000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+685,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+686,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+687,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                          >> 2U) : 
                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 1U)))));
        bufp->chgBit(oldp+688,((IData)(((0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x4000004U 
                                           == (0x4000004U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+689,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+690,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+691,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+692,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+693,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+694,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+695,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+696,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+697,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+698,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+699,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+700,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),25);
        bufp->chgBit(oldp+701,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)))));
        bufp->chgBit(oldp+702,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
        bufp->chgBit(oldp+703,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps));
        bufp->chgBit(oldp+704,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags));
        bufp->chgBit(oldp+705,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags));
        bufp->chgBit(oldp+706,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
        bufp->chgBit(oldp+707,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
        bufp->chgBit(oldp+708,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div));
        bufp->chgBit(oldp+709,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
        bufp->chgBit(oldp+710,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S));
        bufp->chgBit(oldp+711,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                   | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))));
        bufp->chgBit(oldp+712,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                      & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                            | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)))))))));
        bufp->chgBit(oldp+713,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                      & (~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+714,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S));
        bufp->chgSData(oldp+715,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div),11);
        bufp->chgSData(oldp+716,((((VL_LTES_III(11, 0x1c0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))
                                     ? 6U : (0xfU & 
                                             ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div) 
                                              >> 6U))) 
                                   << 6U) | (0x3fU 
                                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div)))),10);
        bufp->chgBit(oldp+717,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
        bufp->chgIData(oldp+718,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem),27);
        bufp->chgIData(oldp+719,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem),29);
        bufp->chgBit(oldp+720,(VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)));
        bufp->chgIData(oldp+721,((0x3ffffffU & (VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                                                 ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem))),26);
        bufp->chgBit(oldp+722,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)))));
        bufp->chgCData(oldp+723,((0x40U | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))),8);
        bufp->chgQData(oldp+724,((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig))),33);
        bufp->chgIData(oldp+726,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+727,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgIData(oldp+728,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig),32);
        bufp->chgSData(oldp+729,((0x1ffU & ((IData)(0xc0U) 
                                            + (0x3ffU 
                                               & VL_EXTENDS_II(10,9, 
                                                               (0x40U 
                                                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))),10);
        bufp->chgIData(oldp+730,(((0x7fffffeU & ((IData)(
                                                         ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                          >> 7U)) 
                                                 << 1U)) 
                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra))),27);
        bufp->chgBit(oldp+731,((0U != (1U & (IData)(
                                                    ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                     >> 7U))))));
        bufp->chgBit(oldp+732,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+733,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+734,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+735,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                          (0x1ffU 
                                                           & ((IData)(0xc0U) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_EXTENDS_II(10,9, 
                                                                               (0x40U 
                                                                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))) 
                                            + VL_EXTENDS_II(11,10, 
                                                            (3U 
                                                             & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                >> 0x18U)))))),11);
        bufp->chgSData(oldp+736,((0x1ffU & ((0x7ffU 
                                             & VL_EXTENDS_II(11,10, 
                                                             (0x1ffU 
                                                              & ((IData)(0xc0U) 
                                                                 + 
                                                                 (0x3ffU 
                                                                  & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1)))))))) 
                                            + (0x7ffU 
                                               & VL_EXTENDS_II(11,10, 
                                                               (3U 
                                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U))))))),9);
        bufp->chgIData(oldp+737,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        bufp->chgBit(oldp+738,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+739,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgIData(oldp+740,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+741,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),24);
        bufp->chgIData(oldp+742,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),24);
        bufp->chgQData(oldp+743,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                                   >> 3U)))),48);
        bufp->chgBit(oldp+745,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                   | ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                          >> 0x16U)) 
                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))))));
        bufp->chgBit(oldp+746,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgBit(oldp+747,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN));
        bufp->chgBit(oldp+748,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
        bufp->chgBit(oldp+749,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3))));
        bufp->chgSData(oldp+750,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum),10);
        bufp->chgBit(oldp+751,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags));
        bufp->chgBit(oldp+752,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant));
        bufp->chgCData(oldp+753,((0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+754,((0x3ffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                   >> 0x13U)))),26);
        bufp->chgBit(oldp+755,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+756,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
        bufp->chgBit(oldp+758,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+759,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))));
        bufp->chgBit(oldp+760,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut));
        bufp->chgBit(oldp+761,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+762,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+763,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+764,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgBit(oldp+765,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
        bufp->chgWData(oldp+766,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        bufp->chgSData(oldp+769,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                            - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))),10);
        bufp->chgQData(oldp+770,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        bufp->chgBit(oldp+772,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                 ? (0U != (0xffffffU 
                                           & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                 : (0U != (0x1ffffffU 
                                           & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))));
        bufp->chgIData(oldp+773,((0x1fffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                  << 0xbU) 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                    >> 0x15U)))),29);
        bufp->chgBit(oldp+774,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
        bufp->chgBit(oldp+775,((0U != (0xfU & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                       >> 1U))))));
        bufp->chgBit(oldp+776,((0U != (0xfU & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                       >> 5U))))));
        bufp->chgBit(oldp+777,((0U != (0xfU & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                       >> 9U))))));
        bufp->chgBit(oldp+778,((0U != (0xfU & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                       >> 0xdU))))));
        bufp->chgBit(oldp+779,((0U != (0xfU & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                       >> 0x11U))))));
        bufp->chgBit(oldp+780,((0U != (7U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                     >> 0x15U))))));
        bufp->chgSData(oldp+781,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                          (7U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                               >> 2U)))))),9);
        bufp->chgBit(oldp+782,((0U != ((((((0U != (7U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                              >> 0x15U)))) 
                                           << 6U) | 
                                          ((0U != (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                              >> 0x11U)))) 
                                           << 5U)) 
                                         | (((0U != 
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
                                        | (((0U != 
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
                                       & (((0x20U & 
                                            (VL_SHIFTRS_III(9,9,3, 0x100U, 
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
                                          | ((4U & 
                                              (VL_SHIFTRS_III(9,9,3, 0x100U, 
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
                                                      >> 6U)))))))));
        bufp->chgIData(oldp+783,(((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                  << 9U) 
                                                 | (0x1feU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                       >> 0x17U)))) 
                                  | ((0U != (7U & (
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                   >> 0x15U))) 
                                     | ((0U != ((((
                                                   ((0U 
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
                                            ? (0U != 
                                               (0xffffffU 
                                                & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                            : (0U != 
                                               (0x1ffffffU 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))),27);
        bufp->chgBit(oldp+784,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                      >> 2U))));
        bufp->chgQData(oldp+785,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgBit(oldp+787,((0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        bufp->chgBit(oldp+788,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 2U))))));
        bufp->chgBit(oldp+789,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 4U))))));
        bufp->chgBit(oldp+790,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 6U))))));
        bufp->chgBit(oldp+791,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 8U))))));
        bufp->chgBit(oldp+792,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0xaU))))));
        bufp->chgBit(oldp+793,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0xcU))))));
        bufp->chgBit(oldp+794,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0xeU))))));
        bufp->chgBit(oldp+795,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x10U))))));
        bufp->chgBit(oldp+796,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x12U))))));
        bufp->chgBit(oldp+797,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x14U))))));
        bufp->chgBit(oldp+798,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x16U))))));
        bufp->chgBit(oldp+799,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x18U))))));
        bufp->chgBit(oldp+800,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x1aU))))));
        bufp->chgBit(oldp+801,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x1cU))))));
        bufp->chgBit(oldp+802,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x1eU))))));
        bufp->chgBit(oldp+803,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x20U))))));
        bufp->chgBit(oldp+804,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x22U))))));
        bufp->chgBit(oldp+805,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x24U))))));
        bufp->chgBit(oldp+806,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x26U))))));
        bufp->chgBit(oldp+807,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x28U))))));
        bufp->chgBit(oldp+808,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x2aU))))));
        bufp->chgBit(oldp+809,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x2cU))))));
        bufp->chgBit(oldp+810,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x2eU))))));
        bufp->chgBit(oldp+811,((0U != (3U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x30U))))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                              >> 0x32U)))));
        bufp->chgCData(oldp+813,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo),6);
        bufp->chgSData(oldp+814,((((0U != (3U & (IData)(
                                                        (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                         >> 0x18U)))) 
                                   << 0xcU) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5))),13);
        bufp->chgCData(oldp+815,(((((0U != (3U & (IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 0x24U)))) 
                                    << 5U) | (((0U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x22U)))) 
                                               << 4U) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x20U)))) 
                                                 << 3U))) 
                                  | (((0U != (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                      << 2U) | (((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x1cU)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x1aU)))))))),6);
        bufp->chgIData(oldp+816,(((((((0x2000000U & 
                                       ((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                 >> 0x32U)) 
                                        << 0x19U)) 
                                      | ((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x30U)))) 
                                         << 0x18U)) 
                                     | (((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2eU)))) 
                                         << 0x17U) 
                                        | ((0U != (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x2cU)))) 
                                           << 0x16U))) 
                                    | (((0U != (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x2aU)))) 
                                        << 0x15U) | 
                                       (((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x28U)))) 
                                         << 0x14U) 
                                        | ((0U != (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x26U)))) 
                                           << 0x13U)))) 
                                   | ((((0U != (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x24U)))) 
                                        << 0x12U) | 
                                       (((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x22U)))) 
                                         << 0x11U) 
                                        | ((0U != (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x20U)))) 
                                           << 0x10U))) 
                                      | (((0U != (3U 
                                                  & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x1eU)))) 
                                          << 0xfU) 
                                         | (((0U != 
                                              (3U & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x1cU)))) 
                                             << 0xeU) 
                                            | ((0U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1aU)))) 
                                               << 0xdU))))) 
                                  | (((0U != (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x18U)))) 
                                      << 0xcU) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5)))),26);
        bufp->chgCData(oldp+817,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgCData(oldp+818,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                  << 1U)),6);
        bufp->chgSData(oldp+819,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                            - ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                               << 1U)))),10);
        bufp->chgIData(oldp+820,((0x1fffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                  << 9U) 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                    >> 0x17U)))),29);
        bufp->chgBit(oldp+821,((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))));
        bufp->chgBit(oldp+822,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                             >> 2U)))));
        bufp->chgBit(oldp+823,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                             >> 4U)))));
        bufp->chgBit(oldp+824,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                             >> 6U)))));
        bufp->chgBit(oldp+825,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                             >> 8U)))));
        bufp->chgBit(oldp+826,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                             >> 0xaU)))));
        bufp->chgIData(oldp+827,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))))),17);
        bufp->chgBit(oldp+828,((0U != ((((((0U != (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x18U)))) 
                                           << 6U) | 
                                          ((0U != (3U 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                      >> 0xaU))) 
                                           << 5U)) 
                                         | (((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                >> 8U))) 
                                             << 4U) 
                                            | ((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                    >> 6U))) 
                                               << 3U))) 
                                        | (((0U != 
                                             (3U & 
                                              ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                               >> 4U))) 
                                            << 2U) 
                                           | (((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                    >> 2U))) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                       & (((0x20U & 
                                            (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 4U)) 
                                           | ((0x10U 
                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                      >> 1U)))) 
                                                  << 2U)) 
                                              | (8U 
                                                 & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U))))))) 
                                          | ((4U & 
                                              (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                   >> 1U)))) 
                                               >> 2U)) 
                                             | ((2U 
                                                 & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
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
                                                      >> 6U)))))))));
        bufp->chgIData(oldp+829,(((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                  << 7U) 
                                                 | (0x7eU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                       >> 0x19U)))) 
                                  | (IData)(((0U != 
                                              (0x3800000U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U])) 
                                             | (0U 
                                                != 
                                                ((((((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x18U)))) 
                                                     << 6U) 
                                                    | ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                            >> 0xaU))) 
                                                       << 5U)) 
                                                   | (((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                            >> 8U))) 
                                                       << 4U) 
                                                      | ((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                              >> 6U))) 
                                                         << 3U))) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                                           >> 4U))) 
                                                      << 2U) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                              >> 2U))) 
                                                         << 1U) 
                                                        | (0U 
                                                           != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                                 & (((0x20U 
                                                      & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                        (0xfU 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                             >> 1U)))) 
                                                         << 4U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                           (0xfU 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                                >> 1U)))) 
                                                            << 2U)) 
                                                        | (8U 
                                                           & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                                >> 1U))))))) 
                                                    | ((4U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                               >> 1U)))) 
                                                           >> 2U)) 
                                                       | ((2U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
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
                                                                >> 6U))))))))))),27);
        bufp->chgBit(oldp+830,((0U == (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+831,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgSData(oldp+832,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),9);
        bufp->chgBit(oldp+833,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
                                             >> 1U)))));
        bufp->chgSData(oldp+834,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),10);
        bufp->chgIData(oldp+835,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig),25);
        bufp->chgSData(oldp+836,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd),11);
        bufp->chgSData(oldp+837,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist),11);
        bufp->chgSData(oldp+838,((0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))),10);
        bufp->chgBit(oldp+839,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign));
        bufp->chgCData(oldp+840,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+841,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgBit(oldp+844,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))));
        bufp->chgBit(oldp+845,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                               >> 2U)))));
        bufp->chgBit(oldp+846,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                               >> 6U)))));
        bufp->chgBit(oldp+847,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+848,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+849,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+850,((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                             >> 0x16U)))));
        bufp->chgQData(oldp+851,((0x1ffffffffULL & 
                                  VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))))),33);
        bufp->chgBit(oldp+853,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra));
        __Vtemp_11[0U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                           << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                        >> 3U));
        __Vtemp_11[1U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                           << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                        >> 3U));
        __Vtemp_11[2U] = (0x7ffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                    >> 3U));
        bufp->chgWData(oldp+854,(__Vtemp_11),75);
        __Vtemp_15[0U] = (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U))) 
                          | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        __Vtemp_15[1U] = ((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                 >> 2U)) | ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U))));
        __Vtemp_15[2U] = ((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                 >> 2U)) | (0xffeU 
                                            & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                               >> 2U)));
        bufp->chgWData(oldp+857,(__Vtemp_15),76);
        bufp->chgBit(oldp+860,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+861,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+862,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 8U)))));
        bufp->chgCData(oldp+863,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+864,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 7U)))));
        bufp->chgCData(oldp+865,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+866,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 6U)))));
        bufp->chgCData(oldp+867,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_17[0U] = 0U;
        __Vtemp_17[1U] = 0U;
        __Vtemp_17[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_18, __Vtemp_17, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_19[0U] = __Vtemp_18[0U];
        __Vtemp_19[1U] = __Vtemp_18[1U];
        __Vtemp_19[2U] = (1U & __Vtemp_18[2U]);
        bufp->chgWData(oldp+868,(__Vtemp_19),65);
        bufp->chgIData(oldp+871,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+872,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+873,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+874,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+875,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+876,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+877,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+878,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+879,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+880,((0x7fffffU & ((0x4000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+881,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+882,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+883,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                          >> 2U) : 
                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 1U)))));
        bufp->chgBit(oldp+884,((IData)(((0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x4000004U 
                                           == (0x4000004U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+885,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+886,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+887,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+888,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+889,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+890,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+891,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+892,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+893,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+894,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+895,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+896,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+897,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+898,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+899,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+900,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgQData(oldp+901,((0xffffffffffffULL 
                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T)),48);
        bufp->chgBit(oldp+903,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                                | ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+904,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+906,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 8U)))));
        bufp->chgCData(oldp+907,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+908,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 7U)))));
        bufp->chgCData(oldp+909,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+910,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                         >> 6U)))));
        bufp->chgCData(oldp+911,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_21[0U] = 0U;
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_22, __Vtemp_21, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_23[0U] = __Vtemp_22[0U];
        __Vtemp_23[1U] = __Vtemp_22[1U];
        __Vtemp_23[2U] = (1U & __Vtemp_22[2U]);
        bufp->chgWData(oldp+912,(__Vtemp_23),65);
        bufp->chgIData(oldp+915,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+916,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+917,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+918,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+919,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+920,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+921,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+922,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+923,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+924,((0x7fffffU & ((1U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+925,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+926,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+927,((1U & ((1U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                     >> 0x2fU)))
                                       ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                  >> 0x17U))
                                       : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+928,((IData)(((0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x800000800000ULL 
                                           == (0x800000800000ULL 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))))));
        bufp->chgBit(oldp+929,((1U & ((1U & (IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                     >> 0x2fU)))
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+930,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+931,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+932,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+933,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+934,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+935,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+936,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+937,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+938,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+939,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+940,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                      >> 2U))));
        bufp->chgCData(oldp+941,((0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))),8);
        bufp->chgBit(oldp+942,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne));
        bufp->chgQData(oldp+943,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig),55);
        bufp->chgQData(oldp+945,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig),34);
        bufp->chgIData(oldp+947,((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                          >> 0x17U))),32);
        bufp->chgBit(oldp+948,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact));
        bufp->chgBit(oldp+949,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                  >> 2U) & ((3U == 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                            >> 0x16U)))) 
                                            | (3U == 
                                               (3U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                                   & (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))));
        bufp->chgBit(oldp+950,((1U & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                        >> 2U) & (IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                          >> 0x16U))) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))));
        bufp->chgBit(oldp+951,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr));
        bufp->chgIData(oldp+952,(((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                   >> 0x1fU) ? (~ (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                           >> 0x17U)))
                                   : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                              >> 0x17U)))),32);
        bufp->chgBit(oldp+953,((0x1fU == (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)))));
        bufp->chgBit(oldp+954,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2));
        bufp->chgBit(oldp+955,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow));
        bufp->chgBit(oldp+956,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc));
        bufp->chgBit(oldp+957,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))));
        bufp->chgBit(oldp+958,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))));
        bufp->chgBit(oldp+959,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign));
        bufp->chgQData(oldp+960,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
        bufp->chgIData(oldp+962,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),32);
        bufp->chgIData(oldp+963,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),32);
        bufp->chgIData(oldp+964,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+965,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgIData(oldp+966,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata),32);
        bufp->chgBit(oldp+967,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+968,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgBit(oldp+969,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid)))));
        bufp->chgBit(oldp+970,(vlSelfRef.Top__DOT__dmem__DOT__sram_we_i));
    }
    bufp->chgBit(oldp+971,(vlSelfRef.clock));
    bufp->chgBit(oldp+972,(vlSelfRef.reset));
    bufp->chgIData(oldp+973,(vlSelfRef.io_pin),32);
    bufp->chgBit(oldp+974,(vlSelfRef.io_rvfi_valid_0));
    bufp->chgIData(oldp+975,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->chgCData(oldp+976,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->chgCData(oldp+977,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->chgCData(oldp+978,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->chgIData(oldp+979,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->chgIData(oldp+980,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->chgCData(oldp+981,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->chgIData(oldp+982,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->chgIData(oldp+983,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->chgIData(oldp+984,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->chgIData(oldp+985,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->chgCData(oldp+986,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->chgIData(oldp+987,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->chgIData(oldp+988,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->chgBit(oldp+989,(vlSelfRef.io_baby_kyber_req_ready));
    bufp->chgBit(oldp+990,(vlSelfRef.io_baby_kyber_req_valid));
    bufp->chgIData(oldp+991,(vlSelfRef.io_baby_kyber_req_bits_addrRequest),32);
    bufp->chgIData(oldp+992,(vlSelfRef.io_baby_kyber_req_bits_dataRequest),32);
    bufp->chgCData(oldp+993,(vlSelfRef.io_baby_kyber_req_bits_activeByteLane),4);
    bufp->chgBit(oldp+994,(vlSelfRef.io_baby_kyber_req_bits_isWrite));
    bufp->chgBit(oldp+995,(vlSelfRef.io_baby_kyber_rsp_ready));
    bufp->chgBit(oldp+996,(vlSelfRef.io_baby_kyber_rsp_valid));
    bufp->chgIData(oldp+997,(vlSelfRef.io_baby_kyber_rsp_bits_dataResponse),32);
    bufp->chgBit(oldp+998,(vlSelfRef.io_baby_kyber_rsp_bits_error));
    bufp->chgBit(oldp+999,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_key));
    bufp->chgBit(oldp+1000,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_encrypt));
    bufp->chgBit(oldp+1001,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_decrypt));
    bufp->chgBit(oldp+1002,(vlSelfRef.io_key_enable_trigger));
    bufp->chgBit(oldp+1003,(vlSelfRef.io_encryption_enable_trigger));
    bufp->chgBit(oldp+1004,(vlSelfRef.io_decryption_enable_trigger));
    bufp->chgBit(oldp+1005,(vlSelfRef.io_uart_req_ready));
    bufp->chgBit(oldp+1006,(vlSelfRef.io_uart_req_valid));
    bufp->chgIData(oldp+1007,(vlSelfRef.io_uart_req_bits_addrRequest),32);
    bufp->chgIData(oldp+1008,(vlSelfRef.io_uart_req_bits_dataRequest),32);
    bufp->chgCData(oldp+1009,(vlSelfRef.io_uart_req_bits_activeByteLane),4);
    bufp->chgBit(oldp+1010,(vlSelfRef.io_uart_req_bits_isWrite));
    bufp->chgBit(oldp+1011,(vlSelfRef.io_uart_rsp_ready));
    bufp->chgBit(oldp+1012,(vlSelfRef.io_uart_rsp_valid));
    bufp->chgIData(oldp+1013,(vlSelfRef.io_uart_rsp_bits_dataResponse),32);
    bufp->chgBit(oldp+1014,(vlSelfRef.io_uart_rsp_bits_error));
    bufp->chgBit(oldp+1015,(vlSelfRef.io_uart_cio_uart_rx_i));
    bufp->chgBit(oldp+1016,(vlSelfRef.io_uart_cio_uart_tx_o));
    bufp->chgBit(oldp+1017,(vlSelfRef.io_uart_cio_uart_intr_tx_o));
    bufp->chgIData(oldp+1018,(((((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra) 
                                 == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1bU)) & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                                ? vlSelfRef.io_pin : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2)),32);
    bufp->chgIData(oldp+1019,(((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                ? vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data
                                : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                    ? vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data
                                    : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                        ? vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data
                                        : ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                            ? vlSelfRef.io_pin
                                            : ((2U 
                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                ? ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o
                                                    : vlSelfRef.Top__DOT__core__DOT__ex_reg_result)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                                    : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0))))))),32);
    bufp->chgBit(oldp+1020,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->chgBit(oldp+1021,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__rvalid));
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
