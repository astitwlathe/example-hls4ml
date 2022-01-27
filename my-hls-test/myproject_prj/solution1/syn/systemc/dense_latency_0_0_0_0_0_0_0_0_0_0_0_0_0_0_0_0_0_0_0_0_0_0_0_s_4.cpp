#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_941_fu_3348319_p2() {
    add_ln703_941_fu_3348319_p2 = (!sext_ln203_798_fu_3337142_p1.read().is_01() || !sext_ln203_791_fu_3336492_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_798_fu_3337142_p1.read()) + sc_bigint<15>(sext_ln203_791_fu_3336492_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_942_fu_3348329_p2() {
    add_ln703_942_fu_3348329_p2 = (!add_ln703_940_fu_3348313_p2.read().is_01() || !sext_ln703_444_fu_3348325_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_940_fu_3348313_p2.read()) + sc_bigint<16>(sext_ln703_444_fu_3348325_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_943_fu_3348335_p2() {
    add_ln703_943_fu_3348335_p2 = (!mult_696_V_fu_3338290_p1.read().is_01() || !mult_649_V_fu_3337539_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_696_V_fu_3338290_p1.read()) + sc_bigint<16>(mult_649_V_fu_3337539_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_944_fu_3348341_p2() {
    add_ln703_944_fu_3348341_p2 = (!mult_760_V_fu_3339442_p1.read().is_01() || !mult_728_V_fu_3338888_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_760_V_fu_3339442_p1.read()) + sc_biguint<16>(mult_728_V_fu_3338888_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_945_fu_3348347_p2() {
    add_ln703_945_fu_3348347_p2 = (!add_ln703_943_fu_3348335_p2.read().is_01() || !add_ln703_944_fu_3348341_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_943_fu_3348335_p2.read()) + sc_biguint<16>(add_ln703_944_fu_3348341_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_946_fu_3348353_p2() {
    add_ln703_946_fu_3348353_p2 = (!add_ln703_942_fu_3348329_p2.read().is_01() || !add_ln703_945_fu_3348347_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_942_fu_3348329_p2.read()) + sc_biguint<16>(add_ln703_945_fu_3348347_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_947_fu_3348359_p2() {
    add_ln703_947_fu_3348359_p2 = (!mult_824_V_fu_3340517_p4.read().is_01() || !mult_792_V_fu_3339983_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_824_V_fu_3340517_p4.read()) + sc_biguint<16>(mult_792_V_fu_3339983_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_948_fu_3348365_p2() {
    add_ln703_948_fu_3348365_p2 = (!mult_888_V_fu_3341658_p4.read().is_01() || !mult_833_V_fu_3340689_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_888_V_fu_3341658_p4.read()) + sc_bigint<16>(mult_833_V_fu_3340689_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_949_fu_3348371_p2() {
    add_ln703_949_fu_3348371_p2 = (!add_ln703_947_fu_3348359_p2.read().is_01() || !add_ln703_948_fu_3348365_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_947_fu_3348359_p2.read()) + sc_biguint<16>(add_ln703_948_fu_3348365_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_950_fu_3348377_p2() {
    add_ln703_950_fu_3348377_p2 = (!mult_952_V_fu_3342745_p1.read().is_01() || !mult_920_V_fu_3342197_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_952_V_fu_3342745_p1.read()) + sc_biguint<16>(mult_920_V_fu_3342197_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_951_fu_3348383_p2() {
    add_ln703_951_fu_3348383_p2 = (!sext_ln203_861_fu_3343755_p1.read().is_01() || !ap_const_lv15_1D4.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_861_fu_3343755_p1.read()) + sc_biguint<15>(ap_const_lv15_1D4));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_952_fu_3348393_p2() {
    add_ln703_952_fu_3348393_p2 = (!mult_984_V_fu_3343178_p4.read().is_01() || !sext_ln703_445_fu_3348389_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_984_V_fu_3343178_p4.read()) + sc_bigint<16>(sext_ln703_445_fu_3348389_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_953_fu_3348399_p2() {
    add_ln703_953_fu_3348399_p2 = (!add_ln703_950_fu_3348377_p2.read().is_01() || !add_ln703_952_fu_3348393_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_950_fu_3348377_p2.read()) + sc_biguint<16>(add_ln703_952_fu_3348393_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_954_fu_3348405_p2() {
    add_ln703_954_fu_3348405_p2 = (!add_ln703_949_fu_3348371_p2.read().is_01() || !add_ln703_953_fu_3348399_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_949_fu_3348371_p2.read()) + sc_biguint<16>(add_ln703_953_fu_3348399_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_955_fu_3350144_p2() {
    add_ln703_955_fu_3350144_p2 = (!add_ln703_946_reg_3351084.read().is_01() || !add_ln703_954_reg_3351089.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_946_reg_3351084.read()) + sc_biguint<16>(add_ln703_954_reg_3351089.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_957_fu_3348411_p2() {
    add_ln703_957_fu_3348411_p2 = (!mult_57_V_fu_3326899_p1.read().is_01() || !mult_25_V_fu_3326338_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_57_V_fu_3326899_p1.read()) + sc_bigint<16>(mult_25_V_fu_3326338_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_958_fu_3348417_p2() {
    add_ln703_958_fu_3348417_p2 = (!sext_ln203_710_fu_3328073_p1.read().is_01() || !sext_ln203_701_fu_3327448_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_710_fu_3328073_p1.read()) + sc_bigint<15>(sext_ln203_701_fu_3327448_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_959_fu_3348427_p2() {
    add_ln703_959_fu_3348427_p2 = (!add_ln703_957_fu_3348411_p2.read().is_01() || !sext_ln703_446_fu_3348423_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_957_fu_3348411_p2.read()) + sc_bigint<16>(sext_ln703_446_fu_3348423_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_960_fu_3348433_p2() {
    add_ln703_960_fu_3348433_p2 = (!mult_185_V_fu_3329261_p1.read().is_01() || !mult_153_V_fu_3328682_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_185_V_fu_3329261_p1.read()) + sc_bigint<16>(mult_153_V_fu_3328682_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_961_fu_3348439_p2() {
    add_ln703_961_fu_3348439_p2 = (!mult_249_V_fu_3330521_p1.read().is_01() || !mult_217_V_fu_3329883_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_249_V_fu_3330521_p1.read()) + sc_bigint<16>(mult_217_V_fu_3329883_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_962_fu_3348445_p2() {
    add_ln703_962_fu_3348445_p2 = (!add_ln703_960_fu_3348433_p2.read().is_01() || !add_ln703_961_fu_3348439_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_960_fu_3348433_p2.read()) + sc_biguint<16>(add_ln703_961_fu_3348439_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_963_fu_3348451_p2() {
    add_ln703_963_fu_3348451_p2 = (!add_ln703_959_fu_3348427_p2.read().is_01() || !add_ln703_962_fu_3348445_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_959_fu_3348427_p2.read()) + sc_biguint<16>(add_ln703_962_fu_3348445_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_964_fu_3348457_p2() {
    add_ln703_964_fu_3348457_p2 = (!mult_313_V_fu_3331520_p1.read().is_01() || !mult_281_V_fu_3331073_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_313_V_fu_3331520_p1.read()) + sc_bigint<16>(mult_281_V_fu_3331073_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_965_fu_3348463_p2() {
    add_ln703_965_fu_3348463_p2 = (!mult_377_V_fu_3332642_p1.read().is_01() || !mult_345_V_fu_3332040_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_377_V_fu_3332642_p1.read()) + sc_bigint<16>(mult_345_V_fu_3332040_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_966_fu_3348469_p2() {
    add_ln703_966_fu_3348469_p2 = (!add_ln703_964_fu_3348457_p2.read().is_01() || !add_ln703_965_fu_3348463_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_964_fu_3348457_p2.read()) + sc_biguint<16>(add_ln703_965_fu_3348463_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_967_fu_3348475_p2() {
    add_ln703_967_fu_3348475_p2 = (!mult_441_V_fu_3333743_p1.read().is_01() || !mult_409_V_fu_3333150_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_441_V_fu_3333743_p1.read()) + sc_bigint<16>(mult_409_V_fu_3333150_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_968_fu_3348481_p2() {
    add_ln703_968_fu_3348481_p2 = (!sext_ln203_777_fu_3334872_p1.read().is_01() || !sext_ln203_770_fu_3334317_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_777_fu_3334872_p1.read()) + sc_bigint<15>(sext_ln203_770_fu_3334317_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_969_fu_3348491_p2() {
    add_ln703_969_fu_3348491_p2 = (!add_ln703_967_fu_3348475_p2.read().is_01() || !sext_ln703_447_fu_3348487_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_967_fu_3348475_p2.read()) + sc_bigint<16>(sext_ln703_447_fu_3348487_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_970_fu_3350154_p2() {
    add_ln703_970_fu_3350154_p2 = (!add_ln703_966_reg_3351099.read().is_01() || !add_ln703_969_reg_3351104.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_966_reg_3351099.read()) + sc_biguint<16>(add_ln703_969_reg_3351104.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_971_fu_3350158_p2() {
    add_ln703_971_fu_3350158_p2 = (!add_ln703_963_reg_3351094.read().is_01() || !add_ln703_970_fu_3350154_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_963_reg_3351094.read()) + sc_biguint<16>(add_ln703_970_fu_3350154_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_972_fu_3348497_p2() {
    add_ln703_972_fu_3348497_p2 = (!mult_569_V_fu_3335938_p4.read().is_01() || !mult_537_V_fu_3335422_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_569_V_fu_3335938_p4.read()) + sc_bigint<16>(mult_537_V_fu_3335422_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_973_fu_3348503_p2() {
    add_ln703_973_fu_3348503_p2 = (!mult_633_V_fu_3337156_p1.read().is_01() || !mult_601_V_fu_3336512_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_633_V_fu_3337156_p1.read()) + sc_bigint<16>(mult_601_V_fu_3336512_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_974_fu_3348509_p2() {
    add_ln703_974_fu_3348509_p2 = (!add_ln703_972_fu_3348497_p2.read().is_01() || !add_ln703_973_fu_3348503_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_972_fu_3348497_p2.read()) + sc_biguint<16>(add_ln703_973_fu_3348503_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_975_fu_3348515_p2() {
    add_ln703_975_fu_3348515_p2 = (!mult_697_V_fu_3338340_p1.read().is_01() || !mult_665_V_fu_3337763_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_697_V_fu_3338340_p1.read()) + sc_biguint<16>(mult_665_V_fu_3337763_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_976_fu_3348521_p2() {
    add_ln703_976_fu_3348521_p2 = (!mult_761_V_fu_3339456_p1.read().is_01() || !mult_729_V_fu_3338908_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_761_V_fu_3339456_p1.read()) + sc_bigint<16>(mult_729_V_fu_3338908_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_977_fu_3348527_p2() {
    add_ln703_977_fu_3348527_p2 = (!add_ln703_975_fu_3348515_p2.read().is_01() || !add_ln703_976_fu_3348521_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_975_fu_3348515_p2.read()) + sc_biguint<16>(add_ln703_976_fu_3348521_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_978_fu_3348533_p2() {
    add_ln703_978_fu_3348533_p2 = (!add_ln703_974_fu_3348509_p2.read().is_01() || !add_ln703_977_fu_3348527_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_974_fu_3348509_p2.read()) + sc_biguint<16>(add_ln703_977_fu_3348527_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_979_fu_3348539_p2() {
    add_ln703_979_fu_3348539_p2 = (!sext_ln203_827_fu_3340537_p1.read().is_01() || !sext_ln203_824_fu_3340009_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_827_fu_3340537_p1.read()) + sc_bigint<14>(sext_ln203_824_fu_3340009_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_980_fu_3348549_p2() {
    add_ln703_980_fu_3348549_p2 = (!mult_889_V_fu_3341668_p4.read().is_01() || !mult_857_V_fu_3341075_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_889_V_fu_3341668_p4.read()) + sc_bigint<16>(mult_857_V_fu_3341075_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_981_fu_3348555_p2() {
    add_ln703_981_fu_3348555_p2 = (!sext_ln703_448_fu_3348545_p1.read().is_01() || !add_ln703_980_fu_3348549_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_448_fu_3348545_p1.read()) + sc_biguint<16>(add_ln703_980_fu_3348549_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_982_fu_3348561_p2() {
    add_ln703_982_fu_3348561_p2 = (!mult_953_V_fu_3342759_p1.read().is_01() || !mult_900_V_fu_3341907_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_953_V_fu_3342759_p1.read()) + sc_bigint<16>(mult_900_V_fu_3341907_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_983_fu_3348567_p2() {
    add_ln703_983_fu_3348567_p2 = (!mult_1017_V_fu_3343759_p4.read().is_01() || !ap_const_lv16_6F.is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1017_V_fu_3343759_p4.read()) + sc_biguint<16>(ap_const_lv16_6F));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_984_fu_3348573_p2() {
    add_ln703_984_fu_3348573_p2 = (!mult_985_V_fu_3343188_p4.read().is_01() || !add_ln703_983_fu_3348567_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_985_V_fu_3343188_p4.read()) + sc_biguint<16>(add_ln703_983_fu_3348567_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_985_fu_3348579_p2() {
    add_ln703_985_fu_3348579_p2 = (!add_ln703_982_fu_3348561_p2.read().is_01() || !add_ln703_984_fu_3348573_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_982_fu_3348561_p2.read()) + sc_biguint<16>(add_ln703_984_fu_3348573_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_986_fu_3348585_p2() {
    add_ln703_986_fu_3348585_p2 = (!add_ln703_981_fu_3348555_p2.read().is_01() || !add_ln703_985_fu_3348579_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_981_fu_3348555_p2.read()) + sc_biguint<16>(add_ln703_985_fu_3348579_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_987_fu_3350163_p2() {
    add_ln703_987_fu_3350163_p2 = (!add_ln703_978_reg_3351109.read().is_01() || !add_ln703_986_reg_3351114.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_978_reg_3351109.read()) + sc_biguint<16>(add_ln703_986_reg_3351114.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_989_fu_3348591_p2() {
    add_ln703_989_fu_3348591_p2 = (!mult_58_V_fu_3326913_p1.read().is_01() || !mult_26_V_fu_3326342_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_58_V_fu_3326913_p1.read()) + sc_biguint<16>(mult_26_V_fu_3326342_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_990_fu_3348597_p2() {
    add_ln703_990_fu_3348597_p2 = (!mult_122_V_fu_3328077_p4.read().is_01() || !mult_90_V_fu_3327498_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_122_V_fu_3328077_p4.read()) + sc_bigint<16>(mult_90_V_fu_3327498_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_991_fu_3348603_p2() {
    add_ln703_991_fu_3348603_p2 = (!add_ln703_989_fu_3348591_p2.read().is_01() || !add_ln703_990_fu_3348597_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_989_fu_3348591_p2.read()) + sc_biguint<16>(add_ln703_990_fu_3348597_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_992_fu_3348609_p2() {
    add_ln703_992_fu_3348609_p2 = (!sext_ln203_725_fu_3329297_p1.read().is_01() || !sext_ln203_718_fu_3328696_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_725_fu_3329297_p1.read()) + sc_bigint<14>(sext_ln203_718_fu_3328696_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_993_fu_3348619_p2() {
    add_ln703_993_fu_3348619_p2 = (!mult_250_V_fu_3330535_p1.read().is_01() || !mult_218_V_fu_3329897_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_250_V_fu_3330535_p1.read()) + sc_bigint<16>(mult_218_V_fu_3329897_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_994_fu_3348625_p2() {
    add_ln703_994_fu_3348625_p2 = (!sext_ln703_449_fu_3348615_p1.read().is_01() || !add_ln703_993_fu_3348619_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_449_fu_3348615_p1.read()) + sc_biguint<16>(add_ln703_993_fu_3348619_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_995_fu_3348631_p2() {
    add_ln703_995_fu_3348631_p2 = (!add_ln703_991_fu_3348603_p2.read().is_01() || !add_ln703_994_fu_3348625_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_991_fu_3348603_p2.read()) + sc_biguint<16>(add_ln703_994_fu_3348625_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_996_fu_3348637_p2() {
    add_ln703_996_fu_3348637_p2 = (!mult_314_V_fu_3331534_p1.read().is_01() || !mult_282_V_fu_3331087_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_314_V_fu_3331534_p1.read()) + sc_bigint<16>(mult_282_V_fu_3331087_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_997_fu_3348643_p2() {
    add_ln703_997_fu_3348643_p2 = (!mult_378_V_fu_3332656_p1.read().is_01() || !mult_346_V_fu_3332044_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_378_V_fu_3332656_p1.read()) + sc_biguint<16>(mult_346_V_fu_3332044_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_998_fu_3348649_p2() {
    add_ln703_998_fu_3348649_p2 = (!add_ln703_996_fu_3348637_p2.read().is_01() || !add_ln703_997_fu_3348643_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_996_fu_3348637_p2.read()) + sc_biguint<16>(add_ln703_997_fu_3348643_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_999_fu_3348655_p2() {
    add_ln703_999_fu_3348655_p2 = (!mult_442_V_fu_3333757_p1.read().is_01() || !mult_410_V_fu_3333182_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_442_V_fu_3333757_p1.read()) + sc_bigint<16>(mult_410_V_fu_3333182_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_fu_3343897_p2() {
    add_ln703_fu_3343897_p2 = (!mult_32_V_fu_3326503_p1.read().is_01() || !mult_0_V_fu_3325922_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_32_V_fu_3326503_p1.read()) + sc_biguint<16>(mult_0_V_fu_3325922_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_3198_fu_3349702_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_3349721_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_3349882_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_3349901_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_3349920_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_3349939_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_3349958_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_3349977_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_3349996_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_3350015_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_3350034_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_3350053_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_3349740_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_20() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_20 = ap_return_20_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_20 = acc_20_V_fu_3350072_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_21() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_21 = ap_return_21_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_21 = acc_21_V_fu_3350091_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_22() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_22 = ap_return_22_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_22 = acc_22_V_fu_3350110_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_23() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_23 = ap_return_23_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_23 = acc_23_V_fu_3350129_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_24() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_24 = ap_return_24_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_24 = acc_24_V_fu_3350148_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_25() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_25 = ap_return_25_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_25 = acc_25_V_fu_3350167_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_26() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_26 = ap_return_26_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_26 = acc_26_V_fu_3350186_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_27() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_27 = ap_return_27_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_27 = acc_27_V_fu_3350205_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_28() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_28 = ap_return_28_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_28 = acc_28_V_fu_3350224_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_29() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_29 = ap_return_29_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_29 = acc_29_V_fu_3350243_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_3349759_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_30() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_30 = ap_return_30_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_30 = acc_30_V_fu_3350262_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_31() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_31 = ap_return_31_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_31 = acc_31_V_fu_3350281_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_3349778_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_3349788_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_3349806_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_3349825_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_3349844_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_3349863_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_1626_p0() {
    mul_ln1118_134_fu_1626_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_1626_p2() {
    mul_ln1118_134_fu_1626_p2 = (!mul_ln1118_134_fu_1626_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_134_fu_1626_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2242_p0() {
    mul_ln1118_135_fu_2242_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2242_p2() {
    mul_ln1118_135_fu_2242_p2 = (!mul_ln1118_135_fu_2242_p0.read().is_01() || !ap_const_lv26_3FFFE28.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_135_fu_2242_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2038_p0() {
    mul_ln1118_136_fu_2038_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2038_p2() {
    mul_ln1118_136_fu_2038_p2 = (!mul_ln1118_136_fu_2038_p0.read().is_01() || !ap_const_lv25_1FFFF36.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_136_fu_2038_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_1732_p0() {
    mul_ln1118_137_fu_1732_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_1732_p2() {
    mul_ln1118_137_fu_1732_p2 = (!mul_ln1118_137_fu_1732_p0.read().is_01() || !ap_const_lv26_3FFFD9E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_137_fu_1732_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_2245_p0() {
    mul_ln1118_138_fu_2245_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_2245_p2() {
    mul_ln1118_138_fu_2245_p2 = (!mul_ln1118_138_fu_2245_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_138_fu_2245_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1631_p0() {
    mul_ln1118_139_fu_1631_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1631_p2() {
    mul_ln1118_139_fu_1631_p2 = (!mul_ln1118_139_fu_1631_p0.read().is_01() || !ap_const_lv26_3FFFD90.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_139_fu_1631_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD90);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_2247_p0() {
    mul_ln1118_140_fu_2247_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_2247_p2() {
    mul_ln1118_140_fu_2247_p2 = (!mul_ln1118_140_fu_2247_p0.read().is_01() || !ap_const_lv26_13A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_140_fu_2247_p0.read()) * sc_biguint<26>(ap_const_lv26_13A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_2112_p0() {
    mul_ln1118_141_fu_2112_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_3325907_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_2112_p2() {
    mul_ln1118_141_fu_2112_p2 = (!mul_ln1118_141_fu_2112_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_141_fu_2112_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1839_p0() {
    mul_ln1118_142_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1839_p2() {
    mul_ln1118_142_fu_1839_p2 = (!mul_ln1118_142_fu_1839_p0.read().is_01() || !ap_const_lv25_1FFFF3D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_142_fu_1839_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1635_p0() {
    mul_ln1118_143_fu_1635_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_3325900_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1635_p2() {
    mul_ln1118_143_fu_1635_p2 = (!mul_ln1118_143_fu_1635_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_143_fu_1635_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1841_p0() {
    mul_ln1118_144_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1841_p2() {
    mul_ln1118_144_fu_1841_p2 = (!mul_ln1118_144_fu_1841_p0.read().is_01() || !ap_const_lv25_1FFFF57.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_144_fu_1841_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1637_p0() {
    mul_ln1118_145_fu_1637_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_3325900_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1637_p2() {
    mul_ln1118_145_fu_1637_p2 = (!mul_ln1118_145_fu_1637_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_145_fu_1637_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_2048_p0() {
    mul_ln1118_146_fu_2048_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_2048_p2() {
    mul_ln1118_146_fu_2048_p2 = (!mul_ln1118_146_fu_2048_p0.read().is_01() || !ap_const_lv26_3FFFEB8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_146_fu_2048_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_1844_p0() {
    mul_ln1118_147_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_1844_p2() {
    mul_ln1118_147_fu_1844_p2 = (!mul_ln1118_147_fu_1844_p0.read().is_01() || !ap_const_lv25_1FFFF07.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_147_fu_1844_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_2255_p0() {
    mul_ln1118_148_fu_2255_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_2255_p2() {
    mul_ln1118_148_fu_2255_p2 = (!mul_ln1118_148_fu_2255_p0.read().is_01() || !ap_const_lv26_3FFFE5C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_148_fu_2255_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_2359_p0() {
    mul_ln1118_149_fu_2359_p0 = sext_ln1118_139_fu_3325913_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_2359_p2() {
    mul_ln1118_149_fu_2359_p2 = (!mul_ln1118_149_fu_2359_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_149_fu_2359_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_1437_p0() {
    mul_ln1118_150_fu_1437_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_1437_p2() {
    mul_ln1118_150_fu_1437_p2 = (!mul_ln1118_150_fu_1437_p0.read().is_01() || !ap_const_lv26_267.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_150_fu_1437_p0.read()) * sc_biguint<26>(ap_const_lv26_267);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_1643_p0() {
    mul_ln1118_151_fu_1643_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_1643_p2() {
    mul_ln1118_151_fu_1643_p2 = (!mul_ln1118_151_fu_1643_p0.read().is_01() || !ap_const_lv26_3FFFE14.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_151_fu_1643_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_2054_p0() {
    mul_ln1118_152_fu_2054_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_2054_p2() {
    mul_ln1118_152_fu_2054_p2 = (!mul_ln1118_152_fu_2054_p0.read().is_01() || !ap_const_lv26_2E6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_152_fu_2054_p0.read()) * sc_biguint<26>(ap_const_lv26_2E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1850_p0() {
    mul_ln1118_153_fu_1850_p0 =  (sc_lv<16>) (sext_ln1118_fu_3325873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1850_p2() {
    mul_ln1118_153_fu_1850_p2 = (!mul_ln1118_153_fu_1850_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_153_fu_1850_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_1851_p0() {
    mul_ln1118_154_fu_1851_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_1851_p2() {
    mul_ln1118_154_fu_1851_p2 = (!mul_ln1118_154_fu_1851_p0.read().is_01() || !ap_const_lv26_3FFFE6E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_154_fu_1851_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2057_p0() {
    mul_ln1118_155_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_3325907_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2057_p2() {
    mul_ln1118_155_fu_2057_p2 = (!mul_ln1118_155_fu_2057_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_155_fu_2057_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_2263_p0() {
    mul_ln1118_156_fu_2263_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_3325900_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_2263_p2() {
    mul_ln1118_156_fu_2263_p2 = (!mul_ln1118_156_fu_2263_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_2263_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2059_p0() {
    mul_ln1118_157_fu_2059_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_3325883_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2059_p2() {
    mul_ln1118_157_fu_2059_p2 = (!mul_ln1118_157_fu_2059_p0.read().is_01() || !ap_const_lv26_3FFFEEC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_157_fu_2059_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2259_p0() {
    mul_ln1118_158_fu_2259_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2259_p2() {
    mul_ln1118_158_fu_2259_p2 = (!mul_ln1118_158_fu_2259_p0.read().is_01() || !ap_const_lv26_154.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_158_fu_2259_p0.read()) * sc_biguint<26>(ap_const_lv26_154);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2100_p0() {
    mul_ln1118_159_fu_2100_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_3326448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2100_p2() {
    mul_ln1118_159_fu_2100_p2 = (!mul_ln1118_159_fu_2100_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_159_fu_2100_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_1833_p0() {
    mul_ln1118_160_fu_1833_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_1833_p2() {
    mul_ln1118_160_fu_1833_p2 = (!mul_ln1118_160_fu_1833_p0.read().is_01() || !ap_const_lv26_3FFFEC6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_160_fu_1833_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_2323_p0() {
    mul_ln1118_161_fu_2323_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_3326422_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_2323_p2() {
    mul_ln1118_161_fu_2323_p2 = (!mul_ln1118_161_fu_2323_p0.read().is_01() || !ap_const_lv25_1FFFF14.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_161_fu_2323_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_1894_p0() {
    mul_ln1118_162_fu_1894_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_1894_p2() {
    mul_ln1118_162_fu_1894_p2 = (!mul_ln1118_162_fu_1894_p0.read().is_01() || !ap_const_lv26_3FFFEFA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_162_fu_1894_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1924_p0() {
    mul_ln1118_163_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1924_p2() {
    mul_ln1118_163_fu_1924_p2 = (!mul_ln1118_163_fu_1924_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_163_fu_1924_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_1738_p0() {
    mul_ln1118_164_fu_1738_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_1738_p2() {
    mul_ln1118_164_fu_1738_p2 = (!mul_ln1118_164_fu_1738_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_164_fu_1738_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1633_p0() {
    mul_ln1118_165_fu_1633_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1633_p2() {
    mul_ln1118_165_fu_1633_p2 = (!mul_ln1118_165_fu_1633_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_165_fu_1633_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2231_p0() {
    mul_ln1118_166_fu_2231_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2231_p2() {
    mul_ln1118_166_fu_2231_p2 = (!mul_ln1118_166_fu_2231_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_166_fu_2231_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1883_p0() {
    mul_ln1118_167_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1883_p2() {
    mul_ln1118_167_fu_1883_p2 = (!mul_ln1118_167_fu_1883_p0.read().is_01() || !ap_const_lv26_129.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_167_fu_1883_p0.read()) * sc_biguint<26>(ap_const_lv26_129);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_1653_p0() {
    mul_ln1118_168_fu_1653_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_1653_p2() {
    mul_ln1118_168_fu_1653_p2 = (!mul_ln1118_168_fu_1653_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_168_fu_1653_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1440_p0() {
    mul_ln1118_169_fu_1440_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1440_p2() {
    mul_ln1118_169_fu_1440_p2 = (!mul_ln1118_169_fu_1440_p0.read().is_01() || !ap_const_lv26_17D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_169_fu_1440_p0.read()) * sc_biguint<26>(ap_const_lv26_17D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_2125_p0() {
    mul_ln1118_170_fu_2125_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_3326422_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_2125_p2() {
    mul_ln1118_170_fu_2125_p2 = (!mul_ln1118_170_fu_2125_p0.read().is_01() || !ap_const_lv25_F7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_170_fu_2125_p0.read()) * sc_biguint<25>(ap_const_lv25_F7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1796_p0() {
    mul_ln1118_171_fu_1796_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1796_p2() {
    mul_ln1118_171_fu_1796_p2 = (!mul_ln1118_171_fu_1796_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_171_fu_1796_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1641_p0() {
    mul_ln1118_172_fu_1641_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1641_p2() {
    mul_ln1118_172_fu_1641_p2 = (!mul_ln1118_172_fu_1641_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_172_fu_1641_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_2181_p0() {
    mul_ln1118_173_fu_2181_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_2181_p2() {
    mul_ln1118_173_fu_2181_p2 = (!mul_ln1118_173_fu_2181_p0.read().is_01() || !ap_const_lv26_3FFFEBF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_173_fu_2181_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1997_p0() {
    mul_ln1118_174_fu_1997_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1997_p2() {
    mul_ln1118_174_fu_1997_p2 = (!mul_ln1118_174_fu_1997_p0.read().is_01() || !ap_const_lv26_3FFFEB2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_174_fu_1997_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1755_p0() {
    mul_ln1118_175_fu_1755_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_3326422_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1755_p2() {
    mul_ln1118_175_fu_1755_p2 = (!mul_ln1118_175_fu_1755_p0.read().is_01() || !ap_const_lv25_1FFFF28.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_175_fu_1755_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1513_p0() {
    mul_ln1118_176_fu_1513_p0 =  (sc_lv<16>) (sext_ln1118_149_fu_3326430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1513_p2() {
    mul_ln1118_176_fu_1513_p2 = (!mul_ln1118_176_fu_1513_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_176_fu_1513_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_2140_p0() {
    mul_ln1118_177_fu_2140_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_2140_p2() {
    mul_ln1118_177_fu_2140_p2 = (!mul_ln1118_177_fu_2140_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_2140_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_1927_p0() {
    mul_ln1118_178_fu_1927_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_1927_p2() {
    mul_ln1118_178_fu_1927_p2 = (!mul_ln1118_178_fu_1927_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_178_fu_1927_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1772_p0() {
    mul_ln1118_179_fu_1772_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_3326453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1772_p2() {
    mul_ln1118_179_fu_1772_p2 = (!mul_ln1118_179_fu_1772_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_179_fu_1772_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1501_p0() {
    mul_ln1118_180_fu_1501_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_3326422_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1501_p2() {
    mul_ln1118_180_fu_1501_p2 = (!mul_ln1118_180_fu_1501_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_180_fu_1501_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_2099_p0() {
    mul_ln1118_181_fu_2099_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_2099_p2() {
    mul_ln1118_181_fu_2099_p2 = (!mul_ln1118_181_fu_2099_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_181_fu_2099_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_1915_p0() {
    mul_ln1118_182_fu_1915_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_1915_p2() {
    mul_ln1118_182_fu_1915_p2 = (!mul_ln1118_182_fu_1915_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_182_fu_1915_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1673_p0() {
    mul_ln1118_183_fu_1673_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1673_p2() {
    mul_ln1118_183_fu_1673_p2 = (!mul_ln1118_183_fu_1673_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_183_fu_1673_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_1460_p0() {
    mul_ln1118_184_fu_1460_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_1460_p2() {
    mul_ln1118_184_fu_1460_p2 = (!mul_ln1118_184_fu_1460_p0.read().is_01() || !ap_const_lv25_1FFFF69.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_184_fu_1460_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_2058_p0() {
    mul_ln1118_185_fu_2058_p0 =  (sc_lv<16>) (sext_ln1118_165_fu_3327058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_2058_p2() {
    mul_ln1118_185_fu_2058_p2 = (!mul_ln1118_185_fu_2058_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_185_fu_2058_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_2051_p0() {
    mul_ln1118_186_fu_2051_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_2051_p2() {
    mul_ln1118_186_fu_2051_p2 = (!mul_ln1118_186_fu_2051_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_186_fu_2051_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1847_p0() {
    mul_ln1118_187_fu_1847_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1847_p2() {
    mul_ln1118_187_fu_1847_p2 = (!mul_ln1118_187_fu_1847_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_187_fu_1847_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_2224_p0() {
    mul_ln1118_188_fu_2224_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_2224_p2() {
    mul_ln1118_188_fu_2224_p2 = (!mul_ln1118_188_fu_2224_p0.read().is_01() || !ap_const_lv25_DC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_188_fu_2224_p0.read()) * sc_biguint<25>(ap_const_lv25_DC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1849_p0() {
    mul_ln1118_189_fu_1849_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3327035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1849_p2() {
    mul_ln1118_189_fu_1849_p2 = (!mul_ln1118_189_fu_1849_p0.read().is_01() || !ap_const_lv26_192.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_189_fu_1849_p0.read()) * sc_biguint<26>(ap_const_lv26_192);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1748_p0() {
    mul_ln1118_190_fu_1748_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1748_p2() {
    mul_ln1118_190_fu_1748_p2 = (!mul_ln1118_190_fu_1748_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_190_fu_1748_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_2261_p0() {
    mul_ln1118_191_fu_2261_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3327035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_2261_p2() {
    mul_ln1118_191_fu_2261_p2 = (!mul_ln1118_191_fu_2261_p0.read().is_01() || !ap_const_lv26_3FFFE0C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_191_fu_2261_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_1818_p0() {
    mul_ln1118_192_fu_1818_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_1818_p2() {
    mul_ln1118_192_fu_1818_p2 = (!mul_ln1118_192_fu_1818_p0.read().is_01() || !ap_const_lv25_1FFFF42.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_192_fu_1818_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF42);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_1443_p0() {
    mul_ln1118_193_fu_1443_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_1443_p2() {
    mul_ln1118_193_fu_1443_p2 = (!mul_ln1118_193_fu_1443_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_193_fu_1443_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1649_p0() {
    mul_ln1118_194_fu_1649_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1649_p2() {
    mul_ln1118_194_fu_1649_p2 = (!mul_ln1118_194_fu_1649_p0.read().is_01() || !ap_const_lv25_CC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_194_fu_1649_p0.read()) * sc_biguint<25>(ap_const_lv25_CC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1650_p0() {
    mul_ln1118_195_fu_1650_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3327035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1650_p2() {
    mul_ln1118_195_fu_1650_p2 = (!mul_ln1118_195_fu_1650_p0.read().is_01() || !ap_const_lv26_3FFFEDA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_195_fu_1650_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_2266_p0() {
    mul_ln1118_196_fu_2266_p0 =  (sc_lv<16>) (sext_ln1118_165_fu_3327058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_2266_p2() {
    mul_ln1118_196_fu_2266_p2 = (!mul_ln1118_196_fu_2266_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_196_fu_2266_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1652_p0() {
    mul_ln1118_197_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1652_p2() {
    mul_ln1118_197_fu_1652_p2 = (!mul_ln1118_197_fu_1652_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_197_fu_1652_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2063_p0() {
    mul_ln1118_198_fu_2063_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2063_p2() {
    mul_ln1118_198_fu_2063_p2 = (!mul_ln1118_198_fu_2063_p0.read().is_01() || !ap_const_lv25_B6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_198_fu_2063_p0.read()) * sc_biguint<25>(ap_const_lv25_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1654_p0() {
    mul_ln1118_199_fu_1654_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3327035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1654_p2() {
    mul_ln1118_199_fu_1654_p2 = (!mul_ln1118_199_fu_1654_p0.read().is_01() || !ap_const_lv26_130.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_199_fu_1654_p0.read()) * sc_biguint<26>(ap_const_lv26_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1655_p0() {
    mul_ln1118_200_fu_1655_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1655_p2() {
    mul_ln1118_200_fu_1655_p2 = (!mul_ln1118_200_fu_1655_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_200_fu_1655_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1451_p0() {
    mul_ln1118_201_fu_1451_p0 =  (sc_lv<16>) (sext_ln1118_163_fu_3327035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1451_p2() {
    mul_ln1118_201_fu_1451_p2 = (!mul_ln1118_201_fu_1451_p0.read().is_01() || !ap_const_lv26_3FFFEF2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_201_fu_1451_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_2067_p0() {
    mul_ln1118_202_fu_2067_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_2067_p2() {
    mul_ln1118_202_fu_2067_p2 = (!mul_ln1118_202_fu_2067_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_202_fu_2067_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2273_p0() {
    mul_ln1118_203_fu_2273_p0 =  (sc_lv<16>) (sext_ln1118_165_fu_3327058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2273_p2() {
    mul_ln1118_203_fu_2273_p2 = (!mul_ln1118_203_fu_2273_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_203_fu_2273_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1454_p0() {
    mul_ln1118_204_fu_1454_p0 = sext_ln1118_168_fu_3327081_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1454_p2() {
    mul_ln1118_204_fu_1454_p2 = (!mul_ln1118_204_fu_1454_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_204_fu_1454_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_2070_p0() {
    mul_ln1118_205_fu_2070_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_3327070_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_2070_p2() {
    mul_ln1118_205_fu_2070_p2 = (!mul_ln1118_205_fu_2070_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_205_fu_2070_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2276_p0() {
    mul_ln1118_206_fu_2276_p0 =  (sc_lv<16>) (sext_ln1118_164_fu_3327044_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2276_p2() {
    mul_ln1118_206_fu_2276_p2 = (!mul_ln1118_206_fu_2276_p0.read().is_01() || !ap_const_lv25_E5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_206_fu_2276_p0.read()) * sc_biguint<25>(ap_const_lv25_E5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1867_p0() {
    mul_ln1118_207_fu_1867_p0 =  (sc_lv<16>) (sext_ln1118_165_fu_3327058_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1867_p2() {
    mul_ln1118_207_fu_1867_p2 = (!mul_ln1118_207_fu_1867_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_207_fu_1867_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_2278_p0() {
    mul_ln1118_208_fu_2278_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_2278_p2() {
    mul_ln1118_208_fu_2278_p2 = (!mul_ln1118_208_fu_2278_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_208_fu_2278_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_1869_p0() {
    mul_ln1118_209_fu_1869_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_1869_p2() {
    mul_ln1118_209_fu_1869_p2 = (!mul_ln1118_209_fu_1869_p0.read().is_01() || !ap_const_lv26_3FFFED3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_209_fu_1869_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_1870_p0() {
    mul_ln1118_210_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_1870_p2() {
    mul_ln1118_210_fu_1870_p2 = (!mul_ln1118_210_fu_1870_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_210_fu_1870_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1461_p0() {
    mul_ln1118_211_fu_1461_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1461_p2() {
    mul_ln1118_211_fu_1461_p2 = (!mul_ln1118_211_fu_1461_p0.read().is_01() || !ap_const_lv25_C8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_211_fu_1461_p0.read()) * sc_biguint<25>(ap_const_lv25_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1667_p0() {
    mul_ln1118_212_fu_1667_p0 = sext_ln1118_179_fu_3327640_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1667_p2() {
    mul_ln1118_212_fu_1667_p2 = (!mul_ln1118_212_fu_1667_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_212_fu_1667_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_2078_p0() {
    mul_ln1118_213_fu_2078_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_2078_p2() {
    mul_ln1118_213_fu_2078_p2 = (!mul_ln1118_213_fu_2078_p0.read().is_01() || !ap_const_lv25_1FFFF6C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_213_fu_2078_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_1865_p0() {
    mul_ln1118_214_fu_1865_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_1865_p2() {
    mul_ln1118_214_fu_1865_p2 = (!mul_ln1118_214_fu_1865_p0.read().is_01() || !ap_const_lv26_3FFFEE4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_214_fu_1865_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_2436_p0() {
    mul_ln1118_215_fu_2436_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_2436_p2() {
    mul_ln1118_215_fu_2436_p2 = (!mul_ln1118_215_fu_2436_p0.read().is_01() || !ap_const_lv26_107.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_215_fu_2436_p0.read()) * sc_biguint<26>(ap_const_lv26_107);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_2223_p0() {
    mul_ln1118_216_fu_2223_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_2223_p2() {
    mul_ln1118_216_fu_2223_p2 = (!mul_ln1118_216_fu_2223_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_216_fu_2223_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_2010_p0() {
    mul_ln1118_217_fu_2010_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_2010_p2() {
    mul_ln1118_217_fu_2010_p2 = (!mul_ln1118_217_fu_2010_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_217_fu_2010_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_1797_p0() {
    mul_ln1118_218_fu_1797_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_1797_p2() {
    mul_ln1118_218_fu_1797_p2 = (!mul_ln1118_218_fu_1797_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_218_fu_1797_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1503_p0() {
    mul_ln1118_219_fu_1503_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1503_p2() {
    mul_ln1118_219_fu_1503_p2 = (!mul_ln1118_219_fu_1503_p0.read().is_01() || !ap_const_lv25_DF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_219_fu_1503_p0.read()) * sc_biguint<25>(ap_const_lv25_DF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2182_p0() {
    mul_ln1118_220_fu_2182_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2182_p2() {
    mul_ln1118_220_fu_2182_p2 = (!mul_ln1118_220_fu_2182_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_220_fu_2182_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1996_p0() {
    mul_ln1118_221_fu_1996_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1996_p2() {
    mul_ln1118_221_fu_1996_p2 = (!mul_ln1118_221_fu_1996_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_221_fu_1996_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1756_p0() {
    mul_ln1118_222_fu_1756_p0 =  (sc_lv<16>) (sext_ln1118_175_fu_3327602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1756_p2() {
    mul_ln1118_222_fu_1756_p2 = (!mul_ln1118_222_fu_1756_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_222_fu_1756_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1489_p0() {
    mul_ln1118_223_fu_1489_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1489_p2() {
    mul_ln1118_223_fu_1489_p2 = (!mul_ln1118_223_fu_1489_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_223_fu_1489_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1597_p0() {
    mul_ln1118_224_fu_1597_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1597_p2() {
    mul_ln1118_224_fu_1597_p2 = (!mul_ln1118_224_fu_1597_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_224_fu_1597_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2166_p0() {
    mul_ln1118_225_fu_2166_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2166_p2() {
    mul_ln1118_225_fu_2166_p2 = (!mul_ln1118_225_fu_2166_p0.read().is_01() || !ap_const_lv26_13E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_225_fu_2166_p0.read()) * sc_biguint<26>(ap_const_lv26_13E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_1953_p0() {
    mul_ln1118_226_fu_1953_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_1953_p2() {
    mul_ln1118_226_fu_1953_p2 = (!mul_ln1118_226_fu_1953_p0.read().is_01() || !ap_const_lv26_3FFFEE7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_226_fu_1953_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_1769_p0() {
    mul_ln1118_227_fu_1769_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_1769_p2() {
    mul_ln1118_227_fu_1769_p2 = (!mul_ln1118_227_fu_1769_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_227_fu_1769_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_2338_p0() {
    mul_ln1118_228_fu_2338_p0 =  (sc_lv<16>) (sext_ln1118_176_fu_3327613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_2338_p2() {
    mul_ln1118_228_fu_2338_p2 = (!mul_ln1118_228_fu_2338_p0.read().is_01() || !ap_const_lv26_12A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_228_fu_2338_p0.read()) * sc_biguint<26>(ap_const_lv26_12A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_2299_p0() {
    mul_ln1118_229_fu_2299_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_2299_p2() {
    mul_ln1118_229_fu_2299_p2 = (!mul_ln1118_229_fu_2299_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_229_fu_2299_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1941_p0() {
    mul_ln1118_230_fu_1941_p0 =  (sc_lv<16>) (sext_ln1118_177_fu_3327624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1941_p2() {
    mul_ln1118_230_fu_1941_p2 = (!mul_ln1118_230_fu_1941_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_230_fu_1941_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_1728_p0() {
    mul_ln1118_231_fu_1728_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3328221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_1728_p2() {
    mul_ln1118_231_fu_1728_p2 = (!mul_ln1118_231_fu_1728_p0.read().is_01() || !ap_const_lv26_3FFFEC3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_231_fu_1728_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1544_p0() {
    mul_ln1118_232_fu_1544_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3328212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1544_p2() {
    mul_ln1118_232_fu_1544_p2 = (!mul_ln1118_232_fu_1544_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_232_fu_1544_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_2142_p0() {
    mul_ln1118_233_fu_2142_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3328221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_2142_p2() {
    mul_ln1118_233_fu_2142_p2 = (!mul_ln1118_233_fu_2142_p0.read().is_01() || !ap_const_lv26_13A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_233_fu_2142_p0.read()) * sc_biguint<26>(ap_const_lv26_13A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1929_p0() {
    mul_ln1118_234_fu_1929_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3328221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1929_p2() {
    mul_ln1118_234_fu_1929_p2 = (!mul_ln1118_234_fu_1929_p0.read().is_01() || !ap_const_lv26_3FFFEF7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_234_fu_1929_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1687_p0() {
    mul_ln1118_236_fu_1687_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1687_p2() {
    mul_ln1118_236_fu_1687_p2 = (!mul_ln1118_236_fu_1687_p0.read().is_01() || !ap_const_lv25_1FFFF2A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_236_fu_1687_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_1445_p0() {
    mul_ln1118_237_fu_1445_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_1445_p2() {
    mul_ln1118_237_fu_1445_p2 = (!mul_ln1118_237_fu_1445_p0.read().is_01() || !ap_const_lv25_1FFFF5D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_237_fu_1445_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_2043_p0() {
    mul_ln1118_238_fu_2043_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3328221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_2043_p2() {
    mul_ln1118_238_fu_2043_p2 = (!mul_ln1118_238_fu_2043_p0.read().is_01() || !ap_const_lv26_11C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_238_fu_2043_p0.read()) * sc_biguint<26>(ap_const_lv26_11C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_1859_p0() {
    mul_ln1118_239_fu_1859_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_1859_p2() {
    mul_ln1118_239_fu_1859_p2 = (!mul_ln1118_239_fu_1859_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_239_fu_1859_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1733_p0() {
    mul_ln1118_240_fu_1733_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_3328230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1733_p2() {
    mul_ln1118_240_fu_1733_p2 = (!mul_ln1118_240_fu_1733_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_240_fu_1733_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_2120_p0() {
    mul_ln1118_241_fu_2120_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3328212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_2120_p2() {
    mul_ln1118_241_fu_2120_p2 = (!mul_ln1118_241_fu_2120_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_241_fu_2120_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1511_p0() {
    mul_ln1118_242_fu_1511_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1511_p2() {
    mul_ln1118_242_fu_1511_p2 = (!mul_ln1118_242_fu_1511_p0.read().is_01() || !ap_const_lv25_83.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_242_fu_1511_p0.read()) * sc_biguint<25>(ap_const_lv25_83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_243_fu_2241_p0() {
    mul_ln1118_243_fu_2241_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_3328230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_243_fu_2241_p2() {
    mul_ln1118_243_fu_2241_p2 = (!mul_ln1118_243_fu_2241_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_243_fu_2241_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1832_p0() {
    mul_ln1118_244_fu_1832_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1832_p2() {
    mul_ln1118_244_fu_1832_p2 = (!mul_ln1118_244_fu_1832_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_244_fu_1832_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1423_p0() {
    mul_ln1118_245_fu_1423_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_3328230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1423_p2() {
    mul_ln1118_245_fu_1423_p2 = (!mul_ln1118_245_fu_1423_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_245_fu_1423_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1453_p0() {
    mul_ln1118_246_fu_1453_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3328212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1453_p2() {
    mul_ln1118_246_fu_1453_p2 = (!mul_ln1118_246_fu_1453_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_246_fu_1453_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_1801_p0() {
    mul_ln1118_247_fu_1801_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_1801_p2() {
    mul_ln1118_247_fu_1801_p2 = (!mul_ln1118_247_fu_1801_p0.read().is_01() || !ap_const_lv25_CE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_247_fu_1801_p0.read()) * sc_biguint<25>(ap_const_lv25_CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_2178_p0() {
    mul_ln1118_248_fu_2178_p0 =  (sc_lv<16>) (sext_ln1118_193_fu_3328221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_2178_p2() {
    mul_ln1118_248_fu_2178_p2 = (!mul_ln1118_248_fu_2178_p0.read().is_01() || !ap_const_lv26_12C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_248_fu_2178_p0.read()) * sc_biguint<26>(ap_const_lv26_12C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1632_p0() {
    mul_ln1118_249_fu_1632_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_3328230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1632_p2() {
    mul_ln1118_249_fu_1632_p2 = (!mul_ln1118_249_fu_1632_p0.read().is_01() || !ap_const_lv24_FFFF85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_249_fu_1632_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_1838_p0() {
    mul_ln1118_250_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_1838_p2() {
    mul_ln1118_250_fu_1838_p2 = (!mul_ln1118_250_fu_1838_p0.read().is_01() || !ap_const_lv25_1FFFF5F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_250_fu_1838_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1634_p0() {
    mul_ln1118_251_fu_1634_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3328212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1634_p2() {
    mul_ln1118_251_fu_1634_p2 = (!mul_ln1118_251_fu_1634_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_251_fu_1634_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1840_p0() {
    mul_ln1118_252_fu_1840_p0 = sext_ln1118_195_fu_3328239_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1840_p2() {
    mul_ln1118_252_fu_1840_p2 = (!mul_ln1118_252_fu_1840_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_252_fu_1840_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1636_p0() {
    mul_ln1118_253_fu_1636_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_3328212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1636_p2() {
    mul_ln1118_253_fu_1636_p2 = (!mul_ln1118_253_fu_1636_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_253_fu_1636_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_2013_p0() {
    mul_ln1118_254_fu_2013_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_2013_p2() {
    mul_ln1118_254_fu_2013_p2 = (!mul_ln1118_254_fu_2013_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_254_fu_2013_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1638_p0() {
    mul_ln1118_255_fu_1638_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_3328199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1638_p2() {
    mul_ln1118_255_fu_1638_p2 = (!mul_ln1118_255_fu_1638_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_255_fu_1638_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_2049_p0() {
    mul_ln1118_256_fu_2049_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_3328230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_2049_p2() {
    mul_ln1118_256_fu_2049_p2 = (!mul_ln1118_256_fu_2049_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_256_fu_2049_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_2050_p0() {
    mul_ln1118_257_fu_2050_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_3328781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_2050_p2() {
    mul_ln1118_257_fu_2050_p2 = (!mul_ln1118_257_fu_2050_p0.read().is_01() || !ap_const_lv26_111.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_257_fu_2050_p0.read()) * sc_biguint<26>(ap_const_lv26_111);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_1846_p0() {
    mul_ln1118_258_fu_1846_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_3328781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_1846_p2() {
    mul_ln1118_258_fu_1846_p2 = (!mul_ln1118_258_fu_1846_p0.read().is_01() || !ap_const_lv26_3FFFECA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_258_fu_1846_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_2052_p0() {
    mul_ln1118_259_fu_2052_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_2052_p2() {
    mul_ln1118_259_fu_2052_p2 = (!mul_ln1118_259_fu_2052_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_259_fu_2052_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_2053_p0() {
    mul_ln1118_260_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_2053_p2() {
    mul_ln1118_260_fu_2053_p2 = (!mul_ln1118_260_fu_2053_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_260_fu_2053_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1610_p0() {
    mul_ln1118_261_fu_1610_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1610_p2() {
    mul_ln1118_261_fu_1610_p2 = (!mul_ln1118_261_fu_1610_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_261_fu_1610_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_2307_p0() {
    mul_ln1118_263_fu_2307_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_2307_p2() {
    mul_ln1118_263_fu_2307_p2 = (!mul_ln1118_263_fu_2307_p0.read().is_01() || !ap_const_lv25_1FFFF2D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_263_fu_2307_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1612_p0() {
    mul_ln1118_264_fu_1612_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1612_p2() {
    mul_ln1118_264_fu_1612_p2 = (!mul_ln1118_264_fu_1612_p0.read().is_01() || !ap_const_lv25_97.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_264_fu_1612_p0.read()) * sc_biguint<25>(ap_const_lv25_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_2262_p0() {
    mul_ln1118_265_fu_2262_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_2262_p2() {
    mul_ln1118_265_fu_2262_p2 = (!mul_ln1118_265_fu_2262_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_265_fu_2262_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_2161_p0() {
    mul_ln1118_266_fu_2161_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_2161_p2() {
    mul_ln1118_266_fu_2161_p2 = (!mul_ln1118_266_fu_2161_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_266_fu_2161_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_2264_p0() {
    mul_ln1118_267_fu_2264_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_2264_p2() {
    mul_ln1118_267_fu_2264_p2 = (!mul_ln1118_267_fu_2264_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_267_fu_2264_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_2060_p0() {
    mul_ln1118_268_fu_2060_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_3328781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_2060_p2() {
    mul_ln1118_268_fu_2060_p2 = (!mul_ln1118_268_fu_2060_p0.read().is_01() || !ap_const_lv26_11F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_268_fu_2060_p0.read()) * sc_biguint<26>(ap_const_lv26_11F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1651_p0() {
    mul_ln1118_269_fu_1651_p0 =  (sc_lv<16>) (sext_ln1118_208_fu_3328813_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1651_p2() {
    mul_ln1118_269_fu_1651_p2 = (!mul_ln1118_269_fu_1651_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_269_fu_1651_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1447_p0() {
    mul_ln1118_270_fu_1447_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1447_p2() {
    mul_ln1118_270_fu_1447_p2 = (!mul_ln1118_270_fu_1447_p0.read().is_01() || !ap_const_lv25_1FFFF50.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_270_fu_1447_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_1522_p0() {
    mul_ln1118_271_fu_1522_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_1522_p2() {
    mul_ln1118_271_fu_1522_p2 = (!mul_ln1118_271_fu_1522_p0.read().is_01() || !ap_const_lv25_B3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_271_fu_1522_p0.read()) * sc_biguint<25>(ap_const_lv25_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_2147_p0() {
    mul_ln1118_272_fu_2147_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_2147_p2() {
    mul_ln1118_272_fu_2147_p2 = (!mul_ln1118_272_fu_2147_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_272_fu_2147_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_1934_p0() {
    mul_ln1118_273_fu_1934_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_3328781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_1934_p2() {
    mul_ln1118_273_fu_1934_p2 = (!mul_ln1118_273_fu_1934_p0.read().is_01() || !ap_const_lv26_118.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_273_fu_1934_p0.read()) * sc_biguint<26>(ap_const_lv26_118);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1694_p0() {
    mul_ln1118_274_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_3328770_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1694_p2() {
    mul_ln1118_274_fu_1694_p2 = (!mul_ln1118_274_fu_1694_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_274_fu_1694_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_2346_p0() {
    mul_ln1118_275_fu_2346_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_2346_p2() {
    mul_ln1118_275_fu_2346_p2 = (!mul_ln1118_275_fu_2346_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_275_fu_2346_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_2133_p0() {
    mul_ln1118_276_fu_2133_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_3328770_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_2133_p2() {
    mul_ln1118_276_fu_2133_p2 = (!mul_ln1118_276_fu_2133_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_276_fu_2133_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1893_p0() {
    mul_ln1118_277_fu_1893_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_3328781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1893_p2() {
    mul_ln1118_277_fu_1893_p2 = (!mul_ln1118_277_fu_1893_p0.read().is_01() || !ap_const_lv26_11B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_277_fu_1893_p0.read()) * sc_biguint<26>(ap_const_lv26_11B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1680_p0() {
    mul_ln1118_278_fu_1680_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1680_p2() {
    mul_ln1118_278_fu_1680_p2 = (!mul_ln1118_278_fu_1680_p0.read().is_01() || !ap_const_lv25_1FFFF72.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_278_fu_1680_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_1494_p0() {
    mul_ln1118_279_fu_1494_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_3328803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_1494_p2() {
    mul_ln1118_279_fu_1494_p2 = (!mul_ln1118_279_fu_1494_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_279_fu_1494_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_2065_p0() {
    mul_ln1118_280_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_206_fu_3328790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_2065_p2() {
    mul_ln1118_280_fu_2065_p2 = (!mul_ln1118_280_fu_2065_p0.read().is_01() || !ap_const_lv25_1FFFF1F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_280_fu_2065_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_1928_p0() {
    mul_ln1118_281_fu_1928_p0 =  (sc_lv<16>) (sext_ln1118_208_fu_3328813_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_1928_p2() {
    mul_ln1118_281_fu_1928_p2 = (!mul_ln1118_281_fu_1928_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_281_fu_1928_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1570_p0() {
    mul_ln1118_282_fu_1570_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_3328770_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1570_p2() {
    mul_ln1118_282_fu_1570_p2 = (!mul_ln1118_282_fu_1570_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_282_fu_1570_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_2168_p0() {
    mul_ln1118_283_fu_2168_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_2168_p2() {
    mul_ln1118_283_fu_2168_p2 = (!mul_ln1118_283_fu_2168_p0.read().is_01() || !ap_const_lv26_20C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_283_fu_2168_p0.read()) * sc_biguint<26>(ap_const_lv26_20C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_2042_p0() {
    mul_ln1118_284_fu_2042_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_2042_p2() {
    mul_ln1118_284_fu_2042_p2 = (!mul_ln1118_284_fu_2042_p0.read().is_01() || !ap_const_lv26_3FFFEC4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_284_fu_2042_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1742_p0() {
    mul_ln1118_285_fu_1742_p0 =  (sc_lv<16>) (sext_ln1118_223_fu_3329419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1742_p2() {
    mul_ln1118_285_fu_1742_p2 = (!mul_ln1118_285_fu_1742_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_285_fu_1742_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2340_p0() {
    mul_ln1118_286_fu_2340_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2340_p2() {
    mul_ln1118_286_fu_2340_p2 = (!mul_ln1118_286_fu_2340_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_286_fu_2340_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2098_p0() {
    mul_ln1118_287_fu_2098_p0 = sext_ln1118_218_fu_3329377_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2098_p2() {
    mul_ln1118_287_fu_2098_p2 = (!mul_ln1118_287_fu_2098_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_287_fu_2098_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_1943_p0() {
    mul_ln1118_288_fu_1943_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_1943_p2() {
    mul_ln1118_288_fu_1943_p2 = (!mul_ln1118_288_fu_1943_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_288_fu_1943_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_1701_p0() {
    mul_ln1118_289_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_1701_p2() {
    mul_ln1118_289_fu_1701_p2 = (!mul_ln1118_289_fu_1701_p0.read().is_01() || !ap_const_lv25_1FFFF2F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_289_fu_1701_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1459_p0() {
    mul_ln1118_290_fu_1459_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1459_p2() {
    mul_ln1118_290_fu_1459_p2 = (!mul_ln1118_290_fu_1459_p0.read().is_01() || !ap_const_lv26_3FFFED0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_290_fu_1459_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2115_p0() {
    mul_ln1118_291_fu_2115_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2115_p2() {
    mul_ln1118_291_fu_2115_p2 = (!mul_ln1118_291_fu_2115_p0.read().is_01() || !ap_const_lv26_15E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_291_fu_2115_p0.read()) * sc_biguint<26>(ap_const_lv26_15E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_1873_p0() {
    mul_ln1118_292_fu_1873_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_1873_p2() {
    mul_ln1118_292_fu_1873_p2 = (!mul_ln1118_292_fu_1873_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_292_fu_1873_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_1689_p0() {
    mul_ln1118_293_fu_1689_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_1689_p2() {
    mul_ln1118_293_fu_1689_p2 = (!mul_ln1118_293_fu_1689_p0.read().is_01() || !ap_const_lv25_9B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_293_fu_1689_p0.read()) * sc_biguint<25>(ap_const_lv25_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_2258_p0() {
    mul_ln1118_294_fu_2258_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_2258_p2() {
    mul_ln1118_294_fu_2258_p2 = (!mul_ln1118_294_fu_2258_p0.read().is_01() || !ap_const_lv25_1FFFF63.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_294_fu_2258_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_2074_p0() {
    mul_ln1118_295_fu_2074_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_2074_p2() {
    mul_ln1118_295_fu_2074_p2 = (!mul_ln1118_295_fu_2074_p0.read().is_01() || !ap_const_lv25_1FFFF0E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_295_fu_2074_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_1890_p0() {
    mul_ln1118_297_fu_1890_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_1890_p2() {
    mul_ln1118_297_fu_1890_p2 = (!mul_ln1118_297_fu_1890_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_1890_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1648_p0() {
    mul_ln1118_298_fu_1648_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1648_p2() {
    mul_ln1118_298_fu_1648_p2 = (!mul_ln1118_298_fu_1648_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_298_fu_1648_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2188_p0() {
    mul_ln1118_299_fu_2188_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2188_p2() {
    mul_ln1118_299_fu_2188_p2 = (!mul_ln1118_299_fu_2188_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_299_fu_2188_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_2430_p0() {
    mul_ln1118_300_fu_2430_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_2430_p2() {
    mul_ln1118_300_fu_2430_p2 = (!mul_ln1118_300_fu_2430_p0.read().is_01() || !ap_const_lv26_13C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_300_fu_2430_p0.read()) * sc_biguint<26>(ap_const_lv26_13C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_1816_p0() {
    mul_ln1118_301_fu_1816_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_1816_p2() {
    mul_ln1118_301_fu_1816_p2 = (!mul_ln1118_301_fu_1816_p0.read().is_01() || !ap_const_lv26_3FFFD4A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_301_fu_1816_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_1749_p0() {
    mul_ln1118_302_fu_1749_p0 = sext_ln1118_222_fu_3329414_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_1749_p2() {
    mul_ln1118_302_fu_1749_p2 = (!mul_ln1118_302_fu_1749_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_302_fu_1749_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2433_p0() {
    mul_ln1118_303_fu_2433_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_3329394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2433_p2() {
    mul_ln1118_303_fu_2433_p2 = (!mul_ln1118_303_fu_2433_p0.read().is_01() || !ap_const_lv25_1FFFF07.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_303_fu_2433_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_2024_p0() {
    mul_ln1118_304_fu_2024_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_3329404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_2024_p2() {
    mul_ln1118_304_fu_2024_p2 = (!mul_ln1118_304_fu_2024_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_304_fu_2024_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_2230_p0() {
    mul_ln1118_305_fu_2230_p0 =  (sc_lv<16>) (sext_ln1118_223_fu_3329419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_2230_p2() {
    mul_ln1118_305_fu_2230_p2 = (!mul_ln1118_305_fu_2230_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_305_fu_2230_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1616_p0() {
    mul_ln1118_306_fu_1616_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1616_p2() {
    mul_ln1118_306_fu_1616_p2 = (!mul_ln1118_306_fu_1616_p0.read().is_01() || !ap_const_lv26_3FFFEEC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_306_fu_1616_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_2437_p0() {
    mul_ln1118_307_fu_2437_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_3329382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_2437_p2() {
    mul_ln1118_307_fu_2437_p2 = (!mul_ln1118_307_fu_2437_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_307_fu_2437_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_2028_p0() {
    mul_ln1118_308_fu_2028_p0 = sext_ln1118_237_fu_3330006_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_2028_p2() {
    mul_ln1118_308_fu_2028_p2 = (!mul_ln1118_308_fu_2028_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_308_fu_2028_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1619_p0() {
    mul_ln1118_309_fu_1619_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1619_p2() {
    mul_ln1118_309_fu_1619_p2 = (!mul_ln1118_309_fu_1619_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_309_fu_1619_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_2440_p0() {
    mul_ln1118_310_fu_2440_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_3330022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_2440_p2() {
    mul_ln1118_310_fu_2440_p2 = (!mul_ln1118_310_fu_2440_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_310_fu_2440_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_2441_p0() {
    mul_ln1118_311_fu_2441_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_3330022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_2441_p2() {
    mul_ln1118_311_fu_2441_p2 = (!mul_ln1118_311_fu_2441_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_311_fu_2441_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2237_p0() {
    mul_ln1118_312_fu_2237_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_3330022_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2237_p2() {
    mul_ln1118_312_fu_2237_p2 = (!mul_ln1118_312_fu_2237_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_312_fu_2237_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1589_p0() {
    mul_ln1118_313_fu_1589_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1589_p2() {
    mul_ln1118_313_fu_1589_p2 = (!mul_ln1118_313_fu_1589_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_313_fu_1589_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1829_p0() {
    mul_ln1118_314_fu_1829_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1829_p2() {
    mul_ln1118_314_fu_1829_p2 = (!mul_ln1118_314_fu_1829_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_314_fu_1829_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_315_fu_1625_p0() {
    mul_ln1118_315_fu_1625_p0 =  (sc_lv<16>) (sext_ln1118_235_fu_3329986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_315_fu_1625_p2() {
    mul_ln1118_315_fu_1625_p2 = (!mul_ln1118_315_fu_1625_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_315_fu_1625_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1421_p0() {
    mul_ln1118_316_fu_1421_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1421_p2() {
    mul_ln1118_316_fu_1421_p2 = (!mul_ln1118_316_fu_1421_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_316_fu_1421_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_1422_p0() {
    mul_ln1118_317_fu_1422_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_1422_p2() {
    mul_ln1118_317_fu_1422_p2 = (!mul_ln1118_317_fu_1422_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_317_fu_1422_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1628_p0() {
    mul_ln1118_319_fu_1628_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1628_p2() {
    mul_ln1118_319_fu_1628_p2 = (!mul_ln1118_319_fu_1628_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_319_fu_1628_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_2039_p0() {
    mul_ln1118_320_fu_2039_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_2039_p2() {
    mul_ln1118_320_fu_2039_p2 = (!mul_ln1118_320_fu_2039_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_320_fu_2039_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_1630_p0() {
    mul_ln1118_321_fu_1630_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_1630_p2() {
    mul_ln1118_321_fu_1630_p2 = (!mul_ln1118_321_fu_1630_p0.read().is_01() || !ap_const_lv25_1FFFF23.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_321_fu_1630_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1426_p0() {
    mul_ln1118_322_fu_1426_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1426_p2() {
    mul_ln1118_322_fu_1426_p2 = (!mul_ln1118_322_fu_1426_p0.read().is_01() || !ap_const_lv25_EB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_322_fu_1426_p0.read()) * sc_biguint<25>(ap_const_lv25_EB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1598_p0() {
    mul_ln1118_323_fu_1598_p0 = sext_ln1118_234_fu_3329981_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1598_p2() {
    mul_ln1118_323_fu_1598_p2 = (!mul_ln1118_323_fu_1598_p0.read().is_01() || !ap_const_lv26_138.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_323_fu_1598_p0.read()) * sc_biguint<26>(ap_const_lv26_138);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1428_p0() {
    mul_ln1118_324_fu_1428_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1428_p2() {
    mul_ln1118_324_fu_1428_p2 = (!mul_ln1118_324_fu_1428_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_324_fu_1428_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1942_p0() {
    mul_ln1118_325_fu_1942_p0 =  (sc_lv<16>) (sext_ln1118_235_fu_3329986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1942_p2() {
    mul_ln1118_325_fu_1942_p2 = (!mul_ln1118_325_fu_1942_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_325_fu_1942_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_2045_p0() {
    mul_ln1118_326_fu_2045_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_2045_p2() {
    mul_ln1118_326_fu_2045_p2 = (!mul_ln1118_326_fu_2045_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_326_fu_2045_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1431_p0() {
    mul_ln1118_327_fu_1431_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1431_p2() {
    mul_ln1118_327_fu_1431_p2 = (!mul_ln1118_327_fu_1431_p0.read().is_01() || !ap_const_lv25_BB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_327_fu_1431_p0.read()) * sc_biguint<25>(ap_const_lv25_BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_2017_p0() {
    mul_ln1118_328_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_2017_p2() {
    mul_ln1118_328_fu_2017_p2 = (!mul_ln1118_328_fu_2017_p0.read().is_01() || !ap_const_lv25_AE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_328_fu_2017_p0.read()) * sc_biguint<25>(ap_const_lv25_AE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1885_p0() {
    mul_ln1118_329_fu_1885_p0 =  (sc_lv<16>) (sext_ln1118_235_fu_3329986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1885_p2() {
    mul_ln1118_329_fu_1885_p2 = (!mul_ln1118_329_fu_1885_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_329_fu_1885_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1645_p0() {
    mul_ln1118_330_fu_1645_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1645_p2() {
    mul_ln1118_330_fu_1645_p2 = (!mul_ln1118_330_fu_1645_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_330_fu_1645_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_2243_p0() {
    mul_ln1118_331_fu_2243_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_3329993_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_2243_p2() {
    mul_ln1118_331_fu_2243_p2 = (!mul_ln1118_331_fu_2243_p0.read().is_01() || !ap_const_lv25_AB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_331_fu_2243_p0.read()) * sc_biguint<25>(ap_const_lv25_AB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_1507_p0() {
    mul_ln1118_332_fu_1507_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_3330011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_1507_p2() {
    mul_ln1118_332_fu_1507_p2 = (!mul_ln1118_332_fu_1507_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_332_fu_1507_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_1682_p0() {
    mul_ln1118_333_fu_1682_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_1682_p2() {
    mul_ln1118_333_fu_1682_p2 = (!mul_ln1118_333_fu_1682_p0.read().is_01() || !ap_const_lv25_86.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_333_fu_1682_p0.read()) * sc_biguint<25>(ap_const_lv25_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_2415_p0() {
    mul_ln1118_334_fu_2415_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_2415_p2() {
    mul_ln1118_334_fu_2415_p2 = (!mul_ln1118_334_fu_2415_p0.read().is_01() || !ap_const_lv25_B5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_334_fu_2415_p0.read()) * sc_biguint<25>(ap_const_lv25_B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_2229_p0() {
    mul_ln1118_335_fu_2229_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_2229_p2() {
    mul_ln1118_335_fu_2229_p2 = (!mul_ln1118_335_fu_2229_p0.read().is_01() || !ap_const_lv26_3FFFECB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_335_fu_2229_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_1989_p0() {
    mul_ln1118_336_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_249_fu_3330632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_1989_p2() {
    mul_ln1118_336_fu_1989_p2 = (!mul_ln1118_336_fu_1989_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_336_fu_1989_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_1776_p0() {
    mul_ln1118_337_fu_1776_p0 =  (sc_lv<16>) (sext_ln1118_249_fu_3330632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_1776_p2() {
    mul_ln1118_337_fu_1776_p2 = (!mul_ln1118_337_fu_1776_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_337_fu_1776_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_1536_p0() {
    mul_ln1118_338_fu_1536_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_1536_p2() {
    mul_ln1118_338_fu_1536_p2 = (!mul_ln1118_338_fu_1536_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_338_fu_1536_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1872_p0() {
    mul_ln1118_339_fu_1872_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1872_p2() {
    mul_ln1118_339_fu_1872_p2 = (!mul_ln1118_339_fu_1872_p0.read().is_01() || !ap_const_lv25_1FFFF6C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_339_fu_1872_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1514_p0() {
    mul_ln1118_340_fu_1514_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1514_p2() {
    mul_ln1118_340_fu_1514_p2 = (!mul_ln1118_340_fu_1514_p0.read().is_01() || !ap_const_lv25_1FFFF6F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_340_fu_1514_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_2141_p0() {
    mul_ln1118_341_fu_2141_p0 =  (sc_lv<16>) (sext_ln1118_247_fu_3330615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_2141_p2() {
    mul_ln1118_341_fu_2141_p2 = (!mul_ln1118_341_fu_2141_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_341_fu_2141_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1957_p0() {
    mul_ln1118_342_fu_1957_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1957_p2() {
    mul_ln1118_342_fu_1957_p2 = (!mul_ln1118_342_fu_1957_p0.read().is_01() || !ap_const_lv25_1FFFF26.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_342_fu_1957_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1715_p0() {
    mul_ln1118_343_fu_1715_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1715_p2() {
    mul_ln1118_343_fu_1715_p2 = (!mul_ln1118_343_fu_1715_p0.read().is_01() || !ap_const_lv26_3FFFDF1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_343_fu_1715_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_2284_p0() {
    mul_ln1118_344_fu_2284_p0 =  (sc_lv<16>) (sext_ln1118_249_fu_3330632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_2284_p2() {
    mul_ln1118_344_fu_2284_p2 = (!mul_ln1118_344_fu_2284_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_344_fu_2284_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_345_fu_2129_p0() {
    mul_ln1118_345_fu_2129_p0 = sext_ln1118_250_fu_3330640_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_345_fu_2129_p2() {
    mul_ln1118_345_fu_2129_p2 = (!mul_ln1118_345_fu_2129_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_345_fu_2129_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1887_p0() {
    mul_ln1118_346_fu_1887_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1887_p2() {
    mul_ln1118_346_fu_1887_p2 = (!mul_ln1118_346_fu_1887_p0.read().is_01() || !ap_const_lv25_C5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_346_fu_1887_p0.read()) * sc_biguint<25>(ap_const_lv25_C5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1674_p0() {
    mul_ln1118_347_fu_1674_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1674_p2() {
    mul_ln1118_347_fu_1674_p2 = (!mul_ln1118_347_fu_1674_p0.read().is_01() || !ap_const_lv26_106.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_347_fu_1674_p0.read()) * sc_biguint<26>(ap_const_lv26_106);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1432_p0() {
    mul_ln1118_348_fu_1432_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1432_p2() {
    mul_ln1118_348_fu_1432_p2 = (!mul_ln1118_348_fu_1432_p0.read().is_01() || !ap_const_lv26_122.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_348_fu_1432_p0.read()) * sc_biguint<26>(ap_const_lv26_122);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_2146_p0() {
    mul_ln1118_349_fu_2146_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_2146_p2() {
    mul_ln1118_349_fu_2146_p2 = (!mul_ln1118_349_fu_2146_p0.read().is_01() || !ap_const_lv25_1FFFF17.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_349_fu_2146_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1817_p0() {
    mul_ln1118_350_fu_1817_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1817_p2() {
    mul_ln1118_350_fu_1817_p2 = (!mul_ln1118_350_fu_1817_p0.read().is_01() || !ap_const_lv26_3FFFDA9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_350_fu_1817_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_1604_p0() {
    mul_ln1118_351_fu_1604_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_1604_p2() {
    mul_ln1118_351_fu_1604_p2 = (!mul_ln1118_351_fu_1604_p0.read().is_01() || !ap_const_lv26_176.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_351_fu_1604_p0.read()) * sc_biguint<26>(ap_const_lv26_176);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_1449_p0() {
    mul_ln1118_352_fu_1449_p0 =  (sc_lv<16>) (sext_ln1118_249_fu_3330632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_1449_p2() {
    mul_ln1118_352_fu_1449_p2 = (!mul_ln1118_352_fu_1449_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_352_fu_1449_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_353_fu_2018_p0() {
    mul_ln1118_353_fu_2018_p0 =  (sc_lv<16>) (sext_ln1118_247_fu_3330615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_353_fu_2018_p2() {
    mul_ln1118_353_fu_2018_p2 = (!mul_ln1118_353_fu_2018_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_353_fu_2018_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_1805_p0() {
    mul_ln1118_354_fu_1805_p0 =  (sc_lv<16>) (sext_ln1118_248_fu_3330621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_1805_p2() {
    mul_ln1118_354_fu_1805_p2 = (!mul_ln1118_354_fu_1805_p0.read().is_01() || !ap_const_lv26_11D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_354_fu_1805_p0.read()) * sc_biguint<26>(ap_const_lv26_11D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_355_fu_2374_p0() {
    mul_ln1118_355_fu_2374_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_355_fu_2374_p2() {
    mul_ln1118_355_fu_2374_p2 = (!mul_ln1118_355_fu_2374_p0.read().is_01() || !ap_const_lv25_1FFFF4E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_355_fu_2374_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1553_p0() {
    mul_ln1118_356_fu_1553_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1553_p2() {
    mul_ln1118_356_fu_1553_p2 = (!mul_ln1118_356_fu_1553_p0.read().is_01() || !ap_const_lv25_1FFFF3E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_356_fu_1553_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_357_fu_1800_p0() {
    mul_ln1118_357_fu_1800_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_357_fu_1800_p2() {
    mul_ln1118_357_fu_1800_p2 = (!mul_ln1118_357_fu_1800_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_357_fu_1800_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_2143_p0() {
    mul_ln1118_358_fu_2143_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_3330645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_2143_p2() {
    mul_ln1118_358_fu_2143_p2 = (!mul_ln1118_358_fu_2143_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_358_fu_2143_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_359_fu_1802_p0() {
    mul_ln1118_359_fu_1802_p0 =  (sc_lv<16>) (sext_ln1118_261_fu_3331197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_359_fu_1802_p2() {
    mul_ln1118_359_fu_1802_p2 = (!mul_ln1118_359_fu_1802_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_359_fu_1802_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_2213_p0() {
    mul_ln1118_360_fu_2213_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_2213_p2() {
    mul_ln1118_360_fu_2213_p2 = (!mul_ln1118_360_fu_2213_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_360_fu_2213_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1804_p0() {
    mul_ln1118_361_fu_1804_p0 =  (sc_lv<16>) (sext_ln1118_261_fu_3331197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1804_p2() {
    mul_ln1118_361_fu_1804_p2 = (!mul_ln1118_361_fu_1804_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_361_fu_1804_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_2215_p0() {
    mul_ln1118_362_fu_2215_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_2215_p2() {
    mul_ln1118_362_fu_2215_p2 = (!mul_ln1118_362_fu_2215_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_362_fu_2215_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_363_fu_2216_p0() {
    mul_ln1118_363_fu_2216_p0 = sext_ln1118_259_fu_3331179_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_363_fu_2216_p2() {
    mul_ln1118_363_fu_2216_p2 = (!mul_ln1118_363_fu_2216_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_363_fu_2216_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_364_fu_1807_p0() {
    mul_ln1118_364_fu_1807_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_364_fu_1807_p2() {
    mul_ln1118_364_fu_1807_p2 = (!mul_ln1118_364_fu_1807_p0.read().is_01() || !ap_const_lv25_C7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_364_fu_1807_p0.read()) * sc_biguint<25>(ap_const_lv25_C7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_365_fu_1569_p0() {
    mul_ln1118_365_fu_1569_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_365_fu_1569_p2() {
    mul_ln1118_365_fu_1569_p2 = (!mul_ln1118_365_fu_1569_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_365_fu_1569_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_366_fu_2014_p0() {
    mul_ln1118_366_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_366_fu_2014_p2() {
    mul_ln1118_366_fu_2014_p2 = (!mul_ln1118_366_fu_2014_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_366_fu_2014_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_1605_p0() {
    mul_ln1118_367_fu_1605_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_1605_p2() {
    mul_ln1118_367_fu_1605_p2 = (!mul_ln1118_367_fu_1605_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_367_fu_1605_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_2187_p0() {
    mul_ln1118_368_fu_2187_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_3331157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_2187_p2() {
    mul_ln1118_368_fu_2187_p2 = (!mul_ln1118_368_fu_2187_p0.read().is_01() || !ap_const_lv26_10F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_368_fu_2187_p0.read()) * sc_biguint<26>(ap_const_lv26_10F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_1744_p0() {
    mul_ln1118_369_fu_1744_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_1744_p2() {
    mul_ln1118_369_fu_1744_p2 = (!mul_ln1118_369_fu_1744_p0.read().is_01() || !ap_const_lv25_B0.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_369_fu_1744_p0.read()) * sc_biguint<25>(ap_const_lv25_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1540_p0() {
    mul_ln1118_370_fu_1540_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1540_p2() {
    mul_ln1118_370_fu_1540_p2 = (!mul_ln1118_370_fu_1540_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_370_fu_1540_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_371_fu_1575_p0() {
    mul_ln1118_371_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_371_fu_1575_p2() {
    mul_ln1118_371_fu_1575_p2 = (!mul_ln1118_371_fu_1575_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_371_fu_1575_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_2225_p0() {
    mul_ln1118_372_fu_2225_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_2225_p2() {
    mul_ln1118_372_fu_2225_p2 = (!mul_ln1118_372_fu_2225_p0.read().is_01() || !ap_const_lv24_FFFF9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_372_fu_2225_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_2397_p0() {
    mul_ln1118_373_fu_2397_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_2397_p2() {
    mul_ln1118_373_fu_2397_p2 = (!mul_ln1118_373_fu_2397_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_373_fu_2397_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_374_fu_2227_p0() {
    mul_ln1118_374_fu_2227_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_374_fu_2227_p2() {
    mul_ln1118_374_fu_2227_p2 = (!mul_ln1118_374_fu_2227_p0.read().is_01() || !ap_const_lv25_FA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_374_fu_2227_p0.read()) * sc_biguint<25>(ap_const_lv25_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_1613_p0() {
    mul_ln1118_375_fu_1613_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_3331157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_1613_p2() {
    mul_ln1118_375_fu_1613_p2 = (!mul_ln1118_375_fu_1613_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_375_fu_1613_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_376_fu_1614_p0() {
    mul_ln1118_376_fu_1614_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_376_fu_1614_p2() {
    mul_ln1118_376_fu_1614_p2 = (!mul_ln1118_376_fu_1614_p0.read().is_01() || !ap_const_lv25_1FFFF63.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_376_fu_1614_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_2401_p0() {
    mul_ln1118_377_fu_2401_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_2401_p2() {
    mul_ln1118_377_fu_2401_p2 = (!mul_ln1118_377_fu_2401_p0.read().is_01() || !ap_const_lv25_1FFFF54.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_377_fu_2401_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_2197_p0() {
    mul_ln1118_378_fu_2197_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_3331157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_2197_p2() {
    mul_ln1118_378_fu_2197_p2 = (!mul_ln1118_378_fu_2197_p0.read().is_01() || !ap_const_lv26_1A6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_378_fu_2197_p0.read()) * sc_biguint<26>(ap_const_lv26_1A6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_2232_p0() {
    mul_ln1118_379_fu_2232_p0 =  (sc_lv<16>) (sext_ln1118_261_fu_3331197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_2232_p2() {
    mul_ln1118_379_fu_2232_p2 = (!mul_ln1118_379_fu_2232_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_379_fu_2232_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_380_fu_2131_p0() {
    mul_ln1118_380_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_3331157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_380_fu_2131_p2() {
    mul_ln1118_380_fu_2131_p2 = (!mul_ln1118_380_fu_2131_p0.read().is_01() || !ap_const_lv26_14B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_380_fu_2131_p0.read()) * sc_biguint<26>(ap_const_lv26_14B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_2439_p0() {
    mul_ln1118_381_fu_2439_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_2439_p2() {
    mul_ln1118_381_fu_2439_p2 = (!mul_ln1118_381_fu_2439_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_381_fu_2439_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1620_p0() {
    mul_ln1118_382_fu_1620_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_3331166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1620_p2() {
    mul_ln1118_382_fu_1620_p2 = (!mul_ln1118_382_fu_1620_p0.read().is_01() || !ap_const_lv25_1FFFF25.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_382_fu_1620_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_383_fu_2031_p0() {
    mul_ln1118_383_fu_2031_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_383_fu_2031_p2() {
    mul_ln1118_383_fu_2031_p2 = (!mul_ln1118_383_fu_2031_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_383_fu_2031_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_1542_p0() {
    mul_ln1118_384_fu_1542_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_3331157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_1542_p2() {
    mul_ln1118_384_fu_1542_p2 = (!mul_ln1118_384_fu_1542_p0.read().is_01() || !ap_const_lv26_150.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_384_fu_1542_p0.read()) * sc_biguint<26>(ap_const_lv26_150);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_2194_p0() {
    mul_ln1118_385_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_3331184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_2194_p2() {
    mul_ln1118_385_fu_2194_p2 = (!mul_ln1118_385_fu_2194_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_385_fu_2194_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_386_fu_1954_p0() {
    mul_ln1118_386_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_386_fu_1954_p2() {
    mul_ln1118_386_fu_1954_p2 = (!mul_ln1118_386_fu_1954_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_386_fu_1954_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_387_fu_2363_p0() {
    mul_ln1118_387_fu_2363_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_3331615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_387_fu_2363_p2() {
    mul_ln1118_387_fu_2363_p2 = (!mul_ln1118_387_fu_2363_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_387_fu_2363_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_2366_p0() {
    mul_ln1118_388_fu_2366_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_2366_p2() {
    mul_ln1118_388_fu_2366_p2 = (!mul_ln1118_388_fu_2366_p0.read().is_01() || !ap_const_lv25_1FFFF3B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_388_fu_2366_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_389_fu_2126_p0() {
    mul_ln1118_389_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_389_fu_2126_p2() {
    mul_ln1118_389_fu_2126_p2 = (!mul_ln1118_389_fu_2126_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_389_fu_2126_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_390_fu_1886_p0() {
    mul_ln1118_390_fu_1886_p0 =  (sc_lv<16>) (sext_ln1118_266_fu_3331632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_390_fu_1886_p2() {
    mul_ln1118_390_fu_1886_p2 = (!mul_ln1118_390_fu_1886_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_390_fu_1886_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1727_p0() {
    mul_ln1118_391_fu_1727_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1727_p2() {
    mul_ln1118_391_fu_1727_p2 = (!mul_ln1118_391_fu_1727_p0.read().is_01() || !ap_const_lv25_A7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_391_fu_1727_p0.read()) * sc_biguint<25>(ap_const_lv25_A7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_1487_p0() {
    mul_ln1118_392_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_1487_p2() {
    mul_ln1118_392_fu_1487_p2 = (!mul_ln1118_392_fu_1487_p0.read().is_01() || !ap_const_lv25_1FFFF3A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_392_fu_1487_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_393_fu_2329_p0() {
    mul_ln1118_393_fu_2329_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_393_fu_2329_p2() {
    mul_ln1118_393_fu_2329_p2 = (!mul_ln1118_393_fu_2329_p0.read().is_01() || !ap_const_lv26_3FFFEAF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_393_fu_2329_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_1913_p0() {
    mul_ln1118_394_fu_1913_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_1913_p2() {
    mul_ln1118_394_fu_1913_p2 = (!mul_ln1118_394_fu_1913_p0.read().is_01() || !ap_const_lv25_1FFFF77.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_394_fu_1913_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1729_p0() {
    mul_ln1118_395_fu_1729_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1729_p2() {
    mul_ln1118_395_fu_1729_p2 = (!mul_ln1118_395_fu_1729_p0.read().is_01() || !ap_const_lv26_3FFFEFA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_395_fu_1729_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_2148_p0() {
    mul_ln1118_396_fu_2148_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_2148_p2() {
    mul_ln1118_396_fu_2148_p2 = (!mul_ln1118_396_fu_2148_p0.read().is_01() || !ap_const_lv25_9F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_396_fu_2148_p0.read()) * sc_biguint<25>(ap_const_lv25_9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_2114_p0() {
    mul_ln1118_397_fu_2114_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_2114_p2() {
    mul_ln1118_397_fu_2114_p2 = (!mul_ln1118_397_fu_2114_p0.read().is_01() || !ap_const_lv25_B7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_397_fu_2114_p0.read()) * sc_biguint<25>(ap_const_lv25_B7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1930_p0() {
    mul_ln1118_398_fu_1930_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1930_p2() {
    mul_ln1118_398_fu_1930_p2 = (!mul_ln1118_398_fu_1930_p0.read().is_01() || !ap_const_lv26_3FFFE76.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_398_fu_1930_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_1688_p0() {
    mul_ln1118_399_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_1688_p2() {
    mul_ln1118_399_fu_1688_p2 = (!mul_ln1118_399_fu_1688_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_399_fu_1688_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1475_p0() {
    mul_ln1118_400_fu_1475_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_3331615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1475_p2() {
    mul_ln1118_400_fu_1475_p2 = (!mul_ln1118_400_fu_1475_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_400_fu_1475_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_2073_p0() {
    mul_ln1118_401_fu_2073_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_2073_p2() {
    mul_ln1118_401_fu_2073_p2 = (!mul_ln1118_401_fu_2073_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_401_fu_2073_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1889_p0() {
    mul_ln1118_402_fu_1889_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1889_p2() {
    mul_ln1118_402_fu_1889_p2 = (!mul_ln1118_402_fu_1889_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_402_fu_1889_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1647_p0() {
    mul_ln1118_403_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1647_p2() {
    mul_ln1118_403_fu_1647_p2 = (!mul_ln1118_403_fu_1647_p0.read().is_01() || !ap_const_lv26_3FFFE50.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_403_fu_1647_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_2274_p0() {
    mul_ln1118_404_fu_2274_p0 =  (sc_lv<16>) (sext_ln1118_266_fu_3331632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_2274_p2() {
    mul_ln1118_404_fu_2274_p2 = (!mul_ln1118_404_fu_2274_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_404_fu_2274_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_2119_p0() {
    mul_ln1118_405_fu_2119_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_3331603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_2119_p2() {
    mul_ln1118_405_fu_2119_p2 = (!mul_ln1118_405_fu_2119_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_405_fu_2119_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_1877_p0() {
    mul_ln1118_406_fu_1877_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_1877_p2() {
    mul_ln1118_406_fu_1877_p2 = (!mul_ln1118_406_fu_1877_p0.read().is_01() || !ap_const_lv26_3FFFEA1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_406_fu_1877_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_407_fu_1606_p0() {
    mul_ln1118_407_fu_1606_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_407_fu_1606_p2() {
    mul_ln1118_407_fu_1606_p2 = (!mul_ln1118_407_fu_1606_p0.read().is_01() || !ap_const_lv26_155.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_407_fu_1606_p0.read()) * sc_biguint<26>(ap_const_lv26_155);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_408_fu_2291_p0() {
    mul_ln1118_408_fu_2291_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_3331615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_408_fu_2291_p2() {
    mul_ln1118_408_fu_2291_p2 = (!mul_ln1118_408_fu_2291_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_408_fu_2291_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_409_fu_1991_p0() {
    mul_ln1118_409_fu_1991_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_409_fu_1991_p2() {
    mul_ln1118_409_fu_1991_p2 = (!mul_ln1118_409_fu_1991_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_409_fu_1991_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1836_p0() {
    mul_ln1118_410_fu_1836_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1836_p2() {
    mul_ln1118_410_fu_1836_p2 = (!mul_ln1118_410_fu_1836_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_410_fu_1836_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_2347_p0() {
    mul_ln1118_411_fu_2347_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_2347_p2() {
    mul_ln1118_411_fu_2347_p2 = (!mul_ln1118_411_fu_2347_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_411_fu_2347_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_412_fu_2228_p0() {
    mul_ln1118_412_fu_2228_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_3331590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_412_fu_2228_p2() {
    mul_ln1118_412_fu_2228_p2 = (!mul_ln1118_412_fu_2228_p0.read().is_01() || !ap_const_lv26_179.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_412_fu_2228_p0.read()) * sc_biguint<26>(ap_const_lv26_179);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_2103_p0() {
    mul_ln1118_413_fu_2103_p0 =  (sc_lv<16>) (sext_ln1118_265_fu_3331622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_2103_p2() {
    mul_ln1118_413_fu_2103_p2 = (!mul_ln1118_413_fu_2103_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_413_fu_2103_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_2435_p0() {
    mul_ln1118_414_fu_2435_p0 = sext_ln1118_276_fu_3332166_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_2435_p2() {
    mul_ln1118_414_fu_2435_p2 = (!mul_ln1118_414_fu_2435_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_414_fu_2435_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_2163_p0() {
    mul_ln1118_415_fu_2163_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_2163_p2() {
    mul_ln1118_415_fu_2163_p2 = (!mul_ln1118_415_fu_2163_p0.read().is_01() || !ap_const_lv25_BF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_415_fu_2163_p0.read()) * sc_biguint<25>(ap_const_lv25_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_2027_p0() {
    mul_ln1118_416_fu_2027_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_2027_p2() {
    mul_ln1118_416_fu_2027_p2 = (!mul_ln1118_416_fu_2027_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_416_fu_2027_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_1823_p0() {
    mul_ln1118_417_fu_1823_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_1823_p2() {
    mul_ln1118_417_fu_1823_p2 = (!mul_ln1118_417_fu_1823_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_417_fu_1823_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_2234_p0() {
    mul_ln1118_418_fu_2234_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_3332171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_2234_p2() {
    mul_ln1118_418_fu_2234_p2 = (!mul_ln1118_418_fu_2234_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_418_fu_2234_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_2235_p0() {
    mul_ln1118_419_fu_2235_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_2235_p2() {
    mul_ln1118_419_fu_2235_p2 = (!mul_ln1118_419_fu_2235_p0.read().is_01() || !ap_const_lv26_3FFFEDD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_419_fu_2235_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_420_fu_2236_p0() {
    mul_ln1118_420_fu_2236_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_420_fu_2236_p2() {
    mul_ln1118_420_fu_2236_p2 = (!mul_ln1118_420_fu_2236_p0.read().is_01() || !ap_const_lv26_3FFFEF5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_420_fu_2236_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_2408_p0() {
    mul_ln1118_421_fu_2408_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_2408_p2() {
    mul_ln1118_421_fu_2408_p2 = (!mul_ln1118_421_fu_2408_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_421_fu_2408_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_2238_p0() {
    mul_ln1118_422_fu_2238_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_2238_p2() {
    mul_ln1118_422_fu_2238_p2 = (!mul_ln1118_422_fu_2238_p0.read().is_01() || !ap_const_lv26_3FFFEFD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_422_fu_2238_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_423_fu_2239_p0() {
    mul_ln1118_423_fu_2239_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_3332171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_423_fu_2239_p2() {
    mul_ln1118_423_fu_2239_p2 = (!mul_ln1118_423_fu_2239_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_423_fu_2239_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_2240_p0() {
    mul_ln1118_424_fu_2240_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_2240_p2() {
    mul_ln1118_424_fu_2240_p2 = (!mul_ln1118_424_fu_2240_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_424_fu_2240_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_425_fu_2207_p0() {
    mul_ln1118_425_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_425_fu_2207_p2() {
    mul_ln1118_425_fu_2207_p2 = (!mul_ln1118_425_fu_2207_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_425_fu_2207_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_2037_p0() {
    mul_ln1118_426_fu_2037_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_2037_p2() {
    mul_ln1118_426_fu_2037_p2 = (!mul_ln1118_426_fu_2037_p0.read().is_01() || !ap_const_lv25_C1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_426_fu_2037_p0.read()) * sc_biguint<25>(ap_const_lv25_C1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_2414_p0() {
    mul_ln1118_427_fu_2414_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_3332132_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_2414_p2() {
    mul_ln1118_427_fu_2414_p2 = (!mul_ln1118_427_fu_2414_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_427_fu_2414_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_428_fu_1692_p0() {
    mul_ln1118_428_fu_1692_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_428_fu_1692_p2() {
    mul_ln1118_428_fu_1692_p2 = (!mul_ln1118_428_fu_1692_p0.read().is_01() || !ap_const_lv25_FB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_428_fu_1692_p0.read()) * sc_biguint<25>(ap_const_lv25_FB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_430_fu_1425_p0() {
    mul_ln1118_430_fu_1425_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_430_fu_1425_p2() {
    mul_ln1118_430_fu_1425_p2 = (!mul_ln1118_430_fu_1425_p0.read().is_01() || !ap_const_lv25_1FFFF71.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_430_fu_1425_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_2041_p0() {
    mul_ln1118_431_fu_2041_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_2041_p2() {
    mul_ln1118_431_fu_2041_p2 = (!mul_ln1118_431_fu_2041_p0.read().is_01() || !ap_const_lv25_AF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_431_fu_2041_p0.read()) * sc_biguint<25>(ap_const_lv25_AF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_432_fu_1837_p0() {
    mul_ln1118_432_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_432_fu_1837_p2() {
    mul_ln1118_432_fu_1837_p2 = (!mul_ln1118_432_fu_1837_p0.read().is_01() || !ap_const_lv25_CB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_432_fu_1837_p0.read()) * sc_biguint<25>(ap_const_lv25_CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_433_fu_2214_p0() {
    mul_ln1118_433_fu_2214_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_3332152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_433_fu_2214_p2() {
    mul_ln1118_433_fu_2214_p2 = (!mul_ln1118_433_fu_2214_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_433_fu_2214_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_434_fu_2249_p0() {
    mul_ln1118_434_fu_2249_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_3332171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_434_fu_2249_p2() {
    mul_ln1118_434_fu_2249_p2 = (!mul_ln1118_434_fu_2249_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_434_fu_2249_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_435_fu_2250_p0() {
    mul_ln1118_435_fu_2250_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_435_fu_2250_p2() {
    mul_ln1118_435_fu_2250_p2 = (!mul_ln1118_435_fu_2250_p0.read().is_01() || !ap_const_lv26_114.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_435_fu_2250_p0.read()) * sc_biguint<26>(ap_const_lv26_114);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_436_fu_2251_p0() {
    mul_ln1118_436_fu_2251_p0 =  (sc_lv<16>) (sext_ln1118_274_fu_3332141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_436_fu_2251_p2() {
    mul_ln1118_436_fu_2251_p2 = (!mul_ln1118_436_fu_2251_p0.read().is_01() || !ap_const_lv26_3FFFEAC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_436_fu_2251_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_437_fu_2252_p0() {
    mul_ln1118_437_fu_2252_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_3332171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_437_fu_2252_p2() {
    mul_ln1118_437_fu_2252_p2 = (!mul_ln1118_437_fu_2252_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_437_fu_2252_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_438_fu_1433_p0() {
    mul_ln1118_438_fu_1433_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_3332171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_438_fu_1433_p2() {
    mul_ln1118_438_fu_1433_p2 = (!mul_ln1118_438_fu_1433_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_438_fu_1433_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_439_fu_1434_p0() {
    mul_ln1118_439_fu_1434_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_3332721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_439_fu_1434_p2() {
    mul_ln1118_439_fu_1434_p2 = (!mul_ln1118_439_fu_1434_p0.read().is_01() || !ap_const_lv26_3FFFE94.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_439_fu_1434_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_440_fu_2091_p0() {
    mul_ln1118_440_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_440_fu_2091_p2() {
    mul_ln1118_440_fu_2091_p2 = (!mul_ln1118_440_fu_2091_p0.read().is_01() || !ap_const_lv25_1FFFF26.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_440_fu_2091_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_441_fu_1959_p0() {
    mul_ln1118_441_fu_1959_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_441_fu_1959_p2() {
    mul_ln1118_441_fu_1959_p2 = (!mul_ln1118_441_fu_1959_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_441_fu_1959_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_442_fu_1746_p0() {
    mul_ln1118_442_fu_1746_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_3332721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_442_fu_1746_p2() {
    mul_ln1118_442_fu_1746_p2 = (!mul_ln1118_442_fu_1746_p0.read().is_01() || !ap_const_lv26_109.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_442_fu_1746_p0.read()) * sc_biguint<26>(ap_const_lv26_109);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_443_fu_2344_p0() {
    mul_ln1118_443_fu_2344_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_443_fu_2344_p2() {
    mul_ln1118_443_fu_2344_p2 = (!mul_ln1118_443_fu_2344_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_443_fu_2344_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_444_fu_2104_p0() {
    mul_ln1118_444_fu_2104_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_444_fu_2104_p2() {
    mul_ln1118_444_fu_2104_p2 = (!mul_ln1118_444_fu_2104_p0.read().is_01() || !ap_const_lv25_1FFFF15.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_444_fu_2104_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_445_fu_1891_p0() {
    mul_ln1118_445_fu_1891_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_445_fu_1891_p2() {
    mul_ln1118_445_fu_1891_p2 = (!mul_ln1118_445_fu_1891_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_445_fu_1891_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_446_fu_1678_p0() {
    mul_ln1118_446_fu_1678_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_446_fu_1678_p2() {
    mul_ln1118_446_fu_1678_p2 = (!mul_ln1118_446_fu_1678_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_446_fu_1678_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_447_fu_1438_p0() {
    mul_ln1118_447_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_3332721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_447_fu_1438_p2() {
    mul_ln1118_447_fu_1438_p2 = (!mul_ln1118_447_fu_1438_p0.read().is_01() || !ap_const_lv26_3FFFED0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_447_fu_1438_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_448_fu_2090_p0() {
    mul_ln1118_448_fu_2090_p0 =  (sc_lv<16>) (sext_ln1118_288_fu_3332736_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_448_fu_2090_p2() {
    mul_ln1118_448_fu_2090_p2 = (!mul_ln1118_448_fu_2090_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_448_fu_2090_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_449_fu_2341_p0() {
    mul_ln1118_449_fu_2341_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_449_fu_2341_p2() {
    mul_ln1118_449_fu_2341_p2 = (!mul_ln1118_449_fu_2341_p0.read().is_01() || !ap_const_lv25_EF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_449_fu_2341_p0.read()) * sc_biguint<25>(ap_const_lv25_EF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_450_fu_1462_p0() {
    mul_ln1118_450_fu_1462_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_450_fu_1462_p2() {
    mul_ln1118_450_fu_1462_p2 = (!mul_ln1118_450_fu_1462_p0.read().is_01() || !ap_const_lv25_99.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_450_fu_1462_p0.read()) * sc_biguint<25>(ap_const_lv25_99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_451_fu_1944_p0() {
    mul_ln1118_451_fu_1944_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_3332729_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_451_fu_1944_p2() {
    mul_ln1118_451_fu_1944_p2 = (!mul_ln1118_451_fu_1944_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_451_fu_1944_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_452_fu_1731_p0() {
    mul_ln1118_452_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_452_fu_1731_p2() {
    mul_ln1118_452_fu_1731_p2 = (!mul_ln1118_452_fu_1731_p0.read().is_01() || !ap_const_lv25_C4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_452_fu_1731_p0.read()) * sc_biguint<25>(ap_const_lv25_C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_453_fu_2300_p0() {
    mul_ln1118_453_fu_2300_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_453_fu_2300_p2() {
    mul_ln1118_453_fu_2300_p2 = (!mul_ln1118_453_fu_2300_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_453_fu_2300_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_454_fu_2145_p0() {
    mul_ln1118_454_fu_2145_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_454_fu_2145_p2() {
    mul_ln1118_454_fu_2145_p2 = (!mul_ln1118_454_fu_2145_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_454_fu_2145_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_456_fu_1874_p0() {
    mul_ln1118_456_fu_1874_p0 =  (sc_lv<16>) (sext_ln1118_288_fu_3332736_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_456_fu_1874_p2() {
    mul_ln1118_456_fu_1874_p2 = (!mul_ln1118_456_fu_1874_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_456_fu_1874_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_457_fu_1661_p0() {
    mul_ln1118_457_fu_1661_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_457_fu_1661_p2() {
    mul_ln1118_457_fu_1661_p2 = (!mul_ln1118_457_fu_1661_p0.read().is_01() || !ap_const_lv25_B8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_457_fu_1661_p0.read()) * sc_biguint<25>(ap_const_lv25_B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_458_fu_1419_p0() {
    mul_ln1118_458_fu_1419_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_458_fu_1419_p2() {
    mul_ln1118_458_fu_1419_p2 = (!mul_ln1118_458_fu_1419_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_458_fu_1419_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_460_fu_2075_p0() {
    mul_ln1118_460_fu_2075_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_3332729_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_460_fu_2075_p2() {
    mul_ln1118_460_fu_2075_p2 = (!mul_ln1118_460_fu_2075_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_460_fu_2075_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_461_fu_1862_p0() {
    mul_ln1118_461_fu_1862_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_3332742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_461_fu_1862_p2() {
    mul_ln1118_461_fu_1862_p2 = (!mul_ln1118_461_fu_1862_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_461_fu_1862_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_462_fu_2431_p0() {
    mul_ln1118_462_fu_2431_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_3332729_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_462_fu_2431_p2() {
    mul_ln1118_462_fu_2431_p2 = (!mul_ln1118_462_fu_2431_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_462_fu_2431_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_463_fu_2305_p0() {
    mul_ln1118_463_fu_2305_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_3332708_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_463_fu_2305_p2() {
    mul_ln1118_463_fu_2305_p2 = (!mul_ln1118_463_fu_2305_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_463_fu_2305_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_464_fu_2005_p0() {
    mul_ln1118_464_fu_2005_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_3332721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_464_fu_2005_p2() {
    mul_ln1118_464_fu_2005_p2 = (!mul_ln1118_464_fu_2005_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_464_fu_2005_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_465_fu_1821_p0() {
    mul_ln1118_465_fu_1821_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_465_fu_1821_p2() {
    mul_ln1118_465_fu_1821_p2 = (!mul_ln1118_465_fu_1821_p0.read().is_01() || !ap_const_lv26_3FFFEF6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_465_fu_1821_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_466_fu_1608_p0() {
    mul_ln1118_466_fu_1608_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_466_fu_1608_p2() {
    mul_ln1118_466_fu_1608_p2 = (!mul_ln1118_466_fu_1608_p0.read().is_01() || !ap_const_lv25_D1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_466_fu_1608_p0.read()) * sc_biguint<25>(ap_const_lv25_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_467_fu_2177_p0() {
    mul_ln1118_467_fu_2177_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_467_fu_2177_p2() {
    mul_ln1118_467_fu_2177_p2 = (!mul_ln1118_467_fu_2177_p0.read().is_01() || !ap_const_lv25_9C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_467_fu_2177_p0.read()) * sc_biguint<25>(ap_const_lv25_9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_468_fu_2109_p0() {
    mul_ln1118_468_fu_2109_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_468_fu_2109_p2() {
    mul_ln1118_468_fu_2109_p2 = (!mul_ln1118_468_fu_2109_p0.read().is_01() || !ap_const_lv26_3FFFEEE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_468_fu_2109_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_469_fu_1896_p0() {
    mul_ln1118_469_fu_1896_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_469_fu_1896_p2() {
    mul_ln1118_469_fu_1896_p2 = (!mul_ln1118_469_fu_1896_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_469_fu_1896_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_470_fu_1509_p0() {
    mul_ln1118_470_fu_1509_p0 =  (sc_lv<16>) (sext_ln1118_296_fu_3333288_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_470_fu_1509_p2() {
    mul_ln1118_470_fu_1509_p2 = (!mul_ln1118_470_fu_1509_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_470_fu_1509_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_471_fu_2384_p0() {
    mul_ln1118_471_fu_2384_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_471_fu_2384_p2() {
    mul_ln1118_471_fu_2384_p2 = (!mul_ln1118_471_fu_2384_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_471_fu_2384_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_472_fu_1599_p0() {
    mul_ln1118_472_fu_1599_p0 =  (sc_lv<16>) (sext_ln1118_296_fu_3333288_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_472_fu_1599_p2() {
    mul_ln1118_472_fu_1599_p2 = (!mul_ln1118_472_fu_1599_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_472_fu_1599_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_473_fu_2386_p0() {
    mul_ln1118_473_fu_2386_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_473_fu_2386_p2() {
    mul_ln1118_473_fu_2386_p2 = (!mul_ln1118_473_fu_2386_p0.read().is_01() || !ap_const_lv25_8E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_473_fu_2386_p0.read()) * sc_biguint<25>(ap_const_lv25_8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_474_fu_2421_p0() {
    mul_ln1118_474_fu_2421_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_3333333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_474_fu_2421_p2() {
    mul_ln1118_474_fu_2421_p2 = (!mul_ln1118_474_fu_2421_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_474_fu_2421_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_475_fu_2012_p0() {
    mul_ln1118_475_fu_2012_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_475_fu_2012_p2() {
    mul_ln1118_475_fu_2012_p2 = (!mul_ln1118_475_fu_2012_p0.read().is_01() || !ap_const_lv25_1FFFF37.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_475_fu_2012_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_476_fu_2423_p0() {
    mul_ln1118_476_fu_2423_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_476_fu_2423_p2() {
    mul_ln1118_476_fu_2423_p2 = (!mul_ln1118_476_fu_2423_p0.read().is_01() || !ap_const_lv26_3FFFEEC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_476_fu_2423_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_477_fu_2424_p0() {
    mul_ln1118_477_fu_2424_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_477_fu_2424_p2() {
    mul_ln1118_477_fu_2424_p2 = (!mul_ln1118_477_fu_2424_p0.read().is_01() || !ap_const_lv25_1FFFF77.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_477_fu_2424_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_478_fu_1810_p0() {
    mul_ln1118_478_fu_1810_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_478_fu_1810_p2() {
    mul_ln1118_478_fu_1810_p2 = (!mul_ln1118_478_fu_1810_p0.read().is_01() || !ap_const_lv25_8F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_478_fu_1810_p0.read()) * sc_biguint<25>(ap_const_lv25_8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_479_fu_2426_p0() {
    mul_ln1118_479_fu_2426_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_479_fu_2426_p2() {
    mul_ln1118_479_fu_2426_p2 = (!mul_ln1118_479_fu_2426_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_479_fu_2426_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_480_fu_2427_p0() {
    mul_ln1118_480_fu_2427_p0 =  (sc_lv<16>) (sext_ln1118_296_fu_3333288_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_480_fu_2427_p2() {
    mul_ln1118_480_fu_2427_p2 = (!mul_ln1118_480_fu_2427_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_480_fu_2427_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_481_fu_2428_p0() {
    mul_ln1118_481_fu_2428_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_481_fu_2428_p2() {
    mul_ln1118_481_fu_2428_p2 = (!mul_ln1118_481_fu_2428_p0.read().is_01() || !ap_const_lv25_E1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_481_fu_2428_p0.read()) * sc_biguint<25>(ap_const_lv25_E1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_482_fu_2019_p0() {
    mul_ln1118_482_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_482_fu_2019_p2() {
    mul_ln1118_482_fu_2019_p2 = (!mul_ln1118_482_fu_2019_p0.read().is_01() || !ap_const_lv26_13C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_482_fu_2019_p0.read()) * sc_biguint<26>(ap_const_lv26_13C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_483_fu_2020_p0() {
    mul_ln1118_483_fu_2020_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_3333333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_483_fu_2020_p2() {
    mul_ln1118_483_fu_2020_p2 = (!mul_ln1118_483_fu_2020_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_483_fu_2020_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_484_fu_1611_p0() {
    mul_ln1118_484_fu_1611_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_484_fu_1611_p2() {
    mul_ln1118_484_fu_1611_p2 = (!mul_ln1118_484_fu_1611_p0.read().is_01() || !ap_const_lv26_3FFFECA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_484_fu_1611_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_485_fu_2022_p0() {
    mul_ln1118_485_fu_2022_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_485_fu_2022_p2() {
    mul_ln1118_485_fu_2022_p2 = (!mul_ln1118_485_fu_2022_p0.read().is_01() || !ap_const_lv25_CC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_485_fu_2022_p0.read()) * sc_biguint<25>(ap_const_lv25_CC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_486_fu_2023_p0() {
    mul_ln1118_486_fu_2023_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_486_fu_2023_p2() {
    mul_ln1118_486_fu_2023_p2 = (!mul_ln1118_486_fu_2023_p0.read().is_01() || !ap_const_lv25_A5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_486_fu_2023_p0.read()) * sc_biguint<25>(ap_const_lv25_A5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_487_fu_2434_p0() {
    mul_ln1118_487_fu_2434_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_487_fu_2434_p2() {
    mul_ln1118_487_fu_2434_p2 = (!mul_ln1118_487_fu_2434_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_487_fu_2434_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_489_fu_1615_p0() {
    mul_ln1118_489_fu_1615_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_3333313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_489_fu_1615_p2() {
    mul_ln1118_489_fu_1615_p2 = (!mul_ln1118_489_fu_1615_p0.read().is_01() || !ap_const_lv26_3FFFEE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_489_fu_1615_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_490_fu_2026_p0() {
    mul_ln1118_490_fu_2026_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_490_fu_2026_p2() {
    mul_ln1118_490_fu_2026_p2 = (!mul_ln1118_490_fu_2026_p0.read().is_01() || !ap_const_lv25_1FFFF58.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_490_fu_2026_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_491_fu_1864_p0() {
    mul_ln1118_491_fu_1864_p0 = sext_ln1118_300_fu_3333328_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_491_fu_1864_p2() {
    mul_ln1118_491_fu_1864_p2 = (!mul_ln1118_491_fu_1864_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_491_fu_1864_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_492_fu_2438_p0() {
    mul_ln1118_492_fu_2438_p0 =  (sc_lv<16>) (sext_ln1118_297_fu_3333295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_492_fu_2438_p2() {
    mul_ln1118_492_fu_2438_p2 = (!mul_ln1118_492_fu_2438_p0.read().is_01() || !ap_const_lv25_1FFFF57.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_492_fu_2438_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_493_fu_1824_p0() {
    mul_ln1118_493_fu_1824_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_493_fu_1824_p2() {
    mul_ln1118_493_fu_1824_p2 = (!mul_ln1118_493_fu_1824_p0.read().is_01() || !ap_const_lv25_1FFFF2E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_493_fu_1824_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_494_fu_2030_p0() {
    mul_ln1118_494_fu_2030_p0 =  (sc_lv<16>) (sext_ln1118_309_fu_3333851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_494_fu_2030_p2() {
    mul_ln1118_494_fu_2030_p2 = (!mul_ln1118_494_fu_2030_p0.read().is_01() || !ap_const_lv26_144.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_494_fu_2030_p0.read()) * sc_biguint<26>(ap_const_lv26_144);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_495_fu_1826_p0() {
    mul_ln1118_495_fu_1826_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_495_fu_1826_p2() {
    mul_ln1118_495_fu_1826_p2 = (!mul_ln1118_495_fu_1826_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_495_fu_1826_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_496_fu_1827_p0() {
    mul_ln1118_496_fu_1827_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_496_fu_1827_p2() {
    mul_ln1118_496_fu_1827_p2 = (!mul_ln1118_496_fu_1827_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_496_fu_1827_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_497_fu_1623_p0() {
    mul_ln1118_497_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_497_fu_1623_p2() {
    mul_ln1118_497_fu_1623_p2 = (!mul_ln1118_497_fu_1623_p0.read().is_01() || !ap_const_lv25_D7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_497_fu_1623_p0.read()) * sc_biguint<25>(ap_const_lv25_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_498_fu_1624_p0() {
    mul_ln1118_498_fu_1624_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_498_fu_1624_p2() {
    mul_ln1118_498_fu_1624_p2 = (!mul_ln1118_498_fu_1624_p0.read().is_01() || !ap_const_lv25_1FFFF18.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_498_fu_1624_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF18);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_499_fu_1670_p0() {
    mul_ln1118_499_fu_1670_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_499_fu_1670_p2() {
    mul_ln1118_499_fu_1670_p2 = (!mul_ln1118_499_fu_1670_p0.read().is_01() || !ap_const_lv25_1FFFF27.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_499_fu_1670_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_500_fu_2268_p0() {
    mul_ln1118_500_fu_2268_p0 =  (sc_lv<16>) (sext_ln1118_309_fu_3333851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_500_fu_2268_p2() {
    mul_ln1118_500_fu_2268_p2 = (!mul_ln1118_500_fu_2268_p0.read().is_01() || !ap_const_lv26_3FFFEC7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_500_fu_2268_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_501_fu_2055_p0() {
    mul_ln1118_501_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_501_fu_2055_p2() {
    mul_ln1118_501_fu_2055_p2 = (!mul_ln1118_501_fu_2055_p0.read().is_01() || !ap_const_lv25_1FFFF2C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_501_fu_2055_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_502_fu_1815_p0() {
    mul_ln1118_502_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_309_fu_3333851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_502_fu_1815_p2() {
    mul_ln1118_502_fu_1815_p2 = (!mul_ln1118_502_fu_1815_p0.read().is_01() || !ap_const_lv26_127.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_502_fu_1815_p0.read()) * sc_biguint<26>(ap_const_lv26_127);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_503_fu_1629_p0() {
    mul_ln1118_503_fu_1629_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_503_fu_1629_p2() {
    mul_ln1118_503_fu_1629_p2 = (!mul_ln1118_503_fu_1629_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_503_fu_1629_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_504_fu_2092_p0() {
    mul_ln1118_504_fu_2092_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_504_fu_2092_p2() {
    mul_ln1118_504_fu_2092_p2 = (!mul_ln1118_504_fu_2092_p0.read().is_01() || !ap_const_lv25_1FFFF54.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_504_fu_2092_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_505_fu_1960_p0() {
    mul_ln1118_505_fu_1960_p0 =  (sc_lv<16>) (sext_ln1118_309_fu_3333851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_505_fu_1960_p2() {
    mul_ln1118_505_fu_1960_p2 = (!mul_ln1118_505_fu_1960_p0.read().is_01() || !ap_const_lv26_3FFFE92.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_505_fu_1960_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_506_fu_1774_p0() {
    mul_ln1118_506_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_506_fu_1774_p2() {
    mul_ln1118_506_fu_1774_p2 = (!mul_ln1118_506_fu_1774_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_506_fu_1774_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_507_fu_2345_p0() {
    mul_ln1118_507_fu_2345_p0 =  (sc_lv<16>) (sext_ln1118_309_fu_3333851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_507_fu_2345_p2() {
    mul_ln1118_507_fu_2345_p2 = (!mul_ln1118_507_fu_2345_p0.read().is_01() || !ap_const_lv26_3FFFEC8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_507_fu_2345_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_508_fu_2343_p0() {
    mul_ln1118_508_fu_2343_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_508_fu_2343_p2() {
    mul_ln1118_508_fu_2343_p2 = (!mul_ln1118_508_fu_2343_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_508_fu_2343_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_509_fu_1435_p0() {
    mul_ln1118_509_fu_1435_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_509_fu_1435_p2() {
    mul_ln1118_509_fu_1435_p2 = (!mul_ln1118_509_fu_1435_p0.read().is_01() || !ap_const_lv25_1FFFF49.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_509_fu_1435_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_510_fu_1946_p0() {
    mul_ln1118_510_fu_1946_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_510_fu_1946_p2() {
    mul_ln1118_510_fu_1946_p2 = (!mul_ln1118_510_fu_1946_p0.read().is_01() || !ap_const_lv25_1FFFF28.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_510_fu_1946_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_511_fu_1646_p0() {
    mul_ln1118_511_fu_1646_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_3333845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_511_fu_1646_p2() {
    mul_ln1118_511_fu_1646_p2 = (!mul_ln1118_511_fu_1646_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_511_fu_1646_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_512_fu_2302_p0() {
    mul_ln1118_512_fu_2302_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_512_fu_2302_p2() {
    mul_ln1118_512_fu_2302_p2 = (!mul_ln1118_512_fu_2302_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_512_fu_2302_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_513_fu_2118_p0() {
    mul_ln1118_513_fu_2118_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_513_fu_2118_p2() {
    mul_ln1118_513_fu_2118_p2 = (!mul_ln1118_513_fu_2118_p0.read().is_01() || !ap_const_lv25_E4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_513_fu_2118_p0.read()) * sc_biguint<25>(ap_const_lv25_E4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_514_fu_1876_p0() {
    mul_ln1118_514_fu_1876_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_514_fu_1876_p2() {
    mul_ln1118_514_fu_1876_p2 = (!mul_ln1118_514_fu_1876_p0.read().is_01() || !ap_const_lv24_FFFF8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_514_fu_1876_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_515_fu_2416_p0() {
    mul_ln1118_515_fu_2416_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_3333845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_515_fu_2416_p2() {
    mul_ln1118_515_fu_2416_p2 = (!mul_ln1118_515_fu_2416_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_515_fu_2416_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_516_fu_1450_p0() {
    mul_ln1118_516_fu_1450_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_516_fu_1450_p2() {
    mul_ln1118_516_fu_1450_p2 = (!mul_ln1118_516_fu_1450_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_516_fu_1450_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_517_fu_2077_p0() {
    mul_ln1118_517_fu_2077_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_3333860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_517_fu_2077_p2() {
    mul_ln1118_517_fu_2077_p2 = (!mul_ln1118_517_fu_2077_p0.read().is_01() || !ap_const_lv25_EB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_517_fu_2077_p0.read()) * sc_biguint<25>(ap_const_lv25_EB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_518_fu_1835_p0() {
    mul_ln1118_518_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_3333875_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_518_fu_1835_p2() {
    mul_ln1118_518_fu_1835_p2 = (!mul_ln1118_518_fu_1835_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_518_fu_1835_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_519_fu_2404_p0() {
    mul_ln1118_519_fu_2404_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_519_fu_2404_p2() {
    mul_ln1118_519_fu_2404_p2 = (!mul_ln1118_519_fu_2404_p0.read().is_01() || !ap_const_lv25_C8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_519_fu_2404_p0.read()) * sc_biguint<25>(ap_const_lv25_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_520_fu_2191_p0() {
    mul_ln1118_520_fu_2191_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_520_fu_2191_p2() {
    mul_ln1118_520_fu_2191_p2 = (!mul_ln1118_520_fu_2191_p0.read().is_01() || !ap_const_lv25_1FFFF72.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_520_fu_2191_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_521_fu_1978_p0() {
    mul_ln1118_521_fu_1978_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_521_fu_1978_p2() {
    mul_ln1118_521_fu_1978_p2 = (!mul_ln1118_521_fu_1978_p0.read().is_01() || !ap_const_lv26_12F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_521_fu_1978_p0.read()) * sc_biguint<26>(ap_const_lv26_12F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_522_fu_1765_p0() {
    mul_ln1118_522_fu_1765_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_522_fu_1765_p2() {
    mul_ln1118_522_fu_1765_p2 = (!mul_ln1118_522_fu_1765_p0.read().is_01() || !ap_const_lv26_3FFFEEF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_522_fu_1765_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_523_fu_1523_p0() {
    mul_ln1118_523_fu_1523_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_523_fu_1523_p2() {
    mul_ln1118_523_fu_1523_p2 = (!mul_ln1118_523_fu_1523_p0.read().is_01() || !ap_const_lv26_121.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_523_fu_1523_p0.read()) * sc_biguint<26>(ap_const_lv26_121);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_524_fu_2150_p0() {
    mul_ln1118_524_fu_2150_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_524_fu_2150_p2() {
    mul_ln1118_524_fu_2150_p2 = (!mul_ln1118_524_fu_2150_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_524_fu_2150_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_525_fu_2082_p0() {
    mul_ln1118_525_fu_2082_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_525_fu_2082_p2() {
    mul_ln1118_525_fu_2082_p2 = (!mul_ln1118_525_fu_2082_p0.read().is_01() || !ap_const_lv25_1FFFF5A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_525_fu_2082_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_526_fu_1724_p0() {
    mul_ln1118_526_fu_1724_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_3334440_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_526_fu_1724_p2() {
    mul_ln1118_526_fu_1724_p2 = (!mul_ln1118_526_fu_1724_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_526_fu_1724_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_527_fu_1787_p0() {
    mul_ln1118_527_fu_1787_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_527_fu_1787_p2() {
    mul_ln1118_527_fu_1787_p2 = (!mul_ln1118_527_fu_1787_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_527_fu_1787_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_528_fu_1993_p0() {
    mul_ln1118_528_fu_1993_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_528_fu_1993_p2() {
    mul_ln1118_528_fu_1993_p2 = (!mul_ln1118_528_fu_1993_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_528_fu_1993_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_529_fu_2370_p0() {
    mul_ln1118_529_fu_2370_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_529_fu_2370_p2() {
    mul_ln1118_529_fu_2370_p2 = (!mul_ln1118_529_fu_2370_p0.read().is_01() || !ap_const_lv25_1FFFF62.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_529_fu_2370_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_530_fu_2200_p0() {
    mul_ln1118_530_fu_2200_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_530_fu_2200_p2() {
    mul_ln1118_530_fu_2200_p2 = (!mul_ln1118_530_fu_2200_p0.read().is_01() || !ap_const_lv25_1FFFF63.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_530_fu_2200_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_531_fu_2201_p0() {
    mul_ln1118_531_fu_2201_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_531_fu_2201_p2() {
    mul_ln1118_531_fu_2201_p2 = (!mul_ln1118_531_fu_2201_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_531_fu_2201_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_532_fu_1587_p0() {
    mul_ln1118_532_fu_1587_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_532_fu_1587_p2() {
    mul_ln1118_532_fu_1587_p2 = (!mul_ln1118_532_fu_1587_p0.read().is_01() || !ap_const_lv26_128.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_532_fu_1587_p0.read()) * sc_biguint<26>(ap_const_lv26_128);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_533_fu_2203_p0() {
    mul_ln1118_533_fu_2203_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_3334440_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_533_fu_2203_p2() {
    mul_ln1118_533_fu_2203_p2 = (!mul_ln1118_533_fu_2203_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_533_fu_2203_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_534_fu_2204_p0() {
    mul_ln1118_534_fu_2204_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_3334405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_534_fu_2204_p2() {
    mul_ln1118_534_fu_2204_p2 = (!mul_ln1118_534_fu_2204_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_534_fu_2204_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_535_fu_1795_p0() {
    mul_ln1118_535_fu_1795_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_3334405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_535_fu_1795_p2() {
    mul_ln1118_535_fu_1795_p2 = (!mul_ln1118_535_fu_1795_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_535_fu_1795_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_536_fu_2001_p0() {
    mul_ln1118_536_fu_2001_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_536_fu_2001_p2() {
    mul_ln1118_536_fu_2001_p2 = (!mul_ln1118_536_fu_2001_p0.read().is_01() || !ap_const_lv25_1FFFF14.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_536_fu_2001_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_537_fu_1592_p0() {
    mul_ln1118_537_fu_1592_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_3334405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_537_fu_1592_p2() {
    mul_ln1118_537_fu_1592_p2 = (!mul_ln1118_537_fu_1592_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_537_fu_1592_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_538_fu_2003_p0() {
    mul_ln1118_538_fu_2003_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_538_fu_2003_p2() {
    mul_ln1118_538_fu_2003_p2 = (!mul_ln1118_538_fu_2003_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_538_fu_2003_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_539_fu_2004_p0() {
    mul_ln1118_539_fu_2004_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_539_fu_2004_p2() {
    mul_ln1118_539_fu_2004_p2 = (!mul_ln1118_539_fu_2004_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_539_fu_2004_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_540_fu_1561_p0() {
    mul_ln1118_540_fu_1561_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_540_fu_1561_p2() {
    mul_ln1118_540_fu_1561_p2 = (!mul_ln1118_540_fu_1561_p0.read().is_01() || !ap_const_lv26_105.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_540_fu_1561_p0.read()) * sc_biguint<26>(ap_const_lv26_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_541_fu_2006_p0() {
    mul_ln1118_541_fu_2006_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_541_fu_2006_p2() {
    mul_ln1118_541_fu_2006_p2 = (!mul_ln1118_541_fu_2006_p0.read().is_01() || !ap_const_lv26_131.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_541_fu_2006_p0.read()) * sc_biguint<26>(ap_const_lv26_131);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_542_fu_1939_p0() {
    mul_ln1118_542_fu_1939_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_3334412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_542_fu_1939_p2() {
    mul_ln1118_542_fu_1939_p2 = (!mul_ln1118_542_fu_1939_p0.read().is_01() || !ap_const_lv26_3FFFEC7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_542_fu_1939_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_543_fu_1803_p0() {
    mul_ln1118_543_fu_1803_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_3334424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_543_fu_1803_p2() {
    mul_ln1118_543_fu_1803_p2 = (!mul_ln1118_543_fu_1803_p0.read().is_01() || !ap_const_lv25_A9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_543_fu_1803_p0.read()) * sc_biguint<25>(ap_const_lv25_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_544_fu_2009_p0() {
    mul_ln1118_544_fu_2009_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_544_fu_2009_p2() {
    mul_ln1118_544_fu_2009_p2 = (!mul_ln1118_544_fu_2009_p0.read().is_01() || !ap_const_lv25_1FFFF27.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_544_fu_2009_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_545_fu_2420_p0() {
    mul_ln1118_545_fu_2420_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_545_fu_2420_p2() {
    mul_ln1118_545_fu_2420_p2 = (!mul_ln1118_545_fu_2420_p0.read().is_01() || !ap_const_lv26_3FFFEE7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_545_fu_2420_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_546_fu_2011_p0() {
    mul_ln1118_546_fu_2011_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_546_fu_2011_p2() {
    mul_ln1118_546_fu_2011_p2 = (!mul_ln1118_546_fu_2011_p0.read().is_01() || !ap_const_lv26_10F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_546_fu_2011_p0.read()) * sc_biguint<26>(ap_const_lv26_10F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_547_fu_2217_p0() {
    mul_ln1118_547_fu_2217_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_547_fu_2217_p2() {
    mul_ln1118_547_fu_2217_p2 = (!mul_ln1118_547_fu_2217_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_547_fu_2217_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_548_fu_2321_p0() {
    mul_ln1118_548_fu_2321_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_548_fu_2321_p2() {
    mul_ln1118_548_fu_2321_p2 = (!mul_ln1118_548_fu_2321_p0.read().is_01() || !ap_const_lv25_B0.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_548_fu_2321_p0.read()) * sc_biguint<25>(ap_const_lv25_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_549_fu_1980_p0() {
    mul_ln1118_549_fu_1980_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_3334965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_549_fu_1980_p2() {
    mul_ln1118_549_fu_1980_p2 = (!mul_ln1118_549_fu_1980_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_549_fu_1980_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_550_fu_2220_p0() {
    mul_ln1118_550_fu_2220_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_3334965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_550_fu_2220_p2() {
    mul_ln1118_550_fu_2220_p2 = (!mul_ln1118_550_fu_2220_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_550_fu_2220_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_551_fu_2016_p0() {
    mul_ln1118_551_fu_2016_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_551_fu_2016_p2() {
    mul_ln1118_551_fu_2016_p2 = (!mul_ln1118_551_fu_2016_p0.read().is_01() || !ap_const_lv25_1FFFF43.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_551_fu_2016_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_552_fu_2222_p0() {
    mul_ln1118_552_fu_2222_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_552_fu_2222_p2() {
    mul_ln1118_552_fu_2222_p2 = (!mul_ln1118_552_fu_2222_p0.read().is_01() || !ap_const_lv26_12E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_552_fu_2222_p0.read()) * sc_biguint<26>(ap_const_lv26_12E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_553_fu_2405_p0() {
    mul_ln1118_553_fu_2405_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_553_fu_2405_p2() {
    mul_ln1118_553_fu_2405_p2 = (!mul_ln1118_553_fu_2405_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_553_fu_2405_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_554_fu_2165_p0() {
    mul_ln1118_554_fu_2165_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_554_fu_2165_p2() {
    mul_ln1118_554_fu_2165_p2 = (!mul_ln1118_554_fu_2165_p0.read().is_01() || !ap_const_lv25_B3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_554_fu_2165_p0.read()) * sc_biguint<25>(ap_const_lv25_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_555_fu_1952_p0() {
    mul_ln1118_555_fu_1952_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_3334965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_555_fu_1952_p2() {
    mul_ln1118_555_fu_1952_p2 = (!mul_ln1118_555_fu_1952_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_555_fu_1952_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_556_fu_1739_p0() {
    mul_ln1118_556_fu_1739_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_556_fu_1739_p2() {
    mul_ln1118_556_fu_1739_p2 = (!mul_ln1118_556_fu_1739_p0.read().is_01() || !ap_const_lv26_3FFFE8B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_556_fu_1739_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_557_fu_2337_p0() {
    mul_ln1118_557_fu_2337_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_557_fu_2337_p2() {
    mul_ln1118_557_fu_2337_p2 = (!mul_ln1118_557_fu_2337_p0.read().is_01() || !ap_const_lv26_107.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_557_fu_2337_p0.read()) * sc_biguint<26>(ap_const_lv26_107);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_558_fu_2097_p0() {
    mul_ln1118_558_fu_2097_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_558_fu_2097_p2() {
    mul_ln1118_558_fu_2097_p2 = (!mul_ln1118_558_fu_2097_p0.read().is_01() || !ap_const_lv26_154.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_558_fu_2097_p0.read()) * sc_biguint<26>(ap_const_lv26_154);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_559_fu_1722_p0() {
    mul_ln1118_559_fu_1722_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_559_fu_1722_p2() {
    mul_ln1118_559_fu_1722_p2 = (!mul_ln1118_559_fu_1722_p0.read().is_01() || !ap_const_lv26_131.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_559_fu_1722_p0.read()) * sc_biguint<26>(ap_const_lv26_131);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_560_fu_1617_p0() {
    mul_ln1118_560_fu_1617_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_560_fu_1617_p2() {
    mul_ln1118_560_fu_1617_p2 = (!mul_ln1118_560_fu_1617_p0.read().is_01() || !ap_const_lv25_1FFFF77.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_560_fu_1617_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_561_fu_1485_p0() {
    mul_ln1118_561_fu_1485_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_3334965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_561_fu_1485_p2() {
    mul_ln1118_561_fu_1485_p2 = (!mul_ln1118_561_fu_1485_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_561_fu_1485_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_562_fu_1921_p0() {
    mul_ln1118_562_fu_1921_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_3334965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_562_fu_1921_p2() {
    mul_ln1118_562_fu_1921_p2 = (!mul_ln1118_562_fu_1921_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_562_fu_1921_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_563_fu_1897_p0() {
    mul_ln1118_563_fu_1897_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_563_fu_1897_p2() {
    mul_ln1118_563_fu_1897_p2 = (!mul_ln1118_563_fu_1897_p0.read().is_01() || !ap_const_lv25_1FFFF5A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_563_fu_1897_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_564_fu_1476_p0() {
    mul_ln1118_564_fu_1476_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_3334974_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_564_fu_1476_p2() {
    mul_ln1118_564_fu_1476_p2 = (!mul_ln1118_564_fu_1476_p0.read().is_01() || !ap_const_lv26_13A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_564_fu_1476_p0.read()) * sc_biguint<26>(ap_const_lv26_13A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_565_fu_2132_p0() {
    mul_ln1118_565_fu_2132_p0 = sext_ln1118_329_fu_3334960_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_565_fu_2132_p2() {
    mul_ln1118_565_fu_2132_p2 = (!mul_ln1118_565_fu_2132_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_565_fu_2132_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_566_fu_1861_p0() {
    mul_ln1118_566_fu_1861_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_566_fu_1861_p2() {
    mul_ln1118_566_fu_1861_p2 = (!mul_ln1118_566_fu_1861_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_566_fu_1861_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_567_fu_1735_p0() {
    mul_ln1118_567_fu_1735_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_3334986_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_567_fu_1735_p2() {
    mul_ln1118_567_fu_1735_p2 = (!mul_ln1118_567_fu_1735_p0.read().is_01() || !ap_const_lv25_1FFFF2A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_567_fu_1735_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_568_fu_2246_p0() {
    mul_ln1118_568_fu_2246_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_568_fu_2246_p2() {
    mul_ln1118_568_fu_2246_p2 = (!mul_ln1118_568_fu_2246_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_568_fu_2246_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_569_fu_2062_p0() {
    mul_ln1118_569_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_569_fu_2062_p2() {
    mul_ln1118_569_fu_2062_p2 = (!mul_ln1118_569_fu_2062_p0.read().is_01() || !ap_const_lv25_1FFFF32.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_569_fu_2062_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_570_fu_1820_p0() {
    mul_ln1118_570_fu_1820_p0 =  (sc_lv<16>) (sext_ln1118_345_fu_3335536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_570_fu_1820_p2() {
    mul_ln1118_570_fu_1820_p2 = (!mul_ln1118_570_fu_1820_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_570_fu_1820_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_571_fu_1607_p0() {
    mul_ln1118_571_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_571_fu_1607_p2() {
    mul_ln1118_571_fu_1607_p2 = (!mul_ln1118_571_fu_1607_p0.read().is_01() || !ap_const_lv25_ED.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_571_fu_1607_p0.read()) * sc_biguint<25>(ap_const_lv25_ED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_573_fu_2176_p0() {
    mul_ln1118_573_fu_2176_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_573_fu_2176_p2() {
    mul_ln1118_573_fu_2176_p2 = (!mul_ln1118_573_fu_2176_p0.read().is_01() || !ap_const_lv25_1FFFF2F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_573_fu_2176_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_574_fu_2021_p0() {
    mul_ln1118_574_fu_2021_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_3335492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_574_fu_2021_p2() {
    mul_ln1118_574_fu_2021_p2 = (!mul_ln1118_574_fu_2021_p0.read().is_01() || !ap_const_lv26_3FFFEE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_574_fu_2021_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_575_fu_1866_p0() {
    mul_ln1118_575_fu_1866_p0 =  (sc_lv<16>) (sext_ln1118_344_fu_3335531_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_575_fu_1866_p2() {
    mul_ln1118_575_fu_1866_p2 = (!mul_ln1118_575_fu_1866_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_575_fu_1866_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_576_fu_2348_p0() {
    mul_ln1118_576_fu_2348_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_576_fu_2348_p2() {
    mul_ln1118_576_fu_2348_p2 = (!mul_ln1118_576_fu_2348_p0.read().is_01() || !ap_const_lv25_1FFFF3E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_576_fu_2348_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_577_fu_2164_p0() {
    mul_ln1118_577_fu_2164_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_577_fu_2164_p2() {
    mul_ln1118_577_fu_2164_p2 = (!mul_ln1118_577_fu_2164_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_577_fu_2164_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_578_fu_1951_p0() {
    mul_ln1118_578_fu_1951_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_3335492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_578_fu_1951_p2() {
    mul_ln1118_578_fu_1951_p2 = (!mul_ln1118_578_fu_1951_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_578_fu_1951_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_579_fu_1709_p0() {
    mul_ln1118_579_fu_1709_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_579_fu_1709_p2() {
    mul_ln1118_579_fu_1709_p2 = (!mul_ln1118_579_fu_1709_p0.read().is_01() || !ap_const_lv25_B1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_579_fu_1709_p0.read()) * sc_biguint<25>(ap_const_lv25_B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_580_fu_1554_p0() {
    mul_ln1118_580_fu_1554_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_580_fu_1554_p2() {
    mul_ln1118_580_fu_1554_p2 = (!mul_ln1118_580_fu_1554_p0.read().is_01() || !ap_const_lv25_1FFFF68.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_580_fu_1554_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_581_fu_2123_p0() {
    mul_ln1118_581_fu_2123_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_3335492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_581_fu_2123_p2() {
    mul_ln1118_581_fu_2123_p2 = (!mul_ln1118_581_fu_2123_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_581_fu_2123_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_582_fu_1910_p0() {
    mul_ln1118_582_fu_1910_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_582_fu_1910_p2() {
    mul_ln1118_582_fu_1910_p2 = (!mul_ln1118_582_fu_1910_p0.read().is_01() || !ap_const_lv25_C2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_582_fu_1910_p0.read()) * sc_biguint<25>(ap_const_lv25_C2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_583_fu_1566_p0() {
    mul_ln1118_583_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_583_fu_1566_p2() {
    mul_ln1118_583_fu_1566_p2 = (!mul_ln1118_583_fu_1566_p0.read().is_01() || !ap_const_lv25_E3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_583_fu_1566_p0.read()) * sc_biguint<25>(ap_const_lv25_E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_584_fu_2353_p0() {
    mul_ln1118_584_fu_2353_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_584_fu_2353_p2() {
    mul_ln1118_584_fu_2353_p2 = (!mul_ln1118_584_fu_2353_p0.read().is_01() || !ap_const_lv25_1FFFF11.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_584_fu_2353_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_585_fu_1568_p0() {
    mul_ln1118_585_fu_1568_p0 =  (sc_lv<16>) (sext_ln1118_345_fu_3335536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_585_fu_1568_p2() {
    mul_ln1118_585_fu_1568_p2 = (!mul_ln1118_585_fu_1568_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_585_fu_1568_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_586_fu_2389_p0() {
    mul_ln1118_586_fu_2389_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_586_fu_2389_p2() {
    mul_ln1118_586_fu_2389_p2 = (!mul_ln1118_586_fu_2389_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_586_fu_2389_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_588_fu_2390_p0() {
    mul_ln1118_588_fu_2390_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_588_fu_2390_p2() {
    mul_ln1118_588_fu_2390_p2 = (!mul_ln1118_588_fu_2390_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_588_fu_2390_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_589_fu_1947_p0() {
    mul_ln1118_589_fu_1947_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_589_fu_1947_p2() {
    mul_ln1118_589_fu_1947_p2 = (!mul_ln1118_589_fu_1947_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_589_fu_1947_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_590_fu_2392_p0() {
    mul_ln1118_590_fu_2392_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_590_fu_2392_p2() {
    mul_ln1118_590_fu_2392_p2 = (!mul_ln1118_590_fu_2392_p0.read().is_01() || !ap_const_lv25_C1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_590_fu_2392_p0.read()) * sc_biguint<25>(ap_const_lv25_C1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_591_fu_1778_p0() {
    mul_ln1118_591_fu_1778_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_591_fu_1778_p2() {
    mul_ln1118_591_fu_1778_p2 = (!mul_ln1118_591_fu_1778_p0.read().is_01() || !ap_const_lv25_DC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_591_fu_1778_p0.read()) * sc_biguint<25>(ap_const_lv25_DC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_592_fu_2394_p0() {
    mul_ln1118_592_fu_2394_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_3335492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_592_fu_2394_p2() {
    mul_ln1118_592_fu_2394_p2 = (!mul_ln1118_592_fu_2394_p0.read().is_01() || !ap_const_lv26_3FFFEDE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_592_fu_2394_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_593_fu_2395_p0() {
    mul_ln1118_593_fu_2395_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_3335492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_593_fu_2395_p2() {
    mul_ln1118_593_fu_2395_p2 = (!mul_ln1118_593_fu_2395_p0.read().is_01() || !ap_const_lv26_3FFFECD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_593_fu_2395_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_594_fu_2157_p0() {
    mul_ln1118_594_fu_2157_p0 =  (sc_lv<16>) (sext_ln1118_342_fu_3335505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_594_fu_2157_p2() {
    mul_ln1118_594_fu_2157_p2 = (!mul_ln1118_594_fu_2157_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_594_fu_2157_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_595_fu_1782_p0() {
    mul_ln1118_595_fu_1782_p0 =  (sc_lv<16>) (sext_ln1118_343_fu_3335521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_595_fu_1782_p2() {
    mul_ln1118_595_fu_1782_p2 = (!mul_ln1118_595_fu_1782_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_595_fu_1782_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_596_fu_1783_p0() {
    mul_ln1118_596_fu_1783_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_3336045_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_596_fu_1783_p2() {
    mul_ln1118_596_fu_1783_p2 = (!mul_ln1118_596_fu_1783_p0.read().is_01() || !ap_const_lv25_1FFFF4D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_596_fu_1783_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4D);
}

}

