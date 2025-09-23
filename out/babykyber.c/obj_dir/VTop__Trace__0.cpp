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
        bufp->chgBit(oldp+0,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_key_done));
        bufp->chgBit(oldp+1,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done));
        bufp->chgIData(oldp+2,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3]),32);
        bufp->chgBit(oldp+10,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
        bufp->chgIData(oldp+11,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3]),32);
        bufp->chgBit(oldp+51,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
        bufp->chgIData(oldp+52,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+53,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+54,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+55,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+56,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
        bufp->chgIData(oldp+57,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+59,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__readyReg));
        bufp->chgBit(oldp+60,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_valid));
        bufp->chgIData(oldp+61,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_bits_addrRequest),32);
        bufp->chgIData(oldp+62,(((IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_valid)
                                  ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                  : 0U)),32);
        bufp->chgCData(oldp+63,(((IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_valid)
                                  ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+64,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_bits_isWrite));
        bufp->chgBit(oldp+65,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__respReg));
        bufp->chgIData(oldp+66,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__dataReg),32);
        bufp->chgBit(oldp+67,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_key_enable));
        bufp->chgBit(oldp+68,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_enable));
        bufp->chgBit(oldp+69,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_enable));
        bufp->chgBit(oldp+70,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done));
        bufp->chgIData(oldp+71,((0xfffffffU & VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__core__DOT__ex_reg_result, 2U))),32);
        bufp->chgIData(oldp+72,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
        bufp->chgCData(oldp+73,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
        bufp->chgBit(oldp+74,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgBit(oldp+75,((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))));
        bufp->chgBit(oldp+76,((1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
        bufp->chgIData(oldp+77,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2),32);
        bufp->chgBit(oldp+78,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
        bufp->chgBit(oldp+79,((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
        bufp->chgCData(oldp+80,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint4_REG),4);
        bufp->chgCData(oldp+81,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_2),5);
        bufp->chgCData(oldp+82,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_2),5);
        bufp->chgCData(oldp+83,(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgIData(oldp+84,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgIData(oldp+85,(vlSelfRef.Top__DOT__core__DOT__REG_1),32);
        bufp->chgIData(oldp+86,(vlSelfRef.Top__DOT__core__DOT__REG_2),32);
        bufp->chgIData(oldp+87,(vlSelfRef.Top__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+88,(vlSelfRef.Top__DOT__core__DOT__REG_6),32);
        bufp->chgBit(oldp+89,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid));
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__cycReg) 
                               & (IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction))));
        bufp->chgBit(oldp+91,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
        bufp->chgIData(oldp+92,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req),32);
        bufp->chgIData(oldp+93,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req),32);
        bufp->chgCData(oldp+94,(((IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                  ? (IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__selReg)
                                  : 0U)),4);
        bufp->chgBit(oldp+95,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack));
        bufp->chgIData(oldp+96,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp),32);
        bufp->chgBit(oldp+97,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__deviceAdapter_io_reqOut_valid));
        bufp->chgBit(oldp+98,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__validReg));
        bufp->chgBit(oldp+99,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req));
        bufp->chgCData(oldp+100,(((IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                   ? (IData)(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__selReg)
                                   : 0U)),8);
        bufp->chgIData(oldp+101,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [0U][0U]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [0U][1U]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [0U][2U]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [0U][3U]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [1U][0U]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [1U][1U]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [1U][2U]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                                 [1U][3U]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [2U][0U]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [2U][1U]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [2U][2U]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [2U][3U]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [3U][0U]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [3U][1U]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [3U][2U]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                                 [3U][3U]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [0U][0U]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [0U][1U]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [0U][2U]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [0U][3U]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [1U][0U]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [1U][1U]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [1U][2U]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                                 [1U][3U]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [0U][0U]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [0U][1U]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [0U][2U]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [0U][3U]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [1U][0U]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [1U][1U]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [1U][2U]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                                 [1U][3U]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [0U][0U]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [0U][1U]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [0U][2U]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [0U][3U]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [1U][0U]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [1U][1U]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [1U][2U]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                                 [1U][3U]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[0]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[1]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[2]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[3]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000),32);
        bufp->chgIData(oldp+162,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001),32);
        bufp->chgIData(oldp+163,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002),32);
        bufp->chgIData(oldp+164,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003),32);
        bufp->chgIData(oldp+165,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010),32);
        bufp->chgIData(oldp+166,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011),32);
        bufp->chgIData(oldp+167,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012),32);
        bufp->chgIData(oldp+168,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013),32);
        bufp->chgIData(oldp+169,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020),32);
        bufp->chgIData(oldp+170,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021),32);
        bufp->chgIData(oldp+171,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022),32);
        bufp->chgIData(oldp+172,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023),32);
        bufp->chgIData(oldp+173,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030),32);
        bufp->chgIData(oldp+174,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031),32);
        bufp->chgIData(oldp+175,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032),32);
        bufp->chgIData(oldp+176,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033),32);
        bufp->chgIData(oldp+177,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00),32);
        bufp->chgIData(oldp+178,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01),32);
        bufp->chgIData(oldp+179,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02),32);
        bufp->chgIData(oldp+180,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03),32);
        bufp->chgIData(oldp+181,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10),32);
        bufp->chgIData(oldp+182,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11),32);
        bufp->chgIData(oldp+183,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12),32);
        bufp->chgIData(oldp+184,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13),32);
        bufp->chgIData(oldp+185,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00),32);
        bufp->chgIData(oldp+186,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01),32);
        bufp->chgIData(oldp+187,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02),32);
        bufp->chgIData(oldp+188,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03),32);
        bufp->chgIData(oldp+189,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10),32);
        bufp->chgIData(oldp+190,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11),32);
        bufp->chgIData(oldp+191,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12),32);
        bufp->chgIData(oldp+192,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13),32);
        bufp->chgIData(oldp+193,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message),32);
        bufp->chgIData(oldp+194,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000),32);
        bufp->chgIData(oldp+195,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001),32);
        bufp->chgIData(oldp+196,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002),32);
        bufp->chgIData(oldp+197,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003),32);
        bufp->chgIData(oldp+198,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010),32);
        bufp->chgIData(oldp+199,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011),32);
        bufp->chgIData(oldp+200,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012),32);
        bufp->chgIData(oldp+201,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013),32);
        bufp->chgIData(oldp+202,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020),32);
        bufp->chgIData(oldp+203,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021),32);
        bufp->chgIData(oldp+204,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022),32);
        bufp->chgIData(oldp+205,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023),32);
        bufp->chgIData(oldp+206,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030),32);
        bufp->chgIData(oldp+207,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031),32);
        bufp->chgIData(oldp+208,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032),32);
        bufp->chgIData(oldp+209,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033),32);
        bufp->chgIData(oldp+210,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100),32);
        bufp->chgIData(oldp+211,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101),32);
        bufp->chgIData(oldp+212,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102),32);
        bufp->chgIData(oldp+213,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103),32);
        bufp->chgIData(oldp+214,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110),32);
        bufp->chgIData(oldp+215,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111),32);
        bufp->chgIData(oldp+216,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112),32);
        bufp->chgIData(oldp+217,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113),32);
        bufp->chgIData(oldp+218,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00),32);
        bufp->chgIData(oldp+219,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01),32);
        bufp->chgIData(oldp+220,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02),32);
        bufp->chgIData(oldp+221,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03),32);
        bufp->chgIData(oldp+222,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10),32);
        bufp->chgIData(oldp+223,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11),32);
        bufp->chgIData(oldp+224,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12),32);
        bufp->chgIData(oldp+225,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13),32);
        bufp->chgIData(oldp+226,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00),32);
        bufp->chgIData(oldp+227,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01),32);
        bufp->chgIData(oldp+228,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02),32);
        bufp->chgIData(oldp+229,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03),32);
        bufp->chgIData(oldp+230,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10),32);
        bufp->chgIData(oldp+231,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11),32);
        bufp->chgIData(oldp+232,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12),32);
        bufp->chgIData(oldp+233,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13),32);
        bufp->chgIData(oldp+234,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0),32);
        bufp->chgIData(oldp+235,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1),32);
        bufp->chgIData(oldp+236,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2),32);
        bufp->chgIData(oldp+237,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3),32);
        bufp->chgIData(oldp+238,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000),32);
        bufp->chgIData(oldp+239,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001),32);
        bufp->chgIData(oldp+240,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002),32);
        bufp->chgIData(oldp+241,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003),32);
        bufp->chgIData(oldp+242,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010),32);
        bufp->chgIData(oldp+243,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011),32);
        bufp->chgIData(oldp+244,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012),32);
        bufp->chgIData(oldp+245,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013),32);
        bufp->chgIData(oldp+246,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100),32);
        bufp->chgIData(oldp+247,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101),32);
        bufp->chgIData(oldp+248,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102),32);
        bufp->chgIData(oldp+249,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103),32);
        bufp->chgIData(oldp+250,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgCData(oldp+258,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients),4);
        bufp->chgIData(oldp+259,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+288,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+289,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+290,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+291,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+310,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+318,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+319,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+320,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+321,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+322,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+323,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+324,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+325,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+326,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+327,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
        bufp->chgIData(oldp+328,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
        bufp->chgIData(oldp+329,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+340,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+341,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+342,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+343,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+344,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+345,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+346,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+347,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i),32);
        bufp->chgBit(oldp+348,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction));
        bufp->chgBit(oldp+349,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__stbReg));
        bufp->chgBit(oldp+350,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__cycReg));
        bufp->chgBit(oldp+351,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__weReg));
        bufp->chgIData(oldp+352,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__datReg),32);
        bufp->chgIData(oldp+353,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__adrReg),32);
        bufp->chgCData(oldp+354,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__selReg),4);
        bufp->chgBit(oldp+355,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__stateReg));
        bufp->chgIData(oldp+356,(vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+357,(vlSelfRef.Top__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+358,(vlSelfRef.Top__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+359,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+360,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+361,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+362,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+363,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                           >> 7U))),5);
        bufp->chgIData(oldp+364,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+365,(vlSelfRef.Top__DOT__core__DOT__id_reg_ins),32);
        bufp->chgIData(oldp+366,(vlSelfRef.Top__DOT__core__DOT__ex_reg_result),32);
        bufp->chgBit(oldp+367,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+368,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0));
        bufp->chgBit(oldp+369,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+370,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+371,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+372,(vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+373,(vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+374,(vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgBit(oldp+375,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall));
        bufp->chgIData(oldp+376,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),32);
        bufp->chgCData(oldp+377,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+378,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7),7);
        bufp->chgCData(oldp+379,((7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+380,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x13U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))));
        bufp->chgCData(oldp+381,(((0x33U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                            ? 0U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                             ? 0U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                              ? 1U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((0x63U 
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
        bufp->chgBit(oldp+382,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite))));
        bufp->chgBit(oldp+383,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr))));
        bufp->chgBit(oldp+384,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x23U 
                                             != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0x63U 
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
                                                           & (7U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))))))));
        bufp->chgBit(oldp+385,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
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
                                                == 
                                                (0x7fU 
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
        bufp->chgBit(oldp+386,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x73U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((3U != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x23U 
                                             != (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            & (0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))));
        bufp->chgCData(oldp+387,(((0x33U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                   ? 2U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                            ? 2U : 
                                           ((0x73U 
                                             == (0x7fU 
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
        bufp->chgCData(oldp+388,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump),2);
        bufp->chgCData(oldp+389,(((0x33U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                            ? 0U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                             ? 0U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                              ? 0U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                               ? 0U
                                               : ((0x63U 
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
        bufp->chgBit(oldp+390,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7)) 
                                & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xcU))) 
                                   | ((5U == (7U & 
                                              (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU))) 
                                      | ((6U == (7U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU))) 
                                         | (7U == (7U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+391,((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))));
        bufp->chgIData(oldp+392,(((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                    << 5U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                 << 3U))) 
                                  | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo))),32);
        bufp->chgBit(oldp+393,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0));
        bufp->chgBit(oldp+394,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_0));
        bufp->chgBit(oldp+395,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_1));
        bufp->chgBit(oldp+396,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_0));
        bufp->chgBit(oldp+397,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_1));
        bufp->chgBit(oldp+398,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_0));
        bufp->chgBit(oldp+399,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_1));
        bufp->chgBit(oldp+400,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_2));
        bufp->chgBit(oldp+401,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_3));
        bufp->chgBit(oldp+402,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_4));
        bufp->chgBit(oldp+403,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_0));
        bufp->chgBit(oldp+404,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_1));
        bufp->chgBit(oldp+405,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_2));
        bufp->chgBit(oldp+406,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_3));
        bufp->chgBit(oldp+407,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_4));
        bufp->chgBit(oldp+408,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0));
        bufp->chgBit(oldp+409,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_f));
        bufp->chgBit(oldp+410,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_f));
        bufp->chgBit(oldp+411,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0));
        bufp->chgBit(oldp+412,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1));
        bufp->chgBit(oldp+413,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2));
        bufp->chgBit(oldp+414,(((7U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x27U == (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x43U == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x47U == 
                                          (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x4bU 
                                             == (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0x4fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                               | (0x53U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgCData(oldp+415,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+416,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+417,(vlSelfRef.Top__DOT__core__DOT__id_reg_imm),32);
        bufp->chgIData(oldp+418,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd1),32);
        bufp->chgIData(oldp+419,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd2),32);
        bufp->chgIData(oldp+420,(vlSelfRef.Top__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+421,(vlSelfRef.Top__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+422,(vlSelfRef.Top__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+423,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+424,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+425,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+426,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgBit(oldp+427,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1));
        bufp->chgBit(oldp+428,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_2));
        bufp->chgIData(oldp+429,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd3),32);
        bufp->chgIData(oldp+430,(vlSelfRef.Top__DOT__core__DOT__id_reg_fcsr_o_data),32);
        bufp->chgBit(oldp+431,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_f));
        bufp->chgIData(oldp+432,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wd),32);
        bufp->chgCData(oldp+433,((7U & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+434,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                   ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12)
                                   : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                       ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22)
                                       : ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite)
                                           ? 0xfU : 0U)))),4);
        bufp->chgCData(oldp+435,(vlSelfRef.Top__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+436,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+437,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_1));
        bufp->chgBit(oldp+438,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+439,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgCData(oldp+440,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+441,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+442,(vlSelfRef.Top__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgIData(oldp+443,(vlSelfRef.Top__DOT__core__DOT__mem_reg_rd),32);
        bufp->chgIData(oldp+444,(vlSelfRef.Top__DOT__core__DOT__mem_reg_result),32);
        bufp->chgCData(oldp+445,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgCData(oldp+446,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG),5);
        bufp->chgCData(oldp+447,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_1),5);
        bufp->chgCData(oldp+448,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG),5);
        bufp->chgCData(oldp+449,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_1),5);
        bufp->chgIData(oldp+450,(vlSelfRef.Top__DOT__core__DOT__REG),32);
        bufp->chgIData(oldp+451,(vlSelfRef.Top__DOT__core__DOT__REG_3),32);
        bufp->chgIData(oldp+452,(vlSelfRef.Top__DOT__core__DOT__REG_4),32);
        bufp->chgIData(oldp+453,(vlSelfRef.Top__DOT__core__DOT__REG_5),32);
        bufp->chgBit(oldp+454,(vlSelfRef.Top__DOT__core__DOT__REG_7));
        bufp->chgIData(oldp+455,(vlSelfRef.Top__DOT__core__DOT__REG_8),32);
        bufp->chgBit(oldp+456,(vlSelfRef.Top__DOT__core__DOT__REG_9));
        bufp->chgBit(oldp+457,(vlSelfRef.Top__DOT__core__DOT__REG_10));
        bufp->chgIData(oldp+458,(vlSelfRef.Top__DOT__core__DOT__REG_11),32);
        bufp->chgCData(oldp+459,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl),4);
        bufp->chgBit(oldp+460,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7) 
                                      >> 5U))));
        bufp->chgCData(oldp+461,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+462,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+463,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+464,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+465,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgCData(oldp+466,((vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgCData(oldp+467,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
        bufp->chgCData(oldp+468,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15),5);
        bufp->chgBit(oldp+469,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid));
        bufp->chgBit(oldp+470,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
        bufp->chgBit(oldp+471,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                                      & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                         & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
        bufp->chgCData(oldp+472,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp),5);
        bufp->chgCData(oldp+473,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode),3);
        bufp->chgBit(oldp+474,(((0x18000053U == (0xfe00007fU 
                                                 & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                                | (0x58000053U == (0xfe00007fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)))));
        bufp->chgBit(oldp+475,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
        bufp->chgBit(oldp+476,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out));
        bufp->chgIData(oldp+477,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_a_reg),32);
        bufp->chgIData(oldp+478,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_b_reg),32);
        bufp->chgCData(oldp+479,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__op_reg),3);
        bufp->chgBit(oldp+480,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en));
        bufp->chgCData(oldp+481,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f7_reg),6);
        bufp->chgCData(oldp+482,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter),6);
        bufp->chgBit(oldp+483,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst));
        bufp->chgBit(oldp+484,((1U & ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                                      | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                         | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)))))));
        bufp->chgBit(oldp+485,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__io_is_f_o_REG));
        bufp->chgCData(oldp+486,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op),2);
        bufp->chgBit(oldp+487,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+488,((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+489,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid))));
        bufp->chgBit(oldp+490,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))));
        bufp->chgQData(oldp+491,((((QData)((IData)(
                                                   ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+493,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
        bufp->chgBit(oldp+494,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling));
        bufp->chgBit(oldp+495,((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgBit(oldp+496,((0x16U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
        bufp->chgSData(oldp+497,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+498,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 6U)))));
        bufp->chgBit(oldp+499,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                             >> 7U)))));
        bufp->chgBit(oldp+500,((IData)((0x1c0U == (0x1c0U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+501,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf));
        bufp->chgBit(oldp+502,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
        bufp->chgSData(oldp+503,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+504,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                 >> 6U))) 
                                   << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+505,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+506,((0x1fU & ((IData)(1U) 
                                           - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+507,((0x7fffffU & ((0xffffffU 
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
        bufp->chgCData(oldp+508,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+509,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+510,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
        bufp->chgBit(oldp+511,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+512,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+513,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+514,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgBit(oldp+515,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
        bufp->chgCData(oldp+516,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z),3);
        bufp->chgBit(oldp+517,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+518,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
        bufp->chgBit(oldp+519,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
        bufp->chgBit(oldp+520,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
        bufp->chgBit(oldp+521,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z));
        bufp->chgBit(oldp+522,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z));
        bufp->chgSData(oldp+523,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z),10);
        bufp->chgIData(oldp+524,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgCData(oldp+525,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum),5);
        bufp->chgBit(oldp+526,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid));
        bufp->chgBit(oldp+527,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z));
        bufp->chgBit(oldp+528,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
        bufp->chgIData(oldp+529,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z),24);
        bufp->chgIData(oldp+530,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z),26);
        bufp->chgBit(oldp+531,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
        bufp->chgIData(oldp+532,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z),26);
        bufp->chgBit(oldp+533,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum))));
        bufp->chgBit(oldp+534,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
        bufp->chgBit(oldp+535,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        bufp->chgIData(oldp+536,((((IData)(1U) << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                  >> 2U)),30);
        bufp->chgBit(oldp+537,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+538,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+539,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+540,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+541,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
        bufp->chgBit(oldp+542,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+543,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                      >> 0x19U))));
        bufp->chgBit(oldp+544,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 8U)))));
        bufp->chgCData(oldp+545,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),8);
        bufp->chgBit(oldp+546,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 7U)))));
        bufp->chgCData(oldp+547,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),7);
        bufp->chgBit(oldp+548,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                         >> 6U)))));
        bufp->chgCData(oldp+549,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),6);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
        __Vtemp_4[0U] = __Vtemp_3[0U];
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
        bufp->chgWData(oldp+550,(__Vtemp_4),65);
        bufp->chgIData(oldp+553,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                        << 2U))),27);
        bufp->chgIData(oldp+554,((0x7ffffffU & (1U 
                                                | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
        bufp->chgIData(oldp+555,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+556,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+557,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+558,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgBit(oldp+559,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgIData(oldp+560,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+561,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+562,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+563,((0x7fffffU & ((0x2000000U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                                ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+564,(VL_LTES_III(4, 3U, (0xfU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                      >> 7U)))));
        bufp->chgBit(oldp+565,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+566,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                          >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))));
        bufp->chgBit(oldp+567,((IData)(((0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                        | (0x2000002U 
                                           == (0x2000002U 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))))));
        bufp->chgBit(oldp+568,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                     ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                        >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & ((IData)((0x2000002U 
                                               == (0x2000002U 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                      | (0U != (3U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
        bufp->chgBit(oldp+569,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                       ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x19U)
                                       : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+570,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
        bufp->chgBit(oldp+571,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+572,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+573,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut));
        bufp->chgBit(oldp+574,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+575,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+576,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        bufp->chgBit(oldp+577,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                      | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+578,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+579,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+580,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+581,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+582,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgCData(oldp+583,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
        bufp->chgIData(oldp+584,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
        bufp->chgIData(oldp+585,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
        bufp->chgBit(oldp+586,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
        bufp->chgBit(oldp+587,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
        bufp->chgIData(oldp+588,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgSData(oldp+589,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+590,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en));
        bufp->chgCData(oldp+591,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+592,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite));
        bufp->chgBit(oldp+593,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
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
        bufp->chgBit(oldp+594,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr));
        bufp->chgCData(oldp+595,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1bU)),5);
        bufp->chgBit(oldp+596,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0));
        bufp->chgIData(oldp+597,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0),32);
        bufp->chgIData(oldp+598,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),32);
        bufp->chgIData(oldp+599,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2),32);
        bufp->chgCData(oldp+600,((3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+601,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+602,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+603,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+604,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+605,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+606,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+607,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo),3);
        bufp->chgIData(oldp+608,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+609,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG),32);
        bufp->chgIData(oldp+610,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+611,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+612,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+613,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+614,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+615,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+616,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+617,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+618,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+619,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+620,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+621,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+622,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10),32);
        bufp->chgIData(oldp+623,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+624,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))),32);
        bufp->chgBit(oldp+625,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+626,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+627,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                                 & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+628,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+629,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+630,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
                                 & (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgCData(oldp+631,((0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgIData(oldp+632,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x14U))),32);
        bufp->chgIData(oldp+633,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+634,((0xfffff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),32);
        bufp->chgSData(oldp+635,(((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+636,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                 >> 7U))))),32);
        bufp->chgSData(oldp+637,((((0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x14U)) 
                                   | (0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                << 3U))) 
                                  | ((0x3f0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U))))),12);
        bufp->chgIData(oldp+638,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
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
        bufp->chgIData(oldp+639,(((0x80000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+640,((((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x1fU) ? 0x7ffU
                                      : 0U) << 0x15U) 
                                   | (0x100000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xbU))) 
                                  | (((0xff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                      | (0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 9U))) 
                                     | (0x7feU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))),32);
        bufp->chgIData(oldp+641,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0),32);
        bufp->chgIData(oldp+642,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1),32);
        bufp->chgIData(oldp+643,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2),32);
        bufp->chgIData(oldp+644,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3),32);
        bufp->chgIData(oldp+645,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4),32);
        bufp->chgIData(oldp+646,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5),32);
        bufp->chgIData(oldp+647,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6),32);
        bufp->chgIData(oldp+648,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7),32);
        bufp->chgIData(oldp+649,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8),32);
        bufp->chgIData(oldp+650,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9),32);
        bufp->chgIData(oldp+651,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10),32);
        bufp->chgIData(oldp+652,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11),32);
        bufp->chgIData(oldp+653,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12),32);
        bufp->chgIData(oldp+654,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13),32);
        bufp->chgIData(oldp+655,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14),32);
        bufp->chgIData(oldp+656,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15),32);
        bufp->chgIData(oldp+657,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16),32);
        bufp->chgIData(oldp+658,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17),32);
        bufp->chgIData(oldp+659,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18),32);
        bufp->chgIData(oldp+660,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19),32);
        bufp->chgIData(oldp+661,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20),32);
        bufp->chgIData(oldp+662,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21),32);
        bufp->chgIData(oldp+663,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22),32);
        bufp->chgIData(oldp+664,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23),32);
        bufp->chgIData(oldp+665,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24),32);
        bufp->chgIData(oldp+666,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25),32);
        bufp->chgIData(oldp+667,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26),32);
        bufp->chgIData(oldp+668,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27),32);
        bufp->chgIData(oldp+669,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28),32);
        bufp->chgIData(oldp+670,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29),32);
        bufp->chgIData(oldp+671,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30),32);
        bufp->chgIData(oldp+672,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31),32);
        bufp->chgIData(oldp+673,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0),32);
        bufp->chgIData(oldp+674,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1),32);
        bufp->chgIData(oldp+675,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2),32);
        bufp->chgIData(oldp+676,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3),32);
        bufp->chgIData(oldp+677,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4),32);
        bufp->chgIData(oldp+678,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5),32);
        bufp->chgIData(oldp+679,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6),32);
        bufp->chgIData(oldp+680,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7),32);
        bufp->chgIData(oldp+681,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8),32);
        bufp->chgIData(oldp+682,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9),32);
        bufp->chgIData(oldp+683,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10),32);
        bufp->chgIData(oldp+684,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11),32);
        bufp->chgIData(oldp+685,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12),32);
        bufp->chgIData(oldp+686,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13),32);
        bufp->chgIData(oldp+687,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14),32);
        bufp->chgIData(oldp+688,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15),32);
        bufp->chgIData(oldp+689,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16),32);
        bufp->chgIData(oldp+690,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17),32);
        bufp->chgIData(oldp+691,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18),32);
        bufp->chgIData(oldp+692,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19),32);
        bufp->chgIData(oldp+693,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20),32);
        bufp->chgIData(oldp+694,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21),32);
        bufp->chgIData(oldp+695,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22),32);
        bufp->chgIData(oldp+696,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23),32);
        bufp->chgIData(oldp+697,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24),32);
        bufp->chgIData(oldp+698,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25),32);
        bufp->chgIData(oldp+699,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26),32);
        bufp->chgIData(oldp+700,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27),32);
        bufp->chgIData(oldp+701,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28),32);
        bufp->chgIData(oldp+702,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29),32);
        bufp->chgIData(oldp+703,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30),32);
        bufp->chgIData(oldp+704,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31),32);
        bufp->chgCData(oldp+705,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg),2);
        bufp->chgCData(oldp+706,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset),2);
        bufp->chgCData(oldp+707,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+708,((3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result)),2);
        bufp->chgCData(oldp+709,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgCData(oldp+710,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgCData(oldp+711,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgCData(oldp+712,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgSData(oldp+713,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgSData(oldp+714,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
        bufp->chgIData(oldp+715,((0xfffffffU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_result 
                                                >> 2U))),28);
        bufp->chgCData(oldp+716,(vlSelfRef.Top__DOT__dmem__DOT__state_reg),2);
        bufp->chgBit(oldp+717,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+718,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+719,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+720,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+721,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+722,((0xfffffffU & vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2)),28);
        bufp->chgCData(oldp+723,(vlSelfRef.Top__DOT__imem__DOT__state_reg),2);
        bufp->chgBit(oldp+724,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+725,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+726,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+727,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
        bufp->chgIData(oldp+728,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+729,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [0U][0U]),32);
        bufp->chgIData(oldp+730,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [0U][1U]),32);
        bufp->chgIData(oldp+731,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [0U][2U]),32);
        bufp->chgIData(oldp+732,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [0U][3U]),32);
        bufp->chgIData(oldp+733,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [1U][0U]),32);
        bufp->chgIData(oldp+734,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [1U][1U]),32);
        bufp->chgIData(oldp+735,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [1U][2U]),32);
        bufp->chgIData(oldp+736,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                 [1U][3U]),32);
        bufp->chgIData(oldp+737,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][0U]),32);
        bufp->chgIData(oldp+738,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][1U]),32);
        bufp->chgIData(oldp+739,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][2U]),32);
        bufp->chgIData(oldp+740,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][0U][3U]),32);
        bufp->chgIData(oldp+741,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][0U]),32);
        bufp->chgIData(oldp+742,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][1U]),32);
        bufp->chgIData(oldp+743,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][2U]),32);
        bufp->chgIData(oldp+744,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [0U][1U][3U]),32);
        bufp->chgIData(oldp+745,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][0U]),32);
        bufp->chgIData(oldp+746,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][1U]),32);
        bufp->chgIData(oldp+747,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][2U]),32);
        bufp->chgIData(oldp+748,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][0U][3U]),32);
        bufp->chgIData(oldp+749,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][0U]),32);
        bufp->chgIData(oldp+750,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][1U]),32);
        bufp->chgIData(oldp+751,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][2U]),32);
        bufp->chgIData(oldp+752,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                                 [1U][1U][3U]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+753,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
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
        bufp->chgIData(oldp+754,((((1U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
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
        bufp->chgIData(oldp+755,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(4U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+756,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                   ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                   : ((IData)(2U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
        bufp->chgIData(oldp+757,((IData)((0x7fffffffffffffffULL 
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
        bufp->chgIData(oldp+758,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
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
        bufp->chgCData(oldp+759,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
        bufp->chgCData(oldp+760,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
        bufp->chgCData(oldp+761,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
        bufp->chgCData(oldp+762,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                      | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                         & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                                  << 4U)),5);
        bufp->chgBit(oldp+763,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+764,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
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
        bufp->chgBit(oldp+765,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
        bufp->chgBit(oldp+766,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        bufp->chgBit(oldp+767,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))));
        bufp->chgBit(oldp+768,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU) ^ 
                                      ((9U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                       & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+769,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                & (9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
        bufp->chgBit(oldp+770,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))));
        bufp->chgIData(oldp+771,((((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
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
        bufp->chgBit(oldp+772,((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                   & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))));
        bufp->chgBit(oldp+773,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (0U != (1U & (IData)(
                                                        ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                         >> 7U))))) 
                                | ((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                       & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+774,((1U & ((0U == (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               >> 0x12U)))
                                       ? (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                                       : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                          ^ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                             >> 2U))))));
        bufp->chgBit(oldp+775,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+776,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
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
        bufp->chgBit(oldp+777,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
        bufp->chgBit(oldp+778,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        bufp->chgBit(oldp+779,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
        bufp->chgBit(oldp+780,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
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
        bufp->chgBit(oldp+781,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
        bufp->chgBit(oldp+782,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        bufp->chgIData(oldp+783,(((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
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
        bufp->chgIData(oldp+784,(((((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                                    ? 0x80000000U : 0U) 
                                  | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                      ? 0U : 0x7fffffffU))),32);
        bufp->chgIData(oldp+785,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                   : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
        bufp->chgIData(oldp+786,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                      >> 0x1fU)) ? 
                                  (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                   : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
        bufp->chgBit(oldp+787,((((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
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
        bufp->chgIData(oldp+788,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                                   & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)) 
                                      == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                   >> 7U))))
                                   ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                   : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1)),32);
        bufp->chgBit(oldp+789,(((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
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
        bufp->chgIData(oldp+790,((vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+791,(((~ vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                                  & vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
        bufp->chgCData(oldp+792,(((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3)
                                   ? 1U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7)
                                            ? 2U : (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+793,(vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+794,(vlSelfRef.Top__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgBit(oldp+795,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+796,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+797,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+798,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+799,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+800,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgSData(oldp+801,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__addr_o),13);
        bufp->chgIData(oldp+802,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+803,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+804,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__we_o));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+805,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][0U]),32);
        bufp->chgIData(oldp+806,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][1U]),32);
        bufp->chgIData(oldp+807,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][2U]),32);
        bufp->chgIData(oldp+808,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][0U][3U]),32);
        bufp->chgIData(oldp+809,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][0U]),32);
        bufp->chgIData(oldp+810,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][1U]),32);
        bufp->chgIData(oldp+811,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][2U]),32);
        bufp->chgIData(oldp+812,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][1U][3U]),32);
        bufp->chgIData(oldp+813,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][0U]),32);
        bufp->chgIData(oldp+814,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][1U]),32);
        bufp->chgIData(oldp+815,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][2U]),32);
        bufp->chgIData(oldp+816,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][2U][3U]),32);
        bufp->chgIData(oldp+817,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][0U]),32);
        bufp->chgIData(oldp+818,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][1U]),32);
        bufp->chgIData(oldp+819,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][2U]),32);
        bufp->chgIData(oldp+820,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [0U][3U][3U]),32);
        bufp->chgIData(oldp+821,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][0U]),32);
        bufp->chgIData(oldp+822,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][1U]),32);
        bufp->chgIData(oldp+823,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][2U]),32);
        bufp->chgIData(oldp+824,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][0U][3U]),32);
        bufp->chgIData(oldp+825,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][0U]),32);
        bufp->chgIData(oldp+826,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][1U]),32);
        bufp->chgIData(oldp+827,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][2U]),32);
        bufp->chgIData(oldp+828,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][1U][3U]),32);
        bufp->chgIData(oldp+829,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][0U]),32);
        bufp->chgIData(oldp+830,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][1U]),32);
        bufp->chgIData(oldp+831,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][2U]),32);
        bufp->chgIData(oldp+832,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][2U][3U]),32);
        bufp->chgIData(oldp+833,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][0U]),32);
        bufp->chgIData(oldp+834,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][1U]),32);
        bufp->chgIData(oldp+835,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][2U]),32);
        bufp->chgIData(oldp+836,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                                 [1U][3U][3U]),32);
        bufp->chgIData(oldp+837,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value),32);
        bufp->chgCData(oldp+838,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b),4);
        bufp->chgIData(oldp+839,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0]),32);
        bufp->chgIData(oldp+840,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1]),32);
        bufp->chgIData(oldp+841,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2]),32);
        bufp->chgIData(oldp+842,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3]),32);
        bufp->chgIData(oldp+843,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+844,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+845,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+846,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+847,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+848,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+849,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+850,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+851,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+852,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+853,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+854,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+855,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+856,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+857,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+858,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+859,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][0U]),32);
        bufp->chgIData(oldp+860,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][1U]),32);
        bufp->chgIData(oldp+861,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][2U]),32);
        bufp->chgIData(oldp+862,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [0U][3U]),32);
        bufp->chgIData(oldp+863,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][0U]),32);
        bufp->chgIData(oldp+864,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][1U]),32);
        bufp->chgIData(oldp+865,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][2U]),32);
        bufp->chgIData(oldp+866,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [1U][3U]),32);
        bufp->chgIData(oldp+867,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][0U]),32);
        bufp->chgIData(oldp+868,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][1U]),32);
        bufp->chgIData(oldp+869,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][2U]),32);
        bufp->chgIData(oldp+870,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [2U][3U]),32);
        bufp->chgIData(oldp+871,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][0U]),32);
        bufp->chgIData(oldp+872,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][1U]),32);
        bufp->chgIData(oldp+873,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][2U]),32);
        bufp->chgIData(oldp+874,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                                 [3U][3U]),32);
        bufp->chgIData(oldp+875,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0]),32);
        bufp->chgIData(oldp+876,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1]),32);
        bufp->chgIData(oldp+877,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2]),32);
        bufp->chgIData(oldp+878,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3]),32);
        bufp->chgIData(oldp+879,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0]),32);
        bufp->chgIData(oldp+880,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1]),32);
        bufp->chgIData(oldp+881,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2]),32);
        bufp->chgIData(oldp+882,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3]),32);
        bufp->chgIData(oldp+883,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0]),32);
        bufp->chgIData(oldp+884,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1]),32);
        bufp->chgIData(oldp+885,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2]),32);
        bufp->chgIData(oldp+886,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3]),32);
        bufp->chgIData(oldp+887,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][0U]),32);
        bufp->chgIData(oldp+888,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][1U]),32);
        bufp->chgIData(oldp+889,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][2U]),32);
        bufp->chgIData(oldp+890,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [0U][3U]),32);
        bufp->chgIData(oldp+891,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][0U]),32);
        bufp->chgIData(oldp+892,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][1U]),32);
        bufp->chgIData(oldp+893,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][2U]),32);
        bufp->chgIData(oldp+894,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                 [1U][3U]),32);
        bufp->chgIData(oldp+895,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[0]),32);
        bufp->chgIData(oldp+896,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[1]),32);
        bufp->chgIData(oldp+897,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[2]),32);
        bufp->chgIData(oldp+898,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[3]),32);
        bufp->chgIData(oldp+899,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
        bufp->chgIData(oldp+900,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
        bufp->chgIData(oldp+901,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
        bufp->chgIData(oldp+902,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
        bufp->chgIData(oldp+903,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+904,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+905,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+906,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+907,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
        bufp->chgIData(oldp+908,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
        bufp->chgIData(oldp+909,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
        bufp->chgIData(oldp+910,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
        bufp->chgIData(oldp+911,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+912,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+913,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+914,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+915,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
        bufp->chgIData(oldp+916,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
        bufp->chgIData(oldp+917,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
        bufp->chgIData(oldp+918,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
        bufp->chgIData(oldp+919,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+920,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+921,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+922,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+923,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
        bufp->chgIData(oldp+924,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
        bufp->chgIData(oldp+925,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
        bufp->chgIData(oldp+926,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
        bufp->chgIData(oldp+927,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+928,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+929,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+930,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+931,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
        bufp->chgIData(oldp+932,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
        bufp->chgIData(oldp+933,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
        bufp->chgIData(oldp+934,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
        bufp->chgIData(oldp+935,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+936,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+937,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+938,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+939,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
        bufp->chgIData(oldp+940,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
        bufp->chgIData(oldp+941,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
        bufp->chgIData(oldp+942,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
        bufp->chgIData(oldp+943,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+944,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+945,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+946,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+947,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][0U]),32);
        bufp->chgIData(oldp+948,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][1U]),32);
        bufp->chgIData(oldp+949,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][2U]),32);
        bufp->chgIData(oldp+950,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [0U][3U]),32);
        bufp->chgIData(oldp+951,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][0U]),32);
        bufp->chgIData(oldp+952,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][1U]),32);
        bufp->chgIData(oldp+953,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][2U]),32);
        bufp->chgIData(oldp+954,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [1U][3U]),32);
        bufp->chgIData(oldp+955,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][0U]),32);
        bufp->chgIData(oldp+956,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][1U]),32);
        bufp->chgIData(oldp+957,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][2U]),32);
        bufp->chgIData(oldp+958,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [2U][3U]),32);
        bufp->chgIData(oldp+959,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][0U]),32);
        bufp->chgIData(oldp+960,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][1U]),32);
        bufp->chgIData(oldp+961,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][2U]),32);
        bufp->chgIData(oldp+962,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][3U]),32);
        bufp->chgIData(oldp+963,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0]),32);
        bufp->chgIData(oldp+964,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1]),32);
        bufp->chgIData(oldp+965,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2]),32);
        bufp->chgIData(oldp+966,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3]),32);
        bufp->chgIData(oldp+967,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0]),32);
        bufp->chgIData(oldp+968,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1]),32);
        bufp->chgIData(oldp+969,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2]),32);
        bufp->chgIData(oldp+970,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+971,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
        bufp->chgIData(oldp+972,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
        bufp->chgBit(oldp+973,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall));
        bufp->chgIData(oldp+974,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result),32);
        bufp->chgIData(oldp+975,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1),32);
        bufp->chgIData(oldp+976,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData2),32);
        bufp->chgBit(oldp+977,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush));
        bufp->chgBit(oldp+978,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5))));
        bufp->chgBit(oldp+979,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 1U))));
        bufp->chgBit(oldp+980,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 2U))));
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 3U))));
        bufp->chgBit(oldp+982,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                      >> 4U))));
        bufp->chgIData(oldp+983,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1),32);
        bufp->chgIData(oldp+984,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in),32);
        bufp->chgIData(oldp+985,(vlSelfRef.Top__DOT__core__DOT__MEM_io_readData),32);
        bufp->chgIData(oldp+986,(vlSelfRef.Top__DOT__core__DOT___npc_T_2),32);
        bufp->chgBit(oldp+987,(vlSelfRef.Top__DOT__core__DOT__pc_io_halt));
        bufp->chgCData(oldp+988,((7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+989,(vlSelfRef.Top__DOT__core__DOT__func7),7);
        bufp->chgBit(oldp+990,((((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
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
        bufp->chgIData(oldp+991,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
        bufp->chgIData(oldp+992,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
        bufp->chgIData(oldp+993,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
        bufp->chgIData(oldp+994,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
        bufp->chgIData(oldp+995,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2),32);
        bufp->chgIData(oldp+996,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out),32);
        bufp->chgQData(oldp+997,((((QData)((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))))),33);
        bufp->chgQData(oldp+999,((((QData)((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14))))),33);
        bufp->chgQData(oldp+1001,((((QData)((IData)(
                                                    (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                     >> 0x1fU))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2))))),33);
        bufp->chgQData(oldp+1003,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+1005,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgQData(oldp+1007,((((QData)((IData)(
                                                    ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                     & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgBit(oldp+1009,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt));
        bufp->chgBit(oldp+1010,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq));
        bufp->chgBit(oldp+1011,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt));
        bufp->chgIData(oldp+1012,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out),32);
        bufp->chgCData(oldp+1013,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
                                    << 2U) | ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                               << 1U) 
                                              | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                                 & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))))),3);
        bufp->chgQData(oldp+1014,((((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                                  << 0x17U) 
                                                                 | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
        bufp->chgCData(oldp+1016,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))),5);
        bufp->chgCData(oldp+1017,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1018,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)),23);
        bufp->chgBit(oldp+1019,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1020,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
        bufp->chgCData(oldp+1021,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist),5);
        bufp->chgSData(oldp+1022,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),9);
        bufp->chgBit(oldp+1023,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1024,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN));
        bufp->chgCData(oldp+1025,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1026,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)),23);
        bufp->chgBit(oldp+1027,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1028,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
        bufp->chgCData(oldp+1029,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1),5);
        bufp->chgSData(oldp+1030,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),9);
        bufp->chgBit(oldp+1031,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1032,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
        bufp->chgSData(oldp+1033,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1034,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1035,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1036,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1037,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf));
        bufp->chgBit(oldp+1038,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1039,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1040,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1041,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1042,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1043,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1044,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+1045,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1046,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
        bufp->chgSData(oldp+1047,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1048,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1049,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1050,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1051,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf));
        bufp->chgBit(oldp+1052,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1053,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1054,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1055,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1056,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1057,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1058,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+1059,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1060,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
        bufp->chgSData(oldp+1061,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1062,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1063,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1064,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1065,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf));
        bufp->chgBit(oldp+1066,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
        bufp->chgSData(oldp+1067,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1068,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1069,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1070,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1071,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1072,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+1073,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1074,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
        bufp->chgSData(oldp+1075,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
        bufp->chgBit(oldp+1076,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1077,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1078,((IData)((0x1c0U == 
                                         (0x1c0U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
        bufp->chgBit(oldp+1079,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf));
        bufp->chgBit(oldp+1080,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1081,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
        bufp->chgIData(oldp+1082,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  >> 6U))) 
                                    << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
        bufp->chgBit(oldp+1083,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
        bufp->chgCData(oldp+1084,((0x1fU & ((IData)(1U) 
                                            - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
        bufp->chgIData(oldp+1085,((0x7fffffU & ((0xffffffU 
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
                                                    - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))))),23);
        bufp->chgCData(oldp+1086,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
        bufp->chgIData(oldp+1087,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                                 ? 
                                                (0xffffffU 
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
                                                 : 
                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf)
                                                  ? 0U
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)))),23);
        bufp->chgIData(oldp+1088,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4),32);
        bufp->chgBit(oldp+1089,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1090,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1091,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)),23);
        bufp->chgBit(oldp+1092,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1093,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))));
        bufp->chgCData(oldp+1094,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist),5);
        bufp->chgIData(oldp+1095,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                 << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                                << 1U))),23);
        bufp->chgSData(oldp+1096,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),9);
        bufp->chgBit(oldp+1097,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero));
        bufp->chgBit(oldp+1098,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1099,((IData)(((0x180U == 
                                          (0x180U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp))) 
                                         & (0U != (0x7fffffU 
                                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))))));
        bufp->chgSData(oldp+1100,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),10);
        bufp->chgIData(oldp+1101,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2)),25);
        bufp->chgBit(oldp+1102,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1103,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                 << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                                << 1U))),23);
        bufp->chgBit(oldp+1104,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1));
        bufp->chgSData(oldp+1105,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),10);
        bufp->chgIData(oldp+1106,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6)),25);
        bufp->chgBit(oldp+1107,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1108,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                 << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                                << 1U))),23);
        bufp->chgBit(oldp+1109,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3));
        bufp->chgSData(oldp+1110,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),10);
        bufp->chgIData(oldp+1111,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)) 
                                                 << 0x17U)) 
                                   | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14)),25);
        bufp->chgSData(oldp+1112,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),9);
        bufp->chgBit(oldp+1113,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
        bufp->chgBit(oldp+1114,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                              >> 1U)))));
        bufp->chgBit(oldp+1115,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
        bufp->chgBit(oldp+1116,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
        bufp->chgSData(oldp+1117,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),10);
        bufp->chgIData(oldp+1118,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),25);
        bufp->chgBit(oldp+1119,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN));
        bufp->chgBit(oldp+1120,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
        bufp->chgBit(oldp+1121,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
        bufp->chgIData(oldp+1122,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig),25);
        bufp->chgBit(oldp+1123,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
        bufp->chgBit(oldp+1124,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
        bufp->chgBit(oldp+1125,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))));
        bufp->chgSData(oldp+1126,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),10);
        bufp->chgIData(oldp+1127,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig),25);
        bufp->chgBit(oldp+1128,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1129,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN));
        bufp->chgBit(oldp+1130,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
        bufp->chgBit(oldp+1131,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1132,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1133,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1134,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgSData(oldp+1135,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),9);
        bufp->chgBit(oldp+1136,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                              >> 1U)))));
        bufp->chgBit(oldp+1137,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
        bufp->chgBit(oldp+1138,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns));
        bufp->chgSData(oldp+1139,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps),10);
        bufp->chgCData(oldp+1140,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist),5);
        bufp->chgBit(oldp+1141,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign));
        bufp->chgCData(oldp+1142,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist),5);
        bufp->chgBit(oldp+1143,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags));
        bufp->chgIData(oldp+1144,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum),27);
        bufp->chgIData(oldp+1145,((0x3ffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)),26);
        bufp->chgBit(oldp+1146,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))));
        bufp->chgBit(oldp+1147,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 2U)))));
        bufp->chgBit(oldp+1148,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 4U)))));
        bufp->chgBit(oldp+1149,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 6U)))));
        bufp->chgBit(oldp+1150,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 8U)))));
        bufp->chgBit(oldp+1151,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+1152,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1153,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+1154,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+1155,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1156,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+1157,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+1158,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                              >> 0x18U)))));
        bufp->chgCData(oldp+1159,(((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
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
        bufp->chgSData(oldp+1160,(((((((0U != (3U & 
                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                >> 0x18U))) 
                                       << 0xcU) | (
                                                   (0U 
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
                                    (((0U != (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
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
                                   | ((((0U != (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0xaU))) 
                                        << 5U) | ((
                                                   (0U 
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
                                          << 2U) | 
                                         (((0U != (3U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 2U))) 
                                           << 1U) | 
                                          (0U != (3U 
                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))))))),13);
        bufp->chgCData(oldp+1161,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2),4);
        bufp->chgCData(oldp+1162,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                                   << 1U)),5);
        bufp->chgIData(oldp+1163,((0x7fffffeU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                                 << 1U))),27);
        bufp->chgBit(oldp+1164,((1U & (~ (0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                                            >> 0x18U))))))));
        bufp->chgBit(oldp+1165,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                        >> 0x1fU) ^ 
                                       VL_GTS_III(27, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))));
        bufp->chgBit(oldp+1166,((1U & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                        ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                                        : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                           >> 0x1fU)))));
        bufp->chgIData(oldp+1167,((0xffffffU & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                                 ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig))),24);
        bufp->chgIData(oldp+1168,((0xffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)),24);
        bufp->chgIData(oldp+1169,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller),29);
        bufp->chgBit(oldp+1170,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))));
        bufp->chgBit(oldp+1171,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 2U)))));
        bufp->chgBit(oldp+1172,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 6U)))));
        bufp->chgBit(oldp+1173,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+1174,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+1175,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0x12U)))));
        bufp->chgBit(oldp+1176,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                              >> 0x16U)))));
        bufp->chgCData(oldp+1177,((((((0U != (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
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
        bufp->chgSData(oldp+1178,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                               >> 2U))))),9);
        bufp->chgCData(oldp+1179,(((((0x40U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
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
        bufp->chgIData(oldp+1180,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller),27);
        bufp->chgIData(oldp+1181,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                    ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                                    : (0x8000000U | 
                                       (0x7ffffffU 
                                        & (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))),28);
        bufp->chgIData(oldp+1182,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum),28);
        bufp->chgIData(oldp+1183,((0x7ffffffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                                  ? 
                                                 (0x7ffffffU 
                                                  & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                                      >> 1U) 
                                                     | (1U 
                                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum))),27);
        bufp->chgBit(oldp+1184,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                                 & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+1185,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros));
        bufp->chgBit(oldp+1186,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))));
        bufp->chgBit(oldp+1187,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1188,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1189,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1190,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1191,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1192,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1193,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1194,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_8[0U] = __Vtemp_7[0U];
        __Vtemp_8[1U] = __Vtemp_7[1U];
        __Vtemp_8[2U] = (1U & __Vtemp_7[2U]);
        bufp->chgWData(oldp+1195,(__Vtemp_8),65);
        bufp->chgIData(oldp+1198,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1199,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1200,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1201,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1202,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1203,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1204,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1205,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1206,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1207,((0x7fffffU & ((0x4000000U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                 ? 
                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1208,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1209,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1210,((1U & ((0x4000000U 
                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                           >> 2U) : 
                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 1U)))));
        bufp->chgBit(oldp+1211,((IData)(((0U != (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+1212,((1U & ((0x4000000U 
                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1213,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1214,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1215,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1216,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1217,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1218,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1219,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1220,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1221,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1222,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+1223,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),25);
        bufp->chgBit(oldp+1224,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)))));
        bufp->chgBit(oldp+1225,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
        bufp->chgBit(oldp+1226,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps));
        bufp->chgBit(oldp+1227,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags));
        bufp->chgBit(oldp+1228,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags));
        bufp->chgBit(oldp+1229,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
        bufp->chgBit(oldp+1230,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
        bufp->chgBit(oldp+1231,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div));
        bufp->chgBit(oldp+1232,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
        bufp->chgBit(oldp+1233,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S));
        bufp->chgBit(oldp+1234,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                    | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))));
        bufp->chgBit(oldp+1235,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                       & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)))))))));
        bufp->chgBit(oldp+1236,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                       & (~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+1237,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S));
        bufp->chgSData(oldp+1238,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div),11);
        bufp->chgSData(oldp+1239,((((VL_LTES_III(11, 0x1c0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))
                                      ? 6U : (0xfU 
                                              & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div) 
                                                 >> 6U))) 
                                    << 6U) | (0x3fU 
                                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div)))),10);
        bufp->chgBit(oldp+1240,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
        bufp->chgIData(oldp+1241,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem),27);
        bufp->chgIData(oldp+1242,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem),29);
        bufp->chgBit(oldp+1243,(VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)));
        bufp->chgIData(oldp+1244,((0x3ffffffU & (VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                                                  ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem
                                                  : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem))),26);
        bufp->chgBit(oldp+1245,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)))));
        bufp->chgCData(oldp+1246,((0x40U | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))),8);
        bufp->chgQData(oldp+1247,((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig))),33);
        bufp->chgIData(oldp+1249,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn),32);
        bufp->chgCData(oldp+1250,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist),5);
        bufp->chgIData(oldp+1251,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig),32);
        bufp->chgSData(oldp+1252,((0x1ffU & ((IData)(0xc0U) 
                                             + (0x3ffU 
                                                & VL_EXTENDS_II(10,9, 
                                                                (0x40U 
                                                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))),10);
        bufp->chgIData(oldp+1253,(((0x7fffffeU & ((IData)(
                                                          ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                           >> 7U)) 
                                                  << 1U)) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra))),27);
        bufp->chgBit(oldp+1254,((0U != (1U & (IData)(
                                                     ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                      >> 7U))))));
        bufp->chgBit(oldp+1255,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1256,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1257,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1258,((0x7ffU & (VL_EXTENDS_II(11,10, 
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
        bufp->chgSData(oldp+1259,((0x1ffU & ((0x7ffU 
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
        bufp->chgIData(oldp+1260,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
        bufp->chgBit(oldp+1261,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1262,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgIData(oldp+1263,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgIData(oldp+1264,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),24);
        bufp->chgIData(oldp+1265,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),24);
        bufp->chgQData(oldp+1266,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                       >> 3U)))),48);
        bufp->chgBit(oldp+1268,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                    | ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                           >> 0x16U)) 
                                       & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))))));
        bufp->chgBit(oldp+1269,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
        bufp->chgBit(oldp+1270,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN));
        bufp->chgBit(oldp+1271,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
        bufp->chgBit(oldp+1272,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3))));
        bufp->chgSData(oldp+1273,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum),10);
        bufp->chgBit(oldp+1274,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags));
        bufp->chgBit(oldp+1275,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant));
        bufp->chgCData(oldp+1276,((0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
        bufp->chgIData(oldp+1277,((0x3ffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  << 0xdU) 
                                                 | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                    >> 0x13U)))),26);
        bufp->chgBit(oldp+1278,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
        bufp->chgQData(oldp+1279,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
        bufp->chgBit(oldp+1281,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1282,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))));
        bufp->chgBit(oldp+1283,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut));
        bufp->chgBit(oldp+1284,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1285,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1286,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1287,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgBit(oldp+1288,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
        bufp->chgWData(oldp+1289,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
        bufp->chgSData(oldp+1292,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                             - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))),10);
        bufp->chgQData(oldp+1293,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
        bufp->chgBit(oldp+1295,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                  ? (0U != (0xffffffU 
                                            & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                  : (0U != (0x1ffffffU 
                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))));
        bufp->chgIData(oldp+1296,((0x1fffffffU & ((
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                     >> 0x15U)))),29);
        bufp->chgBit(oldp+1297,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
        bufp->chgBit(oldp+1298,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 1U))))));
        bufp->chgBit(oldp+1299,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 5U))))));
        bufp->chgBit(oldp+1300,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 9U))))));
        bufp->chgBit(oldp+1301,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 0xdU))))));
        bufp->chgBit(oldp+1302,((0U != (0xfU & (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 0x11U))))));
        bufp->chgBit(oldp+1303,((0U != (7U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                      >> 0x15U))))));
        bufp->chgSData(oldp+1304,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                >> 2U)))))),9);
        bufp->chgBit(oldp+1305,((0U != ((((((0U != 
                                             (7U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                            >> 0x15U)))) 
                                            << 6U) 
                                           | ((0U != 
                                               (0xfU 
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
        bufp->chgIData(oldp+1306,(((0x7fffffeU & ((
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                                   << 9U) 
                                                  | (0x1feU 
                                                     & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                        >> 0x17U)))) 
                                   | ((0U != (7U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                               >> 0x15U))) 
                                      | ((0U != (((
                                                   (((0U 
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
                                             ? (0U 
                                                != 
                                                (0xffffffU 
                                                 & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                             : (0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))),27);
        bufp->chgBit(oldp+1307,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                       >> 2U))));
        bufp->chgQData(oldp+1308,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
        bufp->chgBit(oldp+1310,((0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
        bufp->chgBit(oldp+1311,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 2U))))));
        bufp->chgBit(oldp+1312,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 4U))))));
        bufp->chgBit(oldp+1313,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 6U))))));
        bufp->chgBit(oldp+1314,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 8U))))));
        bufp->chgBit(oldp+1315,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+1316,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+1317,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+1318,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x10U))))));
        bufp->chgBit(oldp+1319,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x12U))))));
        bufp->chgBit(oldp+1320,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x14U))))));
        bufp->chgBit(oldp+1321,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x16U))))));
        bufp->chgBit(oldp+1322,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x18U))))));
        bufp->chgBit(oldp+1323,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1aU))))));
        bufp->chgBit(oldp+1324,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1cU))))));
        bufp->chgBit(oldp+1325,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x1eU))))));
        bufp->chgBit(oldp+1326,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x20U))))));
        bufp->chgBit(oldp+1327,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x22U))))));
        bufp->chgBit(oldp+1328,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x24U))))));
        bufp->chgBit(oldp+1329,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x26U))))));
        bufp->chgBit(oldp+1330,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x28U))))));
        bufp->chgBit(oldp+1331,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2aU))))));
        bufp->chgBit(oldp+1332,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2cU))))));
        bufp->chgBit(oldp+1333,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x2eU))))));
        bufp->chgBit(oldp+1334,((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x30U))))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                               >> 0x32U)))));
        bufp->chgCData(oldp+1336,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo),6);
        bufp->chgSData(oldp+1337,((((0U != (3U & (IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 0x18U)))) 
                                    << 0xcU) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5))),13);
        bufp->chgCData(oldp+1338,(((((0U != (3U & (IData)(
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
        bufp->chgIData(oldp+1339,(((((((0x2000000U 
                                        & ((IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
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
                                         | ((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                            << 0x16U))) 
                                     | (((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2aU)))) 
                                         << 0x15U) 
                                        | (((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x28U)))) 
                                            << 0x14U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                              << 0x13U)))) 
                                    | ((((0U != (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x24U)))) 
                                         << 0x12U) 
                                        | (((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x22U)))) 
                                            << 0x11U) 
                                           | ((0U != 
                                               (3U 
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
                                               (3U 
                                                & (IData)(
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
        bufp->chgCData(oldp+1340,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
        bufp->chgCData(oldp+1341,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                   << 1U)),6);
        bufp->chgSData(oldp+1342,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                             - ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                << 1U)))),10);
        bufp->chgIData(oldp+1343,((0x1fffffffU & ((
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                     >> 0x17U)))),29);
        bufp->chgBit(oldp+1344,((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))));
        bufp->chgBit(oldp+1345,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                              >> 2U)))));
        bufp->chgBit(oldp+1346,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                              >> 4U)))));
        bufp->chgBit(oldp+1347,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1348,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                              >> 8U)))));
        bufp->chgBit(oldp+1349,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                              >> 0xaU)))));
        bufp->chgIData(oldp+1350,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                  >> 1U)))))),17);
        bufp->chgBit(oldp+1351,((0U != ((((((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x18U)))) 
                                            << 6U) 
                                           | ((0U != 
                                               (3U 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                                   >> 0xaU))) 
                                              << 5U)) 
                                          | (((0U != 
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
        bufp->chgIData(oldp+1352,(((0x7fffffeU & ((
                                                   vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
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
        bufp->chgBit(oldp+1353,((0U == (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1354,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
        bufp->chgSData(oldp+1355,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),9);
        bufp->chgBit(oldp+1356,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
                                              >> 1U)))));
        bufp->chgSData(oldp+1357,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),10);
        bufp->chgIData(oldp+1358,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig),25);
        bufp->chgSData(oldp+1359,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd),11);
        bufp->chgSData(oldp+1360,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist),11);
        bufp->chgSData(oldp+1361,((0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))),10);
        bufp->chgBit(oldp+1362,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign));
        bufp->chgCData(oldp+1363,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
        bufp->chgWData(oldp+1364,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
        bufp->chgBit(oldp+1367,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))));
        bufp->chgBit(oldp+1368,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 2U)))));
        bufp->chgBit(oldp+1369,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 6U)))));
        bufp->chgBit(oldp+1370,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+1371,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+1372,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                                >> 0x12U)))));
        bufp->chgBit(oldp+1373,((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                              >> 0x16U)))));
        bufp->chgQData(oldp+1374,((0x1ffffffffULL & 
                                   VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                      >> 2U))))),33);
        bufp->chgBit(oldp+1376,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra));
        __Vtemp_11[0U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                           << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                        >> 3U));
        __Vtemp_11[1U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                           << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                        >> 3U));
        __Vtemp_11[2U] = (0x7ffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                    >> 3U));
        bufp->chgWData(oldp+1377,(__Vtemp_11),75);
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
        bufp->chgWData(oldp+1380,(__Vtemp_15),76);
        bufp->chgBit(oldp+1383,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1384,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1385,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1386,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1387,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1388,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1389,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1390,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_17[0U] = 0U;
        __Vtemp_17[1U] = 0U;
        __Vtemp_17[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_18, __Vtemp_17, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_19[0U] = __Vtemp_18[0U];
        __Vtemp_19[1U] = __Vtemp_18[1U];
        __Vtemp_19[2U] = (1U & __Vtemp_18[2U]);
        bufp->chgWData(oldp+1391,(__Vtemp_19),65);
        bufp->chgIData(oldp+1394,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1395,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1396,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1397,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1398,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1399,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1400,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1401,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1402,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1403,((0x7fffffU & ((0x4000000U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                                 ? 
                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1404,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1405,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1406,((1U & ((0x4000000U 
                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                           >> 2U) : 
                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                        >> 1U)))));
        bufp->chgBit(oldp+1407,((IData)(((0U != (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
        bufp->chgBit(oldp+1408,((1U & ((0x4000000U 
                                        & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1409,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1410,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1411,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1412,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1413,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1414,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1415,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1416,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1417,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1418,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+1419,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
        bufp->chgBit(oldp+1420,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
        bufp->chgBit(oldp+1421,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
        bufp->chgSData(oldp+1422,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
        bufp->chgIData(oldp+1423,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
        bufp->chgQData(oldp+1424,((0xffffffffffffULL 
                                   & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T)),48);
        bufp->chgBit(oldp+1426,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                                 | ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
        bufp->chgBit(oldp+1427,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
        bufp->chgBit(oldp+1428,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1429,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 8U)))));
        bufp->chgCData(oldp+1430,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
        bufp->chgBit(oldp+1431,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 7U)))));
        bufp->chgCData(oldp+1432,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
        bufp->chgBit(oldp+1433,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                          >> 6U)))));
        bufp->chgCData(oldp+1434,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
        __Vtemp_21[0U] = 0U;
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 1U;
        VL_SHIFTRS_WWI(65,65,6, __Vtemp_22, __Vtemp_21, 
                       (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
        __Vtemp_23[0U] = __Vtemp_22[0U];
        __Vtemp_23[1U] = __Vtemp_22[1U];
        __Vtemp_23[2U] = (1U & __Vtemp_22[2U]);
        bufp->chgWData(oldp+1435,(__Vtemp_23),65);
        bufp->chgIData(oldp+1438,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                         << 2U))),27);
        bufp->chgIData(oldp+1439,((0x7ffffffU & (1U 
                                                 | (0x7ffffffeU 
                                                    & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                       << 1U))))),27);
        bufp->chgIData(oldp+1440,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
        bufp->chgBit(oldp+1441,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
        bufp->chgBit(oldp+1442,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
        bufp->chgBit(oldp+1443,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
        bufp->chgIData(oldp+1444,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
        bufp->chgSData(oldp+1445,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
        bufp->chgSData(oldp+1446,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
        bufp->chgIData(oldp+1447,((0x7fffffU & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                            >> 0x2fU)))
                                                 ? 
                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                 >> 1U)
                                                 : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
        bufp->chgBit(oldp+1448,(VL_LTES_III(4, 3U, 
                                            (0xfU & 
                                             ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1449,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
        bufp->chgBit(oldp+1450,((1U & ((1U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                      >> 0x2fU)))
                                        ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x17U))
                                        : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+1451,((IData)(((0U != (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                         | (0x800000800000ULL 
                                            == (0x800000800000ULL 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))))));
        bufp->chgBit(oldp+1452,((1U & ((1U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                      >> 0x2fU)))
                                        ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x19U)
                                        : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                           >> 0x18U)))));
        bufp->chgBit(oldp+1453,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                 | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
        bufp->chgBit(oldp+1454,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        bufp->chgBit(oldp+1455,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        bufp->chgBit(oldp+1456,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        bufp->chgBit(oldp+1457,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
        bufp->chgBit(oldp+1458,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
        bufp->chgBit(oldp+1459,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
        bufp->chgBit(oldp+1460,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
        bufp->chgBit(oldp+1461,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        bufp->chgIData(oldp+1462,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
        bufp->chgBit(oldp+1463,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                       >> 2U))));
        bufp->chgCData(oldp+1464,((0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))),8);
        bufp->chgBit(oldp+1465,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne));
        bufp->chgQData(oldp+1466,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig),55);
        bufp->chgQData(oldp+1468,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig),34);
        bufp->chgIData(oldp+1470,((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                           >> 0x17U))),32);
        bufp->chgBit(oldp+1471,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact));
        bufp->chgBit(oldp+1472,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                   >> 2U) & ((3U == 
                                              (3U & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                             >> 0x16U)))) 
                                             | (3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                                    & (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))));
        bufp->chgBit(oldp+1473,((1U & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                         >> 2U) & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                           >> 0x16U))) 
                                       | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))));
        bufp->chgBit(oldp+1474,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr));
        bufp->chgIData(oldp+1475,(((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                    >> 0x1fU) ? (~ (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                            >> 0x17U)))
                                    : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                               >> 0x17U)))),32);
        bufp->chgBit(oldp+1476,((0x1fU == (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)))));
        bufp->chgBit(oldp+1477,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2));
        bufp->chgBit(oldp+1478,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow));
        bufp->chgBit(oldp+1479,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc));
        bufp->chgBit(oldp+1480,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))));
        bufp->chgBit(oldp+1481,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                 & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                    & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))));
        bufp->chgBit(oldp+1482,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign));
        bufp->chgQData(oldp+1483,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
        bufp->chgIData(oldp+1485,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),32);
        bufp->chgIData(oldp+1486,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),32);
        bufp->chgIData(oldp+1487,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+1488,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgIData(oldp+1489,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata),32);
        bufp->chgBit(oldp+1490,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1491,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgBit(oldp+1492,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid)))));
        bufp->chgBit(oldp+1493,(vlSelfRef.Top__DOT__dmem__DOT__sram_we_i));
    }
    bufp->chgBit(oldp+1494,(vlSelfRef.clock));
    bufp->chgBit(oldp+1495,(vlSelfRef.reset));
    bufp->chgIData(oldp+1496,(vlSelfRef.io_pin),32);
    bufp->chgBit(oldp+1497,(vlSelfRef.io_rvfi_valid_0));
    bufp->chgIData(oldp+1498,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->chgCData(oldp+1499,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->chgCData(oldp+1500,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->chgCData(oldp+1501,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->chgIData(oldp+1502,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->chgIData(oldp+1503,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->chgCData(oldp+1504,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->chgIData(oldp+1505,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->chgIData(oldp+1506,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->chgIData(oldp+1507,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->chgIData(oldp+1508,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->chgCData(oldp+1509,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->chgIData(oldp+1510,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->chgIData(oldp+1511,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->chgBit(oldp+1512,(vlSelfRef.Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n));
    bufp->chgIData(oldp+1513,(((((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra) 
                                 == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1bU)) & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                                ? vlSelfRef.io_pin : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2)),32);
    bufp->chgIData(oldp+1514,(((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
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
    bufp->chgBit(oldp+1515,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->chgBit(oldp+1516,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__rvalid));
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
