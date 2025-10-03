// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXSoC.h for the primary calling header

#include "VXSoC__pch.h"
#include "VXSoC___024root.h"

VL_ATTR_COLD void VXSoC___024root___eval_triggers__stl(VXSoC___024root* vlSelf);
VL_ATTR_COLD void VXSoC___024root___eval_stl(VXSoC___024root* vlSelf);

VL_ATTR_COLD bool VXSoC___024root___eval_phase__stl(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___eval_phase__stl\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VXSoC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VXSoC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__ico(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___dump_triggers__ico\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VXSoC___024root___dump_triggers__act(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___dump_triggers__act\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge XSoC.babyKyber.bkyber_rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VXSoC___024root___dump_triggers__nba(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___dump_triggers__nba\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge XSoC.babyKyber.bkyber_rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VXSoC___024root____Vm_traceActivitySetAll(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root____Vm_traceActivitySetAll\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VXSoC___024root___ctor_var_reset(VXSoC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXSoC___024root___ctor_var_reset\n"); );
    VXSoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->XSoC__DOT__hostAdapter_io_wbMasterTransmitter_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14558995839240225240ull);
    vlSelf->XSoC__DOT__hostAdapter_io_wbMasterTransmitter_bits_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3529040928407854709ull);
    vlSelf->XSoC__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16981010960872576896ull);
    vlSelf->XSoC__DOT__deviceAdapter_io_reqOut_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2089410314144902413ull);
    vlSelf->XSoC__DOT__uart_io_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12333802020481131528ull);
    vlSelf->XSoC__DOT__uart_io_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15393975476945032574ull);
    vlSelf->XSoC__DOT__uart_io_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8106341828564660923ull);
    vlSelf->XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217738738439527081ull);
    vlSelf->XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3625857440831753846ull);
    vlSelf->XSoC__DOT__uartHostAdapter_io_wbMasterTransmitter_bits_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11180018641707092710ull);
    vlSelf->XSoC__DOT__uartHostAdapter_io_wbSlaveReceiver_bits_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 549065132456148303ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11211391963704146417ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587749870740219553ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12528918858584073624ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16173703265881178956ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14361132628860753030ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3950219393435327241ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode_io_is_f_in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 745654374010296518ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_readData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15568277453842482865ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11281318568013941099ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 188522403679623936ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7492062006807029085ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_addrRequest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10765586086969848565ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_baby_kyber_req_bits_isWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18348896509493205505ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_key_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3686381431596262563ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_encryption_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11465145963605972785ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM_io_decryption_enable_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16633143199964784398ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__pc_io_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12330215296741729432ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__if_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2327258560008979766ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__if_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13582991582432346967ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 69263973526865281ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8098089393978094918ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4154451129866735357ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4763561803834847178ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16987960098341714349ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_f7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3764385563996326951ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14036144374175251457ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16868939876486296858ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8824859500699914159ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluSrc1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10122092331850583221ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4478163559350621808ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8157158141135066650ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6048006652138398855ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9741741206501414958ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15625309927719284282ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_ctl_aluOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10621358760772281447ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123659027196741342ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12347003577409642117ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10434071384319297905ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7037394890307989327ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_f_read_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6722781974991091334ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_rd3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14679517404104200174ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_fcsr_o_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8070276608330642784ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__id_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 234818619289458184ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2365818719432291797ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 140428407365801789ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7513453301047065542ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15856650840489731151ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5027428934294022201ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 936151749063404542ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13723144621829013641ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6158872421005497859ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_ctl_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082563797559498703ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14068555965649543487ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9821432138960061206ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14765565817739438165ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15077675082727069597ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9126266276870652133ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9257018859211948722ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11290739073347984669ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120507552199028443ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3501385401535910474ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_f_except_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 588707400476391046ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__ex_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12497452760851143151ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10916119476714037822ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_ins = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15850660085224264683ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1295672354494289758ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_wra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16449736230877637709ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_memToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18380109311704083620ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8923558640984567976ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_ctl_regWrite_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5219801652773519409ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10426386794673460584ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11259630031457584606ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8110890958687269765ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8755185301651992185ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5896309518918033345ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15108647662068583802ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1829107268555480336ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616089465455640009ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10277938291165415273ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_f_except_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9622582213889317170ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__mem_reg_is_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10439357581320603484ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18224903920665627440ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT___npc_T_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12528292231805299284ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint4_REG = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3900985777102915378ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13739201082133675107ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3081335255947410030ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_0_REG_2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5640184166570322750ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12012358039146507690ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11137742520725547934ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__io_rvfi_uint5_1_REG_2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7188813643423471838ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2784995987851657850ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8399163936445104804ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2456412971739295373ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7672228771596486186ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17423625266799677695ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4526797092103448121ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8661610030052024898ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15661330477058742909ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 804817025009885708ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12181798698409304974ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5712037237280353682ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__REG_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917893322839958501ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT____VdfgRegularize_hb42c75a8_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12416072415754143259ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9676112028258091479ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8607991651380317713ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3949834327368613555ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 7215796904476088409ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13026252198478138739ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15812142640571239500ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 633169880970235144ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10903215689198482422ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7256166588651452059ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14127356172826808930ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13604314664773840981ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3980644664818526164ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3028876141610880224ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6583782074396983311ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2205990712060125668ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14270483323829213001ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17954290257852544037ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2386796905880227096ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3181749099082113517ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5548323699868762888ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15335144247136487398ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__readData2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15633681980328884863ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT___io_pcPlusOffset_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1367287574765834907ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1190619126100953216ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14857460431733151157ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12739270250202397357ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13370244284011203672ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2625278264407957842ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2728483920428839250ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13311997552287483961ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15034799033094296972ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2677937534263572210ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399924433958352976ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13828963934912276212ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1631332219720519939ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10787729321596791029ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8341844857232377906ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14073328216825979603ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11736566489283520028ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8723390368751642516ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9851499542032987299ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15836929830065287843ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3905408669618555028ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15995907906671825336ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2808541886938949131ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13918771178871581890ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5640506567556838988ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11753109963720685103ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14534428564975872804ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10004944850681850203ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16932309034900750863ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10334411815575725493ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1280035218826696758ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8260931406063542897ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5815237273109553330ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1914081402489031264ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6195111881822347260ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6626180203609114079ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12985458593852814076ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12511791801235500388ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7064003126504284652ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735913774543872251ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6103457579921485627ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 355527834412815327ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11646513542354796475ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12198492490818836684ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12959674072609847345ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10937415000001430726ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17790355600217567979ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13928496715633018743ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11661710372994938090ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16423052378856173456ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18066837258682991838ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14134877826379476117ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7716510779412064454ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3994008788808220370ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17421124552736197461ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15843273175157227635ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6380121999965688759ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16911045257548909216ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11807899758606660836ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5831901467824862955ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3949635382834657360ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 534410684405749325ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7838527369824252652ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17085848009574477064ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1530231191899975982ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16851958852049002639ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7051739301862960574ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10952364395362241965ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5206357367169678524ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13502443520258838890ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2204593620035441616ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17158719469163547453ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5769872850871382900ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6732002497837675061ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5508586175676497302ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16424838783534562115ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1530817214310794581ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15559953039358101239ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18348881986181963158ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13681069697632320372ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16804098743612582652ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5258293732937618801ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6334127781214843850ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5140193097018539677ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8883852147973997401ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11487327533379024561ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13912526264543560244ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15341456820185044832ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9807568252279970213ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2698749004467210503ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2761146385813872504ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8606105536480860150ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6565520311070522574ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6905286234136300600ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5061411025944427038ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17686755149177331941ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8999436372019063653ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3731807124559750814ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15250447196739566182ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15590213119805306236ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15205635934423234172ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15052698026524654872ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7857770528601568151ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4381007823894930612ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8810043197271853502ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_input2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9522895177192761473ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__alu_io_aluCtl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2911190863049584805ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3367608181862604851ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5302626860362694656ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2871056837118395786ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15107350918530316764ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_src_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1749642009719310495ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu_io_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660722231627945335ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8264549871393606155ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_in_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17800680230293251367ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_aluOp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1056865054051232882ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14871546700131219846ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5147879260678765258ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___inputMux2_T_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7014471290548892500ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_a_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17074934924811224371ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__src_b_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16029860117951210152ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__op_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3753543530828325633ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__div_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13273954212039880334ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f7_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 980242965669868381ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__counter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3538575883193123748ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___T_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3957638553423204080ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6883732069206310912ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___counter_T_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5544835860619037251ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10172278395695910986ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4869206986652383807ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2799140206615319003ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__io_is_f_o_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12548953284453599738ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3867610101493022471ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17873405259553689271ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3789803008517507912ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15508666319776661391ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3451913249812038340ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5667939971514241958ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 24939596322006561ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15144227724765951802ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5168212733509010730ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___T_5, __VscopeHash, 9798094147617748697ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7307812971003195239ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_28, __VscopeHash, 15477596777615492679ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT___GEN_29 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 150107777839376348ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 278577198769598956ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7518113134715753456ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9871097137364533678ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6902067772313009706ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9055703817066909781ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1325210000591719152ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8032992265118326481ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1821953876292150861ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3163810351771993648ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6588516936810467578ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16269723149848280404ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12256497123894265262ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18197731840661723652ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 282138911382622224ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11840482489485432377ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 968157652222297916ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17946516239573810203ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11660144743066061220ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8040530300683748470ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334946185175119664ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17537103914251087480ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15334395595994367564ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7296684797817963528ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13994938175544923253ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 406696536351272534ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11166707933293549474ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5657006886628812731ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15989890758228036736ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14892525268782139446ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12693245702155499166ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12823751506607163324ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3318971678089924918ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17547903396174780619ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT___io_out_T_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1917080487188974542ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12643799428661963448ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11138224263713039240ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 778445132298433537ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3899606451902875562ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3467345334381610969ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1242378272243396307ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796612971040881108ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11275312902275775104ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5817948100154651196ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14169247478837026597ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4758865238693417178ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6342564577743987874ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15515753092841735031ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3040060204319022999ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7415169927887807794ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2735444139843007787ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6436470790027686537ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16825775210035832459ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147300009161612002ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14396298238334489969ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9111196882135368920ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11865642448159358121ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14032543597128745803ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695254964157902560ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6031441349538548925ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC, __VscopeHash, 10433713287518628995ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972406227687432373ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14576049127991328212ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14185957989255077913ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 7104311422400145908ull);
    VL_SCOPED_RAND_RESET_W(75, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum, __VscopeHash, 6932133786678881172ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2661141945412939233ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T, __VscopeHash, 13446451831200246703ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 10520617937133761863ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9054606274474645772ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13226077081916978519ull);
    VL_SCOPED_RAND_RESET_W(114, vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T, __VscopeHash, 10574173848698315677ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14007802915968985197ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12581000855468346571ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14193091057390857176ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13745986687126704198ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5994697305406296108ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4294756384882225774ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13798862390956165064ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17802369362793784927ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14586150154343163814ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4379125698438716232ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16678522751861419422ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10624825722431406616ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6335814951837490570ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 16793093183805817492ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12445752279390699615ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7363923364546617188ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 1261849997581001009ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15622306265792466156ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6255934014054012656ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5413941793137959974ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9856036828250331214ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15685390077163703727ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2565759677106572551ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18324984980182263938ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8976194296541040824ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6801800631674979762ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5459538856737148333ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050578762209585951ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10493948550034870644ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6428558828600934799ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3683939305939589746ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15938649813018544481ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1886557112321418709ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580285065681331712ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13972121575565264373ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17581018073311289953ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14870527290755180767ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7639366940472370643ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10849847120819313165ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3211915885319542886ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5405042772539726935ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 14923828135100099671ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4356169572248742342ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 14315935296373537166ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2241361347180522174ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 8152444430400099810ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 9605402855637978215ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 11983968588883926521ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3956491328162939740ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13054024974296826437ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5450809492842034820ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3034846422527413331ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10075724780164543492ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4962540909419301185ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 4533522002719221486ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17021688332905442528ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1183326227308215779ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17203880273450730610ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8525667303826483323ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2810801318926008499ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4826609481860369431ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13176372772240217786ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5470767516195711975ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14036605917792866345ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6569950816810559313ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920947785216346048ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2862155482400793700ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10000827091158559144ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14863296450461086118ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484653096029487449ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16659505411688417558ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105144191675769208ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8738352913900494942ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4000112768412339961ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15428415550773017407ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5632639722833395835ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58083454709802140ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10945089115094038513ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1889634726450896626ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 3077653502786515020ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9049745135782455078ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16387803609287338876ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8744061819361990151ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2842381000626448497ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11600982616428685864ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14621932444029784137ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12288776270026993678ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11301596432952899940ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2789013245473614200ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008446992586758256ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9713626702973655937ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8281004541011293373ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046725375446556995ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16166397495919381847ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16001380730053570404ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7554302204611669301ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4565574479503184582ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15251818726497908008ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1938919560135677724ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7928902596488763931ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 216675961962526471ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8704858294288291460ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4801082745958765743ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16681135570172990287ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7512041528702742817ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1227032467407832377ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12951164611242741322ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8359035666383982168ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5303869600510170577ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12569304877219870419ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3562662828722803391ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 7212714933871760587ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12350328814539968638ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5707256987115898790ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7660496990632098142ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15356407697873505650ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14925885001017610517ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2332322343038685095ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687860102895412252ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2782460859872020405ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12618329410565166262ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1906798878714572357ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3859886086795965366ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9957990935610631405ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1010455346269449978ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15659534542004743397ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9608151450196633030ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4156545244236448126ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 12778130693309704812ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 881212245409113516ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 362930323552848518ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT____VdfgRegularize_hf5bcaf02_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7088186732597189283ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2331120577898351958ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10488687053353082547ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 9981090650321155162ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3903302425883515285ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7918015753321174ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5266471333548593776ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3924781281648146608ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802379693512146610ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349517575926124735ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916454391320223092ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5076195490844771416ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 553940725271523065ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5721334596824730567ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 417966976485071567ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3201070555031148233ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1551760550659143445ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7711188210514654984ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4435545557612183852ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9476360730830383589ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3804187074542941236ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1515023460908653411ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 350659819980328826ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8938339967184198241ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6036790494978733965ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12801375135517177793ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11350687843676996524ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2808586847242599648ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8230645351785560611ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373485565035949648ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 11877275800952194902ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17996936034447439184ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011675190846881849ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363392117630119596ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7470325175087862306ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9679339690448838714ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7352304847088029260ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11708169578131578766ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17750901415662711284ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11236237903493193991ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9074252398130796577ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14736522097287294890ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8865198479922017449ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3038692785929022362ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223362229534686413ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13147627287625676688ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10909333596402402810ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17021296418582052337ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15162051255753220833ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT__offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10654052927080882637ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1418792792365509753ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13256211560264040511ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8251605231641007155ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 541189143786650755ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT__babyKyberAddrRange = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1988479724985924388ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT__uartAddrRange = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4559785320766002411ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9808205177889184008ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10110267969015996626ull);
    vlSelf->XSoC__DOT__core__DOT__core__DOT__pc__DOT__pc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7951198838771690999ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram_we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701343402007320040ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13996833533057440559ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2830773355806783418ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13467222938834078904ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13165346069645406419ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__csb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3909996091295634792ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__addr_o = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10615332069231057408ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8524613860928582808ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__wmask_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7466517796427321181ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3026989342348816944ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11726636826817823901ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474090485006892125ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8369339561308219632ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18338593199268056585ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429044857452289436ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11277261389510335312ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18026543996048695183ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1799447992901299117ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700451312202082065ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14666214408346187674ull);
    vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1780406377892049855ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->XSoC__DOT__core__DOT__dmem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11441960933325210659ull);
    }
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8944705402862374296ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1250844059929994839ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13796073972623948873ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13806068588974952263ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__csb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3995295529129117026ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__addr_o = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6584139531426865466ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4576124046664122149ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__wmask_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7345176338999461834ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16961645954448955370ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15281093228503117232ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982077756709693959ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__dout1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4204209350478299999ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2959007072321193988ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13989537918022569088ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17897219094293123485ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5053290923045317011ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2283236038847367068ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8440032809325076218ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10982299777129136603ull);
    vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8383088383318129280ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->XSoC__DOT__core__DOT__imem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10783528528053377049ull);
    }
    vlSelf->XSoC__DOT__hostAdapter__DOT__startWBTransaction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2335535209346194966ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1665085465620541993ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__respReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10801766805124005848ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__stbReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17832847479705674957ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__cycReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029720159058730740ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__weReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6544479670087579841ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__datReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6046131749858874868ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__adrReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16582206106625677357ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__selReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13867990897932173758ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__stateReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7745822478860417891ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT__readyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6072166199894518904ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10768483959675423342ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933652704256577071ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 656775133398103149ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994574363154774200ull);
    vlSelf->XSoC__DOT__hostAdapter__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311056948916529909ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1245628740001407718ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_data_Req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7938662684974430753ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_addr_Req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3542857484093291951ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_wen_Req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10978436869093656178ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_data_Resp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 560944438511343135ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_key_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15151649933279098637ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_encryption_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2418032594933961767ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber_decryption_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7184285144580779990ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__validReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17855242163534225020ull);
    vlSelf->XSoC__DOT__babyKyber__DOT____VdfgRegularize_h61bc1006_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1964994362419671239ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__secretkey[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3651059394304368602ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__result[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9102487754952929482ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3816179022446009136ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6086518984234727633ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1651175913394687808ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 810451323151909000ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8238889125446850456ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15710169361951976136ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15875306774497949115ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10764455040987079554ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decimal_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8980115394904709789ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__m_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6669120860735397225ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__message = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16173714104794118297ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t000 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5865996391565938454ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t001 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15788613848194277197ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t002 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5124043610904878734ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t003 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4107695857657726540ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t010 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17522165796744297285ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t011 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1746648737458405836ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t012 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7608436758079250153ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t013 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12080001124210224178ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t020 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4144878244221050428ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t021 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14198357900702608090ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t022 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13988212653621469928ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t023 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14997067622906891967ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t030 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13781039693830979120ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t031 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9271449107711842045ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t032 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16148718863801049154ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__A_t033 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2277755489356276117ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17561773806175406061ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12959198381210639725ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15515353154285055195ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3172075933821828465ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4757731351585603579ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 609905063468630422ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10582415332559464340ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__s_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7675395513223226900ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9976590172359863114ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7067202650784888207ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11380651364943658163ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1596239397081708803ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11937901405550517156ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1797903078122756226ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7485034851124982420ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11417311275085182717ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14639767345411048333ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15698373916046515856ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18194345381387544009ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4489647815106520110ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 229366161883924162ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16898012032243151007ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3437581385678351912ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__r_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14177737052588980772ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_00 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1197263237556923822ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_01 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8984672217610624321ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_02 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5107630436272476200ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_03 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5337502507836765340ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1349884153799042337ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14673302219705649319ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11866765875259198786ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e1_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10305312041583732910ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11010676831367173359ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5018621377254933938ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4243628599087016970ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__e2_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4287636998573497414ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext000 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9049039522971000992ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext001 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11355639490362377980ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext002 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2871040131954708193ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext003 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7626776100475022211ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext010 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9887551287912951371ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext011 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 901967388101547721ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext012 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6388571664047979692ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext013 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8502323834559481895ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext100 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 477825615743140160ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext101 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8434722953169887130ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext102 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6722840047667073773ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__ciphertext103 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10152318460415173680ull);
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16871239102435061788ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 680905918699241094ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13799492846238769908ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3980807753176796035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3967218966168932917ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__added1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3651447796151451648ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__key_done_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1507120936517196666ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12849649818295329424ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6510256637585175719ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 216313058798775524ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2593488480671118388ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1963490956168614827ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18294469438822357221ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16269063444151477123ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16075725785008742418ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12223179230488854785ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4091209495050207037ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14969025945325082963ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1987359646997669203ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 213915205548201705ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4151562842604458239ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7800133514812473141ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12780573164787717483ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7901253883674182797ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 52643207539521191ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1776799283528723217ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 938182817262674222ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15811100621371108583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__added2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13201562724797643307ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14518058379682536357ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14340747062479742448ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__u[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 48271253993992960ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__v[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6688807206153326333ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__temp[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12610516681477669233ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17646903075340870718ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18197190065561107385ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16025694486453470556ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10976540037139817958ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10300205182864886707ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17136390012024112523ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6246963972073153193ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13095242608129394912ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4839142231748583224ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5879890943300246614ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5324598494273059666ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4972565267532019540ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17455618739656561916ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1535126652776125033ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12804706193632472345ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5522066342474977730ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17798785911593380924ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 783819098789740635ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7439687135315193045ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6740974994968543950ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4190757342065526851ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14519980996319045205ull);
    }
    vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991450821255018913ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2138763431992066146ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1666327167697229081ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7547312645527189224ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1756381093355857317ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4584786188726458733ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->XSoC__DOT__babyKyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6815190331249360609ull);
    }
    vlSelf->XSoC__DOT__uart__DOT__control = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4121303936404114398ull);
    vlSelf->XSoC__DOT__uart__DOT__rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17997553041991110696ull);
    vlSelf->XSoC__DOT__uart__DOT__rx_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11660433815029421017ull);
    vlSelf->XSoC__DOT__uart__DOT__rx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 901111780813097824ull);
    vlSelf->XSoC__DOT__uart__DOT__rx_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8429451376232094533ull);
    vlSelf->XSoC__DOT__uart__DOT__rx_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4644894522053209537ull);
    vlSelf->XSoC__DOT__uart__DOT__rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13050926285731060067ull);
    vlSelf->XSoC__DOT__uart__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9828033471671333547ull);
    vlSelf->XSoC__DOT__uart__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16870261329382648054ull);
    vlSelf->XSoC__DOT__uart__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2819711447219131646ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11617861386552160860ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__rxReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1647666455259354539ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8256855333294344162ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__r_SM_Main = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7498028411683963529ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__r_Clock_Count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13086986573689653592ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__r_Bit_Index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4071921291506103827ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT__r_Rx_DV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18082152076921156857ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7620212477182929087ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___r_Clock_Count_T_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18403504663629985645ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7644550480522286396ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2439784319874731936ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3579243421247963483ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3069133479258439279ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2105057318997552531ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5745981650022234209ull);
    vlSelf->XSoC__DOT__uart__DOT__uart_rx__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1804525495131520287ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__startWBTransaction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263228370594574175ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7080149698571740219ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__respReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062832908880390990ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__stbReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5874397770681007496ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__cycReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3501598902577515667ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__weReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17716004127364775368ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__datReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5571043395781901258ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__adrReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17749755233238153702ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__selReg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1683748253017573565ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__stateReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15440127461454022883ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT__readyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11121992611528127370ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327701742238038357ull);
    vlSelf->XSoC__DOT__uartHostAdapter__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14236111305004453613ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 775922346638286296ull);
    vlSelf->__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v0 = 0;
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9271003927217462561ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3072947989796823367ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14920903665291138572ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7211163633308687359ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 612375235093477124ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16939952701609867384ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2909400878252049271ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17367164495573950600ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4396728006684847275ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15906297973174645697ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18388521020190435178ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3522932646101232401ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5002171486356023152ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 305652239346532510ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8477255151327206997ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 211929583020003099ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12559481320327265422ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15328829930886127902ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14988544199335976951ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15450590757641461568ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 896016558632792716ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6408869492136397993ull);
    vlSelf->__VdlyVal__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14378361456684198639ull);
    vlSelf->__VdlySet__XSoC__DOT__babyKyber__DOT__bkyber__DOT__public_key__v24 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    vlSelf->__Vtrigprevexpr___TOP__XSoC__DOT__babyKyber__DOT__bkyber_rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15385054232235810646ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
