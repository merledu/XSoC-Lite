// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"io_pin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"io_rvfi_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"io_rvfi_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"io_rvfi_mode_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+978,0,"io_rvfi_rs1_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+979,0,"io_rvfi_rs2_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+980,0,"io_rvfi_rs1_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"io_rvfi_rs2_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"io_rvfi_rd_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"io_rvfi_rd_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"io_rvfi_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"io_rvfi_pc_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"io_rvfi_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"io_rvfi_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+988,0,"io_rvfi_mem_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"io_rvfi_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+990,0,"io_baby_kyber_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"io_baby_kyber_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"io_baby_kyber_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"io_baby_kyber_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"io_baby_kyber_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"io_baby_kyber_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"io_baby_kyber_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"io_key_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"io_uart_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"io_uart_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1008,0,"io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1011,0,"io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"io_uart_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"io_uart_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"io_uart_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"io_uart_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"io_uart_cio_uart_rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"io_uart_cio_uart_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"io_uart_cio_uart_intr_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"io_pin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"io_rvfi_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"io_rvfi_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"io_rvfi_mode_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+978,0,"io_rvfi_rs1_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+979,0,"io_rvfi_rs2_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+980,0,"io_rvfi_rs1_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"io_rvfi_rs2_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"io_rvfi_rd_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"io_rvfi_rd_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"io_rvfi_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"io_rvfi_pc_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"io_rvfi_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"io_rvfi_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+988,0,"io_rvfi_mem_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"io_rvfi_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+990,0,"io_baby_kyber_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"io_baby_kyber_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"io_baby_kyber_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"io_baby_kyber_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"io_baby_kyber_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"io_baby_kyber_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"io_baby_kyber_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"io_key_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"io_uart_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"io_uart_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1008,0,"io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1011,0,"io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"io_uart_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"io_uart_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"io_uart_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"io_uart_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"io_uart_cio_uart_rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"io_uart_cio_uart_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"io_uart_cio_uart_intr_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"core_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"core_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"core_io_pin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+969,0,"core_io_dmemReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"core_io_dmemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"core_io_dmemReq_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"core_io_dmemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"core_io_dmemReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"core_io_dmemRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"core_io_dmemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"core_io_imemReq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"core_io_imemReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"core_io_imemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"core_io_imemRsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"core_io_imemRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"core_io_imemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"core_io_rvfi_bool",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"core_io_rvfi_uint4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"core_io_rvfi_uint5_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"core_io_rvfi_uint5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"core_io_rvfi_uint5_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"core_io_rvfi_uint32_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"core_io_rvfi_uint32_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"core_io_rvfi_uint32_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"core_io_rvfi_uint32_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"core_io_rvfi_uint32_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"core_io_rvfi_uint32_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"core_io_rvfi_uint32_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"core_io_rvfi_uint32_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"core_io_rvfi_uint32_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+990,0,"core_io_baby_kyber_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"core_io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"core_io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"core_io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"core_io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"core_io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"core_io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"core_io_baby_kyber_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"core_io_baby_kyber_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"core_io_baby_kyber_rsp_bits_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"core_io_baby_kyber_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"core_io_baby_kyber_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"core_io_baby_kyber_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"core_io_uart_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"core_io_uart_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"core_io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"core_io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"core_io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"core_io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"core_io_uart_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"core_io_uart_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"core_io_uart_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1024,0,"core_io_uart_rsp_bits_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"core_io_uart_cio_uart_rx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"core_io_uart_cio_uart_tx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"core_io_uart_cio_uart_intr_tx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"core_io_key_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"core_io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"core_io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"dmem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"dmem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+969,0,"dmem_io_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"dmem_io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"dmem_io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dmem_io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"dmem_io_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dmem_io_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"dmem_io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"imem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"imem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"imem_io_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"imem_io_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"imem_io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"imem_io_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"imem_io_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"imem_io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"tracer_rvfi_i_bool",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tracer_rvfi_i_uint4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"tracer_rvfi_i_uint5_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"tracer_rvfi_i_uint5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"tracer_rvfi_i_uint5_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"tracer_rvfi_i_uint32_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"tracer_rvfi_i_uint32_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"tracer_rvfi_i_uint32_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"tracer_rvfi_i_uint32_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"tracer_rvfi_i_uint32_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"tracer_rvfi_i_uint32_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"tracer_rvfi_i_uint32_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"tracer_rvfi_i_uint32_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"tracer_rvfi_i_uint32_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"tracer_rvfi_o_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"tracer_rvfi_o_insn_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"tracer_rvfi_o_rs1_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"tracer_rvfi_o_rs2_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"tracer_rvfi_o_rs1_rdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"tracer_rvfi_o_rs2_rdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"tracer_rvfi_o_rd_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"tracer_rvfi_o_rd_wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"tracer_rvfi_o_pc_rdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"tracer_rvfi_o_pc_wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"tracer_rvfi_o_mem_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"tracer_rvfi_o_mem_wmask_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+988,0,"tracer_rvfi_o_mem_rdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"tracer_rvfi_o_mem_wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"io_pin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+969,0,"io_dmemReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_dmemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_dmemReq_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_dmemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"io_dmemReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_dmemRsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"io_dmemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_imemReq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"io_imemReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_imemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_imemRsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_imemRsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"io_imemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"io_rvfi_bool",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_rvfi_uint4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"io_rvfi_uint5_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"io_rvfi_uint5_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"io_rvfi_uint5_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"io_rvfi_uint32_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_rvfi_uint32_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_rvfi_uint32_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"io_rvfi_uint32_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"io_rvfi_uint32_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"io_rvfi_uint32_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"io_rvfi_uint32_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"io_rvfi_uint32_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"io_rvfi_uint32_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+990,0,"io_baby_kyber_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"io_baby_kyber_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"io_baby_kyber_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"io_baby_kyber_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"io_baby_kyber_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"io_baby_kyber_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"io_baby_kyber_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"io_uart_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_uart_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_uart_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_uart_rsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"io_uart_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1024,0,"io_uart_rsp_bits_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_uart_cio_uart_rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_uart_cio_uart_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_uart_cio_uart_intr_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"io_key_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"InstructionFetch_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"InstructionFetch_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"InstructionFetch_io_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"InstructionFetch_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+451,0,"InstructionFetch_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"InstructionFetch_io_coreInstrReq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"InstructionFetch_io_coreInstrReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"InstructionFetch_io_coreInstrReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"InstructionFetch_io_coreInstrResp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"InstructionFetch_io_coreInstrResp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"InstructionFetch_io_coreInstrResp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"InstructionDecode_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"InstructionDecode_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"InstructionDecode_io_id_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"InstructionDecode_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"InstructionDecode_io_writeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"InstructionDecode_io_pcAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"InstructionDecode_io_ctl_writeEnable_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"InstructionDecode_io_ctl_writeEnable_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"InstructionDecode_io_ex_mem_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"InstructionDecode_io_id_ex_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"InstructionDecode_io_ex_mem_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"InstructionDecode_io_ex_mem_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"InstructionDecode_io_mem_wb_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"InstructionDecode_io_ex_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"InstructionDecode_io_ex_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"InstructionDecode_io_ex_mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"InstructionDecode_io_mem_wb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"InstructionDecode_io_id_ex_regWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"InstructionDecode_io_ex_mem_regWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"InstructionDecode_io_csr_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"InstructionDecode_io_csr_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"InstructionDecode_io_csr_Wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"InstructionDecode_io_csr_Ex_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"InstructionDecode_io_csr_Mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"InstructionDecode_io_csr_Wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"InstructionDecode_io_dmem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"InstructionDecode_io_ex_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"InstructionDecode_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"InstructionDecode_io_writeRegAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+453,0,"InstructionDecode_io_readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"InstructionDecode_io_readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"InstructionDecode_io_func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"InstructionDecode_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+48,0,"InstructionDecode_io_ctl_aluSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"InstructionDecode_io_ctl_memToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"InstructionDecode_io_ctl_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"InstructionDecode_io_ctl_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"InstructionDecode_io_ctl_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"InstructionDecode_io_ctl_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"InstructionDecode_io_ctl_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"InstructionDecode_io_ctl_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"InstructionDecode_io_ctl_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"InstructionDecode_io_ctl_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1023,0,"InstructionDecode_io_hdu_pcWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"InstructionDecode_io_pcSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"InstructionDecode_io_pcPlusOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"InstructionDecode_io_ifid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"InstructionDecode_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"InstructionDecode_io_csr_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"InstructionDecode_io_is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"InstructionDecode_io_fcsr_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"InstructionDecode_io_f_read_reg_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"InstructionDecode_io_f_read_reg_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"InstructionDecode_io_f_read_reg_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"InstructionDecode_io_f_read_reg_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"InstructionDecode_io_f_read_reg_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"InstructionDecode_io_f_except_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"InstructionDecode_io_f_except_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"InstructionDecode_io_f_except_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"InstructionDecode_io_f_except_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"InstructionDecode_io_f_except_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"InstructionDecode_io_f_except_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"InstructionDecode_io_f_except_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"InstructionDecode_io_f_except_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"InstructionDecode_io_f_except_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"InstructionDecode_io_f_except_1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"InstructionDecode_io_f_except_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"InstructionDecode_io_f_except_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"InstructionDecode_io_f_except_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"InstructionDecode_io_f_except_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"InstructionDecode_io_f_except_2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"InstructionDecode_io_is_f_in_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"InstructionDecode_io_is_f_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"InstructionDecode_io_is_f_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"InstructionDecode_io_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"InstructionDecode_io_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"InstructionDecode_io_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"InstructionDecode_io_readData3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"InstructionDecode_io_is_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"InstructionDecode_io_raddr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"InstructionDecode_io_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"InstructionDecode_io_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"InstructionDecode_io_rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"Execute_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"Execute_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"Execute_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"Execute_io_readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"Execute_io_readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"Execute_io_pcAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"Execute_io_func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+90,0,"Execute_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"Execute_io_mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"Execute_io_wb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"Execute_io_ex_mem_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"Execute_io_ex_mem_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"Execute_io_mem_wb_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"Execute_io_mem_wb_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"Execute_io_id_ex_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"Execute_io_ex_mem_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"Execute_io_mem_wb_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"Execute_io_ctl_aluSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"Execute_io_ctl_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"Execute_io_ctl_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"Execute_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"Execute_io_ALUresult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"Execute_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"Execute_io_rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"Execute_io_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"Execute_io_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"Execute_io_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"Execute_io_readData3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"Execute_io_fcsr_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"Execute_io_is_f_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"Execute_io_is_f_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"Execute_io_exceptions_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"Execute_io_exceptions_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"Execute_io_exceptions_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"Execute_io_exceptions_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"Execute_io_exceptions_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"MEM_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"MEM_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"MEM_io_aluResultIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"MEM_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"MEM_io_writeEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"MEM_io_readEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"MEM_io_readData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"MEM_io_f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+969,0,"MEM_io_dccmReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"MEM_io_dccmReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"MEM_io_dccmReq_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MEM_io_dccmReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"MEM_io_dccmReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"MEM_io_dccmRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"MEM_io_dccmRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"MEM_io_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+991,0,"MEM_io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"MEM_io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"MEM_io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"MEM_io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"MEM_io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"MEM_io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MEM_io_uart_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"MEM_io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"MEM_io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"MEM_io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"MEM_io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MEM_io_uart_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"MEM_io_key_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"MEM_io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"MEM_io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"pc_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"pc_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"pc_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+465,0,"pc_io_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"pc_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+399,0,"pc_io_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"pc_io_pc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"if_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"if_reg_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"id_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"id_reg_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"id_reg_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"id_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"id_reg_wra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"id_reg_f7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+90,0,"id_reg_f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"id_reg_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"id_reg_ctl_aluSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"id_reg_ctl_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"id_reg_ctl_memToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"id_reg_ctl_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"id_reg_ctl_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"id_reg_ctl_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"id_reg_ctl_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"id_reg_ctl_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"id_reg_is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"id_reg_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"id_reg_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"id_reg_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"id_reg_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"id_reg_rd3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"id_reg_fcsr_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"id_reg_is_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"ex_reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"ex_reg_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ex_reg_wra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"ex_reg_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"ex_reg_ctl_memToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"ex_reg_ctl_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"ex_reg_ctl_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ex_reg_ctl_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ex_reg_ctl_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"ex_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"ex_reg_is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"ex_reg_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"ex_reg_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"ex_reg_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"ex_reg_f_except_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"ex_reg_f_except_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"ex_reg_f_except_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ex_reg_f_except_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ex_reg_f_except_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ex_reg_is_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"mem_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"mem_reg_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"mem_reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"mem_reg_wra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+113,0,"mem_reg_ctl_memToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"mem_reg_ctl_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"mem_reg_ctl_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"mem_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"mem_reg_is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"mem_reg_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"mem_reg_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"mem_reg_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"mem_reg_f_except_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"mem_reg_f_except_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"mem_reg_f_except_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"mem_reg_f_except_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"mem_reg_f_except_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"mem_reg_is_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+467,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+468,0,"IF_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"ral_halt_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"is_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"npc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_rvfi_uint4_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"io_rvfi_uint5_0_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"io_rvfi_uint5_0_REG_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"io_rvfi_uint5_0_REG_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"io_rvfi_uint5_1_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"io_rvfi_uint5_1_REG_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"io_rvfi_uint5_1_REG_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"REG_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"REG_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"REG_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"REG_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"REG_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"REG_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"REG_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"REG_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"REG_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"REG_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"REG_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Execute", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"io_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_readData1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_readData2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"io_pcAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+90,0,"io_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"io_mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"io_wb_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"io_ex_mem_regWrite_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_ex_mem_regWrite_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_mem_wb_regWrite_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_mem_wb_regWrite_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"io_id_ex_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"io_ex_mem_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_mem_wb_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"io_ctl_aluSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"io_ctl_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"io_ctl_aluSrc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"io_writeData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"io_ALUresult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"io_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"io_rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"io_f_read_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_f_read_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"io_f_read_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"io_readData3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"io_fcsr_o_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"io_is_f_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_is_f_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"io_exceptions_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"io_exceptions_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"io_exceptions_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"io_exceptions_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"io_exceptions_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"alu_io_input1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"alu_io_input2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"alu_io_aluCtl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+401,0,"alu_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"aluCtl_io_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+128,0,"aluCtl_io_f7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"aluCtl_io_f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+92,0,"aluCtl_io_aluSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"aluCtl_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"ForwardingUnit_io_ex_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"ForwardingUnit_io_mem_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+130,0,"ForwardingUnit_io_reg_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+131,0,"ForwardingUnit_io_reg_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"ForwardingUnit_io_ex_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"ForwardingUnit_io_ex_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"ForwardingUnit_io_mem_regWrite_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"ForwardingUnit_io_mem_regWrite_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"ForwardingUnit_io_forwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+133,0,"ForwardingUnit_io_forwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"ForwardingUnit_io_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"ForwardingUnit_io_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"ForwardingUnit_io_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"ForwardingUnit_io_reg_rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"ForwardingUnit_io_forwardC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+972,0,"mdu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"mdu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"mdu_io_src_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"mdu_io_src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"mdu_io_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+137,0,"mdu_io_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"mdu_io_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"mdu_io_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"mdu_io_output_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"FPU_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"FPU_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"FPU_io_in_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"FPU_io_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"FPU_io_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"FPU_io_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"FPU_io_rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+142,0,"FPU_io_div_sqrt_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"FPU_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+456,0,"FPU_io_exceptions_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"FPU_io_exceptions_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"FPU_io_exceptions_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"FPU_io_exceptions_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"FPU_io_exceptions_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"FPU_io_div_sqrt_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"FPU_io_div_sqrt_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"inputMux1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"inputMux2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"aluIn1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"aluIn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"src_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"src_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"op_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+148,0,"div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"f7_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+151,0,"f_mono_cycle_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"f_multi_cycle_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"f_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"io_is_f_o_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"io_in_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"io_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"io_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"io_rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+142,0,"io_div_sqrt_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+456,0,"io_exceptions_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"io_exceptions_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"io_exceptions_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"io_exceptions_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"io_exceptions_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"io_div_sqrt_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"io_div_sqrt_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"MulAddRecFN_e8_s24_io_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+475,0,"MulAddRecFN_e8_s24_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"MulAddRecFN_e8_s24_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+479,0,"MulAddRecFN_e8_s24_io_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"MulAddRecFN_e8_s24_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"MulAddRecFN_e8_s24_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"MulAddRecFN_e8_s24_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+155,0,"AddRecFN_io_subOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"AddRecFN_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"AddRecFN_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"AddRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"AddRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"AddRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+475,0,"MulRecFN_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"MulRecFN_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"MulRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"MulRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"MulRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+972,0,"DivSqrtRecFM_small_e8_s24_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"DivSqrtRecFM_small_e8_s24_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"DivSqrtRecFM_small_e8_s24_io_inReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"DivSqrtRecFM_small_e8_s24_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"DivSqrtRecFM_small_e8_s24_io_sqrtOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"DivSqrtRecFM_small_e8_s24_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"DivSqrtRecFM_small_e8_s24_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"DivSqrtRecFM_small_e8_s24_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"DivSqrtRecFM_small_e8_s24_io_outValid_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"DivSqrtRecFM_small_e8_s24_io_outValid_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+159,0,"DivSqrtRecFM_small_e8_s24_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"DivSqrtRecFM_small_e8_s24_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+475,0,"CompareRecFN_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"CompareRecFN_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+162,0,"CompareRecFN_io_signaling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"CompareRecFN_io_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"CompareRecFN_io_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"CompareRecFN_io_gt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"CompareRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+475,0,"RecFNToIN_e8_s24_i32_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"RecFNToIN_e8_s24_i32_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+163,0,"RecFNToIN_e8_s24_i32_io_signedOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"RecFNToIN_e8_s24_i32_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"RecFNToIN_e8_s24_i32_io_intExceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+164,0,"INToRecFN_i32_e8_s24_io_signedIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"INToRecFN_i32_e8_s24_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"INToRecFN_i32_e8_s24_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+492,0,"INToRecFN_i32_e8_s24_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+494,0,"INToRecFN_i32_e8_s24_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+495,0,"raw_in_expIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"raw_in_fractIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+497,0,"raw_in_isZeroExpIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"raw_in_isZeroFractIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"raw_in_normDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+500,0,"raw_in_adjustedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+501,0,"raw_in_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"raw_in_out_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"raw_in_expIn_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+504,0,"raw_in_fractIn_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+505,0,"raw_in_isZeroExpIn_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"raw_in_isZeroFractIn_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"raw_in_normDist_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+508,0,"raw_in_adjustedExp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+509,0,"raw_in_isSpecial_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"raw_in_out_1_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"op_out_rawIn_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+512,0,"op_out_rawIn_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"op_out_rawIn_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"op_out_rawIn__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"op_out_rawIn__isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"op_out_rawIn__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+517,0,"op_out_rawIn__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+518,0,"op_out_rawIn__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+519,0,"op_out_isSubnormal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+520,0,"op_out_denormShiftDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+521,0,"op_out_denormFract",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+522,0,"op_out_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"op_out_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+524,0,"op_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"op_out_rawIn_exp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+526,0,"op_out_rawIn_isZero_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"op_out_rawIn_isSpecial_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"op_out_rawIn_1_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"op_out_rawIn_1_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"op_out_rawIn_1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+531,0,"op_out_rawIn_1_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+532,0,"op_out_rawIn_1_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+533,0,"op_out_isSubnormal_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"op_out_denormShiftDist_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+535,0,"op_out_denormFract_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+536,0,"op_out_expOut_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+537,0,"op_out_fractOut_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+538,0,"op_out_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"op_out_rawIn_exp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+540,0,"op_out_rawIn_isZero_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"op_out_rawIn_isSpecial_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"op_out_rawIn_2_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"op_out_rawIn_2_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"op_out_rawIn_2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+545,0,"op_out_rawIn_2_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+546,0,"op_out_rawIn_2_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+547,0,"op_out_isSubnormal_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"op_out_denormShiftDist_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+549,0,"op_out_denormFract_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+550,0,"op_out_expOut_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+551,0,"op_out_fractOut_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+552,0,"op_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"op_out_rawIn_exp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+166,0,"op_out_rawIn_isZero_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"op_out_rawIn_isSpecial_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"op_out_rawIn_3_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"op_out_rawIn_3_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"op_out_rawIn_3_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"op_out_rawIn_3_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+172,0,"op_out_rawIn_3_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+173,0,"op_out_isSubnormal_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"op_out_denormShiftDist_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+175,0,"op_out_denormFract_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+176,0,"op_out_expOut_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"op_out_fractOut_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+178,0,"op_out_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"op_out_rawIn_exp_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+554,0,"op_out_rawIn_isZero_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"op_out_rawIn_isSpecial_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"op_out_rawIn_4_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"op_out_rawIn_4_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"op_out_rawIn_4_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"op_out_rawIn_4_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+560,0,"op_out_rawIn_4_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+561,0,"op_out_isSubnormal_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"op_out_denormShiftDist_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,0,"op_out_denormFract_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+564,0,"op_out_expOut_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+565,0,"op_out_fractOut_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+566,0,"op_out_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+567,0,"rawIn_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"rawIn_expIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+569,0,"rawIn_fractIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+570,0,"rawIn_isZeroExpIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"rawIn_isZeroFractIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"rawIn_normDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+573,0,"rawIn_subnormFract",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+574,0,"rawIn_adjustedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+575,0,"rawIn_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"rawIn_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"rawIn__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+578,0,"rawIn__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+579,0,"rawIn__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+580,0,"rawIn_sign_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,0,"rawIn_subnormFract_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+582,0,"rawIn_isZero_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"rawIn_1_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+584,0,"rawIn_1_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+585,0,"rawIn_sign_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"rawIn_subnormFract_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+587,0,"rawIn_isZero_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"rawIn_3_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+589,0,"rawIn_3_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+590,0,"io_out_rawIn_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"io_out_rawIn_isZero_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"io_out_rawIn_isSpecial_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"io_out_rawIn_1_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_out_rawIn_1_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"io_out_rawIn_1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"io_out_rawIn_1_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+596,0,"io_out_rawIn_1_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+597,0,"io_out_isSigNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"io_out_isFiniteNonzero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"io_out_isSubnormal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("AddRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"io_subOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+155,0,"addRawFN__io_subOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"addRawFN__io_a_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"addRawFN__io_a_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"addRawFN__io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"addRawFN__io_a_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"addRawFN__io_a_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"addRawFN__io_a_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"addRawFN__io_b_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"addRawFN__io_b_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"addRawFN__io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"addRawFN__io_b_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"addRawFN__io_b_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"addRawFN__io_b_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"addRawFN__io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+606,0,"addRawFN__io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"addRawFN__io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"addRawFN__io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"addRawFN__io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"addRawFN__io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"addRawFN__io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"addRawFN__io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+606,0,"roundRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"roundRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"roundRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"roundRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"roundRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"roundRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"roundRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"roundRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"roundRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+590,0,"addRawFN_io_a_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"addRawFN_io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"addRawFN_io_a_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"addRawFN_io_b_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+603,0,"addRawFN_io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"addRawFN_io_b_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("addRawFN_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"io_subOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"io_a_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_a_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_a_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"io_a_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"io_a_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"io_a_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"io_b_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_b_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_b_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"io_b_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"io_b_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"io_b_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+606,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+615,0,"effSignB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"eqSigns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"notEqSigns_signZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"sDiffExps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+618,0,"modNatAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+619,0,"isMaxAlign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+620,0,"alignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+621,0,"closeSubMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"close_sSigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+623,0,"close_sigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+624,0,"close_reduced2SigSum_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"close_reduced2SigSum_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"close_reduced2SigSum_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"close_reduced2SigSum_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"close_reduced2SigSum_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"close_reduced2SigSum_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"close_reduced2SigSum_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"close_reduced2SigSum_reducedVec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"close_reduced2SigSum_reducedVec_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"close_reduced2SigSum_reducedVec_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"close_reduced2SigSum_reducedVec_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"close_reduced2SigSum_reducedVec_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"close_reduced2SigSum_reducedVec_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+637,0,"close_reduced2SigSum_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+638,0,"close_reduced2SigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+639,0,"close_normDistReduced2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+640,0,"close_nearNormDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+641,0,"close_sigOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+642,0,"close_totalCancellation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"close_notTotalCancellation_signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"far_signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"far_sigLarger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+646,0,"far_sigSmaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+647,0,"far_mainAlignedSigSmaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBit(c+648,0,"far_reduced4SigSmaller_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"far_reduced4SigSmaller_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"far_reduced4SigSmaller_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"far_reduced4SigSmaller_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"far_reduced4SigSmaller_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"far_reduced4SigSmaller_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"far_reduced4SigSmaller_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"far_reduced4SigSmaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+656,0,"far_roundExtraMask_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+657,0,"far_roundExtraMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+658,0,"far_alignedSigSmaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+659,0,"far_negAlignedSigSmaller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+660,0,"far_sigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+661,0,"far_sigOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+662,0,"notSigNaN_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"addZeros",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"notNaN_specialCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"notNaN_isZeroOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("roundRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+606,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+606,0,"roundAnyRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundAnyRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"roundAnyRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"roundAnyRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"roundAnyRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"roundAnyRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"roundAnyRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"roundAnyRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundAnyRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"roundAnyRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"roundAnyRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("roundAnyRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+606,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+612,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+483,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+404,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+180,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"doShiftSigDown1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"roundMask_msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,0,"roundMask_lsbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+669,0,"roundMask_msb_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+670,0,"roundMask_lsbs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+671,0,"roundMask_msb_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+672,0,"roundMask_lsbs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+673,0,"roundMask_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+676,0,"roundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+677,0,"shiftedRoundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+678,0,"roundPosMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+679,0,"roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"anyRoundExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+682,0,"roundedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+683,0,"sRoundedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+684,0,"common_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+685,0,"common_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+686,0,"common_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"common_totalUnderflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"unboundedRange_roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"unboundedRange_anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"unboundedRange_roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"roundCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"common_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"common_inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"isNaNOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"notNaN_isSpecialInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"commonCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"overflow_roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"pegMinNonzeroMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"pegMaxFiniteMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+525,0,"expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+700,0,"fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CompareRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+162,0,"io_signaling",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"io_lt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"io_eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"io_gt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+590,0,"rawA_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"rawA_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"rawA_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"rawA__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"rawA__isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rawA__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"rawA__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+596,0,"rawA__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+613,0,"rawB_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+603,0,"rawB_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"rawB_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"rawB__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"rawB__isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"rawB__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"rawB__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+701,0,"rawB__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+702,0,"ordered",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"bothInfs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"bothZeros",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"eqExps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"common_ltMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"common_eqMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"ordered_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"ordered_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"invalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("DivSqrtRecFM_small_e8_s24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"io_inReady",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_sqrtOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"io_outValid_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io_outValid_sqrt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+159,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+972,0,"divSqrtRecFNToRaw_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"divSqrtRecFNToRaw_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"divSqrtRecFNToRaw_io_inReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"divSqrtRecFNToRaw_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"divSqrtRecFNToRaw_io_sqrtOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"divSqrtRecFNToRaw_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"divSqrtRecFNToRaw_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"divSqrtRecFNToRaw_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"divSqrtRecFNToRaw_io_rawOutValid_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"divSqrtRecFNToRaw_io_rawOutValid_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"divSqrtRecFNToRaw_io_roundingModeOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+185,0,"divSqrtRecFNToRaw_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"divSqrtRecFNToRaw_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"divSqrtRecFNToRaw_io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"divSqrtRecFNToRaw_io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"divSqrtRecFNToRaw_io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"divSqrtRecFNToRaw_io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"divSqrtRecFNToRaw_io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"divSqrtRecFNToRaw_io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+185,0,"roundRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"roundRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"roundRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"roundRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"roundRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"roundRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"roundRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"roundRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+184,0,"roundRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+159,0,"roundRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"roundRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("divSqrtRecFNToRaw", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"io_inReady",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_sqrtOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"io_rawOutValid_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io_rawOutValid_sqrt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"io_roundingModeOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+185,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+972,0,"divSqrtRawFN__clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"divSqrtRawFN__reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"divSqrtRawFN__io_inReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"divSqrtRawFN__io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"divSqrtRawFN__io_sqrtOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"divSqrtRawFN__io_a_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"divSqrtRawFN__io_a_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"divSqrtRawFN__io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"divSqrtRawFN__io_a_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"divSqrtRawFN__io_a_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"divSqrtRawFN__io_a_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"divSqrtRawFN__io_b_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"divSqrtRawFN__io_b_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"divSqrtRawFN__io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"divSqrtRawFN__io_b_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"divSqrtRawFN__io_b_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"divSqrtRawFN__io_b_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"divSqrtRawFN__io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"divSqrtRawFN__io_rawOutValid_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"divSqrtRawFN__io_rawOutValid_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"divSqrtRawFN__io_roundingModeOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+185,0,"divSqrtRawFN__io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"divSqrtRawFN__io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"divSqrtRawFN__io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"divSqrtRawFN__io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"divSqrtRawFN__io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"divSqrtRawFN__io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"divSqrtRawFN__io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"divSqrtRawFN__io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+590,0,"divSqrtRawFN_io_a_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"divSqrtRawFN_io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"divSqrtRawFN_io_a_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"divSqrtRawFN_io_b_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+603,0,"divSqrtRawFN_io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"divSqrtRawFN_io_b_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("divSqrtRawFN_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"io_inReady",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_sqrtOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"io_a_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_a_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_a_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"io_a_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"io_a_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"io_a_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"io_b_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_b_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_b_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"io_b_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"io_b_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"io_b_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"io_rawOutValid_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io_rawOutValid_sqrt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"io_roundingModeOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+185,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+193,0,"cycleNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+143,0,"inReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"rawOutValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"sqrtOp_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"majorExc_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"isNaN_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"isInf_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"isZero_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"sign_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"sExp_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+197,0,"fractB_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+184,0,"roundingMode_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+198,0,"rem_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+199,0,"notZeroRem_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"sigX_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+709,0,"notSigNaNIn_invalidExc_S_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"notSigNaNIn_invalidExc_S_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"sign_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"specialCaseA_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"specialCaseB_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"normalCase_S_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"normalCase_S_sqrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"normalCase_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+716,0,"sExpQuot_S_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+717,0,"sSatExpQuot_S_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+413,0,"evenSqrt_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"oddSqrt_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"entering",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"entering_normalCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"skipCycle2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+719,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+204,0,"bitMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+415,0,"trialTerm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+720,0,"trialRem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBit(c+721,0,"newBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+722,0,"nextRem_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("roundRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+184,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+159,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+185,0,"roundAnyRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"roundAnyRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"roundAnyRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"roundAnyRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"roundAnyRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"roundAnyRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"roundAnyRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"roundAnyRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+184,0,"roundAnyRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+159,0,"roundAnyRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"roundAnyRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("roundAnyRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+192,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+184,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+159,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+205,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"doShiftSigDown1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"roundMask_msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"roundMask_lsbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+214,0,"roundMask_msb_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"roundMask_lsbs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+216,0,"roundMask_msb_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"roundMask_lsbs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+218,0,"roundMask_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+221,0,"roundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+222,0,"shiftedRoundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+223,0,"roundPosMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+224,0,"roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"anyRoundExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"roundedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+229,0,"sRoundedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+230,0,"common_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+231,0,"common_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+232,0,"common_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"common_totalUnderflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"unboundedRange_roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"unboundedRange_anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"unboundedRange_roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"roundCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"common_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"common_inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"isNaNOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"notNaN_isSpecialInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"commonCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"overflow_roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"pegMinNonzeroMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pegMaxFiniteMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+250,0,"fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("INToRecFN_i32_e8_s24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"io_signedIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+492,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+494,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+723,0,"roundAnyRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"roundAnyRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"roundAnyRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+725,0,"roundAnyRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"roundAnyRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+492,0,"roundAnyRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+494,0,"roundAnyRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+558,0,"intAsRawFloat_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+727,0,"intAsRawFloat_absIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+727,0,"intAsRawFloat_extAbsIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"intAsRawFloat_adjustedNormDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+729,0,"intAsRawFloat_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("roundAnyRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+723,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+725,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+492,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+494,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+180,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"sAdjustedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+731,0,"adjustedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+732,0,"roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"anyRoundExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"roundedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+736,0,"sRoundedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+737,0,"common_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+738,0,"common_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+739,0,"commonCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+741,0,"fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MulAddRecFN_e8_s24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+479,0,"io_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"mulAddRecFNToRaw_preMul_io_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+475,0,"mulAddRecFNToRaw_preMul_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"mulAddRecFNToRaw_preMul_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+479,0,"mulAddRecFNToRaw_preMul_io_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+742,0,"mulAddRecFNToRaw_preMul_io_mulAddA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+743,0,"mulAddRecFNToRaw_preMul_io_mulAddB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+744,0,"mulAddRecFNToRaw_preMul_io_mulAddC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+746,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isInfA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isInfB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"mulAddRecFNToRaw_preMul_io_toPostMul_signProd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isInfC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+752,0,"mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+755,0,"mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+756,0,"mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isSigNaNAny",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNAOrB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isInfA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isInfB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_signProd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isInfC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_sExpSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+752,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_doSubMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_CIsDominant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_CDom_CAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+755,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_highAlignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+756,0,"mulAddRecFNToRaw_postMul_io_fromPreMul_bit0AlignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+757,0,"mulAddRecFNToRaw_postMul_io_mulAddResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+141,0,"mulAddRecFNToRaw_postMul_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+759,0,"mulAddRecFNToRaw_postMul_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"mulAddRecFNToRaw_postMul_io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"mulAddRecFNToRaw_postMul_io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"mulAddRecFNToRaw_postMul_io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"mulAddRecFNToRaw_postMul_io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"mulAddRecFNToRaw_postMul_io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"mulAddRecFNToRaw_postMul_io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+759,0,"roundRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"roundRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"roundRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"roundRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"roundRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"roundRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"roundRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"roundRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"roundRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("mulAddRecFNToRaw_postMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+746,0,"io_fromPreMul_isSigNaNAny",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_fromPreMul_isNaNAOrB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_fromPreMul_isInfA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_fromPreMul_isZeroA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_fromPreMul_isInfB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_fromPreMul_isZeroB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"io_fromPreMul_signProd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"io_fromPreMul_isNaNC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"io_fromPreMul_isInfC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"io_fromPreMul_isZeroC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"io_fromPreMul_sExpSum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+752,0,"io_fromPreMul_doSubMags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"io_fromPreMul_CIsDominant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"io_fromPreMul_CDom_CAlignDist",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+755,0,"io_fromPreMul_highAlignedSigC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+756,0,"io_fromPreMul_bit0AlignedSigC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+757,0,"io_mulAddResult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+759,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"CDom_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+767,0,"sigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBus(c+770,0,"CDom_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+771,0,"CDom_absSigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+773,0,"CDom_absSigSumExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"CDom_mainSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBit(c+775,0,"CDom_reduced4SigExtra_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"CDom_reduced4SigExtra_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"CDom_reduced4SigExtra_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"CDom_reduced4SigExtra_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"CDom_reduced4SigExtra_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"CDom_reduced4SigExtra_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"CDom_reduced4SigExtra_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"CDom_reduced4SigExtra_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+783,0,"CDom_reduced4SigExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"CDom_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+785,0,"notCDom_signSigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+786,0,"notCDom_absSigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBit(c+788,0,"notCDom_reduced2AbsSigSum_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"notCDom_reduced2AbsSigSum_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"notCDom_reduced2AbsSigSum_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"notCDom_reduced2AbsSigSum_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"notCDom_reduced2AbsSigSum_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"notCDom_reduced2AbsSigSum_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"notCDom_reduced2AbsSigSum_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"notCDom_reduced2AbsSigSum_reducedVec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"notCDom_reduced2AbsSigSum_reducedVec_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"notCDom_reduced2AbsSigSum_reducedVec_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"notCDom_reduced2AbsSigSum_reducedVec_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"notCDom_reduced2AbsSigSum_reducedVec_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"notCDom_reduced2AbsSigSum_reducedVec_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"notCDom_reduced2AbsSigSum_reducedVec_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"notCDom_reduced2AbsSigSum_reducedVec_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"notCDom_reduced2AbsSigSum_reducedVec_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"notCDom_reduced2AbsSigSum_reducedVec_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"notCDom_reduced2AbsSigSum_reducedVec_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"notCDom_reduced2AbsSigSum_reducedVec_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"notCDom_reduced2AbsSigSum_reducedVec_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"notCDom_reduced2AbsSigSum_reducedVec_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"notCDom_reduced2AbsSigSum_reducedVec_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"notCDom_reduced2AbsSigSum_reducedVec_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"notCDom_reduced2AbsSigSum_reducedVec_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"notCDom_reduced2AbsSigSum_reducedVec_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"notCDom_reduced2AbsSigSum_reducedVec_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+814,0,"notCDom_reduced2AbsSigSum_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+815,0,"notCDom_reduced2AbsSigSum_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+816,0,"notCDom_reduced2AbsSigSum_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+817,0,"notCDom_reduced2AbsSigSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+818,0,"notCDom_normDistReduced2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+819,0,"notCDom_nearNormDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+820,0,"notCDom_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+821,0,"notCDom_mainSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBit(c+822,0,"notCDom_reduced4SigExtra_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"notCDom_reduced4SigExtra_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"notCDom_reduced4SigExtra_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"notCDom_reduced4SigExtra_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"notCDom_reduced4SigExtra_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"notCDom_reduced4SigExtra_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"notCDom_reduced4SigExtra_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"notCDom_reduced4SigExtra_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+829,0,"notCDom_reduced4SigExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+830,0,"notCDom_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+831,0,"notCDom_completeCancellation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"notCDom_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"notNaN_isInfProd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"notNaN_addZeros",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mulAddRecFNToRaw_preMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+479,0,"io_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+742,0,"io_mulAddA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+743,0,"io_mulAddB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+744,0,"io_mulAddC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+746,0,"io_toPostMul_isSigNaNAny",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_toPostMul_isNaNAOrB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_toPostMul_isInfA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_toPostMul_isZeroA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_toPostMul_isInfB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_toPostMul_isZeroB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"io_toPostMul_signProd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"io_toPostMul_isNaNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"io_toPostMul_isInfC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"io_toPostMul_isZeroC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"io_toPostMul_sExpSum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+752,0,"io_toPostMul_doSubMags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"io_toPostMul_CIsDominant",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"io_toPostMul_CDom_CAlignDist",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+755,0,"io_toPostMul_highAlignedSigC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+756,0,"io_toPostMul_bit0AlignedSigC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+590,0,"rawA_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"rawA_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"rawA_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"rawA__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rawA__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"rawA__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+596,0,"rawA__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+613,0,"rawB_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+603,0,"rawB_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"rawB_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"rawB__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"rawB__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"rawB__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+701,0,"rawB__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+833,0,"rawC_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+750,0,"rawC_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"rawC_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"rawC__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"rawC__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+835,0,"rawC__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+836,0,"rawC__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+747,0,"signProd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+837,0,"sExpAlignedProd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+752,0,"doSubMags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+838,0,"sNatCAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+839,0,"posNatCAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+840,0,"isMinCAlign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"CIsDominant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"CAlignDist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+842,0,"mainAlignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+845,0,"reduced4CExtra_reducedVec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"reduced4CExtra_reducedVec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"reduced4CExtra_reducedVec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"reduced4CExtra_reducedVec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"reduced4CExtra_reducedVec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"reduced4CExtra_reducedVec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"reduced4CExtra_reducedVec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+852,0,"reduced4CExtra_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+854,0,"reduced4CExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+855,0,"alignedSigC_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declArray(c+858,0,"alignedSigC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->popPrefix();
    tracep->pushPrefix("roundRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+759,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+759,0,"roundAnyRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundAnyRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"roundAnyRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"roundAnyRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"roundAnyRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"roundAnyRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"roundAnyRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"roundAnyRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundAnyRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"roundAnyRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"roundAnyRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("roundAnyRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+759,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+481,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+403,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+180,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"doShiftSigDown1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"roundMask_msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+864,0,"roundMask_lsbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+865,0,"roundMask_msb_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"roundMask_lsbs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+867,0,"roundMask_msb_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+868,0,"roundMask_lsbs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+869,0,"roundMask_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+872,0,"roundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+873,0,"shiftedRoundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+874,0,"roundPosMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+875,0,"roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"anyRoundExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"roundedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+879,0,"sRoundedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+880,0,"common_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+881,0,"common_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+882,0,"common_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"common_totalUnderflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"unboundedRange_roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"unboundedRange_anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"unboundedRange_roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"roundCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"common_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"common_inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"isNaNOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"notNaN_isSpecialInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"commonCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"overflow_roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"pegMinNonzeroMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"pegMaxFiniteMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+896,0,"fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MulRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+475,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+477,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+593,0,"mulRawFN__io_a_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mulRawFN__io_a_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"mulRawFN__io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"mulRawFN__io_a_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"mulRawFN__io_a_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"mulRawFN__io_a_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"mulRawFN__io_b_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"mulRawFN__io_b_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"mulRawFN__io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"mulRawFN__io_b_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"mulRawFN__io_b_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"mulRawFN__io_b_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+897,0,"mulRawFN__io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"mulRawFN__io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"mulRawFN__io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"mulRawFN__io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"mulRawFN__io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"mulRawFN__io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"mulRawFN__io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+897,0,"roundRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"roundRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"roundRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"roundRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"roundRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"roundRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"roundRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"roundRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"roundRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+590,0,"mulRawFN_io_a_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"mulRawFN_io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"mulRawFN_io_a_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"mulRawFN_io_b_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+603,0,"mulRawFN_io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"mulRawFN_io_b_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mulRawFN_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+593,0,"io_a_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_a_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_a_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"io_a_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"io_a_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"io_a_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"io_b_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_b_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_b_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"io_b_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"io_b_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"io_b_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+897,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+593,0,"mulFullRaw_io_a_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mulFullRaw_io_a_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"mulFullRaw_io_a_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"mulFullRaw_io_a_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"mulFullRaw_io_a_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"mulFullRaw_io_a_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"mulFullRaw_io_b_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"mulFullRaw_io_b_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"mulFullRaw_io_b_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"mulFullRaw_io_b_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"mulFullRaw_io_b_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"mulFullRaw_io_b_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+897,0,"mulFullRaw_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"mulFullRaw_io_rawOut_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"mulFullRaw_io_rawOut_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"mulFullRaw_io_rawOut_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"mulFullRaw_io_rawOut_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"mulFullRaw_io_rawOut_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+902,0,"mulFullRaw_io_rawOut_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("mulFullRaw", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+593,0,"io_a_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"io_a_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"io_a_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"io_a_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"io_a_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+600,0,"io_a_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+601,0,"io_b_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"io_b_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"io_b_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"io_b_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"io_b_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+605,0,"io_b_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+897,0,"io_invalidExc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_rawOut_isNaN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_rawOut_isInf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"io_rawOut_isZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"io_rawOut_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"io_rawOut_sExp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+902,0,"io_rawOut_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+904,0,"notSigNaN_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("roundRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+897,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+897,0,"roundAnyRawFNToRecFN_io_invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"roundAnyRawFNToRecFN_io_infiniteExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"roundAnyRawFNToRecFN_io_in_isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"roundAnyRawFNToRecFN_io_in_isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"roundAnyRawFNToRecFN_io_in_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"roundAnyRawFNToRecFN_io_in_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"roundAnyRawFNToRecFN_io_in_sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"roundAnyRawFNToRecFN_io_in_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"roundAnyRawFNToRecFN_io_roundingMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"roundAnyRawFNToRecFN_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"roundAnyRawFNToRecFN_io_exceptionFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("roundAnyRawFNToRecFN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+897,0,"io_invalidExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"io_infiniteExc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"io_in_isNaN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"io_in_isInf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"io_in_isZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"io_in_sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+900,0,"io_in_sExp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+901,0,"io_in_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+485,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+405,0,"io_exceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+180,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"doShiftSigDown1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"roundMask_msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+908,0,"roundMask_lsbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+909,0,"roundMask_msb_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+910,0,"roundMask_lsbs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+911,0,"roundMask_msb_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"roundMask_lsbs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+913,0,"roundMask_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declBus(c+916,0,"roundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+917,0,"shiftedRoundMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+918,0,"roundPosMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+919,0,"roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"anyRoundExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+922,0,"roundedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+923,0,"sRoundedExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+924,0,"common_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+925,0,"common_fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+926,0,"common_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"common_totalUnderflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"unboundedRange_roundPosBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"unboundedRange_anyRound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"unboundedRange_roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"roundCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"common_underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"common_inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"isNaNOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"notNaN_isSpecialInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"commonCase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"overflow_roundMagUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"pegMinNonzeroMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"pegMaxFiniteMagOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"notNaN_isInfOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"signOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+940,0,"fractOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RecFNToIN_e8_s24_i32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+475,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+141,0,"io_roundingMode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+163,0,"io_signedOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"io_intExceptionFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+590,0,"rawIn_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+591,0,"rawIn_isZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"rawIn_isSpecial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"rawIn__isNaN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"rawIn__isInf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rawIn__sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"rawIn__sExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+596,0,"rawIn__sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+941,0,"magGeOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+942,0,"posExp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+943,0,"magJustBelowOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"roundingMode_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"roundingMode_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"roundingMode_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"roundingMode_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"roundingMode_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+944,0,"shiftedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+946,0,"alignedSig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+948,0,"unroundedInt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+949,0,"common_inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"roundIncr_near_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"roundIncr_near_maxMag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"roundIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"complUnroundedInt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"roundedInt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+954,0,"magGeOne_atOverflowEdge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"roundCarryBut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"common_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"invalidExc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"excSign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"excOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ForwardingUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"io_ex_reg_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"io_mem_reg_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+130,0,"io_reg_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+131,0,"io_reg_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"io_ex_regWrite_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_ex_regWrite_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_mem_regWrite_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_mem_regWrite_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"io_forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+133,0,"io_forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"io_f_read_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_f_read_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"io_f_read_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"io_reg_rs3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"io_forwardC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+469,0,"io_input1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"io_input2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"io_aluCtl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+401,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("aluCtl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+128,0,"io_f7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"io_f3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+92,0,"io_aluSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("mdu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"io_src_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"io_src_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+137,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_output_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"io_output_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+961,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+138,0,"r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"r_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+252,0,"r_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"r_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+254,0,"is_div_rem_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"is_div_rem_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("InstructionDecode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_id_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_writeReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"io_pcAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"io_ctl_writeEnable_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_ctl_writeEnable_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_ex_mem_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"io_id_ex_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"io_ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"io_ex_mem_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_mem_wb_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_ex_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"io_ex_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"io_ex_mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"io_mem_wb_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"io_id_ex_regWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_ex_mem_regWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_csr_Ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_csr_Mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_csr_Wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_csr_Ex_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_csr_Mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"io_csr_Wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"io_dmem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"io_ex_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"io_writeRegAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+453,0,"io_readData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"io_readData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"io_func7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"io_func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+48,0,"io_ctl_aluSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_ctl_memToReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"io_ctl_regWrite_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_ctl_regWrite_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_ctl_memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"io_ctl_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_ctl_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_ctl_aluOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"io_ctl_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"io_ctl_aluSrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1023,0,"io_hdu_pcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"io_pcSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"io_pcPlusOffset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"io_ifid_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"io_csr_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_is_csr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"io_fcsr_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"io_f_read_reg_0_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"io_f_read_reg_1_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_f_read_reg_1_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_f_read_reg_2_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_f_read_reg_2_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"io_f_except_0_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"io_f_except_0_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"io_f_except_0_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"io_f_except_0_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"io_f_except_0_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_f_except_1_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"io_f_except_1_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_f_except_1_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_f_except_1_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_f_except_1_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_f_except_2_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_f_except_2_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_f_except_2_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_f_except_2_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_f_except_2_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_is_f_in_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_is_f_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_is_f_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_f_read_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_f_read_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_f_read_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"io_readData3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"io_is_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"io_raddr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"io_raddr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"io_raddr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"io_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"csr_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"csr_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"csr_io_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"csr_io_i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"csr_io_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"csr_io_i_opr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"csr_io_i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+258,0,"csr_io_i_w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"csr_io_f_except_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"csr_io_f_except_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"csr_io_f_except_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"csr_io_f_except_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"csr_io_f_except_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"csr_io_fcsr_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"csrController_io_regWrExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"csrController_io_rdSelExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"csrController_io_csrWrExecute",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"csrController_io_regWrMemory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"csrController_io_rdSelMemory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+38,0,"csrController_io_csrWrMemory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"csrController_io_regWrWriteback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"csrController_io_rdSelWriteback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+39,0,"csrController_io_csrWrWriteback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"csrController_io_rs1SelDecode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"csrController_io_csrInstDecode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"csrController_io_forwardRS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+431,0,"hdu_io_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"hdu_io_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1023,0,"hdu_io_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"hdu_io_ifid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"control_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"control_io_aluSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"control_io_memToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"control_io_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"control_io_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"control_io_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"control_io_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"control_io_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"control_io_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"control_io_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"control_io_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"control_io_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"control_io_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"control_io_f_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"registers_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"registers_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"registers_io_readAddress_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"registers_io_readAddress_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+263,0,"registers_io_readAddress_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+264,0,"registers_io_writeEnable_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"registers_io_writeEnable_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"registers_io_writeAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"registers_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"registers_io_f_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"registers_io_f_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"registers_io_f_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"registers_io_readData_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"registers_io_readData_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"registers_io_readData_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"immediate_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"immediate_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"bu_io_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"bu_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+963,0,"bu_io_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"bu_io_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+431,0,"bu_io_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"registerRs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"registerRs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+263,0,"registerRs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+963,0,"input1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"j_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+54,0,"io_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+963,0,"io_rd1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"io_rd2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+431,0,"io_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"io_aluSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_memToReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"io_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"io_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_aluOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"io_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"io_aluSrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"io_f_read_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_f_read_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_f_read_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"io_f_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"io_i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_i_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"io_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_i_opr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"io_i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+258,0,"io_i_w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_f_except_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_f_except_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_f_except_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_f_except_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_f_except_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"io_fcsr_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"csrRegFile_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"csrRegFile_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"csrRegFile_io_MISA_i_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"csrRegFile_io_MHARTID_i_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"csrRegFile_io_CSR_i_opr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"csrRegFile_io_CSR_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"csrRegFile_io_CSR_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"csrRegFile_io_CSR_i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+258,0,"csrRegFile_io_CSR_i_w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"csrRegFile_io_FCSR_except_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"csrRegFile_io_FCSR_except_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"csrRegFile_io_FCSR_except_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"csrRegFile_io_FCSR_except_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"csrRegFile_io_FCSR_except_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"csrRegFile_io_FCSR_nx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"csrRegFile_io_FCSR_uf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"csrRegFile_io_FCSR_of",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"csrRegFile_io_FCSR_dz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"csrRegFile_io_FCSR_nv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"csrRegFile_io_FCSR_frm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+275,0,"io_fcsr_o_data_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"io_fcsr_o_data_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->pushPrefix("csrRegFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1025,0,"io_MISA_i_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"io_MHARTID_i_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"io_CSR_i_opr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"io_CSR_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"io_CSR_i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"io_CSR_i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+258,0,"io_CSR_i_w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_FCSR_except_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_FCSR_except_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_FCSR_except_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_FCSR_except_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_FCSR_except_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"io_FCSR_nx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"io_FCSR_uf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"io_FCSR_of",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"io_FCSR_dz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"io_FCSR_nv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"io_FCSR_frm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+277,0,"MISA_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"MHARTID_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"MCAUSE_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"MTVEC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"MEPC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"MIE_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,0,"MSTATUS_TW_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"MSTATUS_MPRV_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"MSTATUS_MPP_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+286,0,"MSTATUS_MPIE_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"MSTATUS_MIE_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"FCSR_NX_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"FCSR_UF_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"FCSR_OF_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"FCSR_DZ_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"FCSR_NV_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"FCSR_FRM_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+288,0,"MSTATUS_WIRE_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+289,0,"MSTATUS_WIRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"FFLAGS_WIRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"FRM_WIRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"FCSR_WIRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"set_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"clear_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+966,0,"w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("csrController", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"io_regWrExecute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"io_rdSelExecute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"io_csrWrExecute",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_regWrMemory",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"io_rdSelMemory",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+38,0,"io_csrWrMemory",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_regWrWriteback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_rdSelWriteback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+39,0,"io_csrWrWriteback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"io_rs1SelDecode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"io_csrInstDecode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"io_forwardRS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+293,0,"hazard_DecEx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"hazard_DecMem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"hazard_DecWb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"csrHazard_DecEx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"csrHazard_DecMem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"csrHazard_DecWb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("hdu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+431,0,"io_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"io_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1023,0,"io_pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"io_ifid_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+257,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+300,0,"ext_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+302,0,"ext_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+304,0,"ext_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"imm_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+306,0,"ext_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"imm_uj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+308,0,"ext_uj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("registers", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"io_readAddress_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"io_readAddress_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+263,0,"io_readAddress_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+264,0,"io_writeEnable_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_writeEnable_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_writeAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"io_f_read_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_f_read_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_f_read_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"io_readData_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"io_readData_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"io_readData_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"i_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"i_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"i_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"i_reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"i_reg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"i_reg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"i_reg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"i_reg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"i_reg_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"i_reg_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"i_reg_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"i_reg_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"i_reg_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"i_reg_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"i_reg_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"i_reg_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"i_reg_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"i_reg_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"i_reg_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"i_reg_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"i_reg_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"i_reg_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"i_reg_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"i_reg_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"i_reg_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"i_reg_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"i_reg_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"i_reg_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"i_reg_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"i_reg_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"i_reg_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"i_reg_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"f_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"f_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"f_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"f_reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"f_reg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"f_reg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"f_reg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"f_reg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"f_reg_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"f_reg_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"f_reg_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"f_reg_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"f_reg_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"f_reg_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+355,0,"f_reg_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"f_reg_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"f_reg_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"f_reg_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"f_reg_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"f_reg_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"f_reg_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"f_reg_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"f_reg_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"f_reg_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"f_reg_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"f_reg_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"f_reg_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"f_reg_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"f_reg_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"f_reg_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"f_reg_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"f_reg_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("InstructionFetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"io_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+451,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_coreInstrReq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"io_coreInstrReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_coreInstrReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_coreInstrResp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_coreInstrResp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"io_coreInstrResp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"io_aluResultIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_writeEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_readEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"io_readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"io_f3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+969,0,"io_dccmReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_dccmReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_dccmReq_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_dccmReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"io_dccmReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_dccmRsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"io_dccmRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"io_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+991,0,"io_baby_kyber_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"io_baby_kyber_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"io_baby_kyber_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"io_baby_kyber_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"io_baby_kyber_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"io_baby_kyber_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_uart_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"io_uart_req_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_uart_req_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_uart_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"io_uart_req_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_uart_rsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"io_key_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"io_encryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"io_decryption_enable_trigger",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+375,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+376,0,"offsetSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+377,0,"wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"wdata_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"wdata_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+380,0,"wdata_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"io_dccmReq_bits_dataRequest_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"io_dccmReq_bits_dataRequest_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+967,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+991,0,"babyKyberAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"uartAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+465,0,"io_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+399,0,"io_pc4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"io_pc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+969,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"sram_clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"sram_rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"sram_csb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+971,0,"sram_we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"sram_wmask_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+383,0,"sram_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"sram_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"sram_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1026,0,"IFILE_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 503,0);
    tracep->declBit(c+972,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"csb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+971,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+439,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+441,0,"wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"wmask_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+443,0,"we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1042,0,"rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1021,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1043,0,"NUM_WMASKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"IZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1026,0,"IFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 503,0);
    tracep->declBit(c+972,0,"clk0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"csb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+971,0,"web0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"wmask0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+383,0,"addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2,0,"din0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"dout0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1024,0,"clk1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"csb1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1049,0,"addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1050,0,"dout1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+385,0,"csb0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"web0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"wmask0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+388,0,"addr0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+389,0,"din0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1051,0,"csb1_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1052,0,"addr1_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1053,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+972,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+972,0,"sram_clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"sram_rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"sram_csb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"sram_we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1054,0,"sram_wmask_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+390,0,"sram_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1025,0,"sram_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"sram_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1055,0,"IFILE_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 503,0);
    tracep->declBit(c+972,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"csb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1025,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+449,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+444,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+446,0,"wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"wmask_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+448,0,"we_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1022,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1043,0,"NUM_WMASKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"IZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1055,0,"IFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 503,0);
    tracep->declBit(c+972,0,"clk0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"csb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"web0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1054,0,"wmask0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+390,0,"addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1025,0,"din0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"dout0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1024,0,"clk1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"csb1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1049,0,"addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1072,0,"dout1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+392,0,"csb0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"web0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"wmask0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+395,0,"addr0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+396,0,"din0_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1073,0,"csb1_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1074,0,"addr1_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1075,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tracer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+975,0,"rvfi_i_bool",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"rvfi_i_uint4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"rvfi_i_uint5_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rvfi_i_uint5_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rvfi_i_uint5_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rvfi_i_uint32_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rvfi_i_uint32_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rvfi_i_uint32_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"rvfi_i_uint32_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rvfi_i_uint32_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"rvfi_i_uint32_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"rvfi_i_uint32_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"rvfi_i_uint32_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"rvfi_i_uint32_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"rvfi_o_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rvfi_o_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rvfi_o_rs1_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"rvfi_o_rs2_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rvfi_o_rs1_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rvfi_o_rs2_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rvfi_o_rd_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+983,0,"rvfi_o_rd_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"rvfi_o_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"rvfi_o_pc_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"rvfi_o_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rvfi_o_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+988,0,"rvfi_o_mem_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"rvfi_o_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ VTop__ConstPool__CONST_hea5f94e6_0;
extern const VlWide<16>/*511:0*/ VTop__ConstPool__CONST_hf6de0e16_0;

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1023,(1U));
    bufp->fullBit(oldp+1024,(0U));
    bufp->fullIData(oldp+1025,(0U),32);
    bufp->fullWData(oldp+1026,(VTop__ConstPool__CONST_hea5f94e6_0),504);
    bufp->fullIData(oldp+1042,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+1043,(4U),32);
    bufp->fullIData(oldp+1044,(0x20U),32);
    bufp->fullIData(oldp+1045,(0x1cU),32);
    bufp->fullIData(oldp+1046,(0x10000000U),32);
    bufp->fullIData(oldp+1047,(3U),32);
    bufp->fullIData(oldp+1048,(0U),32);
    bufp->fullIData(oldp+1049,(0U),28);
    bufp->fullIData(oldp+1050,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+1051,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+1052,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr1_reg),28);
    bufp->fullIData(oldp+1053,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__i),32);
    bufp->fullCData(oldp+1054,(0xfU),4);
    bufp->fullWData(oldp+1055,(VTop__ConstPool__CONST_hf6de0e16_0),504);
    bufp->fullIData(oldp+1071,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+1072,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+1073,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+1074,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),28);
    bufp->fullIData(oldp+1075,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullIData(oldp+1,((0xfffffffU & VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__core__DOT__ex_reg_result, 2U))),32);
    bufp->fullIData(oldp+2,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),32);
    bufp->fullCData(oldp+3,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),4);
    bufp->fullBit(oldp+4,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    bufp->fullBit(oldp+5,((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))));
    bufp->fullBit(oldp+6,((1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
    bufp->fullIData(oldp+7,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2),32);
    bufp->fullBit(oldp+8,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg))));
    bufp->fullBit(oldp+9,((2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
    bufp->fullCData(oldp+10,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint4_REG),4);
    bufp->fullCData(oldp+11,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_2),5);
    bufp->fullCData(oldp+12,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_2),5);
    bufp->fullCData(oldp+13,(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra),5);
    bufp->fullIData(oldp+14,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ins),32);
    bufp->fullIData(oldp+15,(vlSelfRef.Top__DOT__core__DOT__REG_1),32);
    bufp->fullIData(oldp+16,(vlSelfRef.Top__DOT__core__DOT__REG_2),32);
    bufp->fullIData(oldp+17,(vlSelfRef.Top__DOT__core__DOT__mem_reg_pc),32);
    bufp->fullIData(oldp+18,(vlSelfRef.Top__DOT__core__DOT__REG_6),32);
    bufp->fullBit(oldp+19,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange));
    bufp->fullIData(oldp+20,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                               ? vlSelfRef.Top__DOT__core__DOT__ex_reg_result
                               : 0U)),32);
    bufp->fullIData(oldp+21,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                               ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                               : 0U)),32);
    bufp->fullCData(oldp+22,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange)
                               ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+23,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__uartAddrRange) 
                            & (IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite))));
    bufp->fullIData(oldp+24,(vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg),32);
    bufp->fullIData(oldp+25,(vlSelfRef.Top__DOT__core__DOT__if_reg_ins),32);
    bufp->fullIData(oldp+26,(vlSelfRef.Top__DOT__core__DOT__if_reg_pc),32);
    bufp->fullBit(oldp+27,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_0));
    bufp->fullBit(oldp+28,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1));
    bufp->fullBit(oldp+29,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead));
    bufp->fullCData(oldp+30,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                       >> 7U))),5);
    bufp->fullIData(oldp+32,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ins),32);
    bufp->fullIData(oldp+33,(vlSelfRef.Top__DOT__core__DOT__id_reg_ins),32);
    bufp->fullIData(oldp+34,(vlSelfRef.Top__DOT__core__DOT__ex_reg_result),32);
    bufp->fullBit(oldp+35,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_0));
    bufp->fullBit(oldp+36,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_0));
    bufp->fullBit(oldp+37,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_csr));
    bufp->fullBit(oldp+38,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_csr));
    bufp->fullBit(oldp+39,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr));
    bufp->fullIData(oldp+40,(vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data),32);
    bufp->fullIData(oldp+42,(vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data),32);
    bufp->fullBit(oldp+43,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_stall));
    bufp->fullIData(oldp+44,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),32);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+46,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7),7);
    bufp->fullCData(oldp+47,((7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+48,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                            | ((0x13U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x73U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((3U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x23U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_101)))))))));
    bufp->fullCData(oldp+49,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x73U 
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
    bufp->fullBit(oldp+50,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                            & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite))));
    bufp->fullBit(oldp+51,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                            & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr))));
    bufp->fullBit(oldp+52,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x73U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((3U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x23U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x63U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x37U 
                                               != (0x7fU 
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
    bufp->fullBit(oldp+53,(((0x13U != vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                            & ((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x73U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((3U != (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x23U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x63U 
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
                                                          & ((7U 
                                                              != 
                                                              (0x7fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                             & (0x27U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))))))))));
    bufp->fullBit(oldp+54,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x73U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((3U != (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x23U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        & (0x63U == 
                                           (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))));
    bufp->fullCData(oldp+55,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                               ? 2U : ((0x13U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                        ? 2U : ((0x73U 
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
    bufp->fullCData(oldp+56,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump),2);
    bufp->fullCData(oldp+57,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x73U 
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
    bufp->fullBit(oldp+58,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_func7)) 
                            & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xcU))) 
                               | ((5U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU))) 
                                  | ((6U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU))) 
                                     | (7U == (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))))))));
    bufp->fullBit(oldp+59,((0x73U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))));
    bufp->fullIData(oldp+60,(((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 5U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U))) 
                              | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo))),32);
    bufp->fullBit(oldp+61,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0));
    bufp->fullBit(oldp+62,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_0));
    bufp->fullBit(oldp+63,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_read_1));
    bufp->fullBit(oldp+64,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_0));
    bufp->fullBit(oldp+65,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_read_1));
    bufp->fullBit(oldp+66,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_0));
    bufp->fullBit(oldp+67,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_1));
    bufp->fullBit(oldp+68,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_2));
    bufp->fullBit(oldp+69,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_3));
    bufp->fullBit(oldp+70,(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_4));
    bufp->fullBit(oldp+71,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_0));
    bufp->fullBit(oldp+72,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_1));
    bufp->fullBit(oldp+73,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_2));
    bufp->fullBit(oldp+74,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_3));
    bufp->fullBit(oldp+75,(vlSelfRef.Top__DOT__core__DOT__mem_reg_f_except_4));
    bufp->fullBit(oldp+76,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0));
    bufp->fullBit(oldp+77,(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_f));
    bufp->fullBit(oldp+78,(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_f));
    bufp->fullBit(oldp+79,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_0));
    bufp->fullBit(oldp+80,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_1));
    bufp->fullBit(oldp+81,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2));
    bufp->fullBit(oldp+82,(((7U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                            | ((0x27U == (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x43U == (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x47U == (0x7fU 
                                                & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x4bU == (0x7fU 
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x4fU == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                           | (0x53U 
                                              == (0x7fU 
                                                  & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))));
    bufp->fullCData(oldp+83,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+85,(vlSelfRef.Top__DOT__core__DOT__id_reg_imm),32);
    bufp->fullIData(oldp+86,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd1),32);
    bufp->fullIData(oldp+87,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd2),32);
    bufp->fullIData(oldp+88,(vlSelfRef.Top__DOT__core__DOT__id_reg_pc),32);
    bufp->fullCData(oldp+89,(vlSelfRef.Top__DOT__core__DOT__id_reg_f7),7);
    bufp->fullCData(oldp+90,(vlSelfRef.Top__DOT__core__DOT__id_reg_f3),3);
    bufp->fullBit(oldp+91,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_regWrite_1));
    bufp->fullBit(oldp+92,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc));
    bufp->fullCData(oldp+93,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
    bufp->fullCData(oldp+94,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
    bufp->fullBit(oldp+95,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_1));
    bufp->fullBit(oldp+96,(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_2));
    bufp->fullIData(oldp+97,(vlSelfRef.Top__DOT__core__DOT__id_reg_rd3),32);
    bufp->fullIData(oldp+98,(vlSelfRef.Top__DOT__core__DOT__id_reg_fcsr_o_data),32);
    bufp->fullBit(oldp+99,(vlSelfRef.Top__DOT__core__DOT__id_reg_is_f));
    bufp->fullIData(oldp+100,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wd),32);
    bufp->fullCData(oldp+101,((7U & (vlSelfRef.Top__DOT__core__DOT__ex_reg_ins 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+102,(((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_12)
                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                    ? (IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT___GEN_22)
                                    : ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memWrite)
                                        ? 0xfU : 0U)))),4);
    bufp->fullCData(oldp+103,(vlSelfRef.Top__DOT__core__DOT__id_reg_wra),5);
    bufp->fullCData(oldp+104,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
    bufp->fullBit(oldp+105,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_regWrite_1));
    bufp->fullBit(oldp+106,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memRead));
    bufp->fullBit(oldp+107,(vlSelfRef.Top__DOT__core__DOT__id_reg_ctl_memWrite));
    bufp->fullCData(oldp+108,(vlSelfRef.Top__DOT__core__DOT__ex_reg_wra),5);
    bufp->fullCData(oldp+109,(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
    bufp->fullIData(oldp+110,(vlSelfRef.Top__DOT__core__DOT__ex_reg_pc),32);
    bufp->fullIData(oldp+111,(vlSelfRef.Top__DOT__core__DOT__mem_reg_rd),32);
    bufp->fullIData(oldp+112,(vlSelfRef.Top__DOT__core__DOT__mem_reg_result),32);
    bufp->fullCData(oldp+113,(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
    bufp->fullCData(oldp+114,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG),5);
    bufp->fullCData(oldp+115,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_0_REG_1),5);
    bufp->fullCData(oldp+116,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG),5);
    bufp->fullCData(oldp+117,(vlSelfRef.Top__DOT__core__DOT__io_rvfi_uint5_1_REG_1),5);
    bufp->fullIData(oldp+118,(vlSelfRef.Top__DOT__core__DOT__REG),32);
    bufp->fullIData(oldp+119,(vlSelfRef.Top__DOT__core__DOT__REG_3),32);
    bufp->fullIData(oldp+120,(vlSelfRef.Top__DOT__core__DOT__REG_4),32);
    bufp->fullIData(oldp+121,(vlSelfRef.Top__DOT__core__DOT__REG_5),32);
    bufp->fullBit(oldp+122,(vlSelfRef.Top__DOT__core__DOT__REG_7));
    bufp->fullIData(oldp+123,(vlSelfRef.Top__DOT__core__DOT__REG_8),32);
    bufp->fullBit(oldp+124,(vlSelfRef.Top__DOT__core__DOT__REG_9));
    bufp->fullBit(oldp+125,(vlSelfRef.Top__DOT__core__DOT__REG_10));
    bufp->fullIData(oldp+126,(vlSelfRef.Top__DOT__core__DOT__REG_11),32);
    bufp->fullCData(oldp+127,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl),4);
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7) 
                                   >> 5U))));
    bufp->fullCData(oldp+129,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__mem_reg_ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+130,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+131,((0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+132,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
    bufp->fullCData(oldp+133,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
    bufp->fullCData(oldp+134,((vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                               >> 0x1bU)),5);
    bufp->fullCData(oldp+135,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardC),2);
    bufp->fullCData(oldp+136,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15),5);
    bufp->fullBit(oldp+137,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid));
    bufp->fullBit(oldp+138,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_ready));
    bufp->fullBit(oldp+139,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_5) 
                                   & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_valid)) 
                                      & (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter))))))));
    bufp->fullCData(oldp+140,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp),5);
    bufp->fullCData(oldp+141,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode),3);
    bufp->fullBit(oldp+142,(((0x18000053U == (0xfe00007fU 
                                              & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)) 
                             | (0x58000053U == (0xfe00007fU 
                                                & vlSelfRef.Top__DOT__core__DOT__id_reg_ins)))));
    bufp->fullBit(oldp+143,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    bufp->fullBit(oldp+144,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_div_sqrt_valid_out));
    bufp->fullIData(oldp+145,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_a_reg),32);
    bufp->fullIData(oldp+146,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__src_b_reg),32);
    bufp->fullCData(oldp+147,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__op_reg),3);
    bufp->fullBit(oldp+148,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__div_en));
    bufp->fullCData(oldp+149,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f7_reg),6);
    bufp->fullCData(oldp+150,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__counter),6);
    bufp->fullBit(oldp+151,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__f_mono_cycle_inst));
    bufp->fullBit(oldp+152,((1U & ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)) 
                                   | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                      | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f7)))))));
    bufp->fullBit(oldp+153,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__io_is_f_o_REG));
    bufp->fullCData(oldp+154,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_op),2);
    bufp->fullBit(oldp+155,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    bufp->fullBit(oldp+156,((9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    bufp->fullBit(oldp+157,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid))));
    bufp->fullBit(oldp+158,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))));
    bufp->fullQData(oldp+159,((((QData)((IData)(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
    bufp->fullCData(oldp+161,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
                                 << 4U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              << 2U))) 
                               | ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                       | ((~ (((~ (
                                                   (0x2000000U 
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
    bufp->fullBit(oldp+162,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling));
    bufp->fullBit(oldp+163,((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    bufp->fullBit(oldp+164,((0x16U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))));
    bufp->fullSData(oldp+165,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
    bufp->fullBit(oldp+166,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 6U)))));
    bufp->fullBit(oldp+167,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 7U)))));
    bufp->fullBit(oldp+168,((IData)((0x1c0U == (0x1c0U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
    bufp->fullBit(oldp+169,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf));
    bufp->fullBit(oldp+170,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
    bufp->fullSData(oldp+171,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
    bufp->fullIData(oldp+172,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U))) 
                                << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
    bufp->fullBit(oldp+173,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    bufp->fullCData(oldp+174,((0x1fU & ((IData)(1U) 
                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
    bufp->fullIData(oldp+175,((0x7fffffU & ((0xffffffU 
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
    bufp->fullCData(oldp+176,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  - (IData)(0x81U))) 
                                        | (((IData)(
                                                    (0x1c0U 
                                                     == 
                                                     (0x1c0U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_3_isInf))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullIData(oldp+177,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
    bufp->fullIData(oldp+178,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
    bufp->fullBit(oldp+179,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    bufp->fullBit(oldp+180,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    bufp->fullBit(oldp+181,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    bufp->fullBit(oldp+182,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    bufp->fullBit(oldp+183,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))));
    bufp->fullCData(oldp+184,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z),3);
    bufp->fullBit(oldp+185,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    bufp->fullBit(oldp+186,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_infiniteExc));
    bufp->fullBit(oldp+187,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
    bufp->fullBit(oldp+188,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
    bufp->fullBit(oldp+189,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z));
    bufp->fullBit(oldp+190,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z));
    bufp->fullSData(oldp+191,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z),10);
    bufp->fullIData(oldp+192,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
    bufp->fullCData(oldp+193,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum),5);
    bufp->fullBit(oldp+194,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid));
    bufp->fullBit(oldp+195,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z));
    bufp->fullBit(oldp+196,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z));
    bufp->fullIData(oldp+197,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z),24);
    bufp->fullIData(oldp+198,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z),26);
    bufp->fullBit(oldp+199,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
    bufp->fullIData(oldp+200,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z),26);
    bufp->fullBit(oldp+201,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum))));
    bufp->fullBit(oldp+202,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering));
    bufp->fullBit(oldp+203,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
    bufp->fullIData(oldp+204,((((IData)(1U) << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                               >> 2U)),30);
    bufp->fullBit(oldp+205,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    bufp->fullBit(oldp+206,((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    bufp->fullBit(oldp+207,((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    bufp->fullBit(oldp+208,((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    bufp->fullBit(oldp+209,((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    bufp->fullBit(oldp+210,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    bufp->fullBit(oldp+211,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                   >> 0x19U))));
    bufp->fullBit(oldp+212,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                      >> 8U)))));
    bufp->fullCData(oldp+213,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),8);
    bufp->fullBit(oldp+214,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                      >> 7U)))));
    bufp->fullCData(oldp+215,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),7);
    bufp->fullBit(oldp+216,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                      >> 6U)))));
    bufp->fullCData(oldp+217,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)))),6);
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
    bufp->fullWData(oldp+218,(__Vtemp_4),65);
    bufp->fullIData(oldp+221,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                     << 2U))),27);
    bufp->fullIData(oldp+222,((0x7ffffffU & (1U | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
    bufp->fullIData(oldp+223,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
    bufp->fullBit(oldp+224,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
    bufp->fullBit(oldp+225,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    bufp->fullBit(oldp+226,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
    bufp->fullBit(oldp+227,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    bufp->fullIData(oldp+228,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    bufp->fullSData(oldp+229,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
    bufp->fullSData(oldp+230,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
    bufp->fullIData(oldp+231,((0x7fffffU & ((0x2000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
    bufp->fullBit(oldp+232,(VL_LTES_III(4, 3U, (0xfU 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                   >> 7U)))));
    bufp->fullBit(oldp+233,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
    bufp->fullBit(oldp+234,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                       >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))));
    bufp->fullBit(oldp+235,((IData)(((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                     | (0x2000002U 
                                        == (0x2000002U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))))));
    bufp->fullBit(oldp+236,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                  ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                     >> 1U) : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & ((IData)((0x2000002U 
                                            == (0x2000002U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z))) 
                                   | (0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
    bufp->fullBit(oldp+237,((1U & ((0x2000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x19U) : 
                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+238,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
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
    bufp->fullBit(oldp+239,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
    bufp->fullBit(oldp+240,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullBit(oldp+241,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut));
    bufp->fullBit(oldp+242,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
    bufp->fullBit(oldp+243,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    bufp->fullBit(oldp+244,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
    bufp->fullBit(oldp+245,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
    bufp->fullBit(oldp+246,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
    bufp->fullBit(oldp+247,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
    bufp->fullBit(oldp+248,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
    bufp->fullBit(oldp+249,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
    bufp->fullIData(oldp+250,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
    bufp->fullCData(oldp+251,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_counter),6);
    bufp->fullIData(oldp+252,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend),32);
    bufp->fullIData(oldp+253,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient),32);
    bufp->fullBit(oldp+254,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_u));
    bufp->fullBit(oldp+255,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s));
    bufp->fullIData(oldp+256,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
    bufp->fullSData(oldp+257,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+258,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_w_en));
    bufp->fullCData(oldp+259,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
    bufp->fullBit(oldp+260,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_regWrite));
    bufp->fullBit(oldp+261,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                             & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x73U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((3U != (0x7fU 
                                              & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x23U == 
                                          (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x63U 
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
                                                        & ((7U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
                                                           & (0x27U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)))))))))))))));
    bufp->fullBit(oldp+262,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_wr));
    bufp->fullCData(oldp+263,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                               >> 0x1bU)),5);
    bufp->fullBit(oldp+264,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable_0));
    bufp->fullIData(oldp+265,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0),32);
    bufp->fullIData(oldp+266,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),32);
    bufp->fullIData(oldp+267,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2),32);
    bufp->fullCData(oldp+268,((3U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+269,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
    bufp->fullBit(oldp+270,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
    bufp->fullBit(oldp+271,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
    bufp->fullBit(oldp+272,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
    bufp->fullBit(oldp+273,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
    bufp->fullCData(oldp+274,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
    bufp->fullCData(oldp+275,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__io_fcsr_o_data_lo),3);
    bufp->fullIData(oldp+276,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 2U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 1U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
    bufp->fullIData(oldp+277,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MISA_REG),32);
    bufp->fullIData(oldp+278,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
    bufp->fullIData(oldp+279,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
    bufp->fullIData(oldp+280,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
    bufp->fullIData(oldp+281,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
    bufp->fullIData(oldp+282,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
    bufp->fullBit(oldp+283,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
    bufp->fullBit(oldp+284,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
    bufp->fullCData(oldp+285,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
    bufp->fullBit(oldp+286,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
    bufp->fullBit(oldp+287,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
    bufp->fullSData(oldp+288,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                << 7U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                          << 3U))),11);
    bufp->fullIData(oldp+289,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                << 0x15U) | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                              << 0x11U) 
                                             | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                    << 7U) 
                                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                      << 3U)))))),32);
    bufp->fullIData(oldp+290,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10),32);
    bufp->fullIData(oldp+291,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
    bufp->fullIData(oldp+292,((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 5U) | (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT____VdfgRegularize_hd444715d_0_10))),32);
    bufp->fullBit(oldp+293,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
    bufp->fullBit(oldp+294,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
    bufp->fullBit(oldp+295,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)) 
                              & (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
    bufp->fullBit(oldp+296,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
    bufp->fullBit(oldp+297,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
    bufp->fullBit(oldp+298,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)) 
                              & (((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_is_csr)) 
                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7))) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
    bufp->fullCData(oldp+299,((0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),7);
    bufp->fullIData(oldp+300,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                >> 0x14U))),32);
    bufp->fullIData(oldp+301,((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+302,((0xfffff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)),32);
    bufp->fullSData(oldp+303,(((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+304,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0xfe0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 7U))))),32);
    bufp->fullSData(oldp+305,((((0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)) 
                                | (0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             << 3U))) 
                               | ((0x3f0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x15U)) 
                                  | (0xfU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 8U))))),12);
    bufp->fullIData(oldp+306,(((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x7ffffU
                                  : 0U) << 0xdU) | 
                               (((0x1000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x13U)) 
                                 | (0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              << 4U))) 
                                | ((0x7e0U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 7U)))))),32);
    bufp->fullIData(oldp+307,(((0x80000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+308,((((((vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x1fU) ? 0x7ffU
                                   : 0U) << 0x15U) 
                                | (0x100000U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xbU))) 
                               | (((0xff000U & vlSelfRef.Top__DOT__core__DOT__if_reg_ins) 
                                   | (0x800U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 9U))) 
                                  | (0x7feU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))))),32);
    bufp->fullIData(oldp+309,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_0),32);
    bufp->fullIData(oldp+310,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_1),32);
    bufp->fullIData(oldp+311,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_2),32);
    bufp->fullIData(oldp+312,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_3),32);
    bufp->fullIData(oldp+313,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_4),32);
    bufp->fullIData(oldp+314,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_5),32);
    bufp->fullIData(oldp+315,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_6),32);
    bufp->fullIData(oldp+316,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_7),32);
    bufp->fullIData(oldp+317,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_8),32);
    bufp->fullIData(oldp+318,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_9),32);
    bufp->fullIData(oldp+319,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_10),32);
    bufp->fullIData(oldp+320,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_11),32);
    bufp->fullIData(oldp+321,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_12),32);
    bufp->fullIData(oldp+322,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_13),32);
    bufp->fullIData(oldp+323,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_14),32);
    bufp->fullIData(oldp+324,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_15),32);
    bufp->fullIData(oldp+325,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_16),32);
    bufp->fullIData(oldp+326,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_17),32);
    bufp->fullIData(oldp+327,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_18),32);
    bufp->fullIData(oldp+328,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_19),32);
    bufp->fullIData(oldp+329,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_20),32);
    bufp->fullIData(oldp+330,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_21),32);
    bufp->fullIData(oldp+331,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_22),32);
    bufp->fullIData(oldp+332,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_23),32);
    bufp->fullIData(oldp+333,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_24),32);
    bufp->fullIData(oldp+334,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_25),32);
    bufp->fullIData(oldp+335,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_26),32);
    bufp->fullIData(oldp+336,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_27),32);
    bufp->fullIData(oldp+337,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_28),32);
    bufp->fullIData(oldp+338,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_29),32);
    bufp->fullIData(oldp+339,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_30),32);
    bufp->fullIData(oldp+340,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__i_reg_31),32);
    bufp->fullIData(oldp+341,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_0),32);
    bufp->fullIData(oldp+342,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_1),32);
    bufp->fullIData(oldp+343,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_2),32);
    bufp->fullIData(oldp+344,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_3),32);
    bufp->fullIData(oldp+345,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_4),32);
    bufp->fullIData(oldp+346,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_5),32);
    bufp->fullIData(oldp+347,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_6),32);
    bufp->fullIData(oldp+348,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_7),32);
    bufp->fullIData(oldp+349,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_8),32);
    bufp->fullIData(oldp+350,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_9),32);
    bufp->fullIData(oldp+351,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_10),32);
    bufp->fullIData(oldp+352,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_11),32);
    bufp->fullIData(oldp+353,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_12),32);
    bufp->fullIData(oldp+354,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_13),32);
    bufp->fullIData(oldp+355,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_14),32);
    bufp->fullIData(oldp+356,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_15),32);
    bufp->fullIData(oldp+357,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_16),32);
    bufp->fullIData(oldp+358,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_17),32);
    bufp->fullIData(oldp+359,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_18),32);
    bufp->fullIData(oldp+360,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_19),32);
    bufp->fullIData(oldp+361,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_20),32);
    bufp->fullIData(oldp+362,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_21),32);
    bufp->fullIData(oldp+363,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_22),32);
    bufp->fullIData(oldp+364,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_23),32);
    bufp->fullIData(oldp+365,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_24),32);
    bufp->fullIData(oldp+366,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_25),32);
    bufp->fullIData(oldp+367,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_26),32);
    bufp->fullIData(oldp+368,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_27),32);
    bufp->fullIData(oldp+369,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_28),32);
    bufp->fullIData(oldp+370,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_29),32);
    bufp->fullIData(oldp+371,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_30),32);
    bufp->fullIData(oldp+372,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__f_reg_31),32);
    bufp->fullCData(oldp+373,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg),2);
    bufp->fullCData(oldp+374,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__offset),2);
    bufp->fullCData(oldp+375,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__funct3),3);
    bufp->fullCData(oldp+376,((3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result)),2);
    bufp->fullCData(oldp+377,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                             ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                             : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U))
                                         : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                 ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                 : 
                                                (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                 >> 0x10U))
                                             : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd)))),8);
    bufp->fullCData(oldp+378,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                                 ? vlSelfRef.Top__DOT__core__DOT__ex_reg_wd
                                                 : 
                                                (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                 >> 0x10U)))
                                         : ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                             ? ((0U 
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
    bufp->fullCData(oldp+379,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U)
                                             : ((1U 
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
                                                  >> 8U)
                                                  : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd))
                                             : (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U))))),8);
    bufp->fullCData(oldp+380,((0xffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__core__DOT__ex_reg_result))
                                             ? (vlSelfRef.Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)
                                             : ((1U 
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
                                             ? ((0U 
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
    bufp->fullSData(oldp+381,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                             ? ((0U 
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
                                                : vlSelfRef.Top__DOT__core__DOT__ex_reg_wd))))),16);
    bufp->fullSData(oldp+382,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                             ? ((0U 
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
                                                   >> 0x10U)))))),16);
    bufp->fullIData(oldp+383,((0xfffffffU & (vlSelfRef.Top__DOT__core__DOT__ex_reg_result 
                                             >> 2U))),28);
    bufp->fullCData(oldp+384,(vlSelfRef.Top__DOT__dmem__DOT__state_reg),2);
    bufp->fullBit(oldp+385,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+386,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+387,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+388,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
    bufp->fullIData(oldp+389,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullIData(oldp+390,((0xfffffffU & vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___io_coreInstrReq_bits_addrRequest_T_2)),28);
    bufp->fullCData(oldp+391,(vlSelfRef.Top__DOT__imem__DOT__state_reg),2);
    bufp->fullBit(oldp+392,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+393,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+394,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+395,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),28);
    bufp->fullIData(oldp+396,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullIData(oldp+397,(((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_jump))
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
    bufp->fullIData(oldp+398,((((1U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                        >> 0x14U)) 
                                | (3U == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))
                                ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                   | ((((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_is_f_in_0)
                                         ? (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5)
                                         : 0U) | ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_is_f)
                                                   ? 
                                                  ((((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_f_except_4) 
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
                                          : 0U))) : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
    bufp->fullIData(oldp+399,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                : ((IData)(4U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->fullIData(oldp+400,(((IData)(vlSelfRef.Top__DOT__core__DOT__pc_io_halt)
                                ? vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg
                                : ((IData)(2U) + vlSelfRef.Top__DOT__core__DOT__pc__DOT__pc_reg))),32);
    bufp->fullIData(oldp+401,((IData)((0x7fffffffffffffffULL 
                                       & ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                           ? (QData)((IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                              & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                           : ((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_aluCtl))
                                               ? (QData)((IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                  | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                               : ((2U 
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
    bufp->fullIData(oldp+402,(((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result)
                                : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT____VdfgRegularize_h99c9a7a5_0_6)
                                    ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result 
                                               >> 0x20U))
                                    : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                        ? ((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                              >> 0x1fU) 
                                             != (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                                 >> 0x1fU)) 
                                            & (0U != vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b))
                                            ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                            : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient)
                                        : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                            ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_quotient
                                            : ((6U 
                                                == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                                ? (
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                    : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend)
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT___GEN_15))
                                                    ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__r_dividend
                                                    : 0U))))))),32);
    bufp->fullCData(oldp+403,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
    bufp->fullCData(oldp+404,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
    bufp->fullCData(oldp+405,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc) 
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
    bufp->fullCData(oldp+406,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                   | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling)))) 
                               << 4U)),5);
    bufp->fullBit(oldp+407,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    bufp->fullBit(oldp+408,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                  ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                     >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 1U))) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & ((IData)((0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                   | (0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
    bufp->fullBit(oldp+409,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 2U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
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
    bufp->fullBit(oldp+410,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
    bufp->fullBit(oldp+411,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_signaling))))));
    bufp->fullBit(oldp+412,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                    >> 0x1fU) ^ ((9U 
                                                  != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+413,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                             & (9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)))));
    bufp->fullBit(oldp+414,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))));
    bufp->fullIData(oldp+415,((((((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                     ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig 
                                        << 1U) : 0U) 
                                   | (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                       & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp)) 
                                          & (9U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp))))
                                       ? 0x1000000U
                                       : 0U)) | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                                  ? 0x2800000U
                                                  : 0U)) 
                                 | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                     ? 0U : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
                                | ((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                          & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                                    ? 0x1000000U : 0U)) 
                               | (((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                   ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                      << 1U) : 0U))),27);
    bufp->fullBit(oldp+416,((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                             | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))))));
    bufp->fullBit(oldp+417,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & (0U != (1U & (IData)(
                                                     ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                      >> 7U))))) 
                             | ((((2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                 | ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                    & (3U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode)))) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    bufp->fullBit(oldp+418,((1U & ((0U == (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                                 >> 0x12U)))
                                    ? (2U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_roundingMode))
                                    : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
                                       ^ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                          >> 2U))))));
    bufp->fullBit(oldp+419,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    bufp->fullBit(oldp+420,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                  ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                     >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                               >> 1U))) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & ((IData)((0x4000004U 
                                            == (0x4000004U 
                                                & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))) 
                                   | (0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
    bufp->fullBit(oldp+421,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
                                               ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                  >> 2U)
                                               : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
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
    bufp->fullBit(oldp+422,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
    bufp->fullBit(oldp+423,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit)) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    bufp->fullBit(oldp+424,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
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
                                   | (0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)))))));
    bufp->fullBit(oldp+425,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
                                           & ((1U & (IData)(
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
    bufp->fullBit(oldp+426,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                             & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
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
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))))))));
    bufp->fullIData(oldp+427,(((((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
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
    bufp->fullIData(oldp+428,(((((0xfU == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_aluOp)) 
                                 == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign))
                                 ? 0x80000000U : 0U) 
                               | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign)
                                   ? 0U : 0x7fffffffU))),32);
    bufp->fullIData(oldp+429,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a 
                                   >> 0x1fU)) ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)
                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a)),32);
    bufp->fullIData(oldp+430,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__is_div_rem_s) 
                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b 
                                   >> 0x1fU)) ? (- vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)
                                : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b)),32);
    bufp->fullBit(oldp+431,((((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xcU)))
                               ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                  == vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                               : ((1U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                   ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                      != vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                   : ((4U == (7U & 
                                              (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                       ? VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                       : ((5U == (7U 
                                                  & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                           : ((6U == 
                                               (7U 
                                                & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                               ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  < vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                               : (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                  >= vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
                             & ((0x33U != (0x7fU & vlSelfRef.Top__DOT__core__DOT__if_reg_ins)) 
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
                                                   & vlSelfRef.Top__DOT__core__DOT__if_reg_ins))))))))));
    bufp->fullIData(oldp+432,((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__id_reg_f_read_0)) 
                                & ((0x1fU & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelfRef.Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U))))
                                ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1)),32);
    bufp->fullBit(oldp+433,(((0U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 == vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : ((1U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                     != vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                  : ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? VL_LTS_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                      : ((5U == (7U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_GTES_III(32, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                              : (vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
    bufp->fullIData(oldp+434,((vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               | vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
    bufp->fullIData(oldp+435,(((~ vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data) 
                               & vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data)),32);
    bufp->fullCData(oldp+436,(((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_3)
                                ? 1U : ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT___next_state_T_7)
                                         ? 2U : (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch__DOT__state_reg)))),2);
    bufp->fullIData(oldp+437,(vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o),32);
    bufp->fullIData(oldp+438,(vlSelfRef.Top__DOT__imem__DOT__sram_rdata_o),32);
    bufp->fullBit(oldp+439,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__csb));
    bufp->fullSData(oldp+440,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__addr_o),13);
    bufp->fullIData(oldp+441,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+442,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+443,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+444,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__csb));
    bufp->fullSData(oldp+445,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__addr_o),13);
    bufp->fullIData(oldp+446,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+447,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+448,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+449,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid));
    bufp->fullIData(oldp+450,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction),32);
    bufp->fullBit(oldp+451,(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_stall));
    bufp->fullIData(oldp+452,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result),32);
    bufp->fullIData(oldp+453,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData1),32);
    bufp->fullIData(oldp+454,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__readData2),32);
    bufp->fullBit(oldp+455,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_ifid_flush));
    bufp->fullBit(oldp+456,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5))));
    bufp->fullBit(oldp+457,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                   >> 1U))));
    bufp->fullBit(oldp+458,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                   >> 2U))));
    bufp->fullBit(oldp+459,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                   >> 3U))));
    bufp->fullBit(oldp+460,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT___io_csr_o_data_T_5) 
                                   >> 4U))));
    bufp->fullIData(oldp+461,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1),32);
    bufp->fullIData(oldp+462,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in),32);
    bufp->fullIData(oldp+463,(vlSelfRef.Top__DOT__core__DOT__MEM_io_readData),32);
    bufp->fullIData(oldp+464,(vlSelfRef.Top__DOT__core__DOT___npc_T_2),32);
    bufp->fullBit(oldp+465,(vlSelfRef.Top__DOT__core__DOT__pc_io_halt));
    bufp->fullCData(oldp+466,((7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+467,(vlSelfRef.Top__DOT__core__DOT__func7),7);
    bufp->fullBit(oldp+468,((((1U == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                              & ((4U == (7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                               >> 0xcU))) 
                                 | ((5U == (7U & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                  >> 0xcU))) 
                                    | ((6U == (7U & 
                                               (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                >> 0xcU))) 
                                       | (7U == (7U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_instruction 
                                                    >> 0xcU))))))) 
                             | ((0xcU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7)) 
                                | (0x2cU == (IData)(vlSelfRef.Top__DOT__core__DOT__func7))))));
    bufp->fullIData(oldp+469,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input1),32);
    bufp->fullIData(oldp+470,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__alu_io_input2),32);
    bufp->fullIData(oldp+471,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_a),32);
    bufp->fullIData(oldp+472,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu_io_src_b),32);
    bufp->fullIData(oldp+473,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2),32);
    bufp->fullIData(oldp+474,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_out),32);
    bufp->fullQData(oldp+475,((((QData)((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6))))),33);
    bufp->fullQData(oldp+477,((((QData)((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14))))),33);
    bufp->fullQData(oldp+479,((((QData)((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2))))),33);
    bufp->fullQData(oldp+481,((((QData)((IData)(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
    bufp->fullQData(oldp+483,((((QData)((IData)(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
    bufp->fullQData(oldp+485,((((QData)((IData)(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
    bufp->fullBit(oldp+487,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_lt));
    bufp->fullBit(oldp+488,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_eq));
    bufp->fullBit(oldp+489,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN_io_gt));
    bufp->fullIData(oldp+490,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32_io_out),32);
    bufp->fullCData(oldp+491,((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc) 
                                << 2U) | ((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                            & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                                           & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                              & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))))),3);
    bufp->fullQData(oldp+492,((((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                              << 0x17U) 
                                                             | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut))))),33);
    bufp->fullCData(oldp+494,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                               & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))),5);
    bufp->fullCData(oldp+495,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                        >> 0x17U))),8);
    bufp->fullIData(oldp+496,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in)),23);
    bufp->fullBit(oldp+497,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+498,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in))));
    bufp->fullCData(oldp+499,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist),5);
    bufp->fullSData(oldp+500,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),9);
    bufp->fullBit(oldp+501,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp) 
                                          >> 7U)))));
    bufp->fullBit(oldp+502,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_isNaN));
    bufp->fullCData(oldp+503,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                        >> 0x17U))),8);
    bufp->fullIData(oldp+504,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1)),23);
    bufp->fullBit(oldp+505,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+506,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1))));
    bufp->fullCData(oldp+507,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1),5);
    bufp->fullSData(oldp+508,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),9);
    bufp->fullBit(oldp+509,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1) 
                                          >> 7U)))));
    bufp->fullBit(oldp+510,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_out_1_isNaN));
    bufp->fullSData(oldp+511,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
    bufp->fullBit(oldp+512,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 6U)))));
    bufp->fullBit(oldp+513,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 7U)))));
    bufp->fullBit(oldp+514,((IData)((0x1c0U == (0x1c0U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
    bufp->fullBit(oldp+515,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf));
    bufp->fullBit(oldp+516,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
    bufp->fullSData(oldp+517,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
    bufp->fullIData(oldp+518,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U))) 
                                << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
    bufp->fullBit(oldp+519,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    bufp->fullCData(oldp+520,((0x1fU & ((IData)(1U) 
                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
    bufp->fullIData(oldp+521,((0x7fffffU & ((0xffffffU 
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
    bufp->fullCData(oldp+522,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  - (IData)(0x81U))) 
                                        | (((IData)(
                                                    (0x1c0U 
                                                     == 
                                                     (0x1c0U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn___05FisInf))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullIData(oldp+523,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
    bufp->fullIData(oldp+524,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
    bufp->fullSData(oldp+525,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
    bufp->fullBit(oldp+526,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 6U)))));
    bufp->fullBit(oldp+527,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 7U)))));
    bufp->fullBit(oldp+528,((IData)((0x1c0U == (0x1c0U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
    bufp->fullBit(oldp+529,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf));
    bufp->fullBit(oldp+530,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
    bufp->fullSData(oldp+531,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
    bufp->fullIData(oldp+532,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U))) 
                                << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
    bufp->fullBit(oldp+533,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    bufp->fullCData(oldp+534,((0x1fU & ((IData)(1U) 
                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
    bufp->fullIData(oldp+535,((0x7fffffU & ((0xffffffU 
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
    bufp->fullCData(oldp+536,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  - (IData)(0x81U))) 
                                        | (((IData)(
                                                    (0x1c0U 
                                                     == 
                                                     (0x1c0U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_1_isInf))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullIData(oldp+537,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
    bufp->fullIData(oldp+538,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
    bufp->fullSData(oldp+539,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
    bufp->fullBit(oldp+540,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 6U)))));
    bufp->fullBit(oldp+541,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 7U)))));
    bufp->fullBit(oldp+542,((IData)((0x1c0U == (0x1c0U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
    bufp->fullBit(oldp+543,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf));
    bufp->fullBit(oldp+544,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign))));
    bufp->fullSData(oldp+545,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
    bufp->fullIData(oldp+546,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U))) 
                                << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
    bufp->fullBit(oldp+547,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    bufp->fullCData(oldp+548,((0x1fU & ((IData)(1U) 
                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
    bufp->fullIData(oldp+549,((0x7fffffU & ((0xffffffU 
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
    bufp->fullCData(oldp+550,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  - (IData)(0x81U))) 
                                        | (((IData)(
                                                    (0x1c0U 
                                                     == 
                                                     (0x1c0U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_2_isInf))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullIData(oldp+551,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
    bufp->fullIData(oldp+552,(((((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
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
    bufp->fullSData(oldp+553,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),9);
    bufp->fullBit(oldp+554,((0U == (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 6U)))));
    bufp->fullBit(oldp+555,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                          >> 7U)))));
    bufp->fullBit(oldp+556,((IData)((0x1c0U == (0x1c0U 
                                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))))));
    bufp->fullBit(oldp+557,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf));
    bufp->fullBit(oldp+558,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN_io_in_sign));
    bufp->fullSData(oldp+559,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut),10);
    bufp->fullIData(oldp+560,((((0U != (7U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                              >> 6U))) 
                                << 0x17U) | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut)),25);
    bufp->fullBit(oldp+561,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))));
    bufp->fullCData(oldp+562,((0x1fU & ((IData)(1U) 
                                        - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))),5);
    bufp->fullIData(oldp+563,((0x7fffffU & ((0xffffffU 
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
    bufp->fullCData(oldp+564,((0xffU & ((VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
                                          ? 0U : ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut) 
                                                  - (IData)(0x81U))) 
                                        | (((IData)(
                                                    (0x1c0U 
                                                     == 
                                                     (0x1c0U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut)))) 
                                            | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_rawIn_4_isInf))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullIData(oldp+565,((0x7fffffU & (VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__expOut))
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
    bufp->fullIData(oldp+566,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__op_out_4),32);
    bufp->fullBit(oldp+567,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                             >> 0x1fU)));
    bufp->fullCData(oldp+568,((0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                        >> 0x17U))),8);
    bufp->fullIData(oldp+569,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2)),23);
    bufp->fullBit(oldp+570,((0U == (0xffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+571,((0U == (0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))));
    bufp->fullCData(oldp+572,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist),5);
    bufp->fullIData(oldp+573,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2 
                                             << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_normDist)) 
                                            << 1U))),23);
    bufp->fullSData(oldp+574,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),9);
    bufp->fullBit(oldp+575,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero));
    bufp->fullBit(oldp+576,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp) 
                                          >> 7U)))));
    bufp->fullBit(oldp+577,((IData)(((0x180U == (0x180U 
                                                 & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_2))))));
    bufp->fullSData(oldp+578,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_adjustedExp),10);
    bufp->fullIData(oldp+579,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero)) 
                                             << 0x17U)) 
                               | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2)),25);
    bufp->fullBit(oldp+580,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                             >> 0x1fU)));
    bufp->fullIData(oldp+581,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                             << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist)) 
                                            << 1U))),23);
    bufp->fullBit(oldp+582,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1));
    bufp->fullSData(oldp+583,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp),10);
    bufp->fullIData(oldp+584,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_1)) 
                                             << 0x17U)) 
                               | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_6)),25);
    bufp->fullBit(oldp+585,((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                             >> 0x1fU)));
    bufp->fullIData(oldp+586,((0x7ffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU_io_in_1 
                                             << (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_normDist_1)) 
                                            << 1U))),23);
    bufp->fullBit(oldp+587,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3));
    bufp->fullSData(oldp+588,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__raw_in_adjustedExp_1),10);
    bufp->fullIData(oldp+589,(((0x800000U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__rawIn_isZero_3)) 
                                             << 0x17U)) 
                               | vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_14)),25);
    bufp->fullSData(oldp+590,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),9);
    bufp->fullBit(oldp+591,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23))));
    bufp->fullBit(oldp+592,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                          >> 1U)))));
    bufp->fullBit(oldp+593,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN));
    bufp->fullBit(oldp+594,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA));
    bufp->fullSData(oldp+595,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp),10);
    bufp->fullIData(oldp+596,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),25);
    bufp->fullBit(oldp+597,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN));
    bufp->fullBit(oldp+598,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isFiniteNonzero));
    bufp->fullBit(oldp+599,(VL_GTS_III(10, 0x82U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))));
    bufp->fullIData(oldp+600,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig),25);
    bufp->fullBit(oldp+601,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    bufp->fullBit(oldp+602,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    bufp->fullBit(oldp+603,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))));
    bufp->fullSData(oldp+604,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),10);
    bufp->fullIData(oldp+605,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig),25);
    bufp->fullBit(oldp+606,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    bufp->fullBit(oldp+607,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN));
    bufp->fullBit(oldp+608,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd));
    bufp->fullBit(oldp+609,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
    bufp->fullBit(oldp+610,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
    bufp->fullSData(oldp+611,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
    bufp->fullIData(oldp+612,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
    bufp->fullSData(oldp+613,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_exp),9);
    bufp->fullBit(oldp+614,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43) 
                                          >> 1U)))));
    bufp->fullBit(oldp+615,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB));
    bufp->fullBit(oldp+616,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns));
    bufp->fullSData(oldp+617,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps),10);
    bufp->fullCData(oldp+618,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__modNatAlignDist),5);
    bufp->fullBit(oldp+619,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__isMaxAlign));
    bufp->fullCData(oldp+620,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist),5);
    bufp->fullBit(oldp+621,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__closeSubMags));
    bufp->fullIData(oldp+622,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum),27);
    bufp->fullIData(oldp+623,((0x3ffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)),26);
    bufp->fullBit(oldp+624,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))));
    bufp->fullBit(oldp+625,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 2U)))));
    bufp->fullBit(oldp+626,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 4U)))));
    bufp->fullBit(oldp+627,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 6U)))));
    bufp->fullBit(oldp+628,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 8U)))));
    bufp->fullBit(oldp+629,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+630,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+631,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+632,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+633,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+634,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+635,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+636,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                          >> 0x18U)))));
    bufp->fullCData(oldp+637,(((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                               >> 0xaU))) 
                                 << 5U) | (((0U != 
                                             (3U & 
                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                               >> 8U))) 
                                            << 4U) 
                                           | ((0U != 
                                               (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 6U))) 
                                              << 3U))) 
                               | (((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                 >> 4U))) 
                                   << 2U) | (((0U != 
                                               (3U 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4)))))),6);
    bufp->fullSData(oldp+638,(((((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                 >> 0x18U))) 
                                   << 0xcU) | ((0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                    >> 0x16U))) 
                                               << 0xbU)) 
                                 | (((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                   >> 0x14U))) 
                                     << 0xaU) | ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
                                                      >> 0x12U))) 
                                                 << 9U))) 
                                | (((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
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
                               | ((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4 
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
                                                    & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigSum_T_4))))))),13);
    bufp->fullCData(oldp+639,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2),4);
    bufp->fullCData(oldp+640,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_normDistReduced2) 
                               << 1U)),5);
    bufp->fullIData(oldp+641,((0x7fffffeU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T) 
                                             << 1U))),27);
    bufp->fullBit(oldp+642,((1U & (~ (0U != (3U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___close_sigOut_T 
                                                           >> 0x18U))))))));
    bufp->fullBit(oldp+643,((1U & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                    >> 0x1fU) ^ VL_GTS_III(27, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__close_sSigSum)))));
    bufp->fullBit(oldp+644,((1U & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                    ? (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__effSignB)
                                    : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+645,((0xffffffU & (VL_GTS_III(10, 0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__sDiffExps))
                                             ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_b_sig
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___05Fio_a_sig))),24);
    bufp->fullIData(oldp+646,((0xffffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)),24);
    bufp->fullIData(oldp+647,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_mainAlignedSigSmaller),29);
    bufp->fullBit(oldp+648,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1))));
    bufp->fullBit(oldp+649,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                            >> 2U)))));
    bufp->fullBit(oldp+650,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                            >> 6U)))));
    bufp->fullBit(oldp+651,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+652,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+653,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+654,((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                          >> 0x16U)))));
    bufp->fullCData(oldp+655,((((((0U != (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                >> 0x16U))) 
                                  << 6U) | ((0U != 
                                             (0xfU 
                                              & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                 >> 0x12U))) 
                                            << 5U)) 
                                | (((0U != (0xfU & 
                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                             >> 0xeU))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                   >> 0xaU))) 
                                              << 3U))) 
                               | (((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                   >> 6U))) 
                                   << 2U) | (((0U != 
                                               (0xfU 
                                                & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT___far_sigSmaller_T_1)))))),7);
    bufp->fullSData(oldp+656,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                           >> 2U))))),9);
    bufp->fullCData(oldp+657,(((((0x40U & (VL_SHIFTRS_III(32,9,3, 0x100U, 
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
                                         >> 3U)) | 
                                  ((2U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                             >> 2U))) 
                                          >> 5U)) | 
                                   (1U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__alignDist) 
                                                             >> 2U))) 
                                          >> 7U)))))),7);
    bufp->fullIData(oldp+658,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller),27);
    bufp->fullIData(oldp+659,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller
                                : (0x8000000U | (0x7ffffffU 
                                                 & (~ vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_alignedSigSmaller))))),28);
    bufp->fullIData(oldp+660,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum),28);
    bufp->fullIData(oldp+661,((0x7ffffffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)
                                              ? (0x7ffffffU 
                                                 & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum 
                                                     >> 1U) 
                                                    | (1U 
                                                       & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum)))
                                              : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__far_sigSum))),27);
    bufp->fullBit(oldp+662,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
                             & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__eqSigns)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    bufp->fullBit(oldp+663,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros));
    bufp->fullBit(oldp+664,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__addRawFN___DOT__addZeros))));
    bufp->fullBit(oldp+665,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    bufp->fullBit(oldp+666,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+667,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 8U)))));
    bufp->fullCData(oldp+668,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
    bufp->fullBit(oldp+669,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 7U)))));
    bufp->fullCData(oldp+670,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
    bufp->fullBit(oldp+671,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 6U)))));
    bufp->fullCData(oldp+672,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_8[0U] = __Vtemp_7[0U];
    __Vtemp_8[1U] = __Vtemp_7[1U];
    __Vtemp_8[2U] = (1U & __Vtemp_7[2U]);
    bufp->fullWData(oldp+673,(__Vtemp_8),65);
    bufp->fullIData(oldp+676,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                     << 2U))),27);
    bufp->fullIData(oldp+677,((0x7ffffffU & (1U | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
    bufp->fullIData(oldp+678,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
    bufp->fullBit(oldp+679,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
    bufp->fullBit(oldp+680,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    bufp->fullBit(oldp+681,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
    bufp->fullIData(oldp+682,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    bufp->fullSData(oldp+683,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
    bufp->fullSData(oldp+684,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
    bufp->fullIData(oldp+685,((0x7fffffU & ((0x4000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
    bufp->fullBit(oldp+686,(VL_LTES_III(4, 3U, (0xfU 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                   >> 7U)))));
    bufp->fullBit(oldp+687,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
    bufp->fullBit(oldp+688,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                 >> 1U)))));
    bufp->fullBit(oldp+689,((IData)(((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                     | (0x4000004U 
                                        == (0x4000004U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
    bufp->fullBit(oldp+690,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x19U) : 
                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+691,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
    bufp->fullBit(oldp+692,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullBit(oldp+693,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
    bufp->fullBit(oldp+694,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    bufp->fullBit(oldp+695,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
    bufp->fullBit(oldp+696,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
    bufp->fullBit(oldp+697,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
    bufp->fullBit(oldp+698,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
    bufp->fullBit(oldp+699,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
    bufp->fullIData(oldp+700,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
    bufp->fullIData(oldp+701,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),25);
    bufp->fullBit(oldp+702,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN)))));
    bufp->fullBit(oldp+703,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__bothInfs));
    bufp->fullBit(oldp+704,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__eqExps));
    bufp->fullBit(oldp+705,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_ltMags));
    bufp->fullBit(oldp+706,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__common_eqMags));
    bufp->fullBit(oldp+707,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_lt));
    bufp->fullBit(oldp+708,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__CompareRecFN__DOT__ordered_eq));
    bufp->fullBit(oldp+709,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div));
    bufp->fullBit(oldp+710,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt));
    bufp->fullBit(oldp+711,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S));
    bufp->fullBit(oldp+712,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43))))));
    bufp->fullBit(oldp+713,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                   & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN) 
                                         | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB) 
                                            | (0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_43)))))))));
    bufp->fullBit(oldp+714,((1U & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                   & (~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+715,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S));
    bufp->fullSData(oldp+716,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div),11);
    bufp->fullSData(oldp+717,((((VL_LTES_III(11, 0x1c0U, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div))
                                  ? 6U : (0xfU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div) 
                                                  >> 6U))) 
                                << 6U) | (0x3fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div)))),10);
    bufp->fullBit(oldp+718,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
    bufp->fullIData(oldp+719,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem),27);
    bufp->fullIData(oldp+720,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem),29);
    bufp->fullBit(oldp+721,(VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)));
    bufp->fullIData(oldp+722,((0x3ffffffU & (VL_LTES_III(29, 0U, vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                                              ? vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem
                                              : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__DivSqrtRecFM_small_e8_s24__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem))),26);
    bufp->fullBit(oldp+723,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase)))));
    bufp->fullCData(oldp+724,((0x40U | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))),8);
    bufp->fullQData(oldp+725,((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig))),33);
    bufp->fullIData(oldp+727,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_absIn),32);
    bufp->fullCData(oldp+728,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_adjustedNormDist),5);
    bufp->fullIData(oldp+729,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig),32);
    bufp->fullSData(oldp+730,((0x1ffU & ((IData)(0xc0U) 
                                         + (0x3ffU 
                                            & VL_EXTENDS_II(10,9, 
                                                            (0x40U 
                                                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT___intAsRawFloat_out_sExp_T_1))))))),10);
    bufp->fullIData(oldp+731,(((0x7fffffeU & ((IData)(
                                                      ((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                       >> 7U)) 
                                              << 1U)) 
                               | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra))),27);
    bufp->fullBit(oldp+732,((0U != (1U & (IData)(((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__intAsRawFloat_sig)) 
                                                  >> 7U))))));
    bufp->fullBit(oldp+733,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    bufp->fullBit(oldp+734,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
    bufp->fullIData(oldp+735,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    bufp->fullSData(oldp+736,((0x7ffU & (VL_EXTENDS_II(11,10, 
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
    bufp->fullSData(oldp+737,((0x1ffU & ((0x7ffU & 
                                          VL_EXTENDS_II(11,10, 
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
    bufp->fullIData(oldp+738,((0x7fffffU & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)),23);
    bufp->fullBit(oldp+739,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
    bufp->fullBit(oldp+740,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
    bufp->fullIData(oldp+741,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
    bufp->fullIData(oldp+742,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddA),24);
    bufp->fullIData(oldp+743,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_mulAddB),24);
    bufp->fullQData(oldp+744,((0xffffffffffffULL & 
                               (((QData)((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                 << 0x1dU) | ((QData)((IData)(
                                                              vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                              >> 3U)))),48);
    bufp->fullBit(oldp+746,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__io_out_isSigNaN) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT___io_toPostMul_isSigNaNAny_T_5) 
                                | ((~ (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                       >> 0x16U)) & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))))));
    bufp->fullBit(oldp+747,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__signProd));
    bufp->fullBit(oldp+748,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN));
    bufp->fullBit(oldp+749,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    bufp->fullBit(oldp+750,((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3))));
    bufp->fullSData(oldp+751,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum),10);
    bufp->fullBit(oldp+752,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags));
    bufp->fullBit(oldp+753,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CIsDominant));
    bufp->fullCData(oldp+754,((0x1fU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))),5);
    bufp->fullIData(oldp+755,((0x3ffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                              << 0xdU) 
                                             | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                >> 0x13U)))),26);
    bufp->fullBit(oldp+756,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
    bufp->fullQData(oldp+757,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult),49);
    bufp->fullBit(oldp+759,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    bufp->fullBit(oldp+760,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__AddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isNaN) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05FisNaN))));
    bufp->fullBit(oldp+761,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut));
    bufp->fullBit(oldp+762,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
    bufp->fullBit(oldp+763,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
    bufp->fullSData(oldp+764,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
    bufp->fullIData(oldp+765,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
    bufp->fullBit(oldp+766,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign));
    bufp->fullWData(oldp+767,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum),75);
    bufp->fullSData(oldp+770,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                         - (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)))),10);
    bufp->fullQData(oldp+771,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum),50);
    bufp->fullBit(oldp+773,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                              ? (0U != (0xffffffU & 
                                        (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                              : (0U != (0x1ffffffU 
                                        & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))));
    bufp->fullIData(oldp+774,((0x1fffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                               << 0xbU) 
                                              | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                 >> 0x15U)))),29);
    bufp->fullBit(oldp+775,((1U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))));
    bufp->fullBit(oldp+776,((0U != (0xfU & (IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 1U))))));
    bufp->fullBit(oldp+777,((0U != (0xfU & (IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 5U))))));
    bufp->fullBit(oldp+778,((0U != (0xfU & (IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 9U))))));
    bufp->fullBit(oldp+779,((0U != (0xfU & (IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 0xdU))))));
    bufp->fullBit(oldp+780,((0U != (0xfU & (IData)(
                                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+781,((0U != (7U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                  >> 0x15U))))));
    bufp->fullSData(oldp+782,((0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                       (7U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                            >> 2U)))))),9);
    bufp->fullBit(oldp+783,((0U != ((((((0U != (7U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                           >> 0x15U)))) 
                                        << 6U) | ((0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                               >> 0x11U)))) 
                                                  << 5U)) 
                                      | (((0U != (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                             >> 0xdU)))) 
                                          << 4U) | 
                                         ((0U != (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                             >> 9U)))) 
                                          << 3U))) 
                                     | (((0U != (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                            >> 5U)))) 
                                         << 2U) | (
                                                   ((0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                 >> 1U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum))))) 
                                    & (((0x20U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                 (7U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                      >> 2U)))) 
                                                  << 4U)) 
                                        | ((0x10U & 
                                            (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                            (7U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                 >> 2U)))) 
                                             << 2U)) 
                                           | (8U & 
                                              VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                             (7U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                  >> 2U))))))) 
                                       | ((4U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                (7U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                     >> 2U)))) 
                                                 >> 2U)) 
                                          | ((2U & 
                                              (VL_SHIFTRS_III(9,9,3, 0x100U, 
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
    bufp->fullIData(oldp+784,(((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
                                               << 9U) 
                                              | (0x1feU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                    >> 0x17U)))) 
                               | ((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
                                                >> 0x15U))) 
                                  | ((0U != ((((((0U 
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
                                         ? (0U != (0xffffffU 
                                                   & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult))))
                                         : (0U != (0x1ffffffU 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)))))))),27);
    bufp->fullBit(oldp+785,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                   >> 2U))));
    bufp->fullQData(oldp+786,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum),51);
    bufp->fullBit(oldp+788,((0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))));
    bufp->fullBit(oldp+789,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 2U))))));
    bufp->fullBit(oldp+790,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 4U))))));
    bufp->fullBit(oldp+791,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 6U))))));
    bufp->fullBit(oldp+792,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 8U))))));
    bufp->fullBit(oldp+793,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0xaU))))));
    bufp->fullBit(oldp+794,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0xcU))))));
    bufp->fullBit(oldp+795,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0xeU))))));
    bufp->fullBit(oldp+796,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+797,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+798,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+799,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+800,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+801,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+802,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+803,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+804,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+805,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x22U))))));
    bufp->fullBit(oldp+806,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x24U))))));
    bufp->fullBit(oldp+807,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x26U))))));
    bufp->fullBit(oldp+808,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x28U))))));
    bufp->fullBit(oldp+809,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU))))));
    bufp->fullBit(oldp+810,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2cU))))));
    bufp->fullBit(oldp+811,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2eU))))));
    bufp->fullBit(oldp+812,((0U != (3U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x30U))))));
    bufp->fullBit(oldp+813,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                           >> 0x32U)))));
    bufp->fullCData(oldp+814,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo),6);
    bufp->fullSData(oldp+815,((((0U != (3U & (IData)(
                                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                      >> 0x18U)))) 
                                << 0xcU) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5))),13);
    bufp->fullCData(oldp+816,(((((0U != (3U & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0x24U)))) 
                                 << 5U) | (((0U != 
                                             (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x22U)))) 
                                            << 4U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 3U))) 
                               | (((0U != (3U & (IData)(
                                                        (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                         >> 0x1eU)))) 
                                   << 2U) | (((0U != 
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
    bufp->fullIData(oldp+817,(((((((0x2000000U & ((IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x32U)) 
                                                  << 0x19U)) 
                                   | ((0U != (3U & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x30U)))) 
                                      << 0x18U)) | 
                                  (((0U != (3U & (IData)(
                                                         (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 0x2eU)))) 
                                    << 0x17U) | ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x2cU)))) 
                                                 << 0x16U))) 
                                 | (((0U != (3U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x2aU)))) 
                                     << 0x15U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x28U)))) 
                                                   << 0x14U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x26U)))) 
                                                     << 0x13U)))) 
                                | ((((0U != (3U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x24U)))) 
                                     << 0x12U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x22U)))) 
                                                   << 0x11U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x20U)))) 
                                                     << 0x10U))) 
                                   | (((0U != (3U & (IData)(
                                                            (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0x1eU)))) 
                                       << 0xfU) | (
                                                   ((0U 
                                                     != 
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
    bufp->fullCData(oldp+818,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2),5);
    bufp->fullCData(oldp+819,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                               << 1U)),6);
    bufp->fullSData(oldp+820,((0x3ffU & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum) 
                                         - ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                            << 1U)))),10);
    bufp->fullIData(oldp+821,((0x1fffffffU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               << 9U) 
                                              | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                 >> 0x17U)))),29);
    bufp->fullBit(oldp+822,((0U != (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_1))));
    bufp->fullBit(oldp+823,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_2) 
                                          >> 2U)))));
    bufp->fullBit(oldp+824,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum_lo_lo) 
                                          >> 4U)))));
    bufp->fullBit(oldp+825,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_3) 
                                          >> 6U)))));
    bufp->fullBit(oldp+826,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_4) 
                                          >> 8U)))));
    bufp->fullBit(oldp+827,((0U != (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgRegularize_h87d49b7a_0_5) 
                                          >> 0xaU)))));
    bufp->fullIData(oldp+828,((0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                         (0xfU 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                              >> 1U)))))),17);
    bufp->fullBit(oldp+829,((0U != ((((((0U != (3U 
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
                                                   >> 6U)))))))));
    bufp->fullIData(oldp+830,(((0x7fffffeU & ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                               << 7U) 
                                              | (0x7eU 
                                                 & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                                    >> 0x19U)))) 
                               | (IData)(((0U != (0x3800000U 
                                                  & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U])) 
                                          | (0U != 
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
    bufp->fullBit(oldp+831,((0U == (3U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+832,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros));
    bufp->fullSData(oldp+833,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),9);
    bufp->fullBit(oldp+834,((3U == (3U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_3) 
                                          >> 1U)))));
    bufp->fullSData(oldp+835,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_exp),10);
    bufp->fullIData(oldp+836,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig),25);
    bufp->fullSData(oldp+837,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sExpAlignedProd),11);
    bufp->fullSData(oldp+838,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist),11);
    bufp->fullSData(oldp+839,((0x3ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))),10);
    bufp->fullBit(oldp+840,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign));
    bufp->fullCData(oldp+841,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist),7);
    bufp->fullWData(oldp+842,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC),78);
    bufp->fullBit(oldp+845,((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig))));
    bufp->fullBit(oldp+846,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                            >> 2U)))));
    bufp->fullBit(oldp+847,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                            >> 6U)))));
    bufp->fullBit(oldp+848,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+849,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+850,((0U != (0xfU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___rawIn_out_sig_T_2 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+851,((0U != (7U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawC___05Fsig 
                                          >> 0x16U)))));
    bufp->fullQData(oldp+852,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                               (0x1fU 
                                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                   >> 2U))))),33);
    bufp->fullBit(oldp+854,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra));
    __Vtemp_11[0U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                       << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                    >> 3U));
    __Vtemp_11[1U] = ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                       << 0x1dU) | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                    >> 3U));
    __Vtemp_11[2U] = (0x7ffU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                >> 3U));
    bufp->fullWData(oldp+855,(__Vtemp_11),75);
    __Vtemp_15[0U] = (((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                        << 0x1eU) | (0x3ffffffeU & 
                                     (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                      >> 2U))) | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC));
    __Vtemp_15[1U] = ((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                             >> 2U)) | ((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                         << 0x1eU) 
                                        | (0x3ffffffeU 
                                           & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                              >> 2U))));
    __Vtemp_15[2U] = ((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                             >> 2U)) | (0xffeU & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  >> 2U)));
    bufp->fullWData(oldp+858,(__Vtemp_15),76);
    bufp->fullBit(oldp+861,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    bufp->fullBit(oldp+862,((1U & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+863,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 8U)))));
    bufp->fullCData(oldp+864,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
    bufp->fullBit(oldp+865,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 7U)))));
    bufp->fullCData(oldp+866,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
    bufp->fullBit(oldp+867,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 6U)))));
    bufp->fullCData(oldp+868,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
    __Vtemp_17[0U] = 0U;
    __Vtemp_17[1U] = 0U;
    __Vtemp_17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_18, __Vtemp_17, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_19[0U] = __Vtemp_18[0U];
    __Vtemp_19[1U] = __Vtemp_18[1U];
    __Vtemp_19[2U] = (1U & __Vtemp_18[2U]);
    bufp->fullWData(oldp+869,(__Vtemp_19),65);
    bufp->fullIData(oldp+872,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                     << 2U))),27);
    bufp->fullIData(oldp+873,((0x7ffffffU & (1U | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
    bufp->fullIData(oldp+874,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
    bufp->fullBit(oldp+875,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
    bufp->fullBit(oldp+876,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    bufp->fullBit(oldp+877,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
    bufp->fullIData(oldp+878,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    bufp->fullSData(oldp+879,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
    bufp->fullSData(oldp+880,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
    bufp->fullIData(oldp+881,((0x7fffffU & ((0x4000000U 
                                             & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
    bufp->fullBit(oldp+882,(VL_LTES_III(4, 3U, (0xfU 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                   >> 7U)))));
    bufp->fullBit(oldp+883,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
    bufp->fullBit(oldp+884,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                       >> 2U) : (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                                 >> 1U)))));
    bufp->fullBit(oldp+885,((IData)(((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                     | (0x4000004U 
                                        == (0x4000004U 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig))))));
    bufp->fullBit(oldp+886,((1U & ((0x4000000U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x19U) : 
                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+887,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
    bufp->fullBit(oldp+888,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullBit(oldp+889,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
    bufp->fullBit(oldp+890,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    bufp->fullBit(oldp+891,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
    bufp->fullBit(oldp+892,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
    bufp->fullBit(oldp+893,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
    bufp->fullBit(oldp+894,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
    bufp->fullBit(oldp+895,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
    bufp->fullIData(oldp+896,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
    bufp->fullBit(oldp+897,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_invalidExc));
    bufp->fullBit(oldp+898,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_isZero));
    bufp->fullBit(oldp+899,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign));
    bufp->fullSData(oldp+900,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp),10);
    bufp->fullIData(oldp+901,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig),27);
    bufp->fullQData(oldp+902,((0xffffffffffffULL & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T)),48);
    bufp->fullBit(oldp+904,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_postMul__DOT___io_invalidExc_T) 
                             | ((0U == (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB)))));
    bufp->fullBit(oldp+905,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    bufp->fullBit(oldp+906,((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+907,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 8U)))));
    bufp->fullCData(oldp+908,((0xffU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),8);
    bufp->fullBit(oldp+909,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 7U)))));
    bufp->fullCData(oldp+910,((0x7fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),7);
    bufp->fullBit(oldp+911,((1U & (~ ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp) 
                                      >> 6U)))));
    bufp->fullCData(oldp+912,((0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp)))),6);
    __Vtemp_21[0U] = 0U;
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_22, __Vtemp_21, 
                   (0x3fU & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sExp))));
    __Vtemp_23[0U] = __Vtemp_22[0U];
    __Vtemp_23[1U] = __Vtemp_22[1U];
    __Vtemp_23[2U] = (1U & __Vtemp_22[2U]);
    bufp->fullWData(oldp+913,(__Vtemp_23),65);
    bufp->fullIData(oldp+916,((3U | (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                     << 2U))),27);
    bufp->fullIData(oldp+917,((0x7ffffffU & (1U | (0x7ffffffeU 
                                                   & (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                                      << 1U))))),27);
    bufp->fullIData(oldp+918,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask),27);
    bufp->fullBit(oldp+919,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosBit));
    bufp->fullBit(oldp+920,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRoundExtra));
    bufp->fullBit(oldp+921,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound));
    bufp->fullIData(oldp+922,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig),26);
    bufp->fullSData(oldp+923,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp),11);
    bufp->fullSData(oldp+924,((0x1ffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))),9);
    bufp->fullIData(oldp+925,((0x7fffffU & ((1U & (IData)(
                                                          (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                           >> 0x2fU)))
                                             ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                >> 1U)
                                             : vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig))),23);
    bufp->fullBit(oldp+926,(VL_LTES_III(4, 3U, (0xfU 
                                                & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                   >> 7U)))));
    bufp->fullBit(oldp+927,(VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))));
    bufp->fullBit(oldp+928,((1U & ((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                  >> 0x2fU)))
                                    ? (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                               >> 0x17U))
                                    : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+929,((IData)(((0U != (3U & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sig)) 
                                     | (0x800000800000ULL 
                                        == (0x800000800000ULL 
                                            & vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T))))));
    bufp->fullBit(oldp+930,((1U & ((1U & (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__mulRawFN___DOT__mulFullRaw__DOT___common_sigOut_T 
                                                  >> 0x2fU)))
                                    ? (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x19U) : 
                                   (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+931,((VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                             | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))));
    bufp->fullBit(oldp+932,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
    bufp->fullBit(oldp+933,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
    bufp->fullBit(oldp+934,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    bufp->fullBit(oldp+935,(((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))));
    bufp->fullBit(oldp+936,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp));
    bufp->fullBit(oldp+937,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut));
    bufp->fullBit(oldp+938,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut));
    bufp->fullBit(oldp+939,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
    bufp->fullIData(oldp+940,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__fractOut),23);
    bufp->fullBit(oldp+941,((1U & ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                   >> 2U))));
    bufp->fullCData(oldp+942,((0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp))),8);
    bufp->fullBit(oldp+943,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne));
    bufp->fullQData(oldp+944,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig),55);
    bufp->fullQData(oldp+946,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig),34);
    bufp->fullIData(oldp+948,((IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                       >> 0x17U))),32);
    bufp->fullBit(oldp+949,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact));
    bufp->fullBit(oldp+950,(((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                               >> 2U) & ((3U == (3U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                            >> 0x16U)))) 
                                         | (3U == (3U 
                                                   & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig))))) 
                             | ((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne) 
                                & (0U != (3U & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__alignedSig)))))));
    bufp->fullBit(oldp+951,((1U & ((((IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT___T_23) 
                                     >> 2U) & (IData)(
                                                      (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                       >> 0x16U))) 
                                   | (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__magJustBelowOne)))));
    bufp->fullBit(oldp+952,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundIncr));
    bufp->fullIData(oldp+953,(((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__INToRecFN_i32_e8_s24_io_in 
                                >> 0x1fU) ? (~ (IData)(
                                                       (vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                                        >> 0x17U)))
                                : (IData)((vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__shiftedSig 
                                           >> 0x17U)))),32);
    bufp->fullBit(oldp+954,((0x1fU == (0xffU & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__MulAddRecFN_e8_s24__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_exp)))));
    bufp->fullBit(oldp+955,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__roundCarryBut2));
    bufp->fullBit(oldp+956,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow));
    bufp->fullBit(oldp+957,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc));
    bufp->fullBit(oldp+958,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                             & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow))));
    bufp->fullBit(oldp+959,(((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__invalidExc)) 
                             & ((~ (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_overflow)) 
                                & (IData)(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__common_inexact)))));
    bufp->fullBit(oldp+960,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__FPU__DOT__RecFNToIN_e8_s24_i32__DOT__excSign));
    bufp->fullQData(oldp+961,(vlSelfRef.Top__DOT__core__DOT__Execute__DOT__mdu__DOT__result),64);
    bufp->fullIData(oldp+963,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),32);
    bufp->fullIData(oldp+964,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),32);
    bufp->fullIData(oldp+965,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
    bufp->fullIData(oldp+966,(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
    bufp->fullIData(oldp+967,(vlSelfRef.Top__DOT__core__DOT__MEM__DOT__rdata),32);
    bufp->fullBit(oldp+968,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionFetch_io_coreInstrReq_valid)))));
    bufp->fullBit(oldp+969,(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    bufp->fullBit(oldp+970,((1U & (~ (IData)(vlSelfRef.Top__DOT__core__DOT__MEM_io_dccmReq_valid)))));
    bufp->fullBit(oldp+971,(vlSelfRef.Top__DOT__dmem__DOT__sram_we_i));
    bufp->fullBit(oldp+972,(vlSelfRef.clock));
    bufp->fullBit(oldp+973,(vlSelfRef.reset));
    bufp->fullIData(oldp+974,(vlSelfRef.io_pin),32);
    bufp->fullBit(oldp+975,(vlSelfRef.io_rvfi_valid_0));
    bufp->fullIData(oldp+976,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->fullCData(oldp+977,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->fullCData(oldp+978,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->fullCData(oldp+979,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->fullIData(oldp+980,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->fullIData(oldp+981,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->fullCData(oldp+982,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->fullIData(oldp+983,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->fullIData(oldp+984,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->fullIData(oldp+985,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->fullIData(oldp+986,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->fullCData(oldp+987,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->fullIData(oldp+988,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->fullIData(oldp+989,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->fullBit(oldp+990,(vlSelfRef.io_baby_kyber_req_ready));
    bufp->fullBit(oldp+991,(vlSelfRef.io_baby_kyber_req_valid));
    bufp->fullIData(oldp+992,(vlSelfRef.io_baby_kyber_req_bits_addrRequest),32);
    bufp->fullIData(oldp+993,(vlSelfRef.io_baby_kyber_req_bits_dataRequest),32);
    bufp->fullCData(oldp+994,(vlSelfRef.io_baby_kyber_req_bits_activeByteLane),4);
    bufp->fullBit(oldp+995,(vlSelfRef.io_baby_kyber_req_bits_isWrite));
    bufp->fullBit(oldp+996,(vlSelfRef.io_baby_kyber_rsp_ready));
    bufp->fullBit(oldp+997,(vlSelfRef.io_baby_kyber_rsp_valid));
    bufp->fullIData(oldp+998,(vlSelfRef.io_baby_kyber_rsp_bits_dataResponse),32);
    bufp->fullBit(oldp+999,(vlSelfRef.io_baby_kyber_rsp_bits_error));
    bufp->fullBit(oldp+1000,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_key));
    bufp->fullBit(oldp+1001,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_encrypt));
    bufp->fullBit(oldp+1002,(vlSelfRef.io_baby_kyber_cio_babykyber_intr_decrypt));
    bufp->fullBit(oldp+1003,(vlSelfRef.io_key_enable_trigger));
    bufp->fullBit(oldp+1004,(vlSelfRef.io_encryption_enable_trigger));
    bufp->fullBit(oldp+1005,(vlSelfRef.io_decryption_enable_trigger));
    bufp->fullBit(oldp+1006,(vlSelfRef.io_uart_req_ready));
    bufp->fullBit(oldp+1007,(vlSelfRef.io_uart_req_valid));
    bufp->fullIData(oldp+1008,(vlSelfRef.io_uart_req_bits_addrRequest),32);
    bufp->fullIData(oldp+1009,(vlSelfRef.io_uart_req_bits_dataRequest),32);
    bufp->fullCData(oldp+1010,(vlSelfRef.io_uart_req_bits_activeByteLane),4);
    bufp->fullBit(oldp+1011,(vlSelfRef.io_uart_req_bits_isWrite));
    bufp->fullBit(oldp+1012,(vlSelfRef.io_uart_rsp_ready));
    bufp->fullBit(oldp+1013,(vlSelfRef.io_uart_rsp_valid));
    bufp->fullIData(oldp+1014,(vlSelfRef.io_uart_rsp_bits_dataResponse),32);
    bufp->fullBit(oldp+1015,(vlSelfRef.io_uart_rsp_bits_error));
    bufp->fullBit(oldp+1016,(vlSelfRef.io_uart_cio_uart_rx_i));
    bufp->fullBit(oldp+1017,(vlSelfRef.io_uart_cio_uart_tx_o));
    bufp->fullBit(oldp+1018,(vlSelfRef.io_uart_cio_uart_intr_tx_o));
    bufp->fullIData(oldp+1019,(((((IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_wra) 
                                  == (vlSelfRef.Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x1bU)) & 
                                 ((IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__control_io_f_read_2) 
                                  & (IData)(vlSelfRef.Top__DOT__core__DOT__mem_reg_ctl_regWrite_1)))
                                 ? vlSelfRef.io_pin
                                 : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_2)),32);
    bufp->fullIData(oldp+1020,(((6U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                 ? vlSelfRef.Top__DOT__core__DOT__mem_reg_csr_data
                                 : ((5U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                     ? vlSelfRef.Top__DOT__core__DOT__ex_reg_csr_data
                                     : ((4U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                         ? vlSelfRef.Top__DOT__core__DOT__id_reg_csr_data
                                         : ((3U == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                             ? vlSelfRef.io_pin
                                             : ((2U 
                                                 == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                 ? 
                                                ((IData)(vlSelfRef.Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                  ? vlSelfRef.Top__DOT__dmem__DOT__sram_rdata_o
                                                  : vlSelfRef.Top__DOT__core__DOT__ex_reg_result)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                  ? vlSelfRef.Top__DOT__core__DOT__InstructionDecode_io_ex_result
                                                  : vlSelfRef.Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_0))))))),32);
    bufp->fullBit(oldp+1021,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__rvalid));
    bufp->fullBit(oldp+1022,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__rvalid));
}
