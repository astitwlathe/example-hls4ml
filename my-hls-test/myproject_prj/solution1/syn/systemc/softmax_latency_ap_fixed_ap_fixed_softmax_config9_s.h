// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_HH_
#define _softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mul_mul_14s_18s_26_1_1.h"
#include "softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_exp_tbkb.h"
#include "softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud.h"

namespace ap_rtl {

struct softmax_latency_ap_fixed_ap_fixed_softmax_config9_s : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_2_V_read;
    sc_in< sc_lv<16> > data_3_V_read;
    sc_in< sc_lv<16> > data_4_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;


    // Module declarations
    softmax_latency_ap_fixed_ap_fixed_softmax_config9_s(sc_module_name name);
    SC_HAS_PROCESS(softmax_latency_ap_fixed_ap_fixed_softmax_config9_s);

    ~softmax_latency_ap_fixed_ap_fixed_softmax_config9_s();

    sc_trace_file* mVcdFile;

    softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_exp_tbkb* exp_table1_U;
    softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud* invert_table2_U;
    myproject_mul_mul_14s_18s_26_1_1<1,1,14,18,26>* myproject_mul_mul_14s_18s_26_1_1_U258;
    myproject_mul_mul_14s_18s_26_1_1<1,1,14,18,26>* myproject_mul_mul_14s_18s_26_1_1_U259;
    myproject_mul_mul_14s_18s_26_1_1<1,1,14,18,26>* myproject_mul_mul_14s_18s_26_1_1_U260;
    myproject_mul_mul_14s_18s_26_1_1<1,1,14,18,26>* myproject_mul_mul_14s_18s_26_1_1_U261;
    myproject_mul_mul_14s_18s_26_1_1<1,1,14,18,26>* myproject_mul_mul_14s_18s_26_1_1_U262;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > exp_table1_address0;
    sc_signal< sc_logic > exp_table1_ce0;
    sc_signal< sc_lv<18> > exp_table1_q0;
    sc_signal< sc_lv<10> > exp_table1_address1;
    sc_signal< sc_logic > exp_table1_ce1;
    sc_signal< sc_lv<18> > exp_table1_q1;
    sc_signal< sc_lv<10> > exp_table1_address2;
    sc_signal< sc_logic > exp_table1_ce2;
    sc_signal< sc_lv<18> > exp_table1_q2;
    sc_signal< sc_lv<10> > exp_table1_address3;
    sc_signal< sc_logic > exp_table1_ce3;
    sc_signal< sc_lv<18> > exp_table1_q3;
    sc_signal< sc_lv<10> > exp_table1_address4;
    sc_signal< sc_logic > exp_table1_ce4;
    sc_signal< sc_lv<18> > exp_table1_q4;
    sc_signal< sc_lv<10> > invert_table2_address0;
    sc_signal< sc_logic > invert_table2_ce0;
    sc_signal< sc_lv<14> > invert_table2_q0;
    sc_signal< sc_lv<18> > exp_res_0_V_reg_420;
    sc_signal< sc_lv<18> > exp_res_1_V_reg_425;
    sc_signal< sc_lv<18> > exp_res_2_V_reg_430;
    sc_signal< sc_lv<18> > exp_res_3_V_reg_435;
    sc_signal< sc_lv<18> > exp_res_4_V_reg_440;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln251_fu_162_p1;
    sc_signal< sc_lv<64> > zext_ln251_1_fu_177_p1;
    sc_signal< sc_lv<64> > zext_ln251_2_fu_192_p1;
    sc_signal< sc_lv<64> > zext_ln251_3_fu_207_p1;
    sc_signal< sc_lv<64> > zext_ln251_4_fu_222_p1;
    sc_signal< sc_lv<64> > zext_ln259_fu_261_p1;
    sc_signal< sc_lv<10> > y_V_fu_152_p4;
    sc_signal< sc_lv<10> > y_V_1_fu_167_p4;
    sc_signal< sc_lv<10> > y_V_2_fu_182_p4;
    sc_signal< sc_lv<10> > y_V_3_fu_197_p4;
    sc_signal< sc_lv<10> > y_V_4_fu_212_p4;
    sc_signal< sc_lv<18> > add_ln703_fu_227_p0;
    sc_signal< sc_lv<18> > add_ln703_fu_227_p1;
    sc_signal< sc_lv<18> > add_ln703_1_fu_233_p0;
    sc_signal< sc_lv<18> > add_ln703_1_fu_233_p1;
    sc_signal< sc_lv<18> > add_ln703_1_fu_233_p2;
    sc_signal< sc_lv<18> > add_ln703_2_fu_239_p1;
    sc_signal< sc_lv<18> > add_ln703_2_fu_239_p2;
    sc_signal< sc_lv<18> > add_ln703_fu_227_p2;
    sc_signal< sc_lv<18> > exp_sum_V_fu_245_p2;
    sc_signal< sc_lv<10> > y_V_5_fu_251_p4;
    sc_signal< sc_lv<26> > mul_ln1118_fu_360_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1_fu_367_p2;
    sc_signal< sc_lv<26> > mul_ln1118_2_fu_374_p2;
    sc_signal< sc_lv<26> > mul_ln1118_3_fu_381_p2;
    sc_signal< sc_lv<26> > mul_ln1118_4_fu_388_p2;
    sc_signal< sc_lv<14> > mul_ln1118_fu_360_p0;
    sc_signal< sc_lv<26> > sext_ln1116_fu_266_p1;
    sc_signal< sc_lv<14> > mul_ln1118_1_fu_367_p0;
    sc_signal< sc_lv<14> > mul_ln1118_2_fu_374_p0;
    sc_signal< sc_lv<14> > mul_ln1118_3_fu_381_p0;
    sc_signal< sc_lv<14> > mul_ln1118_4_fu_388_p0;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to1;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln703_1_fu_233_p0();
    void thread_add_ln703_1_fu_233_p1();
    void thread_add_ln703_1_fu_233_p2();
    void thread_add_ln703_2_fu_239_p1();
    void thread_add_ln703_2_fu_239_p2();
    void thread_add_ln703_fu_227_p0();
    void thread_add_ln703_fu_227_p1();
    void thread_add_ln703_fu_227_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to1();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_exp_sum_V_fu_245_p2();
    void thread_exp_table1_address0();
    void thread_exp_table1_address1();
    void thread_exp_table1_address2();
    void thread_exp_table1_address3();
    void thread_exp_table1_address4();
    void thread_exp_table1_ce0();
    void thread_exp_table1_ce1();
    void thread_exp_table1_ce2();
    void thread_exp_table1_ce3();
    void thread_exp_table1_ce4();
    void thread_invert_table2_address0();
    void thread_invert_table2_ce0();
    void thread_mul_ln1118_1_fu_367_p0();
    void thread_mul_ln1118_2_fu_374_p0();
    void thread_mul_ln1118_3_fu_381_p0();
    void thread_mul_ln1118_4_fu_388_p0();
    void thread_mul_ln1118_fu_360_p0();
    void thread_sext_ln1116_fu_266_p1();
    void thread_y_V_1_fu_167_p4();
    void thread_y_V_2_fu_182_p4();
    void thread_y_V_3_fu_197_p4();
    void thread_y_V_4_fu_212_p4();
    void thread_y_V_5_fu_251_p4();
    void thread_y_V_fu_152_p4();
    void thread_zext_ln251_1_fu_177_p1();
    void thread_zext_ln251_2_fu_192_p1();
    void thread_zext_ln251_3_fu_207_p1();
    void thread_zext_ln251_4_fu_222_p1();
    void thread_zext_ln251_fu_162_p1();
    void thread_zext_ln259_fu_261_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
