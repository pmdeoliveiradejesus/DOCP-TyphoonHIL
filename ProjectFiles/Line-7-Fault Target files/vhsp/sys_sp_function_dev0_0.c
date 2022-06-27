// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#include "math.h"
#include <stdint.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components

// Header files from additional sources (Advanced C Function)

// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines




































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
float _measurements_block___1_irmsa_instantaneous__out;
float _measurements_block___1_irmsb_instantaneous__out;
float _measurements_block___1_irmsc_instantaneous__out;
float _measurements_block___13_irmsa_instantaneous__out;
float _measurements_block___13_irmsb_instantaneous__out;
float _measurements_block___13_irmsc_instantaneous__out;
float _measurements_block___14_irmsa_instantaneous__out;
float _measurements_block___14_irmsb_instantaneous__out;
float _measurements_block___14_irmsc_instantaneous__out;
float _measurements_block___5_irmsa_instantaneous__out;
float _measurements_block___5_irmsb_instantaneous__out;
float _measurements_block___5_irmsc_instantaneous__out;
float _measurements_block___7_irmsa_instantaneous__out;
float _measurements_block___7_irmsb_instantaneous__out;
float _measurements_block___7_irmsc_instantaneous__out;
float _measurements_block___9_irmsa_instantaneous__out;
float _measurements_block___9_irmsb_instantaneous__out;
float _measurements_block___9_irmsc_instantaneous__out;
float _vrms8_instantaneous__out;
float _measurements_block___1_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___1_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___1_irmsa_rms_calc_fast__var_zc;
float _measurements_block___1_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___1_irmsa_rms_calc_slow__var_rms;
float _measurements_block___1_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___1_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___1_irmsb_rms_calc_fast__var_zc;
float _measurements_block___1_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___1_irmsb_rms_calc_slow__var_rms;
float _measurements_block___1_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___1_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___1_irmsc_rms_calc_fast__var_zc;
float _measurements_block___1_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___1_irmsc_rms_calc_slow__var_rms;
float _measurements_block___13_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___13_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___13_irmsa_rms_calc_fast__var_zc;
float _measurements_block___13_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___13_irmsa_rms_calc_slow__var_rms;
float _measurements_block___13_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___13_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___13_irmsb_rms_calc_fast__var_zc;
float _measurements_block___13_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___13_irmsb_rms_calc_slow__var_rms;
float _measurements_block___13_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___13_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___13_irmsc_rms_calc_fast__var_zc;
float _measurements_block___13_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___13_irmsc_rms_calc_slow__var_rms;
float _measurements_block___14_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___14_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___14_irmsa_rms_calc_fast__var_zc;
float _measurements_block___14_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___14_irmsa_rms_calc_slow__var_rms;
float _measurements_block___14_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___14_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___14_irmsb_rms_calc_fast__var_zc;
float _measurements_block___14_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___14_irmsb_rms_calc_slow__var_rms;
float _measurements_block___14_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___14_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___14_irmsc_rms_calc_fast__var_zc;
float _measurements_block___14_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___14_irmsc_rms_calc_slow__var_rms;
float _measurements_block___5_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___5_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___5_irmsa_rms_calc_fast__var_zc;
float _measurements_block___5_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___5_irmsa_rms_calc_slow__var_rms;
float _measurements_block___5_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___5_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___5_irmsb_rms_calc_fast__var_zc;
float _measurements_block___5_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___5_irmsb_rms_calc_slow__var_rms;
float _measurements_block___5_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___5_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___5_irmsc_rms_calc_fast__var_zc;
float _measurements_block___5_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___5_irmsc_rms_calc_slow__var_rms;
float _measurements_block___7_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___7_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___7_irmsa_rms_calc_fast__var_zc;
float _measurements_block___7_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___7_irmsa_rms_calc_slow__var_rms;
float _measurements_block___7_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___7_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___7_irmsb_rms_calc_fast__var_zc;
float _measurements_block___7_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___7_irmsb_rms_calc_slow__var_rms;
float _measurements_block___7_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___7_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___7_irmsc_rms_calc_fast__var_zc;
float _measurements_block___7_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___7_irmsc_rms_calc_slow__var_rms;
float _measurements_block___9_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___9_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___9_irmsa_rms_calc_fast__var_zc;
float _measurements_block___9_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___9_irmsa_rms_calc_slow__var_rms;
float _measurements_block___9_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___9_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___9_irmsb_rms_calc_fast__var_zc;
float _measurements_block___9_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___9_irmsb_rms_calc_slow__var_rms;
float _measurements_block___9_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___9_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___9_irmsc_rms_calc_fast__var_zc;
float _measurements_block___9_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___9_irmsc_rms_calc_slow__var_rms;
float _vrms8_rms_calc_fast__var_eff_s;
float _vrms8_rms_calc_fast__period;
X_UnInt8 _vrms8_rms_calc_fast__var_zc;
float _vrms8_rms_calc_fast__var_filt_old;
float _vrms8_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _measurements_block___1_irmsa_rt1_output__out =  0.0;
float _measurements_block___1_irmsa_rt2_output__out =  0.0;
float _measurements_block___1_irmsb_rt1_output__out =  0.0;
float _measurements_block___1_irmsb_rt2_output__out =  0.0;
float _measurements_block___1_irmsc_rt1_output__out =  0.0;
float _measurements_block___1_irmsc_rt2_output__out =  0.0;
float _measurements_block___13_irmsa_rt1_output__out =  0.0;
float _measurements_block___13_irmsa_rt2_output__out =  0.0;
float _measurements_block___13_irmsb_rt1_output__out =  0.0;
float _measurements_block___13_irmsb_rt2_output__out =  0.0;
float _measurements_block___13_irmsc_rt1_output__out =  0.0;
float _measurements_block___13_irmsc_rt2_output__out =  0.0;
float _measurements_block___14_irmsa_rt1_output__out =  0.0;
float _measurements_block___14_irmsa_rt2_output__out =  0.0;
float _measurements_block___14_irmsb_rt1_output__out =  0.0;
float _measurements_block___14_irmsb_rt2_output__out =  0.0;
float _measurements_block___14_irmsc_rt1_output__out =  0.0;
float _measurements_block___14_irmsc_rt2_output__out =  0.0;
float _measurements_block___5_irmsa_rt1_output__out =  0.0;
float _measurements_block___5_irmsa_rt2_output__out =  0.0;
float _measurements_block___5_irmsb_rt1_output__out =  0.0;
float _measurements_block___5_irmsb_rt2_output__out =  0.0;
float _measurements_block___5_irmsc_rt1_output__out =  0.0;
float _measurements_block___5_irmsc_rt2_output__out =  0.0;
float _measurements_block___7_irmsa_rt1_output__out =  0.0;
float _measurements_block___7_irmsa_rt2_output__out =  0.0;
float _measurements_block___7_irmsb_rt1_output__out =  0.0;
float _measurements_block___7_irmsb_rt2_output__out =  0.0;
float _measurements_block___7_irmsc_rt1_output__out =  0.0;
float _measurements_block___7_irmsc_rt2_output__out =  0.0;
float _measurements_block___9_irmsa_rt1_output__out =  0.0;
float _measurements_block___9_irmsa_rt2_output__out =  0.0;
float _measurements_block___9_irmsb_rt1_output__out =  0.0;
float _measurements_block___9_irmsb_rt2_output__out =  0.0;
float _measurements_block___9_irmsc_rt1_output__out =  0.0;
float _measurements_block___9_irmsc_rt2_output__out =  0.0;
float _vrms8_rt1_output__out =  0.0;
float _vrms8_rt2_output__out =  0.0;
float _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___1_irmsa_rms_calc_fast__var_filt;
float _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___1_irmsb_rms_calc_fast__var_filt;
float _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___1_irmsc_rms_calc_fast__var_filt;
float _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___13_irmsa_rms_calc_fast__var_filt;
float _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___13_irmsb_rms_calc_fast__var_filt;
float _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___13_irmsc_rms_calc_fast__var_filt;
float _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___14_irmsa_rms_calc_fast__var_filt;
float _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___14_irmsb_rms_calc_fast__var_filt;
float _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___14_irmsc_rms_calc_fast__var_filt;
float _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___5_irmsa_rms_calc_fast__var_filt;
float _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___5_irmsb_rms_calc_fast__var_filt;
float _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___5_irmsc_rms_calc_fast__var_filt;
float _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___7_irmsa_rms_calc_fast__var_filt;
float _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___7_irmsb_rms_calc_fast__var_filt;
float _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___7_irmsc_rms_calc_fast__var_filt;
float _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___9_irmsa_rms_calc_fast__var_filt;
float _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___9_irmsb_rms_calc_fast__var_filt;
float _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___9_irmsc_rms_calc_fast__var_filt;
float _vrms8_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms8_rms_calc_fast__pc_cnt_1_state;
float _vrms8_rms_calc_fast__var_filt;
//@cmp.svar.end






// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _measurements_block___1_irmsa_rt1_output__out =  0.0;
    _measurements_block___1_irmsa_rt2_output__out =  0.0;
    _measurements_block___1_irmsb_rt1_output__out =  0.0;
    _measurements_block___1_irmsb_rt2_output__out =  0.0;
    _measurements_block___1_irmsc_rt1_output__out =  0.0;
    _measurements_block___1_irmsc_rt2_output__out =  0.0;
    _measurements_block___13_irmsa_rt1_output__out =  0.0;
    _measurements_block___13_irmsa_rt2_output__out =  0.0;
    _measurements_block___13_irmsb_rt1_output__out =  0.0;
    _measurements_block___13_irmsb_rt2_output__out =  0.0;
    _measurements_block___13_irmsc_rt1_output__out =  0.0;
    _measurements_block___13_irmsc_rt2_output__out =  0.0;
    _measurements_block___14_irmsa_rt1_output__out =  0.0;
    _measurements_block___14_irmsa_rt2_output__out =  0.0;
    _measurements_block___14_irmsb_rt1_output__out =  0.0;
    _measurements_block___14_irmsb_rt2_output__out =  0.0;
    _measurements_block___14_irmsc_rt1_output__out =  0.0;
    _measurements_block___14_irmsc_rt2_output__out =  0.0;
    _measurements_block___5_irmsa_rt1_output__out =  0.0;
    _measurements_block___5_irmsa_rt2_output__out =  0.0;
    _measurements_block___5_irmsb_rt1_output__out =  0.0;
    _measurements_block___5_irmsb_rt2_output__out =  0.0;
    _measurements_block___5_irmsc_rt1_output__out =  0.0;
    _measurements_block___5_irmsc_rt2_output__out =  0.0;
    _measurements_block___7_irmsa_rt1_output__out =  0.0;
    _measurements_block___7_irmsa_rt2_output__out =  0.0;
    _measurements_block___7_irmsb_rt1_output__out =  0.0;
    _measurements_block___7_irmsb_rt2_output__out =  0.0;
    _measurements_block___7_irmsc_rt1_output__out =  0.0;
    _measurements_block___7_irmsc_rt2_output__out =  0.0;
    _measurements_block___9_irmsa_rt1_output__out =  0.0;
    _measurements_block___9_irmsa_rt2_output__out =  0.0;
    _measurements_block___9_irmsb_rt1_output__out =  0.0;
    _measurements_block___9_irmsb_rt2_output__out =  0.0;
    _measurements_block___9_irmsc_rt1_output__out =  0.0;
    _measurements_block___9_irmsc_rt2_output__out =  0.0;
    _vrms8_rt1_output__out =  0.0;
    _vrms8_rt2_output__out =  0.0;
    _measurements_block___1_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___1_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___1_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___1_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___1_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___1_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___1_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___1_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___1_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___13_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___13_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___13_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___13_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___13_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___13_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___13_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___13_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___13_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___14_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___14_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___14_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___14_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___14_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___14_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___14_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___14_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___14_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___5_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___5_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___5_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___5_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___5_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___5_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___5_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___5_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___5_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___7_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___7_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___7_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___7_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___7_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___7_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___7_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___7_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___7_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___9_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___9_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___9_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___9_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___9_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___9_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___9_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___9_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___9_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms8_rms_calc_fast__var_eff_s = 0;
    _vrms8_rms_calc_fast__period = 0.0f;
    _vrms8_rms_calc_fast__var_filt = 0.0f;
    _vrms8_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms8_rms_calc_fast__pc_cnt_1_state = 0;
    XIo_OutFloat(0x55000100, 0.0f);
    HIL_OutAO(0x2000, 0.0f);
    XIo_OutFloat(0x55000104, 0.0f);
    HIL_OutAO(0x2001, 0.0f);
    XIo_OutFloat(0x55000108, 0.0f);
    HIL_OutAO(0x2002, 0.0f);
    XIo_OutFloat(0x5500010c, 0.0f);
    HIL_OutAO(0x2003, 0.0f);
    XIo_OutFloat(0x55000110, 0.0f);
    HIL_OutAO(0x2004, 0.0f);
    XIo_OutFloat(0x55000114, 0.0f);
    HIL_OutAO(0x2005, 0.0f);
    XIo_OutFloat(0x55000118, 0.0f);
    HIL_OutAO(0x2006, 0.0f);
    XIo_OutFloat(0x5500011c, 0.0f);
    HIL_OutAO(0x2007, 0.0f);
    XIo_OutFloat(0x55000120, 0.0f);
    HIL_OutAO(0x2008, 0.0f);
    XIo_OutFloat(0x55000124, 0.0f);
    HIL_OutAO(0x2009, 0.0f);
    XIo_OutFloat(0x55000128, 0.0f);
    HIL_OutAO(0x200a, 0.0f);
    XIo_OutFloat(0x5500012c, 0.0f);
    HIL_OutAO(0x200b, 0.0f);
    XIo_OutFloat(0x55000130, 0.0f);
    HIL_OutAO(0x200c, 0.0f);
    XIo_OutFloat(0x55000134, 0.0f);
    HIL_OutAO(0x200d, 0.0f);
    XIo_OutFloat(0x55000138, 0.0f);
    HIL_OutAO(0x200e, 0.0f);
    XIo_OutFloat(0x5500013c, 0.0f);
    HIL_OutAO(0x200f, 0.0f);
    XIo_OutFloat(0x55000140, 0.0f);
    HIL_OutAO(0x2010, 0.0f);
    XIo_OutFloat(0x55000144, 0.0f);
    HIL_OutAO(0x2011, 0.0f);
    XIo_OutFloat(0x55000148, 0.0f);
    HIL_OutAO(0x2012, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}
// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Measurements Block - 1.IrmsA.instantaneous
    _measurements_block___1_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x1f));
    // Generated from the component: Measurements Block - 1.IrmsB.instantaneous
    _measurements_block___1_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x20));
    // Generated from the component: Measurements Block - 1.IrmsC.instantaneous
    _measurements_block___1_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x21));
    // Generated from the component: Measurements Block - 13.IrmsA.instantaneous
    _measurements_block___13_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x25));
    // Generated from the component: Measurements Block - 13.IrmsB.instantaneous
    _measurements_block___13_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x26));
    // Generated from the component: Measurements Block - 13.IrmsC.instantaneous
    _measurements_block___13_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x27));
    // Generated from the component: Measurements Block - 14.IrmsA.instantaneous
    _measurements_block___14_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x324));
    // Generated from the component: Measurements Block - 14.IrmsB.instantaneous
    _measurements_block___14_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x325));
    // Generated from the component: Measurements Block - 14.IrmsC.instantaneous
    _measurements_block___14_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x326));
    // Generated from the component: Measurements Block - 5.IrmsA.instantaneous
    _measurements_block___5_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x22c));
    // Generated from the component: Measurements Block - 5.IrmsB.instantaneous
    _measurements_block___5_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x22d));
    // Generated from the component: Measurements Block - 5.IrmsC.instantaneous
    _measurements_block___5_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x22e));
    // Generated from the component: Measurements Block - 7.IrmsA.instantaneous
    _measurements_block___7_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x11a));
    // Generated from the component: Measurements Block - 7.IrmsB.instantaneous
    _measurements_block___7_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x11b));
    // Generated from the component: Measurements Block - 7.IrmsC.instantaneous
    _measurements_block___7_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x11c));
    // Generated from the component: Measurements Block - 9.IrmsA.instantaneous
    _measurements_block___9_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x232));
    // Generated from the component: Measurements Block - 9.IrmsB.instantaneous
    _measurements_block___9_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x233));
    // Generated from the component: Measurements Block - 9.IrmsC.instantaneous
    _measurements_block___9_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x234));
    // Generated from the component: Vrms8.instantaneous
    _vrms8_instantaneous__out = (HIL_InFloat(0xc80000 + 0x320));
    // Generated from the component: Measurements Block - 1.IrmsA.rms_calc_fast
    _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___1_irmsa_instantaneous__out * _measurements_block___1_irmsa_instantaneous__out;
    _measurements_block___1_irmsa_rms_calc_fast__var_filt_old = _measurements_block___1_irmsa_rms_calc_fast__var_filt;
    _measurements_block___1_irmsa_rms_calc_fast__var_filt = (_measurements_block___1_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___1_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___1_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___1_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___1_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___1_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___1_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsa_rms_calc_fast__var_eff_s = _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___1_irmsa_rms_calc_fast__period = (float)_measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___1_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsA.sys1
    // Generated from the component: Measurements Block - 1.IrmsB.rms_calc_fast
    _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___1_irmsb_instantaneous__out * _measurements_block___1_irmsb_instantaneous__out;
    _measurements_block___1_irmsb_rms_calc_fast__var_filt_old = _measurements_block___1_irmsb_rms_calc_fast__var_filt;
    _measurements_block___1_irmsb_rms_calc_fast__var_filt = (_measurements_block___1_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___1_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___1_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___1_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___1_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___1_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___1_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsb_rms_calc_fast__var_eff_s = _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___1_irmsb_rms_calc_fast__period = (float)_measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___1_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsB.sys1
    // Generated from the component: Measurements Block - 1.IrmsC.rms_calc_fast
    _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___1_irmsc_instantaneous__out * _measurements_block___1_irmsc_instantaneous__out;
    _measurements_block___1_irmsc_rms_calc_fast__var_filt_old = _measurements_block___1_irmsc_rms_calc_fast__var_filt;
    _measurements_block___1_irmsc_rms_calc_fast__var_filt = (_measurements_block___1_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___1_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___1_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___1_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___1_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___1_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___1_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsc_rms_calc_fast__var_eff_s = _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___1_irmsc_rms_calc_fast__period = (float)_measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___1_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsC.sys1
    // Generated from the component: Measurements Block - 13.IrmsA.rms_calc_fast
    _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___13_irmsa_instantaneous__out * _measurements_block___13_irmsa_instantaneous__out;
    _measurements_block___13_irmsa_rms_calc_fast__var_filt_old = _measurements_block___13_irmsa_rms_calc_fast__var_filt;
    _measurements_block___13_irmsa_rms_calc_fast__var_filt = (_measurements_block___13_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___13_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___13_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___13_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___13_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___13_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___13_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsa_rms_calc_fast__var_eff_s = _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___13_irmsa_rms_calc_fast__period = (float)_measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___13_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsA.sys1
    // Generated from the component: Measurements Block - 13.IrmsB.rms_calc_fast
    _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___13_irmsb_instantaneous__out * _measurements_block___13_irmsb_instantaneous__out;
    _measurements_block___13_irmsb_rms_calc_fast__var_filt_old = _measurements_block___13_irmsb_rms_calc_fast__var_filt;
    _measurements_block___13_irmsb_rms_calc_fast__var_filt = (_measurements_block___13_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___13_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___13_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___13_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___13_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___13_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___13_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsb_rms_calc_fast__var_eff_s = _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___13_irmsb_rms_calc_fast__period = (float)_measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___13_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsB.sys1
    // Generated from the component: Measurements Block - 13.IrmsC.rms_calc_fast
    _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___13_irmsc_instantaneous__out * _measurements_block___13_irmsc_instantaneous__out;
    _measurements_block___13_irmsc_rms_calc_fast__var_filt_old = _measurements_block___13_irmsc_rms_calc_fast__var_filt;
    _measurements_block___13_irmsc_rms_calc_fast__var_filt = (_measurements_block___13_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___13_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___13_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___13_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___13_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___13_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___13_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsc_rms_calc_fast__var_eff_s = _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___13_irmsc_rms_calc_fast__period = (float)_measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___13_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsC.sys1
    // Generated from the component: Measurements Block - 14.IrmsA.rms_calc_fast
    _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___14_irmsa_instantaneous__out * _measurements_block___14_irmsa_instantaneous__out;
    _measurements_block___14_irmsa_rms_calc_fast__var_filt_old = _measurements_block___14_irmsa_rms_calc_fast__var_filt;
    _measurements_block___14_irmsa_rms_calc_fast__var_filt = (_measurements_block___14_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___14_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___14_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___14_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___14_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___14_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___14_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsa_rms_calc_fast__var_eff_s = _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___14_irmsa_rms_calc_fast__period = (float)_measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___14_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsA.sys1
    // Generated from the component: Measurements Block - 14.IrmsB.rms_calc_fast
    _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___14_irmsb_instantaneous__out * _measurements_block___14_irmsb_instantaneous__out;
    _measurements_block___14_irmsb_rms_calc_fast__var_filt_old = _measurements_block___14_irmsb_rms_calc_fast__var_filt;
    _measurements_block___14_irmsb_rms_calc_fast__var_filt = (_measurements_block___14_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___14_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___14_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___14_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___14_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___14_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___14_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsb_rms_calc_fast__var_eff_s = _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___14_irmsb_rms_calc_fast__period = (float)_measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___14_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsB.sys1
    // Generated from the component: Measurements Block - 14.IrmsC.rms_calc_fast
    _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___14_irmsc_instantaneous__out * _measurements_block___14_irmsc_instantaneous__out;
    _measurements_block___14_irmsc_rms_calc_fast__var_filt_old = _measurements_block___14_irmsc_rms_calc_fast__var_filt;
    _measurements_block___14_irmsc_rms_calc_fast__var_filt = (_measurements_block___14_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___14_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___14_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___14_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___14_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___14_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___14_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsc_rms_calc_fast__var_eff_s = _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___14_irmsc_rms_calc_fast__period = (float)_measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___14_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsC.sys1
    // Generated from the component: Measurements Block - 5.IrmsA.rms_calc_fast
    _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___5_irmsa_instantaneous__out * _measurements_block___5_irmsa_instantaneous__out;
    _measurements_block___5_irmsa_rms_calc_fast__var_filt_old = _measurements_block___5_irmsa_rms_calc_fast__var_filt;
    _measurements_block___5_irmsa_rms_calc_fast__var_filt = (_measurements_block___5_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___5_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___5_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___5_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___5_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___5_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___5_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsa_rms_calc_fast__var_eff_s = _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___5_irmsa_rms_calc_fast__period = (float)_measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___5_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsA.sys1
    // Generated from the component: Measurements Block - 5.IrmsB.rms_calc_fast
    _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___5_irmsb_instantaneous__out * _measurements_block___5_irmsb_instantaneous__out;
    _measurements_block___5_irmsb_rms_calc_fast__var_filt_old = _measurements_block___5_irmsb_rms_calc_fast__var_filt;
    _measurements_block___5_irmsb_rms_calc_fast__var_filt = (_measurements_block___5_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___5_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___5_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___5_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___5_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___5_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___5_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsb_rms_calc_fast__var_eff_s = _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___5_irmsb_rms_calc_fast__period = (float)_measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___5_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsB.sys1
    // Generated from the component: Measurements Block - 5.IrmsC.rms_calc_fast
    _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___5_irmsc_instantaneous__out * _measurements_block___5_irmsc_instantaneous__out;
    _measurements_block___5_irmsc_rms_calc_fast__var_filt_old = _measurements_block___5_irmsc_rms_calc_fast__var_filt;
    _measurements_block___5_irmsc_rms_calc_fast__var_filt = (_measurements_block___5_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___5_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___5_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___5_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___5_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___5_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___5_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsc_rms_calc_fast__var_eff_s = _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___5_irmsc_rms_calc_fast__period = (float)_measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___5_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsC.sys1
    // Generated from the component: Measurements Block - 7.IrmsA.rms_calc_fast
    _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___7_irmsa_instantaneous__out * _measurements_block___7_irmsa_instantaneous__out;
    _measurements_block___7_irmsa_rms_calc_fast__var_filt_old = _measurements_block___7_irmsa_rms_calc_fast__var_filt;
    _measurements_block___7_irmsa_rms_calc_fast__var_filt = (_measurements_block___7_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___7_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___7_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___7_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___7_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___7_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___7_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsa_rms_calc_fast__var_eff_s = _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___7_irmsa_rms_calc_fast__period = (float)_measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___7_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsA.sys1
    // Generated from the component: Measurements Block - 7.IrmsB.rms_calc_fast
    _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___7_irmsb_instantaneous__out * _measurements_block___7_irmsb_instantaneous__out;
    _measurements_block___7_irmsb_rms_calc_fast__var_filt_old = _measurements_block___7_irmsb_rms_calc_fast__var_filt;
    _measurements_block___7_irmsb_rms_calc_fast__var_filt = (_measurements_block___7_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___7_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___7_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___7_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___7_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___7_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___7_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsb_rms_calc_fast__var_eff_s = _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___7_irmsb_rms_calc_fast__period = (float)_measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___7_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsB.sys1
    // Generated from the component: Measurements Block - 7.IrmsC.rms_calc_fast
    _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___7_irmsc_instantaneous__out * _measurements_block___7_irmsc_instantaneous__out;
    _measurements_block___7_irmsc_rms_calc_fast__var_filt_old = _measurements_block___7_irmsc_rms_calc_fast__var_filt;
    _measurements_block___7_irmsc_rms_calc_fast__var_filt = (_measurements_block___7_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___7_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___7_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___7_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___7_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___7_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___7_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsc_rms_calc_fast__var_eff_s = _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___7_irmsc_rms_calc_fast__period = (float)_measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___7_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsC.sys1
    // Generated from the component: Measurements Block - 9.IrmsA.rms_calc_fast
    _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___9_irmsa_instantaneous__out * _measurements_block___9_irmsa_instantaneous__out;
    _measurements_block___9_irmsa_rms_calc_fast__var_filt_old = _measurements_block___9_irmsa_rms_calc_fast__var_filt;
    _measurements_block___9_irmsa_rms_calc_fast__var_filt = (_measurements_block___9_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___9_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___9_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___9_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___9_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___9_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___9_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsa_rms_calc_fast__var_eff_s = _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___9_irmsa_rms_calc_fast__period = (float)_measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___9_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsA.sys1
    // Generated from the component: Measurements Block - 9.IrmsB.rms_calc_fast
    _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___9_irmsb_instantaneous__out * _measurements_block___9_irmsb_instantaneous__out;
    _measurements_block___9_irmsb_rms_calc_fast__var_filt_old = _measurements_block___9_irmsb_rms_calc_fast__var_filt;
    _measurements_block___9_irmsb_rms_calc_fast__var_filt = (_measurements_block___9_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___9_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___9_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___9_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___9_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___9_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___9_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsb_rms_calc_fast__var_eff_s = _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___9_irmsb_rms_calc_fast__period = (float)_measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___9_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsB.sys1
    // Generated from the component: Measurements Block - 9.IrmsC.rms_calc_fast
    _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___9_irmsc_instantaneous__out * _measurements_block___9_irmsc_instantaneous__out;
    _measurements_block___9_irmsc_rms_calc_fast__var_filt_old = _measurements_block___9_irmsc_rms_calc_fast__var_filt;
    _measurements_block___9_irmsc_rms_calc_fast__var_filt = (_measurements_block___9_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___9_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___9_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___9_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___9_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___9_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___9_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsc_rms_calc_fast__var_eff_s = _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___9_irmsc_rms_calc_fast__period = (float)_measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___9_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsC.sys1
    // Generated from the component: Vrms8.rms_calc_fast
    _vrms8_rms_calc_fast__v_sq_sum_state = _vrms8_rms_calc_fast__v_sq_sum_state + _vrms8_instantaneous__out * _vrms8_instantaneous__out;
    _vrms8_rms_calc_fast__var_filt_old = _vrms8_rms_calc_fast__var_filt;
    _vrms8_rms_calc_fast__var_filt = (_vrms8_rms_calc_fast__var_filt_old * 0.909 + _vrms8_instantaneous__out * 0.0909);
    if((_vrms8_rms_calc_fast__var_filt >= 0.0f) && (_vrms8_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms8_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms8_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms8_rms_calc_fast__var_zc == 1) || (5000 == _vrms8_rms_calc_fast__pc_cnt_1_state)) {
        _vrms8_rms_calc_fast__var_eff_s = _vrms8_rms_calc_fast__v_sq_sum_state;
        _vrms8_rms_calc_fast__period = (float)_vrms8_rms_calc_fast__pc_cnt_1_state;
        _vrms8_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms8.sys1
    // Generated from the component: Measurements Block - 1.IrmsA.rt1.Input
    _measurements_block___1_irmsa_rt1_output__out = _measurements_block___1_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 1.IrmsA.rt2.Input
    _measurements_block___1_irmsa_rt2_output__out = _measurements_block___1_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 1.IrmsA.t1
    // Generated from the component: Measurements Block - 1.IrmsB.rt1.Input
    _measurements_block___1_irmsb_rt1_output__out = _measurements_block___1_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 1.IrmsB.rt2.Input
    _measurements_block___1_irmsb_rt2_output__out = _measurements_block___1_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 1.IrmsB.t1
    // Generated from the component: Measurements Block - 1.IrmsC.rt1.Input
    _measurements_block___1_irmsc_rt1_output__out = _measurements_block___1_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 1.IrmsC.rt2.Input
    _measurements_block___1_irmsc_rt2_output__out = _measurements_block___1_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 1.IrmsC.t1
    // Generated from the component: Measurements Block - 13.IrmsA.rt1.Input
    _measurements_block___13_irmsa_rt1_output__out = _measurements_block___13_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 13.IrmsA.rt2.Input
    _measurements_block___13_irmsa_rt2_output__out = _measurements_block___13_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 13.IrmsA.t1
    // Generated from the component: Measurements Block - 13.IrmsB.rt1.Input
    _measurements_block___13_irmsb_rt1_output__out = _measurements_block___13_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 13.IrmsB.rt2.Input
    _measurements_block___13_irmsb_rt2_output__out = _measurements_block___13_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 13.IrmsB.t1
    // Generated from the component: Measurements Block - 13.IrmsC.rt1.Input
    _measurements_block___13_irmsc_rt1_output__out = _measurements_block___13_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 13.IrmsC.rt2.Input
    _measurements_block___13_irmsc_rt2_output__out = _measurements_block___13_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 13.IrmsC.t1
    // Generated from the component: Measurements Block - 14.IrmsA.rt1.Input
    _measurements_block___14_irmsa_rt1_output__out = _measurements_block___14_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 14.IrmsA.rt2.Input
    _measurements_block___14_irmsa_rt2_output__out = _measurements_block___14_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 14.IrmsA.t1
    // Generated from the component: Measurements Block - 14.IrmsB.rt1.Input
    _measurements_block___14_irmsb_rt1_output__out = _measurements_block___14_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 14.IrmsB.rt2.Input
    _measurements_block___14_irmsb_rt2_output__out = _measurements_block___14_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 14.IrmsB.t1
    // Generated from the component: Measurements Block - 14.IrmsC.rt1.Input
    _measurements_block___14_irmsc_rt1_output__out = _measurements_block___14_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 14.IrmsC.rt2.Input
    _measurements_block___14_irmsc_rt2_output__out = _measurements_block___14_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 14.IrmsC.t1
    // Generated from the component: Measurements Block - 5.IrmsA.rt1.Input
    _measurements_block___5_irmsa_rt1_output__out = _measurements_block___5_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 5.IrmsA.rt2.Input
    _measurements_block___5_irmsa_rt2_output__out = _measurements_block___5_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 5.IrmsA.t1
    // Generated from the component: Measurements Block - 5.IrmsB.rt1.Input
    _measurements_block___5_irmsb_rt1_output__out = _measurements_block___5_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 5.IrmsB.rt2.Input
    _measurements_block___5_irmsb_rt2_output__out = _measurements_block___5_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 5.IrmsB.t1
    // Generated from the component: Measurements Block - 5.IrmsC.rt1.Input
    _measurements_block___5_irmsc_rt1_output__out = _measurements_block___5_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 5.IrmsC.rt2.Input
    _measurements_block___5_irmsc_rt2_output__out = _measurements_block___5_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 5.IrmsC.t1
    // Generated from the component: Measurements Block - 7.IrmsA.rt1.Input
    _measurements_block___7_irmsa_rt1_output__out = _measurements_block___7_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 7.IrmsA.rt2.Input
    _measurements_block___7_irmsa_rt2_output__out = _measurements_block___7_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 7.IrmsA.t1
    // Generated from the component: Measurements Block - 7.IrmsB.rt1.Input
    _measurements_block___7_irmsb_rt1_output__out = _measurements_block___7_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 7.IrmsB.rt2.Input
    _measurements_block___7_irmsb_rt2_output__out = _measurements_block___7_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 7.IrmsB.t1
    // Generated from the component: Measurements Block - 7.IrmsC.rt1.Input
    _measurements_block___7_irmsc_rt1_output__out = _measurements_block___7_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 7.IrmsC.rt2.Input
    _measurements_block___7_irmsc_rt2_output__out = _measurements_block___7_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 7.IrmsC.t1
    // Generated from the component: Measurements Block - 9.IrmsA.rt1.Input
    _measurements_block___9_irmsa_rt1_output__out = _measurements_block___9_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 9.IrmsA.rt2.Input
    _measurements_block___9_irmsa_rt2_output__out = _measurements_block___9_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 9.IrmsA.t1
    // Generated from the component: Measurements Block - 9.IrmsB.rt1.Input
    _measurements_block___9_irmsb_rt1_output__out = _measurements_block___9_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 9.IrmsB.rt2.Input
    _measurements_block___9_irmsb_rt2_output__out = _measurements_block___9_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 9.IrmsB.t1
    // Generated from the component: Measurements Block - 9.IrmsC.rt1.Input
    _measurements_block___9_irmsc_rt1_output__out = _measurements_block___9_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 9.IrmsC.rt2.Input
    _measurements_block___9_irmsc_rt2_output__out = _measurements_block___9_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 9.IrmsC.t1
    // Generated from the component: Vrms8.rt1.Input
    _vrms8_rt1_output__out = _vrms8_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms8.rt2.Input
    _vrms8_rt2_output__out = _vrms8_rms_calc_fast__period;
    // Generated from the component: Vrms8.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Measurements Block - 1.IrmsA.rms_calc_fast
    if ((_measurements_block___1_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___1_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 1.IrmsB.rms_calc_fast
    if ((_measurements_block___1_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___1_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 1.IrmsC.rms_calc_fast
    if ((_measurements_block___1_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___1_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 13.IrmsA.rms_calc_fast
    if ((_measurements_block___13_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___13_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 13.IrmsB.rms_calc_fast
    if ((_measurements_block___13_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___13_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 13.IrmsC.rms_calc_fast
    if ((_measurements_block___13_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___13_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 14.IrmsA.rms_calc_fast
    if ((_measurements_block___14_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___14_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 14.IrmsB.rms_calc_fast
    if ((_measurements_block___14_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___14_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 14.IrmsC.rms_calc_fast
    if ((_measurements_block___14_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___14_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 5.IrmsA.rms_calc_fast
    if ((_measurements_block___5_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___5_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 5.IrmsB.rms_calc_fast
    if ((_measurements_block___5_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___5_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 5.IrmsC.rms_calc_fast
    if ((_measurements_block___5_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___5_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 7.IrmsA.rms_calc_fast
    if ((_measurements_block___7_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___7_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 7.IrmsB.rms_calc_fast
    if ((_measurements_block___7_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___7_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 7.IrmsC.rms_calc_fast
    if ((_measurements_block___7_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___7_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 9.IrmsA.rms_calc_fast
    if ((_measurements_block___9_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___9_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 9.IrmsB.rms_calc_fast
    if ((_measurements_block___9_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___9_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 9.IrmsC.rms_calc_fast
    if ((_measurements_block___9_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___9_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms8.rms_calc_fast
    if ((_vrms8_rms_calc_fast__var_zc == 1) || (5000 == _vrms8_rms_calc_fast__pc_cnt_1_state)) {
        _vrms8_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms8_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Measurements Block - 1.IrmsA.rms_calc_slow
    if(_measurements_block___1_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___1_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___1_irmsa_rt1_output__out / _measurements_block___1_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___1_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsB.rms_calc_slow
    if(_measurements_block___1_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___1_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___1_irmsb_rt1_output__out / _measurements_block___1_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___1_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsC.rms_calc_slow
    if(_measurements_block___1_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___1_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___1_irmsc_rt1_output__out / _measurements_block___1_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___1_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsA.rms_calc_slow
    if(_measurements_block___13_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___13_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___13_irmsa_rt1_output__out / _measurements_block___13_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___13_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsB.rms_calc_slow
    if(_measurements_block___13_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___13_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___13_irmsb_rt1_output__out / _measurements_block___13_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___13_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsC.rms_calc_slow
    if(_measurements_block___13_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___13_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___13_irmsc_rt1_output__out / _measurements_block___13_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___13_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsA.rms_calc_slow
    if(_measurements_block___14_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___14_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___14_irmsa_rt1_output__out / _measurements_block___14_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___14_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsB.rms_calc_slow
    if(_measurements_block___14_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___14_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___14_irmsb_rt1_output__out / _measurements_block___14_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___14_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 14.IrmsC.rms_calc_slow
    if(_measurements_block___14_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___14_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___14_irmsc_rt1_output__out / _measurements_block___14_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___14_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsA.rms_calc_slow
    if(_measurements_block___5_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___5_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___5_irmsa_rt1_output__out / _measurements_block___5_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___5_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsB.rms_calc_slow
    if(_measurements_block___5_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___5_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___5_irmsb_rt1_output__out / _measurements_block___5_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___5_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 5.IrmsC.rms_calc_slow
    if(_measurements_block___5_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___5_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___5_irmsc_rt1_output__out / _measurements_block___5_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___5_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsA.rms_calc_slow
    if(_measurements_block___7_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___7_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___7_irmsa_rt1_output__out / _measurements_block___7_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___7_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsB.rms_calc_slow
    if(_measurements_block___7_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___7_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___7_irmsb_rt1_output__out / _measurements_block___7_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___7_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 7.IrmsC.rms_calc_slow
    if(_measurements_block___7_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___7_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___7_irmsc_rt1_output__out / _measurements_block___7_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___7_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsA.rms_calc_slow
    if(_measurements_block___9_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___9_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___9_irmsa_rt1_output__out / _measurements_block___9_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___9_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsB.rms_calc_slow
    if(_measurements_block___9_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___9_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___9_irmsb_rt1_output__out / _measurements_block___9_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___9_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 9.IrmsC.rms_calc_slow
    if(_measurements_block___9_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___9_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___9_irmsc_rt1_output__out / _measurements_block___9_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___9_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms8.rms_calc_slow
    if(_vrms8_rt2_output__out > 0.0f) {
        _vrms8_rms_calc_slow__var_rms = sqrtf(_vrms8_rt1_output__out / _vrms8_rt2_output__out);
    }
    else {
        _vrms8_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 1.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000100, _measurements_block___1_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsA.rms
    HIL_OutAO(0x2000, _measurements_block___1_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsA.sys2
    // Generated from the component: Measurements Block - 1.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000104, _measurements_block___1_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsB.rms
    HIL_OutAO(0x2001, _measurements_block___1_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsB.sys2
    // Generated from the component: Measurements Block - 1.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000108, _measurements_block___1_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsC.rms
    HIL_OutAO(0x2002, _measurements_block___1_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 1.IrmsC.sys2
    // Generated from the component: Measurements Block - 13.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x5500010c, _measurements_block___13_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsA.rms
    HIL_OutAO(0x2003, _measurements_block___13_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsA.sys2
    // Generated from the component: Measurements Block - 13.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000110, _measurements_block___13_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsB.rms
    HIL_OutAO(0x2004, _measurements_block___13_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsB.sys2
    // Generated from the component: Measurements Block - 13.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000114, _measurements_block___13_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsC.rms
    HIL_OutAO(0x2005, _measurements_block___13_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsC.sys2
    // Generated from the component: Measurements Block - 14.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000118, _measurements_block___14_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsA.rms
    HIL_OutAO(0x2006, _measurements_block___14_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsA.sys2
    // Generated from the component: Measurements Block - 14.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x5500011c, _measurements_block___14_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsB.rms
    HIL_OutAO(0x2007, _measurements_block___14_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsB.sys2
    // Generated from the component: Measurements Block - 14.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000120, _measurements_block___14_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsC.rms
    HIL_OutAO(0x2008, _measurements_block___14_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsC.sys2
    // Generated from the component: Measurements Block - 5.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000124, _measurements_block___5_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsA.rms
    HIL_OutAO(0x2009, _measurements_block___5_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsA.sys2
    // Generated from the component: Measurements Block - 5.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000128, _measurements_block___5_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsB.rms
    HIL_OutAO(0x200a, _measurements_block___5_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsB.sys2
    // Generated from the component: Measurements Block - 5.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x5500012c, _measurements_block___5_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsC.rms
    HIL_OutAO(0x200b, _measurements_block___5_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsC.sys2
    // Generated from the component: Measurements Block - 7.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000130, _measurements_block___7_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsA.rms
    HIL_OutAO(0x200c, _measurements_block___7_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsA.sys2
    // Generated from the component: Measurements Block - 7.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000134, _measurements_block___7_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsB.rms
    HIL_OutAO(0x200d, _measurements_block___7_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsB.sys2
    // Generated from the component: Measurements Block - 7.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000138, _measurements_block___7_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsC.rms
    HIL_OutAO(0x200e, _measurements_block___7_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 7.IrmsC.sys2
    // Generated from the component: Measurements Block - 9.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x5500013c, _measurements_block___9_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsA.rms
    HIL_OutAO(0x200f, _measurements_block___9_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsA.sys2
    // Generated from the component: Measurements Block - 9.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000140, _measurements_block___9_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsB.rms
    HIL_OutAO(0x2010, _measurements_block___9_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsB.sys2
    // Generated from the component: Measurements Block - 9.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000144, _measurements_block___9_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsC.rms
    HIL_OutAO(0x2011, _measurements_block___9_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 9.IrmsC.sys2
    // Generated from the component: Vrms8.cpu_trans.Input
    XIo_OutFloat(0x55000148, _vrms8_rms_calc_slow__var_rms);
    // Generated from the component: Vrms8.rms
    HIL_OutAO(0x2012, _vrms8_rms_calc_slow__var_rms);
    // Generated from the component: Vrms8.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------