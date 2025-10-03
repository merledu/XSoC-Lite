// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VXSoC__Syms.h"


void VXSoC___024root__trace_chg_0_sub_0(VXSoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VXSoC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root__trace_chg_0\n"); );
    // Init
    VXSoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VXSoC___024root*>(voidSelf);
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VXSoC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VXSoC___024root__trace_chg_0_sub_0(VXSoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root__trace_chg_0_sub_0\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        bufp->chgBit(oldp+0,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_key_done));
        bufp->chgBit(oldp+1,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_decryption_done));
        bufp->chgIData(oldp+2,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3]),32);
        bufp->chgBit(oldp+10,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
        bufp->chgIData(oldp+11,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3]),32);
        bufp->chgBit(oldp+51,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
        bufp->chgIData(oldp+52,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+53,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+54,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+55,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+56,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
        bufp->chgIData(oldp+57,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+59,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgCData(oldp+60,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_2),5);
        bufp->chgCData(oldp+61,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_2),5);
        bufp->chgIData(oldp+62,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_1),32);
        bufp->chgIData(oldp+63,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_2),32);
        bufp->chgCData(oldp+64,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgIData(oldp+65,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+66,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_6),32);
        bufp->chgCData(oldp+67,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint4_REG),4);
        bufp->chgBit(oldp+68,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__readyReg));
        bufp->chgBit(oldp+69,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange));
        bufp->chgIData(oldp+70,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_addrRequest),32);
        bufp->chgIData(oldp+71,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange)
                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                  : 0U)),32);
        bufp->chgCData(oldp+72,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+73,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite));
        bufp->chgBit(oldp+74,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__respReg));
        bufp->chgIData(oldp+75,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__dataReg),32);
        bufp->chgBit(oldp+76,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_encryption_done));
        bufp->chgBit(oldp+77,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger));
        bufp->chgBit(oldp+78,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger));
        bufp->chgBit(oldp+79,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger));
        bufp->chgBit(oldp+80,(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid));
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg) 
                               & (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction))));
        bufp->chgBit(oldp+82,(vlSelfRef.XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
        bufp->chgIData(oldp+83,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_addr_Req),32);
        bufp->chgIData(oldp+84,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Req),32);
        bufp->chgCData(oldp+85,(((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction)
                                  ? (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg)
                                  : 0U)),4);
        bufp->chgBit(oldp+86,(vlSelfRef.XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack));
        bufp->chgIData(oldp+87,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_data_Resp),32);
        bufp->chgBit(oldp+88,(vlSelfRef.XSoC__DOT__deviceAdapter_io_reqOut_valid));
        bufp->chgBit(oldp+89,(vlSelfRef.XSoC__DOT__babyKyber__DOT__validReg));
        bufp->chgBit(oldp+90,(vlSelfRef.XSoC__DOT__uart_io_ren));
        bufp->chgBit(oldp+91,(vlSelfRef.XSoC__DOT__uart_io_we));
        bufp->chgIData(oldp+92,(vlSelfRef.XSoC__DOT__uart_io_wdata),32);
        bufp->chgCData(oldp+93,((0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr)),8);
        bufp->chgIData(oldp+94,(((0x14U == (0xffU & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                  ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_status)
                                  : ((8U == (0xffU 
                                             & vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr))
                                      ? (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_reg)
                                      : 0U))),32);
        bufp->chgBit(oldp+95,(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg) 
                               & (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction))));
        bufp->chgBit(oldp+97,(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we));
        bufp->chgIData(oldp+98,(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr),32);
        bufp->chgCData(oldp+99,(((IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction)
                                  ? (IData)(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__selReg)
                                  : 0U)),4);
        bufp->chgBit(oldp+100,(vlSelfRef.XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack));
        bufp->chgBit(oldp+101,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__readyReg));
        bufp->chgBit(oldp+102,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__respReg));
        bufp->chgIData(oldp+103,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__dataReg),32);
        bufp->chgBit(oldp+104,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_wen_Req));
        bufp->chgCData(oldp+105,(((IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction)
                                   ? (IData)(vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg)
                                   : 0U)),8);
        bufp->chgIData(oldp+106,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [0U][0U]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [0U][1U]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [0U][2U]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [0U][3U]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [1U][0U]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [1U][1U]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [1U][2U]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey
                                 [1U][3U]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [2U][0U]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [2U][1U]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [2U][2U]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [2U][3U]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [3U][0U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [3U][1U]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [3U][2U]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg
                                 [3U][3U]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [0U][0U]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [0U][1U]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [0U][2U]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [0U][3U]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [1U][0U]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [1U][1U]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [1U][2U]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r
                                 [1U][3U]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [0U][0U]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [0U][1U]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [0U][2U]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [0U][3U]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [1U][0U]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [1U][1U]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [1U][2U]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1
                                 [1U][3U]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[0]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[1]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[2]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[3]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__message),32);
        bufp->chgIData(oldp+167,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000),32);
        bufp->chgIData(oldp+168,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001),32);
        bufp->chgIData(oldp+169,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002),32);
        bufp->chgIData(oldp+170,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003),32);
        bufp->chgIData(oldp+171,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010),32);
        bufp->chgIData(oldp+172,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011),32);
        bufp->chgIData(oldp+173,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012),32);
        bufp->chgIData(oldp+174,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013),32);
        bufp->chgIData(oldp+175,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020),32);
        bufp->chgIData(oldp+176,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021),32);
        bufp->chgIData(oldp+177,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022),32);
        bufp->chgIData(oldp+178,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023),32);
        bufp->chgIData(oldp+179,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030),32);
        bufp->chgIData(oldp+180,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031),32);
        bufp->chgIData(oldp+181,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032),32);
        bufp->chgIData(oldp+182,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033),32);
        bufp->chgIData(oldp+183,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00),32);
        bufp->chgIData(oldp+184,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01),32);
        bufp->chgIData(oldp+185,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02),32);
        bufp->chgIData(oldp+186,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03),32);
        bufp->chgIData(oldp+187,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10),32);
        bufp->chgIData(oldp+188,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11),32);
        bufp->chgIData(oldp+189,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12),32);
        bufp->chgIData(oldp+190,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13),32);
        bufp->chgIData(oldp+191,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00),32);
        bufp->chgIData(oldp+192,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01),32);
        bufp->chgIData(oldp+193,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02),32);
        bufp->chgIData(oldp+194,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03),32);
        bufp->chgIData(oldp+195,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10),32);
        bufp->chgIData(oldp+196,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11),32);
        bufp->chgIData(oldp+197,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12),32);
        bufp->chgIData(oldp+198,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13),32);
        bufp->chgIData(oldp+199,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00),32);
        bufp->chgIData(oldp+200,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01),32);
        bufp->chgIData(oldp+201,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02),32);
        bufp->chgIData(oldp+202,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03),32);
        bufp->chgIData(oldp+203,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10),32);
        bufp->chgIData(oldp+204,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11),32);
        bufp->chgIData(oldp+205,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12),32);
        bufp->chgIData(oldp+206,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13),32);
        bufp->chgIData(oldp+207,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00),32);
        bufp->chgIData(oldp+208,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01),32);
        bufp->chgIData(oldp+209,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02),32);
        bufp->chgIData(oldp+210,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03),32);
        bufp->chgIData(oldp+211,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10),32);
        bufp->chgIData(oldp+212,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11),32);
        bufp->chgIData(oldp+213,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12),32);
        bufp->chgIData(oldp+214,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13),32);
        bufp->chgIData(oldp+215,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0),32);
        bufp->chgIData(oldp+216,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1),32);
        bufp->chgIData(oldp+217,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2),32);
        bufp->chgIData(oldp+218,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3),32);
        bufp->chgIData(oldp+219,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext000),32);
        bufp->chgIData(oldp+220,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext001),32);
        bufp->chgIData(oldp+221,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext002),32);
        bufp->chgIData(oldp+222,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext003),32);
        bufp->chgIData(oldp+223,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext010),32);
        bufp->chgIData(oldp+224,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext011),32);
        bufp->chgIData(oldp+225,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext012),32);
        bufp->chgIData(oldp+226,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext013),32);
        bufp->chgIData(oldp+227,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext100),32);
        bufp->chgIData(oldp+228,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext101),32);
        bufp->chgIData(oldp+229,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext102),32);
        bufp->chgIData(oldp+230,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext103),32);
        bufp->chgIData(oldp+231,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgCData(oldp+239,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients),4);
        bufp->chgIData(oldp+240,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+269,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+270,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+271,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+272,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
        bufp->chgIData(oldp+310,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+318,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+319,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+320,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+321,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+322,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+323,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+324,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+325,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+326,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+327,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+328,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+329,((0xfffffffU & VL_SHIFTR_III(32,32,32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result, 2U))),32);
        bufp->chgIData(oldp+330,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        bufp->chgCData(oldp+331,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        bufp->chgBit(oldp+332,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgBit(oldp+333,((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg))));
        bufp->chgBit(oldp+334,((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))));
        bufp->chgIData(oldp+335,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2),32);
        bufp->chgBit(oldp+336,((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
        bufp->chgBit(oldp+337,((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg))));
        bufp->chgBit(oldp+338,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange));
        bufp->chgIData(oldp+339,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result
                                   : 0U)),32);
        bufp->chgIData(oldp+340,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                   : 0U)),32);
        bufp->chgCData(oldp+341,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange)
                                   ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+342,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite))));
        bufp->chgIData(oldp+343,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+344,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+345,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+346,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+347,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+348,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+349,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+350,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                                           >> 7U))),5);
        bufp->chgIData(oldp+351,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+352,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins),32);
        bufp->chgIData(oldp+353,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result),32);
        bufp->chgBit(oldp+354,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+355,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+356,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+357,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+358,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+359,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+360,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+361,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgBit(oldp+362,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall));
        bufp->chgIData(oldp+363,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),32);
        bufp->chgCData(oldp+364,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+365,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7),7);
        bufp->chgCData(oldp+366,((7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+367,(((0x33U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x13U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))));
        bufp->chgCData(oldp+368,(((0x33U == (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                            ? 0U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                             ? 0U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                              ? 1U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((0x63U 
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
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))))))),2);
        bufp->chgBit(oldp+369,(((0x13U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite))));
        bufp->chgBit(oldp+370,(((0x13U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr))));
        bufp->chgBit(oldp+371,(((0x33U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x23U 
                                             != (0x7fU 
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
                                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))))))));
        bufp->chgBit(oldp+372,(((0x13U != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                & ((0x33U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
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
                                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))))))))));
        bufp->chgBit(oldp+373,(((0x33U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            & (0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))));
        bufp->chgCData(oldp+374,(((0x33U == (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                   ? 2U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                            ? 2U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            | ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               & ((0x23U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x63U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))),2);
        bufp->chgCData(oldp+375,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump),2);
        bufp->chgCData(oldp+376,(((0x33U == (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                            ? 0U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                             ? 0U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                              ? 0U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((0x63U 
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
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)))))))))),2);
        bufp->chgBit(oldp+377,(((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7)) 
                                & ((4U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))) 
                                   | ((5U == (7U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                      | ((6U == (7U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         | (7U == (7U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+378,((0x73U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))));
        bufp->chgIData(oldp+379,(((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                    << 5U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                 << 3U))) 
                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo))),32);
        bufp->chgBit(oldp+380,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0));
        bufp->chgBit(oldp+381,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_0));
        bufp->chgBit(oldp+382,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_1));
        bufp->chgBit(oldp+383,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_0));
        bufp->chgBit(oldp+384,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_1));
        bufp->chgBit(oldp+385,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0));
        bufp->chgBit(oldp+386,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1));
        bufp->chgBit(oldp+387,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2));
        bufp->chgBit(oldp+388,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3));
        bufp->chgBit(oldp+389,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4));
        bufp->chgBit(oldp+390,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0));
        bufp->chgBit(oldp+391,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1));
        bufp->chgBit(oldp+392,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2));
        bufp->chgBit(oldp+393,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3));
        bufp->chgBit(oldp+394,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4));
        bufp->chgBit(oldp+395,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0));
        bufp->chgBit(oldp+396,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f));
        bufp->chgBit(oldp+397,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_f));
        bufp->chgBit(oldp+398,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0));
        bufp->chgBit(oldp+399,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1));
        bufp->chgBit(oldp+400,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2));
        bufp->chgBit(oldp+401,(((7U == (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                | ((0x27U == (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x43U == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x47U == 
                                          (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x4bU 
                                             == (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               | (0x53U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgCData(oldp+402,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+403,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+404,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_imm),32);
        bufp->chgIData(oldp+405,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd1),32);
        bufp->chgIData(oldp+406,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd2),32);
        bufp->chgIData(oldp+407,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+408,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+409,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+410,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+411,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+412,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+413,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgBit(oldp+414,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1));
        bufp->chgBit(oldp+415,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_2));
        bufp->chgIData(oldp+416,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_rd3),32);
        bufp->chgIData(oldp+417,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data),32);
        bufp->chgBit(oldp+418,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_is_f));
        bufp->chgIData(oldp+419,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd),32);
        bufp->chgCData(oldp+420,((7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+421,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                   ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12)
                                   : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                       ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22)
                                       : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite)
                                           ? 0xfU : 0U)))),4);
        bufp->chgCData(oldp+422,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+423,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+424,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+425,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+426,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgCData(oldp+427,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+428,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+429,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgIData(oldp+430,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_rd),32);
        bufp->chgIData(oldp+431,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_result),32);
        bufp->chgCData(oldp+432,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgCData(oldp+433,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG),5);
        bufp->chgCData(oldp+434,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_1),5);
        bufp->chgCData(oldp+435,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG),5);
        bufp->chgCData(oldp+436,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_1),5);
        bufp->chgIData(oldp+437,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG),32);
        bufp->chgIData(oldp+438,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_3),32);
        bufp->chgIData(oldp+439,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_4),32);
        bufp->chgIData(oldp+440,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_5),32);
        bufp->chgBit(oldp+441,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_7));
        bufp->chgIData(oldp+442,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_8),32);
        bufp->chgBit(oldp+443,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_9));
        bufp->chgBit(oldp+444,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_10));
        bufp->chgIData(oldp+445,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__REG_11),32);
        bufp->chgCData(oldp+446,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl),4);
        bufp->chgBit(oldp+447,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7) 
                                      >> 5U))));
        bufp->chgCData(oldp+448,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+449,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+450,((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+451,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+452,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgCData(oldp+453,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgCData(oldp+454,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
        bufp->chgCData(oldp+455,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15),5);
        bufp->chgBit(oldp+456,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid));
        bufp->chgBit(oldp+457,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
        bufp->chgBit(oldp+458,(((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
                                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                                      & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                         & (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
        bufp->chgCData(oldp+459,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp),5);
        bufp->chgCData(oldp+460,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode),3);
        bufp->chgBit(oldp+461,(((0x18000053U == (0xfe00007fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)) 
                                | (0x58000053U == (0xfe00007fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins)))));
        bufp->chgBit(oldp+462,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
        bufp->chgBit(oldp+463,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out));
        bufp->chgIData(oldp+464,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_a_reg),32);
        bufp->chgIData(oldp+465,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_b_reg),32);
        bufp->chgCData(oldp+466,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg),3);
        bufp->chgBit(oldp+467,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en));
        bufp->chgCData(oldp+468,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg),6);
        bufp->chgCData(oldp+469,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter),6);
        bufp->chgBit(oldp+470,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst));
        bufp->chgBit(oldp+471,((1U & ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)) 
                                      | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                         | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f7)))))));
        bufp->chgBit(oldp+472,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__io_is_f_o_REG));
        bufp->chgCData(oldp+473,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op),2);
        bufp->chgBit(oldp+474,((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+475,((9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+476,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid))));
        bufp->chgBit(oldp+477,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))));
        bufp->chgQData(oldp+478,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+480,(((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                    << 4U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 << 2U))) 
                                  | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                       & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                          | ((~ (((~ 
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
                                      << 1U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgBit(oldp+481,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling));
        bufp->chgBit(oldp+482,((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+483,((0x16U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgSData(oldp+484,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+485,((0U == (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+486,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+487,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+488,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf));
        bufp->chgBit(oldp+489,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
        bufp->chgSData(oldp+490,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+491,((((0U != (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+492,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+493,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+494,((0x7fffffU & ((0xffffffU 
                                                & ((0x7fc00000U 
                                                    & ((0U 
                                                        != 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                            >> 6U))) 
                                                       << 0x16U)) 
                                                   | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut 
                                                      >> 1U))) 
                                               >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+495,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             - (IData)(0x81U))) 
                                           | (((IData)(
                                                       (0x1c0U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                               | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgIData(oldp+496,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                ? (0xffffffU 
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
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf)
                                                    ? 0U
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+497,(((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
                                   << 0x1fU) | ((0x7f800000U 
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
                                                        : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgBit(oldp+498,((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+499,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+500,((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+501,((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+502,((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgCData(oldp+503,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z),3);
        bufp->chgBit(oldp+504,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+505,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
        bufp->chgBit(oldp+506,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
        bufp->chgBit(oldp+507,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
        bufp->chgBit(oldp+508,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z));
        bufp->chgBit(oldp+509,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z));
        bufp->chgSData(oldp+510,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z),10);
        bufp->chgIData(oldp+511,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgCData(oldp+512,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum),5);
        bufp->chgBit(oldp+513,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid));
        bufp->chgBit(oldp+514,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z));
        bufp->chgBit(oldp+515,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
        bufp->chgIData(oldp+516,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z),24);
        bufp->chgIData(oldp+517,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z),26);
        bufp->chgBit(oldp+518,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
        bufp->chgIData(oldp+519,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z),26);
        bufp->chgBit(oldp+520,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum))));
        bufp->chgBit(oldp+521,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
        bufp->chgBit(oldp+522,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        bufp->chgIData(oldp+523,((((IData)(1U) << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                  >> 2U)),30);
        bufp->chgBit(oldp+524,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+525,((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+526,((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+527,((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+528,((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+529,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+530,((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                      >> 0x19U))));
        bufp->chgBit(oldp+531,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 8U)))));
        bufp->chgCData(oldp+532,((0xffU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),8);
        bufp->chgBit(oldp+533,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 7U)))));
        bufp->chgCData(oldp+534,((0x7fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),7);
        bufp->chgBit(oldp+535,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 6U)))));
        bufp->chgCData(oldp+536,((0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),6);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, 
                       (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
        __Vtemp_4[0U] = __Vtemp_3[0U];
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
        bufp->chgWData(oldp+537,(__Vtemp_4),65);
        bufp->chgIData(oldp+540,((3U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+541,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+542,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+543,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+544,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+545,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgBit(oldp+546,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgIData(oldp+547,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+548,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+549,((0x1ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+550,((0x7fffffU & ((0x2000000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+551,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+552,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+553,((1U & ((0x2000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                          >> 1U) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))));
        bufp->chgBit(oldp+554,((IData)(((0U != (3U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x2000002U 
                                           == (0x2000002U 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))))));
        bufp->chgBit(oldp+555,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x2000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                     ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                        >> 1U) : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x2000002U 
                                               == (0x2000002U 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                      | (0U != (3U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+556,((1U & ((0x2000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+557,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x2000000U 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x2000000U 
                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+558,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+559,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+560,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut));
        bufp->chgBit(oldp+561,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+562,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+563,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x2000000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x2000000U 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                               ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+564,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+565,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+566,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+567,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+568,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+569,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgCData(oldp+570,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
        bufp->chgIData(oldp+571,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
        bufp->chgIData(oldp+572,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
        bufp->chgBit(oldp+573,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
        bufp->chgBit(oldp+574,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
        bufp->chgIData(oldp+575,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgSData(oldp+576,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+577,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en));
        bufp->chgCData(oldp+578,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+579,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite));
        bufp->chgBit(oldp+580,(((0x33U != (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             == (0x7fU 
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
        bufp->chgBit(oldp+581,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr));
        bufp->chgCData(oldp+582,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgBit(oldp+583,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0));
        bufp->chgIData(oldp+584,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0),32);
        bufp->chgIData(oldp+585,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),32);
        bufp->chgIData(oldp+586,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2),32);
        bufp->chgCData(oldp+587,((3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+588,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+589,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+590,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+591,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+592,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+593,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+594,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo),3);
        bufp->chgIData(oldp+595,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+596,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG),32);
        bufp->chgIData(oldp+597,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+598,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+599,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+600,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+601,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+602,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+603,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+604,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+605,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+606,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+607,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+608,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+609,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10),32);
        bufp->chgIData(oldp+610,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+611,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))),32);
        bufp->chgBit(oldp+612,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+613,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+614,((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                                 & (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+615,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+616,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+617,((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
                                 & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgCData(oldp+618,((0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgIData(oldp+619,(((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+620,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+621,((0xfffff000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)),32);
        bufp->chgSData(oldp+622,(((0xfe0U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+623,(((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))),32);
        bufp->chgSData(oldp+624,((((0x800U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                              >> 0x14U)) 
                                   | (0x400U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                << 3U))) 
                                  | ((0x3f0U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 8U))))),12);
        bufp->chgIData(oldp+625,(((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffffU
                                     : 0U) << 0xdU) 
                                  | (((0x1000U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                  >> 0x13U)) 
                                      | (0x800U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   << 4U))) 
                                     | ((0x7e0U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                            >> 7U)))))),32);
        bufp->chgIData(oldp+626,(((0x80000U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+627,((((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                      >> 0x1fU) ? 0x7ffU
                                      : 0U) << 0x15U) 
                                   | (0x100000U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU))) 
                                  | (((0xff000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins) 
                                      | (0x800U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 9U))) 
                                     | (0x7feU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))),32);
        bufp->chgIData(oldp+628,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0),32);
        bufp->chgIData(oldp+629,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1),32);
        bufp->chgIData(oldp+630,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2),32);
        bufp->chgIData(oldp+631,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3),32);
        bufp->chgIData(oldp+632,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4),32);
        bufp->chgIData(oldp+633,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5),32);
        bufp->chgIData(oldp+634,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6),32);
        bufp->chgIData(oldp+635,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7),32);
        bufp->chgIData(oldp+636,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8),32);
        bufp->chgIData(oldp+637,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9),32);
        bufp->chgIData(oldp+638,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10),32);
        bufp->chgIData(oldp+639,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11),32);
        bufp->chgIData(oldp+640,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12),32);
        bufp->chgIData(oldp+641,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13),32);
        bufp->chgIData(oldp+642,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14),32);
        bufp->chgIData(oldp+643,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15),32);
        bufp->chgIData(oldp+644,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16),32);
        bufp->chgIData(oldp+645,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17),32);
        bufp->chgIData(oldp+646,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18),32);
        bufp->chgIData(oldp+647,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19),32);
        bufp->chgIData(oldp+648,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20),32);
        bufp->chgIData(oldp+649,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21),32);
        bufp->chgIData(oldp+650,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22),32);
        bufp->chgIData(oldp+651,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23),32);
        bufp->chgIData(oldp+652,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24),32);
        bufp->chgIData(oldp+653,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25),32);
        bufp->chgIData(oldp+654,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26),32);
        bufp->chgIData(oldp+655,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27),32);
        bufp->chgIData(oldp+656,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28),32);
        bufp->chgIData(oldp+657,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29),32);
        bufp->chgIData(oldp+658,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30),32);
        bufp->chgIData(oldp+659,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31),32);
        bufp->chgIData(oldp+660,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0),32);
        bufp->chgIData(oldp+661,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1),32);
        bufp->chgIData(oldp+662,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2),32);
        bufp->chgIData(oldp+663,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3),32);
        bufp->chgIData(oldp+664,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4),32);
        bufp->chgIData(oldp+665,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5),32);
        bufp->chgIData(oldp+666,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6),32);
        bufp->chgIData(oldp+667,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7),32);
        bufp->chgIData(oldp+668,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8),32);
        bufp->chgIData(oldp+669,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9),32);
        bufp->chgIData(oldp+670,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10),32);
        bufp->chgIData(oldp+671,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11),32);
        bufp->chgIData(oldp+672,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12),32);
        bufp->chgIData(oldp+673,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13),32);
        bufp->chgIData(oldp+674,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14),32);
        bufp->chgIData(oldp+675,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15),32);
        bufp->chgIData(oldp+676,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16),32);
        bufp->chgIData(oldp+677,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17),32);
        bufp->chgIData(oldp+678,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18),32);
        bufp->chgIData(oldp+679,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19),32);
        bufp->chgIData(oldp+680,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20),32);
        bufp->chgIData(oldp+681,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21),32);
        bufp->chgIData(oldp+682,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22),32);
        bufp->chgIData(oldp+683,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23),32);
        bufp->chgIData(oldp+684,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24),32);
        bufp->chgIData(oldp+685,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25),32);
        bufp->chgIData(oldp+686,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26),32);
        bufp->chgIData(oldp+687,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27),32);
        bufp->chgIData(oldp+688,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28),32);
        bufp->chgIData(oldp+689,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29),32);
        bufp->chgIData(oldp+690,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30),32);
        bufp->chgIData(oldp+691,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31),32);
        bufp->chgCData(oldp+692,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg),2);
        bufp->chgCData(oldp+693,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset),2);
        bufp->chgCData(oldp+694,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+695,((3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result)),2);
        bufp->chgCData(oldp+696,((0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))
                                            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U))
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd)))),8);
        bufp->chgCData(oldp+697,((0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U)))
                                            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)))
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))))),8);
        bufp->chgCData(oldp+698,((0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U)
                                                : (
                                                   (1U 
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
                                            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
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
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x10U))))),8);
        bufp->chgCData(oldp+699,((0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd)))
                                            : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)))
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 0x18U))))),8);
        bufp->chgSData(oldp+700,(((0xff00U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                     : 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x10U)))
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 8U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                      ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                      : 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)))
                                                    : 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                   : 
                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                   >> 8U))
                                               : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd
                                                    : 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x10U))
                                                   : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd))))),16);
        bufp->chgSData(oldp+701,(((0xff00U & (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                    ? 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)
                                                      : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd)))
                                                : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                     ? 
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                     >> 0x18U)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result))
                                                      ? 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 0x18U)
                                                      : 
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                      >> 8U)))
                                                    : 
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x18U))) 
                                              << 8U)) 
                                  | (0xffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
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
                                               : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
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
                                                   >> 0x10U)))))),16);
        bufp->chgIData(oldp+702,((0xfffffffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result 
                                                >> 2U))),28);
        bufp->chgCData(oldp+703,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__state_reg),2);
        bufp->chgBit(oldp+704,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+705,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+706,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+707,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+708,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+709,((0xfffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2)),28);
        bufp->chgCData(oldp+710,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__state_reg),2);
        bufp->chgBit(oldp+711,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+712,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+713,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+714,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+715,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+716,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__startWBTransaction));
        bufp->chgBit(oldp+717,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stbReg));
        bufp->chgBit(oldp+718,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__cycReg));
        bufp->chgBit(oldp+719,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__weReg));
        bufp->chgIData(oldp+720,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__datReg),32);
        bufp->chgIData(oldp+721,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__adrReg),32);
        bufp->chgCData(oldp+722,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__selReg),4);
        bufp->chgBit(oldp+723,(vlSelfRef.XSoC__DOT__hostAdapter__DOT__stateReg));
        bufp->chgBit(oldp+724,((1U & (~ (IData)(vlSelfRef.XSoC__DOT__uart__DOT__rx_en)))));
        bufp->chgSData(oldp+725,(vlSelfRef.XSoC__DOT__uart__DOT__control),16);
        bufp->chgBit(oldp+726,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV));
        bufp->chgCData(oldp+727,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg),8);
        bufp->chgCData(oldp+728,(vlSelfRef.XSoC__DOT__uart__DOT__rx),8);
        bufp->chgCData(oldp+729,(vlSelfRef.XSoC__DOT__uart__DOT__rx_reg),8);
        bufp->chgBit(oldp+730,(vlSelfRef.XSoC__DOT__uart__DOT__rx_en));
        bufp->chgBit(oldp+731,(vlSelfRef.XSoC__DOT__uart__DOT__rx_status));
        bufp->chgBit(oldp+732,(vlSelfRef.XSoC__DOT__uart__DOT__rx_clr));
        bufp->chgBit(oldp+733,(vlSelfRef.XSoC__DOT__uart__DOT__rx_done));
        bufp->chgBit(oldp+734,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg_REG));
        bufp->chgBit(oldp+735,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg));
        bufp->chgCData(oldp+736,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main),3);
        bufp->chgSData(oldp+737,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count),16);
        bufp->chgCData(oldp+738,(vlSelfRef.XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index),3);
        bufp->chgBit(oldp+739,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__startWBTransaction));
        bufp->chgBit(oldp+740,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stbReg));
        bufp->chgBit(oldp+741,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__cycReg));
        bufp->chgBit(oldp+742,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__weReg));
        bufp->chgIData(oldp+743,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__datReg),32);
        bufp->chgIData(oldp+744,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__adrReg),32);
        bufp->chgCData(oldp+745,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__selReg),4);
        bufp->chgBit(oldp+746,(vlSelfRef.XSoC__DOT__uartHostAdapter__DOT__stateReg));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+747,(((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1
                                   : ((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
                                       ? ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0)) 
                                            & ((0x1fU 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)) 
                                               == (0x1fU 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                                      >> 7U))))
                                            ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result
                                            : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1) 
                                          + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out)
                                       : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1))),32);
        bufp->chgIData(oldp+748,((((1U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)) 
                                   | (3U == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)))
                                   ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                      | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0)
                                            ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f)
                                            ? ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2) 
                                                      << 2U))) 
                                               | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0)))
                                            : 0U)) 
                                         | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_is_f)
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
                                   : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
        bufp->chgIData(oldp+749,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(4U) + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+750,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(2U) + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+751,((IData)((0x7fffffffffffffffULL 
                                          & ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                              ? (QData)((IData)(
                                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                     | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                      + vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                   : 
                                                  ((3U 
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
                                                                             : 0U))))))))))))))),32);
        bufp->chgIData(oldp+752,(((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                   ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                                   : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6)
                                       ? (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                                                  >> 0x20U))
                                       : ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                           ? ((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                 >> 0x1fU)) 
                                               & (0U 
                                                  != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                               ? (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                               : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                           : ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15))
                                               ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                               : ((6U 
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
                                                    : 0U))))))),32);
        bufp->chgCData(oldp+753,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+754,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+755,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                   << 4U) | ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                  & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                     | ((~ 
                                                         (((~ 
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
                                                 << 1U)) 
                                             | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                      | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))),5);
        bufp->chgCData(oldp+756,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                      | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                         & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                                  << 4U)),5);
        bufp->chgBit(oldp+757,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+758,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x4000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                     ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 2U) : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 1U))) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x4000004U 
                                               == (0x4000004U 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                      | (0U != (3U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+759,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x4000000U 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x4000000U 
                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+760,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x4000000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x4000000U 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                               ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+761,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                   | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                      & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))));
        bufp->chgBit(oldp+762,((1U & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU) ^ 
                                      ((9U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+763,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                & (9U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
        bufp->chgBit(oldp+764,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))));
        bufp->chgIData(oldp+765,((((((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                           << 1U) : 0U) 
                                      | (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                          & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                             & (9U 
                                                == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))))
                                          ? 0x1000000U
                                          : 0U)) | 
                                     ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                       ? 0x2800000U
                                       : 0U)) | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
                                   | ((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                             & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                                       ? 0x1000000U
                                       : 0U)) | (((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                  & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                                  ? 
                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                                  << 1U)
                                                  : 0U))),27);
        bufp->chgBit(oldp+766,((((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))));
        bufp->chgBit(oldp+767,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (0U != (1U & (IData)(
                                                        ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                         >> 7U))))) 
                                | ((((2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                       & (3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+768,((1U & ((0U == (3U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U)))
                                       ? (2U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                                       : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U))))));
        bufp->chgBit(oldp+769,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+770,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x4000000U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                     ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 2U) : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 1U))) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x4000004U 
                                               == (0x4000004U 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                      | (0U != (3U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+771,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((0x4000000U 
                                             & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((0x4000000U 
                                            & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+772,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((0x4000000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((0x4000000U 
                                               & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                               ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgBit(oldp+773,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+774,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x2fU)))
                                     ? (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                >> 0x17U))
                                     : (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                >> 0x16U)))) 
                                | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x800000800000ULL 
                                               == (0x800000800000ULL 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))) 
                                      | (0U != (3U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+775,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | ((~ (((~ ((1U & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 2U)
                                             : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U))) 
                                        & ((1U & (IData)(
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                          >> 0x2fU)))
                                            ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x19U)
                                            : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                         & ((1U & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                             ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                >> 1U)
                                             : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74)))))));
        bufp->chgBit(oldp+776,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | ((~ (((~ ((1U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 2U)
                                                : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U))) 
                                           & ((1U & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                             >> 0x2fU)))
                                               ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 0x19U)
                                               : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
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
                                                ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                   >> 1U)
                                                : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
        bufp->chgIData(oldp+777,(((((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                     >> 0x1fU) ? (~ (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                             >> 0x17U)))
                                     : (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                >> 0x17U))) 
                                   + (1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr) 
                                            ^ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                               >> 0x1fU)))) 
                                  | ((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))),32);
        bufp->chgIData(oldp+778,(((((0xfU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                                    ? 0x80000000U : 0U) 
                                  | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                      ? 0U : 0x7fffffffU))),32);
        bufp->chgIData(oldp+779,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                   : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
        bufp->chgIData(oldp+780,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                   : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
        bufp->chgBit(oldp+781,((((0U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                     == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                  : ((1U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                         != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                      : ((4U == (7U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_LTS_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? VL_GTES_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  < vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                  : 
                                                 (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
                                & ((0x33U != (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
                                             (0x7fU 
                                              & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x23U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins)) 
                                               & (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgIData(oldp+782,((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0)) 
                                   & ((0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_ins 
                                                   >> 7U))))
                                   ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result
                                   : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1)),32);
        bufp->chgBit(oldp+783,(((0U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU)))
                                 ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                    == vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                 : ((1U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)))
                                     ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                        != vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                     : ((4U == (7U 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                         ? VL_LTS_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                             ? VL_GTES_III(32, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                 : 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
        bufp->chgIData(oldp+784,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+785,(((~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
        bufp->chgCData(oldp+786,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3)
                                   ? 1U : ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7)
                                            ? 2U : (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+787,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+788,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgBit(oldp+789,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+790,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+791,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+792,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+793,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+794,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+795,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+796,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+797,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+798,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__we_o));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+799,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [0U][0U]),32);
        bufp->chgIData(oldp+800,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [0U][1U]),32);
        bufp->chgIData(oldp+801,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [0U][2U]),32);
        bufp->chgIData(oldp+802,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [0U][3U]),32);
        bufp->chgIData(oldp+803,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [1U][0U]),32);
        bufp->chgIData(oldp+804,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [1U][1U]),32);
        bufp->chgIData(oldp+805,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [1U][2U]),32);
        bufp->chgIData(oldp+806,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__result
                                 [1U][3U]),32);
        bufp->chgIData(oldp+807,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][0U]),32);
        bufp->chgIData(oldp+808,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][1U]),32);
        bufp->chgIData(oldp+809,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][2U]),32);
        bufp->chgIData(oldp+810,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][3U]),32);
        bufp->chgIData(oldp+811,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][0U]),32);
        bufp->chgIData(oldp+812,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][1U]),32);
        bufp->chgIData(oldp+813,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][2U]),32);
        bufp->chgIData(oldp+814,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][3U]),32);
        bufp->chgIData(oldp+815,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][0U]),32);
        bufp->chgIData(oldp+816,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][1U]),32);
        bufp->chgIData(oldp+817,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][2U]),32);
        bufp->chgIData(oldp+818,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][3U]),32);
        bufp->chgIData(oldp+819,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][0U]),32);
        bufp->chgIData(oldp+820,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][1U]),32);
        bufp->chgIData(oldp+821,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][2U]),32);
        bufp->chgIData(oldp+822,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][3U]),32);
        bufp->chgIData(oldp+823,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][0U]),32);
        bufp->chgIData(oldp+824,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][1U]),32);
        bufp->chgIData(oldp+825,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][2U]),32);
        bufp->chgIData(oldp+826,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][3U]),32);
        bufp->chgIData(oldp+827,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][0U]),32);
        bufp->chgIData(oldp+828,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][1U]),32);
        bufp->chgIData(oldp+829,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][2U]),32);
        bufp->chgIData(oldp+830,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][3U]),32);
        bufp->chgIData(oldp+831,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][0U]),32);
        bufp->chgIData(oldp+832,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][1U]),32);
        bufp->chgIData(oldp+833,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][2U]),32);
        bufp->chgIData(oldp+834,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][3U]),32);
        bufp->chgIData(oldp+835,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][0U]),32);
        bufp->chgIData(oldp+836,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][1U]),32);
        bufp->chgIData(oldp+837,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][2U]),32);
        bufp->chgIData(oldp+838,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][3U]),32);
        bufp->chgIData(oldp+839,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][0U]),32);
        bufp->chgIData(oldp+840,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][1U]),32);
        bufp->chgIData(oldp+841,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][2U]),32);
        bufp->chgIData(oldp+842,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][3U]),32);
        bufp->chgIData(oldp+843,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][0U]),32);
        bufp->chgIData(oldp+844,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][1U]),32);
        bufp->chgIData(oldp+845,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][2U]),32);
        bufp->chgIData(oldp+846,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][3U]),32);
        bufp->chgIData(oldp+847,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][0U]),32);
        bufp->chgIData(oldp+848,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][1U]),32);
        bufp->chgIData(oldp+849,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][2U]),32);
        bufp->chgIData(oldp+850,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][3U]),32);
        bufp->chgIData(oldp+851,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][0U]),32);
        bufp->chgIData(oldp+852,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][1U]),32);
        bufp->chgIData(oldp+853,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][2U]),32);
        bufp->chgIData(oldp+854,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][3U]),32);
        bufp->chgIData(oldp+855,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decimal_value),32);
        bufp->chgCData(oldp+856,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b),4);
        bufp->chgIData(oldp+857,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0]),32);
        bufp->chgIData(oldp+858,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1]),32);
        bufp->chgIData(oldp+859,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2]),32);
        bufp->chgIData(oldp+860,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3]),32);
        bufp->chgIData(oldp+861,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+862,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+863,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+864,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+865,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+866,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+867,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+868,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+869,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+870,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+871,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+872,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+873,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+874,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+875,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+876,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+877,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][0U]),32);
        bufp->chgIData(oldp+878,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][1U]),32);
        bufp->chgIData(oldp+879,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][2U]),32);
        bufp->chgIData(oldp+880,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][3U]),32);
        bufp->chgIData(oldp+881,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][0U]),32);
        bufp->chgIData(oldp+882,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][1U]),32);
        bufp->chgIData(oldp+883,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][2U]),32);
        bufp->chgIData(oldp+884,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][3U]),32);
        bufp->chgIData(oldp+885,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][0U]),32);
        bufp->chgIData(oldp+886,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][1U]),32);
        bufp->chgIData(oldp+887,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][2U]),32);
        bufp->chgIData(oldp+888,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][3U]),32);
        bufp->chgIData(oldp+889,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][0U]),32);
        bufp->chgIData(oldp+890,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][1U]),32);
        bufp->chgIData(oldp+891,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][2U]),32);
        bufp->chgIData(oldp+892,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][3U]),32);
        bufp->chgIData(oldp+893,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[0]),32);
        bufp->chgIData(oldp+894,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[1]),32);
        bufp->chgIData(oldp+895,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[2]),32);
        bufp->chgIData(oldp+896,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[3]),32);
        bufp->chgIData(oldp+897,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[0]),32);
        bufp->chgIData(oldp+898,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[1]),32);
        bufp->chgIData(oldp+899,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[2]),32);
        bufp->chgIData(oldp+900,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[3]),32);
        bufp->chgIData(oldp+901,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[0]),32);
        bufp->chgIData(oldp+902,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[1]),32);
        bufp->chgIData(oldp+903,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[2]),32);
        bufp->chgIData(oldp+904,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[3]),32);
        bufp->chgIData(oldp+905,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][0U]),32);
        bufp->chgIData(oldp+906,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][1U]),32);
        bufp->chgIData(oldp+907,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][2U]),32);
        bufp->chgIData(oldp+908,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][3U]),32);
        bufp->chgIData(oldp+909,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][0U]),32);
        bufp->chgIData(oldp+910,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][1U]),32);
        bufp->chgIData(oldp+911,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][2U]),32);
        bufp->chgIData(oldp+912,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][3U]),32);
        bufp->chgIData(oldp+913,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[0]),32);
        bufp->chgIData(oldp+914,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[1]),32);
        bufp->chgIData(oldp+915,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[2]),32);
        bufp->chgIData(oldp+916,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[3]),32);
        bufp->chgIData(oldp+917,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
        bufp->chgIData(oldp+918,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
        bufp->chgIData(oldp+919,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
        bufp->chgIData(oldp+920,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
        bufp->chgIData(oldp+921,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+922,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+923,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+924,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+925,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
        bufp->chgIData(oldp+926,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
        bufp->chgIData(oldp+927,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
        bufp->chgIData(oldp+928,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
        bufp->chgIData(oldp+929,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+930,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+931,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+932,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+933,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
        bufp->chgIData(oldp+934,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
        bufp->chgIData(oldp+935,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
        bufp->chgIData(oldp+936,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
        bufp->chgIData(oldp+937,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+938,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+939,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+940,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+941,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
        bufp->chgIData(oldp+942,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
        bufp->chgIData(oldp+943,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
        bufp->chgIData(oldp+944,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
        bufp->chgIData(oldp+945,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+946,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+947,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+948,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+949,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
        bufp->chgIData(oldp+950,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
        bufp->chgIData(oldp+951,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
        bufp->chgIData(oldp+952,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
        bufp->chgIData(oldp+953,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+954,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+955,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+956,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+957,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
        bufp->chgIData(oldp+958,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
        bufp->chgIData(oldp+959,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
        bufp->chgIData(oldp+960,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
        bufp->chgIData(oldp+961,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+962,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+963,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+964,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+965,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][0U]),32);
        bufp->chgIData(oldp+966,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][1U]),32);
        bufp->chgIData(oldp+967,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][2U]),32);
        bufp->chgIData(oldp+968,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][3U]),32);
        bufp->chgIData(oldp+969,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][0U]),32);
        bufp->chgIData(oldp+970,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][1U]),32);
        bufp->chgIData(oldp+971,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][2U]),32);
        bufp->chgIData(oldp+972,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][3U]),32);
        bufp->chgIData(oldp+973,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][0U]),32);
        bufp->chgIData(oldp+974,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][1U]),32);
        bufp->chgIData(oldp+975,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][2U]),32);
        bufp->chgIData(oldp+976,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][3U]),32);
        bufp->chgIData(oldp+977,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][0U]),32);
        bufp->chgIData(oldp+978,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][1U]),32);
        bufp->chgIData(oldp+979,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][2U]),32);
        bufp->chgIData(oldp+980,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][3U]),32);
        bufp->chgIData(oldp+981,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[0]),32);
        bufp->chgIData(oldp+982,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[1]),32);
        bufp->chgIData(oldp+983,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[2]),32);
        bufp->chgIData(oldp+984,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[3]),32);
        bufp->chgIData(oldp+985,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[0]),32);
        bufp->chgIData(oldp+986,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[1]),32);
        bufp->chgIData(oldp+987,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[2]),32);
        bufp->chgIData(oldp+988,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[3]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+989,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        bufp->chgIData(oldp+990,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction),32);
        bufp->chgBit(oldp+991,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_stall));
        bufp->chgIData(oldp+992,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result),32);
        bufp->chgIData(oldp+993,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData1),32);
        bufp->chgIData(oldp+994,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData2),32);
        bufp->chgBit(oldp+995,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush));
        bufp->chgBit(oldp+996,((1U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5))));
        bufp->chgBit(oldp+997,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 1U))));
        bufp->chgBit(oldp+998,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 2U))));
        bufp->chgBit(oldp+999,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 3U))));
        bufp->chgBit(oldp+1000,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                       >> 4U))));
        bufp->chgIData(oldp+1001,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1),32);
        bufp->chgIData(oldp+1002,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in),32);
        bufp->chgIData(oldp+1003,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_readData),32);
        bufp->chgIData(oldp+1004,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT___npc_T_2),32);
        bufp->chgBit(oldp+1005,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__pc_io_halt));
        bufp->chgCData(oldp+1006,((7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1007,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7),7);
        bufp->chgBit(oldp+1008,((((1U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7)) 
                                  & ((4U == (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                   >> 0xcU))) 
                                     | ((5U == (7U 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                   >> 0xcU))) 
                                        | ((6U == (7U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                      >> 0xcU))) 
                                           | (7U == 
                                              (7U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction 
                                                >> 0xcU))))))) 
                                 | ((0xcU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7)) 
                                    | (0x2cU == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__func7))))));
        bufp->chgIData(oldp+1009,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        bufp->chgIData(oldp+1010,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
        bufp->chgIData(oldp+1012,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2),32);
        bufp->chgIData(oldp+1014,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out),32);
        bufp->chgQData(oldp+1015,((((QData)((IData)(
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                     >> 0x1fU))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))))),33);
        bufp->chgQData(oldp+1017,((((QData)((IData)(
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                     >> 0x1fU))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14))))),33);
        bufp->chgQData(oldp+1019,((((QData)((IData)(
                                                    (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                     >> 0x1fU))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2))))),33);
        bufp->chgQData(oldp+1021,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+1023,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+1025,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgBit(oldp+1027,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt));
        bufp->chgBit(oldp+1028,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq));
        bufp->chgBit(oldp+1029,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt));
        bufp->chgIData(oldp+1030,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out),32);
        bufp->chgCData(oldp+1031,((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
                                    << 2U) | ((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                                & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                               << 1U) 
                                              | ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                                 & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))))),3);
        bufp->chgQData(oldp+1032,((((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+1034,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))),5);
        bufp->chgCData(oldp+1035,((0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1036,((0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)),23);
        bufp->chgBit(oldp+1037,((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1038,((0U == (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
        bufp->chgCData(oldp+1039,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist),5);
        bufp->chgSData(oldp+1040,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),9);
        bufp->chgBit(oldp+1041,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1042,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN));
        bufp->chgCData(oldp+1043,((0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1044,((0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1)),23);
        bufp->chgBit(oldp+1045,((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1046,((0U == (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
        bufp->chgCData(oldp+1047,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1),5);
        bufp->chgSData(oldp+1048,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),9);
        bufp->chgBit(oldp+1049,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1050,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
        bufp->chgSData(oldp+1051,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1052,((0U == (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1053,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1054,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1055,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf));
        bufp->chgBit(oldp+1056,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1057,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1058,((((0U != (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1059,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1060,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1061,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1062,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              - (IData)(0x81U))) 
                                            | (((IData)(
                                                        (0x1c0U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf))
                                                ? 0xffU
                                                : 0U)))),8);
        bufp->chgIData(oldp+1063,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                 ? 
                                                (0xffffffU 
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
                                                 : 
                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1064,(((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    << 0x1fU) | ((0x7f800000U 
                                                  & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                 | (0x7fffffU 
                                                    & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 
                                                       (0xffffffU 
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
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf)
                                                         ? 0U
                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+1065,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1066,((0U == (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1067,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1068,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1069,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf));
        bufp->chgBit(oldp+1070,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1071,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1072,((((0U != (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1073,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1074,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1075,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1076,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              - (IData)(0x81U))) 
                                            | (((IData)(
                                                        (0x1c0U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf))
                                                ? 0xffU
                                                : 0U)))),8);
        bufp->chgIData(oldp+1077,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                 ? 
                                                (0xffffffU 
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
                                                 : 
                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1078,(((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    << 0x1fU) | ((0x7f800000U 
                                                  & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                 | (0x7fffffU 
                                                    & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 
                                                       (0xffffffU 
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
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf)
                                                         ? 0U
                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+1079,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1080,((0U == (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1081,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1082,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1083,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf));
        bufp->chgBit(oldp+1084,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1085,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1086,((((0U != (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1087,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1088,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1089,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1090,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              - (IData)(0x81U))) 
                                            | (((IData)(
                                                        (0x1c0U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf))
                                                ? 0xffU
                                                : 0U)))),8);
        bufp->chgIData(oldp+1091,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                 ? 
                                                (0xffffffU 
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
                                                 : 
                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1092,(((((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                     & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    << 0x1fU) | ((0x7f800000U 
                                                  & (((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
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
                                                 | (0x7fffffU 
                                                    & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                        ? 
                                                       (0xffffffU 
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
                                                        : 
                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf)
                                                         ? 0U
                                                         : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))))),32);
        bufp->chgSData(oldp+1093,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1094,((0U == (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1095,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1096,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1097,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf));
        bufp->chgBit(oldp+1098,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1099,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1100,((((0U != (7U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1101,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1102,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1103,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1104,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                : 0U)))),8);
        bufp->chgIData(oldp+1105,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                 ? 
                                                (0xffffffU 
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
                                                 : 
                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf)
                                                  ? 0U
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1106,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4),32);
        bufp->chgBit(oldp+1107,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1108,((0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1109,((0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2)),23);
        bufp->chgBit(oldp+1110,((0U == (0xffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1111,((0U == (0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2))));
        bufp->chgCData(oldp+1112,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist),5);
        bufp->chgIData(oldp+1113,((0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                 << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                                << 1U))),23);
        bufp->chgSData(oldp+1114,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),9);
        bufp->chgBit(oldp+1115,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero));
        bufp->chgBit(oldp+1116,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1117,((IData)(((0x180U == 
                                          (0x180U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp))) 
                                         & (0U != (0x7fffffU 
                                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2))))));
        bufp->chgSData(oldp+1118,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),10);
        bufp->chgIData(oldp+1119,(((0x800000U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2)),25);
        bufp->chgBit(oldp+1120,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1121,((0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                 << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                                << 1U))),23);
        bufp->chgBit(oldp+1122,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1));
        bufp->chgSData(oldp+1123,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),10);
        bufp->chgIData(oldp+1124,(((0x800000U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6)),25);
        bufp->chgBit(oldp+1125,((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1126,((0x7ffffeU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                 << (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                                << 1U))),23);
        bufp->chgBit(oldp+1127,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3));
        bufp->chgSData(oldp+1128,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),10);
        bufp->chgIData(oldp+1129,(((0x800000U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14)),25);
        bufp->chgSData(oldp+1130,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),9);
        bufp->chgBit(oldp+1131,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
        bufp->chgBit(oldp+1132,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                              >> 1U)))));
        bufp->chgBit(oldp+1133,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        bufp->chgBit(oldp+1134,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgSData(oldp+1135,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),10);
        bufp->chgIData(oldp+1136,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),25);
        bufp->chgBit(oldp+1137,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN));
        bufp->chgBit(oldp+1138,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
        bufp->chgBit(oldp+1139,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
        bufp->chgIData(oldp+1140,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig),25);
        bufp->chgBit(oldp+1141,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
        bufp->chgBit(oldp+1142,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1143,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))));
        bufp->chgSData(oldp+1144,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),10);
        bufp->chgIData(oldp+1145,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig),25);
        bufp->chgBit(oldp+1146,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1147,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN));
        bufp->chgBit(oldp+1148,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1149,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1150,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1151,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1152,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgSData(oldp+1153,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),9);
        bufp->chgBit(oldp+1154,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                              >> 1U)))));
        bufp->chgBit(oldp+1155,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
        bufp->chgBit(oldp+1156,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns));
        bufp->chgSData(oldp+1157,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps),10);
        bufp->chgCData(oldp+1158,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist),5);
        bufp->chgBit(oldp+1159,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign));
        bufp->chgCData(oldp+1160,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist),5);
        bufp->chgBit(oldp+1161,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags));
        bufp->chgIData(oldp+1162,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum),27);
        bufp->chgIData(oldp+1163,((0x3ffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)),26);
        bufp->chgBit(oldp+1164,((0U != (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))));
        bufp->chgBit(oldp+1165,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 2U)))));
        bufp->chgBit(oldp+1166,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 4U)))));
        bufp->chgBit(oldp+1167,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 6U)))));
        bufp->chgBit(oldp+1168,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 8U)))));
        bufp->chgBit(oldp+1169,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+1170,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1171,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+1172,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+1173,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1174,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+1175,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+1176,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x18U)))));
        bufp->chgCData(oldp+1177,(((((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0xaU))) 
                                     << 5U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                     >> 8U))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 6U))) 
                                                  << 3U))) 
                                   | (((0U != (3U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 4U))) 
                                       << 2U) | (((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)))))),6);
        bufp->chgSData(oldp+1178,(((((((0U != (3U & 
                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 0x18U))) 
                                       << 0xcU) | (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                        >> 0x16U))) 
                                                   << 0xbU)) 
                                     | (((0U != (3U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                    >> 0x14U))) 
                                         << 0xaU) | 
                                        ((0U != (3U 
                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                    >> 0x12U))) 
                                         << 9U))) | 
                                    (((0U != (3U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                               >> 0x10U))) 
                                      << 8U) | (((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 0xeU))) 
                                                 << 7U) 
                                                | ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                        >> 0xcU))) 
                                                   << 6U)))) 
                                   | ((((0U != (3U 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0xaU))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                        >> 8U))) 
                                                   << 4U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                          >> 6U))) 
                                                     << 3U))) 
                                      | (((0U != (3U 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                     >> 4U))) 
                                          << 2U) | 
                                         (((0U != (3U 
                                                   & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 2U))) 
                                           << 1U) | 
                                          (0U != (3U 
                                                  & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))))))),13);
        bufp->chgCData(oldp+1179,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2),4);
        bufp->chgCData(oldp+1180,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                                   << 1U)),5);
        bufp->chgIData(oldp+1181,((0x7fffffeU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                                 << 1U))),27);
        bufp->chgBit(oldp+1182,((1U & (~ (0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                                            >> 0x18U))))))));
        bufp->chgBit(oldp+1183,((1U & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                        >> 0x1fU) ^ 
                                       VL_GTS_III(27, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))));
        bufp->chgBit(oldp+1184,((1U & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                        ? (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                                        : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                           >> 0x1fU)))));
        bufp->chgIData(oldp+1185,((0xffffffU & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                                 ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                                 : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig))),24);
        bufp->chgIData(oldp+1186,((0xffffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)),24);
        bufp->chgIData(oldp+1187,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller),29);
        bufp->chgBit(oldp+1188,((0U != (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))));
        bufp->chgBit(oldp+1189,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 2U)))));
        bufp->chgBit(oldp+1190,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 6U)))));
        bufp->chgBit(oldp+1191,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+1192,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+1193,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0x12U)))));
        bufp->chgBit(oldp+1194,((0U != (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                              >> 0x16U)))));
        bufp->chgCData(oldp+1195,((((((0U != (3U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                               >> 0x16U))) 
                                      << 6U) | ((0U 
                                                 != 
                                                 (0xfU 
                                                  & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                     >> 0x12U))) 
                                                << 5U)) 
                                    | (((0U != (0xfU 
                                                & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                   >> 0xeU))) 
                                        << 4U) | ((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                       >> 0xaU))) 
                                                  << 3U))) 
                                   | (((0U != (0xfU 
                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                  >> 6U))) 
                                       << 2U) | (((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)))))),7);
        bufp->chgSData(oldp+1196,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                               >> 2U))))),9);
        bufp->chgCData(oldp+1197,(((((0x40U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                  >> 2U))) 
                                               << 5U)) 
                                     | (0x20U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                    >> 2U))) 
                                                 << 3U))) 
                                    | ((0x10U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                    >> 2U))) 
                                                 << 1U)) 
                                       | (8U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                   >> 2U))) 
                                                >> 1U)))) 
                                   | ((4U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                >> 2U))) 
                                             >> 3U)) 
                                      | ((2U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                   >> 2U))) 
                                                >> 5U)) 
                                         | (1U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                                     >> 2U))) 
                                                  >> 7U)))))),7);
        bufp->chgIData(oldp+1198,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller),27);
        bufp->chgIData(oldp+1199,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                                    : (0x8000000U | 
                                       (0x7ffffffU 
                                        & (~ vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))),28);
        bufp->chgIData(oldp+1200,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum),28);
        bufp->chgIData(oldp+1201,((0x7ffffffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                                  ? 
                                                 (0x7ffffffU 
                                                  & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                                      >> 1U) 
                                                     | (1U 
                                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum))),27);
        bufp->chgBit(oldp+1202,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                 & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+1203,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros));
        bufp->chgBit(oldp+1204,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))));
        bufp->chgBit(oldp+1205,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1206,((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1207,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1208,((0xffU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1209,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1210,((0x7fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1211,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1212,((0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, 
                       (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_8[0U] = __Vtemp_7[0U];
        __Vtemp_8[1U] = __Vtemp_7[1U];
        __Vtemp_8[2U] = (1U & __Vtemp_7[2U]);
        bufp->chgWData(oldp+1213,(__Vtemp_8),65);
        bufp->chgIData(oldp+1216,((3U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1217,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1218,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1219,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1220,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1221,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1222,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1223,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1224,((0x1ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1225,((0x7fffffU & ((0x4000000U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                 ? 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1226,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1227,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1228,((1U & ((0x4000000U 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                           >> 2U) : 
                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 1U)))));
        bufp->chgBit(oldp+1229,((IData)(((0U != (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+1230,((1U & ((0x4000000U 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1231,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1232,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1233,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1234,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1235,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1236,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1237,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1238,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1239,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1240,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+1241,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),25);
        bufp->chgBit(oldp+1242,((1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)))));
        bufp->chgBit(oldp+1243,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
        bufp->chgBit(oldp+1244,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps));
        bufp->chgBit(oldp+1245,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags));
        bufp->chgBit(oldp+1246,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags));
        bufp->chgBit(oldp+1247,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
        bufp->chgBit(oldp+1248,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
        bufp->chgBit(oldp+1249,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div));
        bufp->chgBit(oldp+1250,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
        bufp->chgBit(oldp+1251,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S));
        bufp->chgBit(oldp+1252,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                    | (0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))));
        bufp->chgBit(oldp+1253,((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                       & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                             | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)))))))));
        bufp->chgBit(oldp+1254,((1U & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                       & (~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+1255,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S));
        bufp->chgSData(oldp+1256,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div),11);
        bufp->chgSData(oldp+1257,((((VL_LTES_III(11, 0x1c0U, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))
                                      ? 6U : (0xfU 
                                              & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div) 
                                                 >> 6U))) 
                                    << 6U) | (0x3fU 
                                              & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div)))),10);
        bufp->chgBit(oldp+1258,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
        bufp->chgIData(oldp+1259,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem),27);
        bufp->chgIData(oldp+1260,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem),29);
        bufp->chgBit(oldp+1261,(VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)));
        bufp->chgIData(oldp+1262,((0x3ffffffU & (VL_LTES_III(29, 0U, vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                                                  ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem
                                                  : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem))),26);
        bufp->chgBit(oldp+1263,((1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)))));
        bufp->chgCData(oldp+1264,((0x40U | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))),8);
        bufp->chgQData(oldp+1265,((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig))),33);
        bufp->chgIData(oldp+1267,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+1268,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgIData(oldp+1269,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig),32);
        bufp->chgSData(oldp+1270,((0x1ffU & ((IData)(0xc0U) 
                                             + (0x3ffU 
                                                & VL_EXTENDS_II(10,9, 
                                                                (0x40U 
                                                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))),10);
        bufp->chgIData(oldp+1271,(((0x7fffffeU & ((IData)(
                                                          ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                           >> 7U)) 
                                                  << 1U)) 
                                   | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra))),27);
        bufp->chgBit(oldp+1272,((0U != (1U & (IData)(
                                                     ((QData)((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                      >> 7U))))));
        bufp->chgBit(oldp+1273,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1274,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1275,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1276,((0x7ffU & (VL_EXTENDS_II(11,10, 
                                                           (0x1ffU 
                                                            & ((IData)(0xc0U) 
                                                               + 
                                                               (0x3ffU 
                                                                & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))) 
                                             + VL_EXTENDS_II(11,10, 
                                                             (3U 
                                                              & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                 >> 0x18U)))))),11);
        bufp->chgSData(oldp+1277,((0x1ffU & ((0x7ffU 
                                              & VL_EXTENDS_II(11,10, 
                                                              (0x1ffU 
                                                               & ((IData)(0xc0U) 
                                                                  + 
                                                                  (0x3ffU 
                                                                   & VL_EXTENDS_II(10,9, 
                                                                                (0x40U 
                                                                                | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1)))))))) 
                                             + (0x7ffU 
                                                & VL_EXTENDS_II(11,10, 
                                                                (3U 
                                                                 & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                    >> 0x18U))))))),9);
        bufp->chgIData(oldp+1278,((0x7fffffU & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        bufp->chgBit(oldp+1279,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1280,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgIData(oldp+1281,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+1282,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),24);
        bufp->chgIData(oldp+1283,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),24);
        bufp->chgQData(oldp+1284,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1286,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                    | ((~ (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                           >> 0x16U)) 
                                       & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))))));
        bufp->chgBit(oldp+1287,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgBit(oldp+1288,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN));
        bufp->chgBit(oldp+1289,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
        bufp->chgBit(oldp+1290,((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3))));
        bufp->chgSData(oldp+1291,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum),10);
        bufp->chgBit(oldp+1292,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags));
        bufp->chgBit(oldp+1293,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant));
        bufp->chgCData(oldp+1294,((0x1fU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1295,((0x3ffffffU & ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1296,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1297,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
        bufp->chgBit(oldp+1299,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1300,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))));
        bufp->chgBit(oldp+1301,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut));
        bufp->chgBit(oldp+1302,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1303,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1304,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1305,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgBit(oldp+1306,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
        bufp->chgWData(oldp+1307,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        bufp->chgSData(oldp+1310,((0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                             - (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))),10);
        bufp->chgQData(oldp+1311,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        bufp->chgBit(oldp+1313,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                  ? (0U != (0xffffffU 
                                            & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                  : (0U != (0x1ffffffU 
                                            & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))));
        bufp->chgIData(oldp+1314,((0x1fffffffU & ((
                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                     >> 0x15U)))),29);
        bufp->chgBit(oldp+1315,((1U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
        bufp->chgBit(oldp+1316,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 1U))))));
        bufp->chgBit(oldp+1317,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 5U))))));
        bufp->chgBit(oldp+1318,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 9U))))));
        bufp->chgBit(oldp+1319,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 0xdU))))));
        bufp->chgBit(oldp+1320,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 0x11U))))));
        bufp->chgBit(oldp+1321,((0U != (7U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                      >> 0x15U))))));
        bufp->chgSData(oldp+1322,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgBit(oldp+1323,((0U != ((((((0U != 
                                             (7U & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                            >> 0x15U)))) 
                                            << 6U) 
                                           | ((0U != 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                           >> 0x11U)))) 
                                              << 5U)) 
                                          | (((0U != 
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
                                         | (((0U != 
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
                                           | ((4U & 
                                               (VL_SHIFTRS_III(9,9,3, 0x100U, 
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
                                                       >> 6U)))))))));
        bufp->chgIData(oldp+1324,(((0x7fffffeU & ((
                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                   << 9U) 
                                                  | (0x1feU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                        >> 0x17U)))) 
                                   | ((0U != (7U & 
                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                               >> 0x15U))) 
                                      | ((0U != (((
                                                   (((0U 
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
                                             ? (0U 
                                                != 
                                                (0xffffffU 
                                                 & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                             : (0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))),27);
        bufp->chgBit(oldp+1325,((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                       >> 2U))));
        bufp->chgQData(oldp+1326,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgBit(oldp+1328,((0U != (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        bufp->chgBit(oldp+1329,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 2U))))));
        bufp->chgBit(oldp+1330,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 4U))))));
        bufp->chgBit(oldp+1331,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 6U))))));
        bufp->chgBit(oldp+1332,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 8U))))));
        bufp->chgBit(oldp+1333,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+1334,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+1335,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+1336,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x10U))))));
        bufp->chgBit(oldp+1337,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x12U))))));
        bufp->chgBit(oldp+1338,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x14U))))));
        bufp->chgBit(oldp+1339,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x16U))))));
        bufp->chgBit(oldp+1340,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x18U))))));
        bufp->chgBit(oldp+1341,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1aU))))));
        bufp->chgBit(oldp+1342,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1cU))))));
        bufp->chgBit(oldp+1343,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1eU))))));
        bufp->chgBit(oldp+1344,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x20U))))));
        bufp->chgBit(oldp+1345,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x22U))))));
        bufp->chgBit(oldp+1346,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x24U))))));
        bufp->chgBit(oldp+1347,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x26U))))));
        bufp->chgBit(oldp+1348,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x28U))))));
        bufp->chgBit(oldp+1349,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2aU))))));
        bufp->chgBit(oldp+1350,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2cU))))));
        bufp->chgBit(oldp+1351,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2eU))))));
        bufp->chgBit(oldp+1352,((0U != (3U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+1353,((1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                               >> 0x32U)))));
        bufp->chgCData(oldp+1354,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo),6);
        bufp->chgSData(oldp+1355,((((0U != (3U & (IData)(
                                                         (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 0x18U)))) 
                                    << 0xcU) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5))),13);
        bufp->chgCData(oldp+1356,(((((0U != (3U & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x24U)))) 
                                     << 5U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x22U)))) 
                                                << 4U) 
                                               | ((0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x20U)))) 
                                                  << 3U))) 
                                   | (((0U != (3U & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x1eU)))) 
                                       << 2U) | (((0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x1cU)))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x1aU)))))))),6);
        bufp->chgIData(oldp+1357,(((((((0x2000000U 
                                        & ((IData)(
                                                   (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x32U)) 
                                           << 0x19U)) 
                                       | ((0U != (3U 
                                                  & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x30U)))) 
                                          << 0x18U)) 
                                      | (((0U != (3U 
                                                  & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x2eU)))) 
                                          << 0x17U) 
                                         | ((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                            << 0x16U))) 
                                     | (((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2aU)))) 
                                         << 0x15U) 
                                        | (((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x28U)))) 
                                            << 0x14U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                              << 0x13U)))) 
                                    | ((((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U)))) 
                                         << 0x12U) 
                                        | (((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x22U)))) 
                                            << 0x11U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 0x10U))) 
                                       | (((0U != (3U 
                                                   & (IData)(
                                                             (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x1eU)))) 
                                           << 0xfU) 
                                          | (((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x1cU)))) 
                                              << 0xeU) 
                                             | ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x1aU)))) 
                                                << 0xdU))))) 
                                   | (((0U != (3U & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x18U)))) 
                                       << 0xcU) | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5)))),26);
        bufp->chgCData(oldp+1358,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgCData(oldp+1359,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                   << 1U)),6);
        bufp->chgSData(oldp+1360,((0x3ffU & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                             - ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                << 1U)))),10);
        bufp->chgIData(oldp+1361,((0x1fffffffU & ((
                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                     >> 0x17U)))),29);
        bufp->chgBit(oldp+1362,((0U != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))));
        bufp->chgBit(oldp+1363,((0U != (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                              >> 2U)))));
        bufp->chgBit(oldp+1364,((0U != (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                              >> 4U)))));
        bufp->chgBit(oldp+1365,((0U != (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1366,((0U != (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                              >> 8U)))));
        bufp->chgBit(oldp+1367,((0U != (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                              >> 0xaU)))));
        bufp->chgIData(oldp+1368,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1369,((0U != ((((((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x18U)))) 
                                            << 6U) 
                                           | ((0U != 
                                               (3U 
                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                   >> 0xaU))) 
                                              << 5U)) 
                                          | (((0U != 
                                               (3U 
                                                & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                   >> 8U))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                     >> 6U))) 
                                                << 3U))) 
                                         | (((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                                >> 4U))) 
                                             << 2U) 
                                            | (((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                     >> 2U))) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                        & (((0x20U 
                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                << 4U)) 
                                            | ((0x10U 
                                                & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   << 2U)) 
                                               | (8U 
                                                  & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                   (0xfU 
                                                                    & (~ 
                                                                       ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                        >> 1U))))))) 
                                           | ((4U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                              | ((2U 
                                                  & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
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
                                                       >> 6U)))))))));
        bufp->chgIData(oldp+1370,(((0x7fffffeU & ((
                                                   vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                   << 7U) 
                                                  | (0x7eU 
                                                     & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                        >> 0x19U)))) 
                                   | (IData)(((0U != 
                                               (0x3800000U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U])) 
                                              | (0U 
                                                 != 
                                                 ((((((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x18U)))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                             >> 0xaU))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                                             >> 8U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                                               >> 6U))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                                            >> 4U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                                               >> 2U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                         (0xfU 
                                                                          & (~ 
                                                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                              >> 1U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                                >> 1U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                                >> 1U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                           (0xfU 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                                >> 1U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
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
                                                                 >> 6U))))))))))),27);
        bufp->chgBit(oldp+1371,((0U == (3U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1372,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgSData(oldp+1373,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),9);
        bufp->chgBit(oldp+1374,((3U == (3U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
                                              >> 1U)))));
        bufp->chgSData(oldp+1375,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),10);
        bufp->chgIData(oldp+1376,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig),25);
        bufp->chgSData(oldp+1377,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd),11);
        bufp->chgSData(oldp+1378,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist),11);
        bufp->chgSData(oldp+1379,((0x3ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))),10);
        bufp->chgBit(oldp+1380,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign));
        bufp->chgCData(oldp+1381,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1382,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgBit(oldp+1385,((0U != (3U & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))));
        bufp->chgBit(oldp+1386,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 2U)))));
        bufp->chgBit(oldp+1387,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 6U)))));
        bufp->chgBit(oldp+1388,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+1389,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+1390,((0U != (0xfU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0x12U)))));
        bufp->chgBit(oldp+1391,((0U != (7U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                              >> 0x16U)))));
        bufp->chgQData(oldp+1392,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgBit(oldp+1394,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra));
        __Vtemp_11[0U] = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                           << 0x1dU) | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                        >> 3U));
        __Vtemp_11[1U] = ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                           << 0x1dU) | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                        >> 3U));
        __Vtemp_11[2U] = (0x7ffU & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                    >> 3U));
        bufp->chgWData(oldp+1395,(__Vtemp_11),75);
        __Vtemp_15[0U] = (((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U))) 
                          | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        __Vtemp_15[1U] = ((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                 >> 2U)) | ((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U))));
        __Vtemp_15[2U] = ((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                 >> 2U)) | (0xffeU 
                                            & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                               >> 2U)));
        bufp->chgWData(oldp+1398,(__Vtemp_15),76);
        bufp->chgBit(oldp+1401,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1402,((1U & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1403,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1404,((0xffU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1405,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1406,((0x7fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1407,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1408,((0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_17[0U] = 0U;
        __Vtemp_17[1U] = 0U;
        __Vtemp_17[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_18, __Vtemp_17, 
                       (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_19[0U] = __Vtemp_18[0U];
        __Vtemp_19[1U] = __Vtemp_18[1U];
        __Vtemp_19[2U] = (1U & __Vtemp_18[2U]);
        bufp->chgWData(oldp+1409,(__Vtemp_19),65);
        bufp->chgIData(oldp+1412,((3U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1413,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1414,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1415,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1416,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1417,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1418,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1419,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1420,((0x1ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1421,((0x7fffffU & ((0x4000000U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                 ? 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1422,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1423,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1424,((1U & ((0x4000000U 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                           >> 2U) : 
                                       (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 1U)))));
        bufp->chgBit(oldp+1425,((IData)(((0U != (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+1426,((1U & ((0x4000000U 
                                        & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1427,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1428,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1429,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1430,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1431,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1432,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1433,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1434,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1435,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1436,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+1437,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1438,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1439,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1440,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1441,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgQData(oldp+1442,((0xffffffffffffULL 
                                   & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T)),48);
        bufp->chgBit(oldp+1444,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                                 | ((0U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+1445,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1446,((1U & (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1447,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1448,((0xffU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1449,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1450,((0x7fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1451,((1U & (~ ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1452,((0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_21[0U] = 0U;
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_22, __Vtemp_21, 
                       (0x3fU & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_23[0U] = __Vtemp_22[0U];
        __Vtemp_23[1U] = __Vtemp_22[1U];
        __Vtemp_23[2U] = (1U & __Vtemp_22[2U]);
        bufp->chgWData(oldp+1453,(__Vtemp_23),65);
        bufp->chgIData(oldp+1456,((3U | (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1457,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1458,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1459,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1460,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1461,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1462,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1463,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1464,((0x1ffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1465,((0x7fffffU & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                            >> 0x2fU)))
                                                 ? 
                                                (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1466,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1467,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1468,((1U & ((1U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                      >> 0x2fU)))
                                        ? (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x17U))
                                        : (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+1469,((IData)(((0U != (3U 
                                                 & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x800000800000ULL 
                                            == (0x800000800000ULL 
                                                & vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))))));
        bufp->chgBit(oldp+1470,((1U & ((1U & (IData)(
                                                     (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                      >> 0x2fU)))
                                        ? (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1471,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1472,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1473,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1474,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1475,(((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1476,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1477,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1478,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1479,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1480,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+1481,((1U & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                       >> 2U))));
        bufp->chgCData(oldp+1482,((0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))),8);
        bufp->chgBit(oldp+1483,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne));
        bufp->chgQData(oldp+1484,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig),55);
        bufp->chgQData(oldp+1486,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig),34);
        bufp->chgIData(oldp+1488,((IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                           >> 0x17U))),32);
        bufp->chgBit(oldp+1489,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact));
        bufp->chgBit(oldp+1490,(((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                   >> 2U) & ((3U == 
                                              (3U & (IData)(
                                                            (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                             >> 0x16U)))) 
                                             | (3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                                 | ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                                    & (0U != (3U & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))));
        bufp->chgBit(oldp+1491,((1U & ((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                         >> 2U) & (IData)(
                                                          (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                           >> 0x16U))) 
                                       | (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))));
        bufp->chgBit(oldp+1492,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr));
        bufp->chgIData(oldp+1493,(((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                    >> 0x1fU) ? (~ (IData)(
                                                           (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                            >> 0x17U)))
                                    : (IData)((vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                               >> 0x17U)))),32);
        bufp->chgBit(oldp+1494,((0x1fU == (0xffU & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)))));
        bufp->chgBit(oldp+1495,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2));
        bufp->chgBit(oldp+1496,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow));
        bufp->chgBit(oldp+1497,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc));
        bufp->chgBit(oldp+1498,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                 & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))));
        bufp->chgBit(oldp+1499,(((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                 & ((~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                    & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))));
        bufp->chgBit(oldp+1500,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign));
        bufp->chgQData(oldp+1501,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
        bufp->chgIData(oldp+1503,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),32);
        bufp->chgIData(oldp+1504,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),32);
        bufp->chgIData(oldp+1505,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+1506,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgIData(oldp+1507,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata),32);
        bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1509,(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgBit(oldp+1510,((1U & (~ (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid)))));
        bufp->chgBit(oldp+1511,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_we_i));
    }
    bufp->chgBit(oldp+1512,(vlSelfRef.clock));
    bufp->chgBit(oldp+1513,(vlSelfRef.reset));
    bufp->chgIData(oldp+1514,(vlSelfRef.io_pin),32);
    bufp->chgBit(oldp+1515,(vlSelfRef.io_rvfi_valid_0));
    bufp->chgIData(oldp+1516,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->chgCData(oldp+1517,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->chgCData(oldp+1518,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->chgCData(oldp+1519,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->chgIData(oldp+1520,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->chgIData(oldp+1521,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->chgCData(oldp+1522,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->chgIData(oldp+1523,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->chgIData(oldp+1524,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->chgIData(oldp+1525,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->chgIData(oldp+1526,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->chgCData(oldp+1527,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->chgIData(oldp+1528,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->chgIData(oldp+1529,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->chgBit(oldp+1530,(vlSelfRef.XSoC__DOT__babyKyber__DOT__bkyber_rst_n));
    bufp->chgIData(oldp+1531,(((((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_wra) 
                                 == (vlSelfRef.XSoC__DOT__core__DOT__core__DOT__if_reg_ins 
                                     >> 0x1bU)) & ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
                                                   & (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                                ? vlSelfRef.io_pin : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2)),32);
    bufp->chgIData(oldp+1532,(((6U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data
                                : ((5U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data
                                    : ((4U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                        ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data
                                        : ((3U == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                            ? vlSelfRef.io_pin
                                            : ((2U 
                                                == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                ? ((IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead)
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__ex_reg_result)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result
                                                    : vlSelfRef.XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0))))))),32);
    bufp->chgBit(oldp+1533,(vlSelfRef.XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->chgBit(oldp+1534,(vlSelfRef.XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rvalid));
}

void VXSoC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root__trace_cleanup\n"); );
    // Init
    VXSoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VXSoC___024root*>(voidSelf);
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
