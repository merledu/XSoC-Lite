FIRRTL version 1.1.0
circuit CSR :
  module CSRRegFile :
    input clock : Clock
    input reset : UInt<1>
    input io_MISA_i_value : UInt<32>
    input io_MHARTID_i_value : UInt<32>
    input io_CSR_i_opr : UInt<2>
    output io_CSR_o_data : UInt<32>
    input io_CSR_i_data : UInt<32>
    input io_CSR_i_addr : UInt<12>
    input io_CSR_i_w_en : UInt<1>
    input io_FCSR_except_0 : UInt<1>
    input io_FCSR_except_1 : UInt<1>
    input io_FCSR_except_2 : UInt<1>
    input io_FCSR_except_3 : UInt<1>
    input io_FCSR_except_4 : UInt<1>
    output io_FCSR_nx : UInt<1>
    output io_FCSR_uf : UInt<1>
    output io_FCSR_of : UInt<1>
    output io_FCSR_dz : UInt<1>
    output io_FCSR_nv : UInt<1>
    output io_FCSR_frm : UInt<3>

    reg MISA_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MISA_REG) @[CSRRegFile.scala 18:38]
    reg MHARTID_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MHARTID_REG) @[CSRRegFile.scala 19:38]
    reg MCAUSE_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MCAUSE_REG) @[CSRRegFile.scala 20:38]
    reg MTVEC_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MTVEC_REG) @[CSRRegFile.scala 21:38]
    reg MEPC_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MEPC_REG) @[CSRRegFile.scala 22:38]
    reg MIE_REG : UInt<32>, clock with :
      reset => (UInt<1>("h0"), MIE_REG) @[CSRRegFile.scala 23:38]
    reg MSTATUS_TW_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), MSTATUS_TW_REG) @[CSRRegFile.scala 26:38]
    reg MSTATUS_MPRV_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), MSTATUS_MPRV_REG) @[CSRRegFile.scala 27:38]
    reg MSTATUS_MPP_REG : UInt<2>, clock with :
      reset => (UInt<1>("h0"), MSTATUS_MPP_REG) @[CSRRegFile.scala 28:38]
    reg MSTATUS_MPIE_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), MSTATUS_MPIE_REG) @[CSRRegFile.scala 29:38]
    reg MSTATUS_MIE_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), MSTATUS_MIE_REG) @[CSRRegFile.scala 30:38]
    reg FCSR_NX_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), FCSR_NX_REG) @[CSRRegFile.scala 33:38]
    reg FCSR_UF_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), FCSR_UF_REG) @[CSRRegFile.scala 34:38]
    reg FCSR_OF_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), FCSR_OF_REG) @[CSRRegFile.scala 35:38]
    reg FCSR_DZ_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), FCSR_DZ_REG) @[CSRRegFile.scala 36:38]
    reg FCSR_NV_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), FCSR_NV_REG) @[CSRRegFile.scala 37:38]
    reg FCSR_FRM_REG : UInt<3>, clock with :
      reset => (UInt<1>("h0"), FCSR_FRM_REG) @[CSRRegFile.scala 38:38]
    node _FCSR_NX_REG_T = or(FCSR_NX_REG, io_FCSR_except_0) @[CSRRegFile.scala 51:25]
    node _FCSR_UF_REG_T = or(FCSR_UF_REG, io_FCSR_except_1) @[CSRRegFile.scala 51:25]
    node _FCSR_OF_REG_T = or(FCSR_OF_REG, io_FCSR_except_2) @[CSRRegFile.scala 51:25]
    node _FCSR_DZ_REG_T = or(FCSR_DZ_REG, io_FCSR_except_3) @[CSRRegFile.scala 51:25]
    node _FCSR_NV_REG_T = or(FCSR_NV_REG, io_FCSR_except_4) @[CSRRegFile.scala 51:25]
    node MSTATUS_WIRE_lo_lo = cat(MSTATUS_MIE_REG, UInt<3>("h0")) @[Cat.scala 33:92]
    node MSTATUS_WIRE_lo_hi_hi = cat(UInt<3>("h0"), MSTATUS_MPIE_REG) @[Cat.scala 33:92]
    node MSTATUS_WIRE_lo_hi = cat(MSTATUS_WIRE_lo_hi_hi, UInt<3>("h0")) @[Cat.scala 33:92]
    node MSTATUS_WIRE_lo = cat(MSTATUS_WIRE_lo_hi, MSTATUS_WIRE_lo_lo) @[Cat.scala 33:92]
    node MSTATUS_WIRE_hi_lo_hi = cat(MSTATUS_MPRV_REG, UInt<4>("h0")) @[Cat.scala 33:92]
    node MSTATUS_WIRE_hi_lo = cat(MSTATUS_WIRE_hi_lo_hi, MSTATUS_MPP_REG) @[Cat.scala 33:92]
    node MSTATUS_WIRE_hi_hi_hi = cat(UInt<10>("h0"), MSTATUS_TW_REG) @[Cat.scala 33:92]
    node MSTATUS_WIRE_hi_hi = cat(MSTATUS_WIRE_hi_hi_hi, UInt<3>("h0")) @[Cat.scala 33:92]
    node MSTATUS_WIRE_hi = cat(MSTATUS_WIRE_hi_hi, MSTATUS_WIRE_hi_lo) @[Cat.scala 33:92]
    node _MSTATUS_WIRE_T = cat(MSTATUS_WIRE_hi, MSTATUS_WIRE_lo) @[Cat.scala 33:92]
    node _MCAUSE_WLRL_WIRE_T = bits(MCAUSE_REG, 30, 0) @[CSRRegFile.scala 64:54]
    node _MCAUSE_INTERRUPT_WIRE_T = bits(MCAUSE_REG, 31, 31) @[CSRRegFile.scala 65:54]
    node _MTVEC_MODE_WIRE_T = bits(MTVEC_REG, 1, 0) @[CSRRegFile.scala 66:53]
    node _MTVEC_BASE_WIRE_T = bits(MTVEC_REG, 31, 2) @[CSRRegFile.scala 67:53]
    node FFLAGS_WIRE_lo_hi = cat(FCSR_OF_REG, FCSR_UF_REG) @[Cat.scala 33:92]
    node FFLAGS_WIRE_lo = cat(FFLAGS_WIRE_lo_hi, FCSR_NX_REG) @[Cat.scala 33:92]
    node FFLAGS_WIRE_hi_hi = cat(UInt<27>("h0"), FCSR_NV_REG) @[Cat.scala 33:92]
    node FFLAGS_WIRE_hi = cat(FFLAGS_WIRE_hi_hi, FCSR_DZ_REG) @[Cat.scala 33:92]
    node _FFLAGS_WIRE_T = cat(FFLAGS_WIRE_hi, FFLAGS_WIRE_lo) @[Cat.scala 33:92]
    node _FRM_WIRE_T = cat(UInt<29>("h0"), FCSR_FRM_REG) @[Cat.scala 33:92]
    node FCSR_WIRE_lo_hi = cat(FCSR_OF_REG, FCSR_UF_REG) @[Cat.scala 33:92]
    node FCSR_WIRE_lo = cat(FCSR_WIRE_lo_hi, FCSR_NX_REG) @[Cat.scala 33:92]
    node FCSR_WIRE_hi_lo = cat(FCSR_NV_REG, FCSR_DZ_REG) @[Cat.scala 33:92]
    node FCSR_WIRE_hi_hi = cat(UInt<24>("h0"), FCSR_FRM_REG) @[Cat.scala 33:92]
    node FCSR_WIRE_hi = cat(FCSR_WIRE_hi_hi, FCSR_WIRE_hi_lo) @[Cat.scala 33:92]
    node _FCSR_WIRE_T = cat(FCSR_WIRE_hi, FCSR_WIRE_lo) @[Cat.scala 33:92]
    node _r_data_T = eq(UInt<10>("h301"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_WIRE = validif(UInt<1>("h0"), UInt<32>("h0"))
    node _r_data_T_1 = mux(_r_data_T, MISA_REG, _r_data_WIRE) @[Mux.scala 81:58]
    node _r_data_T_2 = eq(UInt<12>("hf14"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_T_3 = mux(_r_data_T_2, MHARTID_REG, _r_data_T_1) @[Mux.scala 81:58]
    node _r_data_T_4 = eq(UInt<10>("h300"), io_CSR_i_addr) @[Mux.scala 81:61]
    node MSTATUS_WIRE = _MSTATUS_WIRE_T @[CSRRegFile.scala 63:{43,43}]
    node _r_data_T_5 = mux(_r_data_T_4, MSTATUS_WIRE, _r_data_T_3) @[Mux.scala 81:58]
    node _r_data_T_6 = eq(UInt<10>("h342"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_T_7 = mux(_r_data_T_6, MCAUSE_REG, _r_data_T_5) @[Mux.scala 81:58]
    node _r_data_T_8 = eq(UInt<10>("h305"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_T_9 = mux(_r_data_T_8, MTVEC_REG, _r_data_T_7) @[Mux.scala 81:58]
    node _r_data_T_10 = eq(UInt<10>("h341"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_T_11 = mux(_r_data_T_10, MEPC_REG, _r_data_T_9) @[Mux.scala 81:58]
    node _r_data_T_12 = eq(UInt<10>("h304"), io_CSR_i_addr) @[Mux.scala 81:61]
    node _r_data_T_13 = mux(_r_data_T_12, MIE_REG, _r_data_T_11) @[Mux.scala 81:58]
    node _r_data_T_14 = eq(UInt<1>("h1"), io_CSR_i_addr) @[Mux.scala 81:61]
    node FFLAGS_WIRE = _FFLAGS_WIRE_T @[CSRRegFile.scala 68:{43,43}]
    node _r_data_T_15 = mux(_r_data_T_14, FFLAGS_WIRE, _r_data_T_13) @[Mux.scala 81:58]
    node _r_data_T_16 = eq(UInt<2>("h2"), io_CSR_i_addr) @[Mux.scala 81:61]
    node FRM_WIRE = _FRM_WIRE_T @[CSRRegFile.scala 76:{43,43}]
    node _r_data_T_17 = mux(_r_data_T_16, FRM_WIRE, _r_data_T_15) @[Mux.scala 81:58]
    node _r_data_T_18 = eq(UInt<2>("h3"), io_CSR_i_addr) @[Mux.scala 81:61]
    node FCSR_WIRE = _FCSR_WIRE_T @[CSRRegFile.scala 77:{43,43}]
    node _r_data_T_19 = mux(_r_data_T_18, FCSR_WIRE, _r_data_T_17) @[Mux.scala 81:58]
    node r_data = _r_data_T_19 @[CSRRegFile.scala 107:12 62:39]
    node set_data = or(r_data, io_CSR_i_data) @[CSRRegFile.scala 113:29]
    node _clear_data_T = not(io_CSR_i_data) @[CSRRegFile.scala 114:31]
    node clear_data = and(r_data, _clear_data_T) @[CSRRegFile.scala 114:29]
    node WRITE = UInt<2>("h1") @[CSRRegFile.scala 91:36 92:111]
    node _w_data_T = eq(WRITE, io_CSR_i_opr) @[Mux.scala 81:61]
    node _w_data_WIRE = validif(UInt<1>("h0"), UInt<32>("h0"))
    node _w_data_T_1 = mux(_w_data_T, io_CSR_i_data, _w_data_WIRE) @[Mux.scala 81:58]
    node SET = UInt<2>("h2") @[CSRRegFile.scala 91:36 92:111]
    node _w_data_T_2 = eq(SET, io_CSR_i_opr) @[Mux.scala 81:61]
    node _w_data_T_3 = mux(_w_data_T_2, set_data, _w_data_T_1) @[Mux.scala 81:58]
    node CLEAR = UInt<2>("h3") @[CSRRegFile.scala 91:36 92:111]
    node _w_data_T_4 = eq(CLEAR, io_CSR_i_opr) @[Mux.scala 81:61]
    node _w_data_T_5 = mux(_w_data_T_4, clear_data, _w_data_T_3) @[Mux.scala 81:58]
    node _T = eq(UInt<10>("h300"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node w_data = _w_data_T_5 @[CSRRegFile.scala 117:12 61:39]
    node _MSTATUS_TW_REG_T = bits(w_data, 21, 21) @[CSRRegFile.scala 127:43]
    node _MSTATUS_MPRV_REG_T = bits(w_data, 17, 17) @[CSRRegFile.scala 128:43]
    node _MSTATUS_MPP_REG_T = bits(w_data, 12, 11) @[CSRRegFile.scala 129:43]
    node _MSTATUS_MPIE_REG_T = bits(w_data, 7, 7) @[CSRRegFile.scala 130:43]
    node _MSTATUS_MIE_REG_T = bits(w_data, 3, 3) @[CSRRegFile.scala 131:43]
    node _T_1 = eq(UInt<10>("h342"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _T_2 = eq(UInt<10>("h305"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _T_3 = eq(UInt<10>("h341"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _T_4 = eq(UInt<10>("h304"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _T_5 = eq(UInt<2>("h3"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _FCSR_NX_REG_T_1 = bits(w_data, 0, 0) @[CSRRegFile.scala 146:43]
    node _FCSR_UF_REG_T_1 = bits(w_data, 1, 1) @[CSRRegFile.scala 147:43]
    node _FCSR_OF_REG_T_1 = bits(w_data, 2, 2) @[CSRRegFile.scala 148:43]
    node _FCSR_DZ_REG_T_1 = bits(w_data, 3, 3) @[CSRRegFile.scala 149:43]
    node _FCSR_NV_REG_T_1 = bits(w_data, 4, 4) @[CSRRegFile.scala 150:43]
    node _FCSR_FRM_REG_T = bits(w_data, 7, 5) @[CSRRegFile.scala 151:43]
    node _T_6 = eq(UInt<1>("h1"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _FCSR_NX_REG_T_2 = bits(w_data, 0, 0) @[CSRRegFile.scala 154:43]
    node _FCSR_UF_REG_T_2 = bits(w_data, 1, 1) @[CSRRegFile.scala 155:43]
    node _FCSR_OF_REG_T_2 = bits(w_data, 2, 2) @[CSRRegFile.scala 156:43]
    node _FCSR_DZ_REG_T_2 = bits(w_data, 3, 3) @[CSRRegFile.scala 157:43]
    node _FCSR_NV_REG_T_2 = bits(w_data, 4, 4) @[CSRRegFile.scala 158:43]
    node _T_7 = eq(UInt<2>("h2"), io_CSR_i_addr) @[CSRRegFile.scala 125:30]
    node _FCSR_FRM_REG_T_1 = bits(w_data, 2, 0) @[CSRRegFile.scala 161:43]
    node _GEN_0 = mux(_T_7, _FCSR_FRM_REG_T_1, FCSR_FRM_REG) @[CSRRegFile.scala 125:30 161:34 38:38]
    node _GEN_1 = mux(_T_6, _FCSR_NX_REG_T_2, _FCSR_NX_REG_T) @[CSRRegFile.scala 125:30 154:34 51:17]
    node _GEN_2 = mux(_T_6, _FCSR_UF_REG_T_2, _FCSR_UF_REG_T) @[CSRRegFile.scala 125:30 155:34 51:17]
    node _GEN_3 = mux(_T_6, _FCSR_OF_REG_T_2, _FCSR_OF_REG_T) @[CSRRegFile.scala 125:30 156:34 51:17]
    node _GEN_4 = mux(_T_6, _FCSR_DZ_REG_T_2, _FCSR_DZ_REG_T) @[CSRRegFile.scala 125:30 157:34 51:17]
    node _GEN_5 = mux(_T_6, _FCSR_NV_REG_T_2, _FCSR_NV_REG_T) @[CSRRegFile.scala 125:30 158:34 51:17]
    node _GEN_6 = mux(_T_6, FCSR_FRM_REG, _GEN_0) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_7 = mux(_T_5, _FCSR_NX_REG_T_1, _GEN_1) @[CSRRegFile.scala 125:30 146:34]
    node _GEN_8 = mux(_T_5, _FCSR_UF_REG_T_1, _GEN_2) @[CSRRegFile.scala 125:30 147:34]
    node _GEN_9 = mux(_T_5, _FCSR_OF_REG_T_1, _GEN_3) @[CSRRegFile.scala 125:30 148:34]
    node _GEN_10 = mux(_T_5, _FCSR_DZ_REG_T_1, _GEN_4) @[CSRRegFile.scala 125:30 149:34]
    node _GEN_11 = mux(_T_5, _FCSR_NV_REG_T_1, _GEN_5) @[CSRRegFile.scala 125:30 150:34]
    node _GEN_12 = mux(_T_5, _FCSR_FRM_REG_T, _GEN_6) @[CSRRegFile.scala 125:30 151:34]
    node _GEN_13 = mux(_T_4, w_data, MIE_REG) @[CSRRegFile.scala 125:30 143:34 23:38]
    node _GEN_14 = mux(_T_4, _FCSR_NX_REG_T, _GEN_7) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_15 = mux(_T_4, _FCSR_UF_REG_T, _GEN_8) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_16 = mux(_T_4, _FCSR_OF_REG_T, _GEN_9) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_17 = mux(_T_4, _FCSR_DZ_REG_T, _GEN_10) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_18 = mux(_T_4, _FCSR_NV_REG_T, _GEN_11) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_19 = mux(_T_4, FCSR_FRM_REG, _GEN_12) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_20 = mux(_T_3, w_data, MEPC_REG) @[CSRRegFile.scala 125:30 140:34 22:38]
    node _GEN_21 = mux(_T_3, MIE_REG, _GEN_13) @[CSRRegFile.scala 125:30 23:38]
    node _GEN_22 = mux(_T_3, _FCSR_NX_REG_T, _GEN_14) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_23 = mux(_T_3, _FCSR_UF_REG_T, _GEN_15) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_24 = mux(_T_3, _FCSR_OF_REG_T, _GEN_16) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_25 = mux(_T_3, _FCSR_DZ_REG_T, _GEN_17) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_26 = mux(_T_3, _FCSR_NV_REG_T, _GEN_18) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_27 = mux(_T_3, FCSR_FRM_REG, _GEN_19) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_28 = mux(_T_2, w_data, MTVEC_REG) @[CSRRegFile.scala 125:30 137:34 21:38]
    node _GEN_29 = mux(_T_2, MEPC_REG, _GEN_20) @[CSRRegFile.scala 125:30 22:38]
    node _GEN_30 = mux(_T_2, MIE_REG, _GEN_21) @[CSRRegFile.scala 125:30 23:38]
    node _GEN_31 = mux(_T_2, _FCSR_NX_REG_T, _GEN_22) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_32 = mux(_T_2, _FCSR_UF_REG_T, _GEN_23) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_33 = mux(_T_2, _FCSR_OF_REG_T, _GEN_24) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_34 = mux(_T_2, _FCSR_DZ_REG_T, _GEN_25) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_35 = mux(_T_2, _FCSR_NV_REG_T, _GEN_26) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_36 = mux(_T_2, FCSR_FRM_REG, _GEN_27) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_37 = mux(_T_1, w_data, MCAUSE_REG) @[CSRRegFile.scala 125:30 134:34 20:38]
    node _GEN_38 = mux(_T_1, MTVEC_REG, _GEN_28) @[CSRRegFile.scala 125:30 21:38]
    node _GEN_39 = mux(_T_1, MEPC_REG, _GEN_29) @[CSRRegFile.scala 125:30 22:38]
    node _GEN_40 = mux(_T_1, MIE_REG, _GEN_30) @[CSRRegFile.scala 125:30 23:38]
    node _GEN_41 = mux(_T_1, _FCSR_NX_REG_T, _GEN_31) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_42 = mux(_T_1, _FCSR_UF_REG_T, _GEN_32) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_43 = mux(_T_1, _FCSR_OF_REG_T, _GEN_33) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_44 = mux(_T_1, _FCSR_DZ_REG_T, _GEN_34) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_45 = mux(_T_1, _FCSR_NV_REG_T, _GEN_35) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_46 = mux(_T_1, FCSR_FRM_REG, _GEN_36) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_47 = mux(_T, _MSTATUS_TW_REG_T, MSTATUS_TW_REG) @[CSRRegFile.scala 125:30 127:34 26:38]
    node _GEN_48 = mux(_T, _MSTATUS_MPRV_REG_T, MSTATUS_MPRV_REG) @[CSRRegFile.scala 125:30 128:34 27:38]
    node _GEN_49 = mux(_T, _MSTATUS_MPP_REG_T, MSTATUS_MPP_REG) @[CSRRegFile.scala 125:30 129:34 28:38]
    node _GEN_50 = mux(_T, _MSTATUS_MPIE_REG_T, MSTATUS_MPIE_REG) @[CSRRegFile.scala 125:30 130:34 29:38]
    node _GEN_51 = mux(_T, _MSTATUS_MIE_REG_T, MSTATUS_MIE_REG) @[CSRRegFile.scala 125:30 131:34 30:38]
    node _GEN_52 = mux(_T, MCAUSE_REG, _GEN_37) @[CSRRegFile.scala 125:30 20:38]
    node _GEN_53 = mux(_T, MTVEC_REG, _GEN_38) @[CSRRegFile.scala 125:30 21:38]
    node _GEN_54 = mux(_T, MEPC_REG, _GEN_39) @[CSRRegFile.scala 125:30 22:38]
    node _GEN_55 = mux(_T, MIE_REG, _GEN_40) @[CSRRegFile.scala 125:30 23:38]
    node _GEN_56 = mux(_T, _FCSR_NX_REG_T, _GEN_41) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_57 = mux(_T, _FCSR_UF_REG_T, _GEN_42) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_58 = mux(_T, _FCSR_OF_REG_T, _GEN_43) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_59 = mux(_T, _FCSR_DZ_REG_T, _GEN_44) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_60 = mux(_T, _FCSR_NV_REG_T, _GEN_45) @[CSRRegFile.scala 125:30 51:17]
    node _GEN_61 = mux(_T, FCSR_FRM_REG, _GEN_46) @[CSRRegFile.scala 125:30 38:38]
    node _GEN_62 = mux(io_CSR_i_w_en, _GEN_47, MSTATUS_TW_REG) @[CSRRegFile.scala 124:24 26:38]
    node _GEN_63 = mux(io_CSR_i_w_en, _GEN_48, MSTATUS_MPRV_REG) @[CSRRegFile.scala 124:24 27:38]
    node _GEN_64 = mux(io_CSR_i_w_en, _GEN_49, MSTATUS_MPP_REG) @[CSRRegFile.scala 124:24 28:38]
    node _GEN_65 = mux(io_CSR_i_w_en, _GEN_50, MSTATUS_MPIE_REG) @[CSRRegFile.scala 124:24 29:38]
    node _GEN_66 = mux(io_CSR_i_w_en, _GEN_51, MSTATUS_MIE_REG) @[CSRRegFile.scala 124:24 30:38]
    node _GEN_67 = mux(io_CSR_i_w_en, _GEN_52, MCAUSE_REG) @[CSRRegFile.scala 124:24 20:38]
    node _GEN_68 = mux(io_CSR_i_w_en, _GEN_53, MTVEC_REG) @[CSRRegFile.scala 124:24 21:38]
    node _GEN_69 = mux(io_CSR_i_w_en, _GEN_54, MEPC_REG) @[CSRRegFile.scala 124:24 22:38]
    node _GEN_70 = mux(io_CSR_i_w_en, _GEN_55, MIE_REG) @[CSRRegFile.scala 124:24 23:38]
    node _GEN_71 = mux(io_CSR_i_w_en, _GEN_56, _FCSR_NX_REG_T) @[CSRRegFile.scala 124:24 51:17]
    node _GEN_72 = mux(io_CSR_i_w_en, _GEN_57, _FCSR_UF_REG_T) @[CSRRegFile.scala 124:24 51:17]
    node _GEN_73 = mux(io_CSR_i_w_en, _GEN_58, _FCSR_OF_REG_T) @[CSRRegFile.scala 124:24 51:17]
    node _GEN_74 = mux(io_CSR_i_w_en, _GEN_59, _FCSR_DZ_REG_T) @[CSRRegFile.scala 124:24 51:17]
    node _GEN_75 = mux(io_CSR_i_w_en, _GEN_60, _FCSR_NV_REG_T) @[CSRRegFile.scala 124:24 51:17]
    node _GEN_76 = mux(io_CSR_i_w_en, _GEN_61, FCSR_FRM_REG) @[CSRRegFile.scala 124:24 38:38]
    node MCAUSE_WLRL_WIRE = _MCAUSE_WLRL_WIRE_T @[CSRRegFile.scala 64:{43,43}]
    node MCAUSE_INTERRUPT_WIRE = _MCAUSE_INTERRUPT_WIRE_T @[CSRRegFile.scala 65:{43,43}]
    node MTVEC_MODE_WIRE = _MTVEC_MODE_WIRE_T @[CSRRegFile.scala 66:{43,43}]
    node MTVEC_BASE_WIRE = _MTVEC_BASE_WIRE_T @[CSRRegFile.scala 67:{43,43}]
    node READ = UInt<2>("h0") @[CSRRegFile.scala 91:36 92:111]
    io_CSR_o_data <= r_data @[CSRRegFile.scala 109:19]
    io_FCSR_nx <= FCSR_NX_REG @[CSRRegFile.scala 53:29]
    io_FCSR_uf <= FCSR_UF_REG @[CSRRegFile.scala 54:29]
    io_FCSR_of <= FCSR_OF_REG @[CSRRegFile.scala 55:29]
    io_FCSR_dz <= FCSR_DZ_REG @[CSRRegFile.scala 56:29]
    io_FCSR_nv <= FCSR_NV_REG @[CSRRegFile.scala 57:29]
    io_FCSR_frm <= FCSR_FRM_REG @[CSRRegFile.scala 58:29]
    MISA_REG <= mux(reset, UInt<32>("h0"), io_MISA_i_value) @[CSRRegFile.scala 18:{38,38} 41:29]
    MHARTID_REG <= mux(reset, UInt<32>("h0"), io_MHARTID_i_value) @[CSRRegFile.scala 19:{38,38} 42:29]
    MCAUSE_REG <= mux(reset, UInt<32>("h0"), _GEN_67) @[CSRRegFile.scala 20:{38,38}]
    MTVEC_REG <= mux(reset, UInt<32>("h0"), _GEN_68) @[CSRRegFile.scala 21:{38,38}]
    MEPC_REG <= mux(reset, UInt<32>("h0"), _GEN_69) @[CSRRegFile.scala 22:{38,38}]
    MIE_REG <= mux(reset, UInt<32>("h0"), _GEN_70) @[CSRRegFile.scala 23:{38,38}]
    MSTATUS_TW_REG <= mux(reset, UInt<1>("h0"), _GEN_62) @[CSRRegFile.scala 26:{38,38}]
    MSTATUS_MPRV_REG <= mux(reset, UInt<1>("h0"), _GEN_63) @[CSRRegFile.scala 27:{38,38}]
    MSTATUS_MPP_REG <= mux(reset, UInt<2>("h0"), _GEN_64) @[CSRRegFile.scala 28:{38,38}]
    MSTATUS_MPIE_REG <= mux(reset, UInt<1>("h0"), _GEN_65) @[CSRRegFile.scala 29:{38,38}]
    MSTATUS_MIE_REG <= mux(reset, UInt<1>("h0"), _GEN_66) @[CSRRegFile.scala 30:{38,38}]
    FCSR_NX_REG <= mux(reset, UInt<1>("h0"), _GEN_71) @[CSRRegFile.scala 33:{38,38}]
    FCSR_UF_REG <= mux(reset, UInt<1>("h0"), _GEN_72) @[CSRRegFile.scala 34:{38,38}]
    FCSR_OF_REG <= mux(reset, UInt<1>("h0"), _GEN_73) @[CSRRegFile.scala 35:{38,38}]
    FCSR_DZ_REG <= mux(reset, UInt<1>("h0"), _GEN_74) @[CSRRegFile.scala 36:{38,38}]
    FCSR_NV_REG <= mux(reset, UInt<1>("h0"), _GEN_75) @[CSRRegFile.scala 37:{38,38}]
    FCSR_FRM_REG <= mux(reset, UInt<3>("h0"), _GEN_76) @[CSRRegFile.scala 38:{38,38}]

  module CSR :
    input clock : Clock
    input reset : UInt<1>
    input io_i_misa_value : UInt<32>
    input io_i_mhartid_value : UInt<32>
    input io_i_data : UInt<32>
    input io_i_imm : UInt<5>
    output io_o_data : UInt<32>
    input io_i_opr : UInt<3>
    input io_i_addr : UInt<12>
    input io_i_w_en : UInt<1>
    input io_f_except_0 : UInt<1>
    input io_f_except_1 : UInt<1>
    input io_f_except_2 : UInt<1>
    input io_f_except_3 : UInt<1>
    input io_f_except_4 : UInt<1>
    output io_fcsr_o_data : UInt<32>

    inst csrRegFile of CSRRegFile @[CSR.scala 21:28]
    node _csrRegFile_io_CSR_i_data_T = bits(io_i_opr, 2, 2) @[CSR.scala 24:52]
    node _csrRegFile_io_CSR_i_data_T_1 = mux(_csrRegFile_io_CSR_i_data_T, io_i_imm, io_i_data) @[CSR.scala 24:43]
    node io_fcsr_o_data_lo_hi = cat(csrRegFile.io_FCSR_of, csrRegFile.io_FCSR_uf) @[Cat.scala 33:92]
    node io_fcsr_o_data_lo = cat(io_fcsr_o_data_lo_hi, csrRegFile.io_FCSR_nx) @[Cat.scala 33:92]
    node io_fcsr_o_data_hi_lo = cat(csrRegFile.io_FCSR_nv, csrRegFile.io_FCSR_dz) @[Cat.scala 33:92]
    node io_fcsr_o_data_hi_hi = cat(UInt<24>("h0"), csrRegFile.io_FCSR_frm) @[Cat.scala 33:92]
    node io_fcsr_o_data_hi = cat(io_fcsr_o_data_hi_hi, io_fcsr_o_data_hi_lo) @[Cat.scala 33:92]
    node _io_fcsr_o_data_T = cat(io_fcsr_o_data_hi, io_fcsr_o_data_lo) @[Cat.scala 33:92]
    io_o_data <= csrRegFile.io_CSR_o_data @[CSR.scala 32:37]
    io_fcsr_o_data <= _io_fcsr_o_data_T @[CSR.scala 33:37]
    csrRegFile.clock <= clock
    csrRegFile.reset <= reset
    csrRegFile.io_MISA_i_value <= io_i_misa_value @[CSR.scala 26:37]
    csrRegFile.io_MHARTID_i_value <= io_i_mhartid_value @[CSR.scala 27:37]
    csrRegFile.io_CSR_i_opr <= bits(io_i_opr, 1, 0) @[CSR.scala 25:37]
    csrRegFile.io_CSR_i_data <= _csrRegFile_io_CSR_i_data_T_1 @[CSR.scala 24:37]
    csrRegFile.io_CSR_i_addr <= io_i_addr @[CSR.scala 28:37]
    csrRegFile.io_CSR_i_w_en <= io_i_w_en @[CSR.scala 29:37]
    csrRegFile.io_FCSR_except_0 <= io_f_except_0 @[CSR.scala 30:37]
    csrRegFile.io_FCSR_except_1 <= io_f_except_1 @[CSR.scala 30:37]
    csrRegFile.io_FCSR_except_2 <= io_f_except_2 @[CSR.scala 30:37]
    csrRegFile.io_FCSR_except_3 <= io_f_except_3 @[CSR.scala 30:37]
    csrRegFile.io_FCSR_except_4 <= io_f_except_4 @[CSR.scala 30:37]
