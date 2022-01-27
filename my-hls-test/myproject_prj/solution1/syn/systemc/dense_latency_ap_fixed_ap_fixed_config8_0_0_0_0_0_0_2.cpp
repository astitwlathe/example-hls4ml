#include "dense_latency_ap_fixed_ap_fixed_config8_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_ap_fixed_ap_fixed_config8_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    ap_ce_reg = ap_ce.read();
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_const_logic_1))) {
        add_ln703_105_reg_88599 = add_ln703_105_fu_88083_p2.read();
        add_ln703_108_reg_88604 = add_ln703_108_fu_88105_p2.read();
        add_ln703_111_reg_88609 = add_ln703_111_fu_88123_p2.read();
        add_ln703_120_reg_88614 = add_ln703_120_fu_88169_p2.read();
        add_ln703_128_reg_88619 = add_ln703_128_fu_88221_p2.read();
        add_ln703_12_reg_88529 = add_ln703_12_fu_87565_p2.read();
        add_ln703_137_reg_88624 = add_ln703_137_fu_88263_p2.read();
        add_ln703_140_reg_88629 = add_ln703_140_fu_88281_p2.read();
        add_ln703_143_reg_88634 = add_ln703_143_fu_88299_p2.read();
        add_ln703_152_reg_88639 = add_ln703_152_fu_88345_p2.read();
        add_ln703_15_reg_88534 = add_ln703_15_fu_87583_p2.read();
        add_ln703_160_reg_88644 = add_ln703_160_fu_88393_p2.read();
        add_ln703_24_reg_88539 = add_ln703_24_fu_87625_p2.read();
        add_ln703_32_reg_88544 = add_ln703_32_fu_87673_p2.read();
        add_ln703_41_reg_88549 = add_ln703_41_fu_87719_p2.read();
        add_ln703_44_reg_88554 = add_ln703_44_fu_87741_p2.read();
        add_ln703_47_reg_88559 = add_ln703_47_fu_87759_p2.read();
        add_ln703_56_reg_88564 = add_ln703_56_fu_87801_p2.read();
        add_ln703_64_reg_88569 = add_ln703_64_fu_87857_p2.read();
        add_ln703_73_reg_88574 = add_ln703_73_fu_87899_p2.read();
        add_ln703_76_reg_88579 = add_ln703_76_fu_87921_p2.read();
        add_ln703_79_reg_88584 = add_ln703_79_fu_87939_p2.read();
        add_ln703_88_reg_88589 = add_ln703_88_fu_87985_p2.read();
        add_ln703_96_reg_88594 = add_ln703_96_fu_88037_p2.read();
        add_ln703_9_reg_88524 = add_ln703_9_fu_87547_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0_int_reg = add_ln703_34_fu_88412_p2.read();
        ap_return_1_int_reg = acc_1_V_fu_88431_p2.read();
        ap_return_2_int_reg = acc_2_V_fu_88450_p2.read();
        ap_return_3_int_reg = acc_3_V_fu_88469_p2.read();
        ap_return_4_int_reg = acc_4_V_fu_88488_p2.read();
    }
}

}

