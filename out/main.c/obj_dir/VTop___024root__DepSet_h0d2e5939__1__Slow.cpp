// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf);

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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Top.babyKyberHarness.babykyber.bkyber_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clock)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge reset)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Top.babyKyberHarness.babykyber.bkyber_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clock)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge reset)\n");
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
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
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
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16578823840456122346ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2433068170373474147ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17343161370318453003ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14353053637811342131ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_bits_addrRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6775402668543851886ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter_io_reqIn_bits_isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16577170414042383684ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__deviceAdapter_io_reqOut_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10533064433888784689ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6259646779075023158ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3492080332127905408ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__respReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17480100593143802567ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__stbReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901844942051290125ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__cycReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886255275696507021ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__weReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4274939868859986446ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__datReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12106015038782659281ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__adrReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3077983196705871872ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__selReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3554055326001502849ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__stateReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11068478427415471421ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT__readyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15518281093249457486ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649927415136778313ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 337661446553450267ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727439999449072106ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9738075065076483603ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__hostAdapter__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13114214136165076692ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6321072606885273315ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_key_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17444589756832216134ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2086493438430969371ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249890590928853037ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10669444388813980643ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3295266928286020798ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16010478503133619516ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11933335806091046853ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_key_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3743235219485690959ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12645246700496611843ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15223582496542453276ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__validReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3063190698666431284ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT____VdfgRegularize_h61bc1006_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 619749913652618888ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10331241758400265606ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8227362975078583935ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1570928395606734573ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6764696925453387301ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11964541995547047386ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13831818990205504841ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12483729353339574975ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16709682388079828002ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11866353285870130553ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11979456564880264063ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13261305165189355499ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3664463514038381068ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1303838483466387538ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1170096511692397648ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3076823980464246071ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15132607487021134170ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2448686586410524591ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9901459931429583614ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15471165852017218205ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5626684274748130167ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17092955340208864304ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17399579351588807244ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1393931900777590203ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4514501820236313459ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4573877100973730765ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7014973723871976722ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7206143464524861356ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 376866465082152512ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17627800359868008798ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 647176953510914912ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9373353744308966924ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2455805036454604937ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18251646933969063844ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10547899683069343138ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16495434566946842092ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15888325866601288401ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2059554388945726476ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16967563092377618928ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5646043948409430141ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6669077618340280529ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3697574932363227826ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445636977180307535ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6615228559260412928ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9832776937329791659ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4101350835456009822ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14482195981794649934ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5869856250717332797ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15264307194849618201ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1565653958915627873ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16783623411420235189ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8539698165879840448ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17567289652198222810ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6974274747130184227ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9928851905627576505ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15854455849005336732ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3138230381983687078ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3865246926531834711ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1949830845324774147ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11196962773075309308ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12570893739263977150ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10025963972327704572ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12356772424834928012ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10040842859601524177ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14167299549787416285ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16456288485843276859ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4576960483415638160ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11581621947665495118ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17262523720810638271ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6804399796015482128ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16935027161777188758ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4839176168303848923ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18283393189534413293ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9426764309542240996ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5456036220887661876ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8165543160175816595ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4119763512696657982ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3711404568747501704ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7956607622864981098ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14888446365410756492ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14004427326115193176ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16418035530711518255ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13950097963068162919ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13552622484966198793ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 749602281092131922ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7939631734560611389ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1282965832814019042ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14104386790286189402ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13227708230311598940ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12852850998227102817ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13014919987937409742ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2620066037404340113ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3004831211731805738ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16989028217860318345ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2298745972108769754ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7515980872163946598ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 621932223705905650ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14570118036123843637ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6162510749008508250ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15163868230207272706ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4699324433837283510ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17833676221712746542ull);
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5738113289025180050ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14487245509197004780ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2077963792056665055ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13845870007987231188ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9163548807245509988ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 419303227121720793ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10883862510677863198ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8491940563309813924ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17656976050351479463ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 282144792978392541ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3255510227430947125ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1068805182809173061ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15772870979750445273ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8111009671994018883ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14365330356367493019ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9389025439786386651ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15501203287312404394ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2782151197122269159ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10482133423700192991ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14169042472675386279ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10446747531121202407ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10534131583778327049ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1648920314968139213ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5121125146682334861ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8906925885118709685ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7272143626082566960ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11172896077213167172ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3085349931066010485ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15810008792449053893ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5968069543222640346ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1361581338460365825ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5745382975309472844ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14445938674820087957ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13908856745391242237ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10595717214823686884ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10019597698832532483ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13518669326683076181ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14707508345727656231ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17411131202548788462ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9671725513807772851ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7810893476807438470ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6023897463924684593ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17155576033381883829ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 493019956387985275ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15656546499306713534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13253566970171422947ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14205439638522984158ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5754036744893182781ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16995962952388683658ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15136439806864366426ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7919565579237593299ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5049447560076783498ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4651484031598656592ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9943199132210281109ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15254283060669069358ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2562650877355645348ull);
    }
    vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778346446629469897ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12549778183721678756ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12421973968186584871ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12601926584034192319ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2226290753980200854ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13138178641886901864ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2613741968071078580ull);
    }
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
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10334904604322636542ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17022015474187773713ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17827920432563107897ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v2 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13950064386231944472ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v3 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17946245748479412612ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v4 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3058003246945822109ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v5 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3009680894619598570ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v6 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7700037197965168121ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v7 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16267811721404488498ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v8 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 104377474906119696ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18409686396225937701ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7423048577626977502ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11507672153801770823ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18056850444031409761ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15778431823863254145ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15662750201859746336ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3225147208662881197ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5846828901864097677ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 273667366322565890ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1814411208076006927ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7231388830392097801ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11956838654910357970ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15648843792428097815ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10135799908232134503ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v24 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v25 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v26 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v27 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v28 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v29 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v30 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v31 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v32 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v33 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v34 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v35 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v36 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v37 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v38 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v39 = 0;
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v40 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4223571875880890498ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = 0;
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v57 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7486806203329429619ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v58 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3993398156414148641ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v59 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6081991998716998702ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v60 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12103596912433545289ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v61 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4193402625779980580ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v62 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6884134059973751113ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v63 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6731431652861127035ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v64 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15812480026662295939ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v65 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6159341030890453527ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v66 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3665276896255667953ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v67 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17648376594581178777ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v68 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18059887036613312495ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v69 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7742399166158430064ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v70 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14144744695023869323ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v71 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1480811652462761455ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v72 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4620917206874301507ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v73 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8245073644286061644ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v74 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15757087490503123140ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v75 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8412151449027881142ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v76 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14860006727162119984ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v77 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3836698522360225179ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v78 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6828592229405016619ull);
    vlSelf->__VdlyVal__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v79 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1524677847397082513ull);
    vlSelf->__VdlySet__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v80 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__babyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17669212546747555751ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
