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
float _measurements_block___10_irmsa_instantaneous__out;
float _measurements_block___10_irmsb_instantaneous__out;
float _measurements_block___10_irmsc_instantaneous__out;
float _measurements_block___11_irmsa_instantaneous__out;
float _measurements_block___11_irmsb_instantaneous__out;
float _measurements_block___11_irmsc_instantaneous__out;
float _measurements_block___2_irmsa_instantaneous__out;
float _measurements_block___2_irmsb_instantaneous__out;
float _measurements_block___2_irmsc_instantaneous__out;
float _measurements_block___3_irmsa_instantaneous__out;
float _measurements_block___3_irmsb_instantaneous__out;
float _measurements_block___3_irmsc_instantaneous__out;
float _vrms1_instantaneous__out;
float _vrms10_instantaneous__out;
float _vrms2_instantaneous__out;
float _vrms3_instantaneous__out;
float _vrms4_instantaneous__out;
float _vrms5_instantaneous__out;
float _vrms6_instantaneous__out;
float _vrms7_instantaneous__out;
float _vrms8_instantaneous__out;
float _vrms9_instantaneous__out;
float _measurements_block___10_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___10_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___10_irmsa_rms_calc_fast__var_zc;
float _measurements_block___10_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___10_irmsa_rms_calc_slow__var_rms;
float _measurements_block___10_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___10_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___10_irmsb_rms_calc_fast__var_zc;
float _measurements_block___10_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___10_irmsb_rms_calc_slow__var_rms;
float _measurements_block___10_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___10_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___10_irmsc_rms_calc_fast__var_zc;
float _measurements_block___10_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___10_irmsc_rms_calc_slow__var_rms;
float _measurements_block___11_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___11_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___11_irmsa_rms_calc_fast__var_zc;
float _measurements_block___11_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___11_irmsa_rms_calc_slow__var_rms;
float _measurements_block___11_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___11_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___11_irmsb_rms_calc_fast__var_zc;
float _measurements_block___11_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___11_irmsb_rms_calc_slow__var_rms;
float _measurements_block___11_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___11_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___11_irmsc_rms_calc_fast__var_zc;
float _measurements_block___11_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___11_irmsc_rms_calc_slow__var_rms;
float _measurements_block___2_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___2_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___2_irmsa_rms_calc_fast__var_zc;
float _measurements_block___2_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___2_irmsa_rms_calc_slow__var_rms;
float _measurements_block___2_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___2_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___2_irmsb_rms_calc_fast__var_zc;
float _measurements_block___2_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___2_irmsb_rms_calc_slow__var_rms;
float _measurements_block___2_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___2_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___2_irmsc_rms_calc_fast__var_zc;
float _measurements_block___2_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___2_irmsc_rms_calc_slow__var_rms;
float _measurements_block___3_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___3_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___3_irmsa_rms_calc_fast__var_zc;
float _measurements_block___3_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___3_irmsa_rms_calc_slow__var_rms;
float _measurements_block___3_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___3_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___3_irmsb_rms_calc_fast__var_zc;
float _measurements_block___3_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___3_irmsb_rms_calc_slow__var_rms;
float _measurements_block___3_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___3_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___3_irmsc_rms_calc_fast__var_zc;
float _measurements_block___3_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___3_irmsc_rms_calc_slow__var_rms;
float _vrms1_rms_calc_fast__var_eff_s;
float _vrms1_rms_calc_fast__period;
X_UnInt8 _vrms1_rms_calc_fast__var_zc;
float _vrms1_rms_calc_fast__var_filt_old;
float _vrms1_rms_calc_slow__var_rms;
float _vrms10_rms_calc_fast__var_eff_s;
float _vrms10_rms_calc_fast__period;
X_UnInt8 _vrms10_rms_calc_fast__var_zc;
float _vrms10_rms_calc_fast__var_filt_old;
float _vrms10_rms_calc_slow__var_rms;
float _vrms2_rms_calc_fast__var_eff_s;
float _vrms2_rms_calc_fast__period;
X_UnInt8 _vrms2_rms_calc_fast__var_zc;
float _vrms2_rms_calc_fast__var_filt_old;
float _vrms2_rms_calc_slow__var_rms;
float _vrms3_rms_calc_fast__var_eff_s;
float _vrms3_rms_calc_fast__period;
X_UnInt8 _vrms3_rms_calc_fast__var_zc;
float _vrms3_rms_calc_fast__var_filt_old;
float _vrms3_rms_calc_slow__var_rms;
float _vrms4_rms_calc_fast__var_eff_s;
float _vrms4_rms_calc_fast__period;
X_UnInt8 _vrms4_rms_calc_fast__var_zc;
float _vrms4_rms_calc_fast__var_filt_old;
float _vrms4_rms_calc_slow__var_rms;
float _vrms5_rms_calc_fast__var_eff_s;
float _vrms5_rms_calc_fast__period;
X_UnInt8 _vrms5_rms_calc_fast__var_zc;
float _vrms5_rms_calc_fast__var_filt_old;
float _vrms5_rms_calc_slow__var_rms;
float _vrms6_rms_calc_fast__var_eff_s;
float _vrms6_rms_calc_fast__period;
X_UnInt8 _vrms6_rms_calc_fast__var_zc;
float _vrms6_rms_calc_fast__var_filt_old;
float _vrms6_rms_calc_slow__var_rms;
float _vrms7_rms_calc_fast__var_eff_s;
float _vrms7_rms_calc_fast__period;
X_UnInt8 _vrms7_rms_calc_fast__var_zc;
float _vrms7_rms_calc_fast__var_filt_old;
float _vrms7_rms_calc_slow__var_rms;
float _vrms8_rms_calc_fast__var_eff_s;
float _vrms8_rms_calc_fast__period;
X_UnInt8 _vrms8_rms_calc_fast__var_zc;
float _vrms8_rms_calc_fast__var_filt_old;
float _vrms8_rms_calc_slow__var_rms;
float _vrms9_rms_calc_fast__var_eff_s;
float _vrms9_rms_calc_fast__period;
X_UnInt8 _vrms9_rms_calc_fast__var_zc;
float _vrms9_rms_calc_fast__var_filt_old;
float _vrms9_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _measurements_block___10_irmsa_rt1_output__out =  0.0;
float _measurements_block___10_irmsa_rt2_output__out =  0.0;
float _measurements_block___10_irmsb_rt1_output__out =  0.0;
float _measurements_block___10_irmsb_rt2_output__out =  0.0;
float _measurements_block___10_irmsc_rt1_output__out =  0.0;
float _measurements_block___10_irmsc_rt2_output__out =  0.0;
float _measurements_block___11_irmsa_rt1_output__out =  0.0;
float _measurements_block___11_irmsa_rt2_output__out =  0.0;
float _measurements_block___11_irmsb_rt1_output__out =  0.0;
float _measurements_block___11_irmsb_rt2_output__out =  0.0;
float _measurements_block___11_irmsc_rt1_output__out =  0.0;
float _measurements_block___11_irmsc_rt2_output__out =  0.0;
float _measurements_block___2_irmsa_rt1_output__out =  0.0;
float _measurements_block___2_irmsa_rt2_output__out =  0.0;
float _measurements_block___2_irmsb_rt1_output__out =  0.0;
float _measurements_block___2_irmsb_rt2_output__out =  0.0;
float _measurements_block___2_irmsc_rt1_output__out =  0.0;
float _measurements_block___2_irmsc_rt2_output__out =  0.0;
float _measurements_block___3_irmsa_rt1_output__out =  0.0;
float _measurements_block___3_irmsa_rt2_output__out =  0.0;
float _measurements_block___3_irmsb_rt1_output__out =  0.0;
float _measurements_block___3_irmsb_rt2_output__out =  0.0;
float _measurements_block___3_irmsc_rt1_output__out =  0.0;
float _measurements_block___3_irmsc_rt2_output__out =  0.0;
float _vrms1_rt1_output__out =  0.0;
float _vrms1_rt2_output__out =  0.0;
float _vrms10_rt1_output__out =  0.0;
float _vrms10_rt2_output__out =  0.0;
float _vrms2_rt1_output__out =  0.0;
float _vrms2_rt2_output__out =  0.0;
float _vrms3_rt1_output__out =  0.0;
float _vrms3_rt2_output__out =  0.0;
float _vrms4_rt1_output__out =  0.0;
float _vrms4_rt2_output__out =  0.0;
float _vrms5_rt1_output__out =  0.0;
float _vrms5_rt2_output__out =  0.0;
float _vrms6_rt1_output__out =  0.0;
float _vrms6_rt2_output__out =  0.0;
float _vrms7_rt1_output__out =  0.0;
float _vrms7_rt2_output__out =  0.0;
float _vrms8_rt1_output__out =  0.0;
float _vrms8_rt2_output__out =  0.0;
float _vrms9_rt1_output__out =  0.0;
float _vrms9_rt2_output__out =  0.0;
float _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___10_irmsa_rms_calc_fast__var_filt;
float _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___10_irmsb_rms_calc_fast__var_filt;
float _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___10_irmsc_rms_calc_fast__var_filt;
float _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsa_rms_calc_fast__var_filt;
float _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsb_rms_calc_fast__var_filt;
float _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsc_rms_calc_fast__var_filt;
float _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___2_irmsa_rms_calc_fast__var_filt;
float _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___2_irmsb_rms_calc_fast__var_filt;
float _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___2_irmsc_rms_calc_fast__var_filt;
float _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsa_rms_calc_fast__var_filt;
float _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsb_rms_calc_fast__var_filt;
float _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsc_rms_calc_fast__var_filt;
float _vrms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms1_rms_calc_fast__pc_cnt_1_state;
float _vrms1_rms_calc_fast__var_filt;
float _vrms10_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms10_rms_calc_fast__pc_cnt_1_state;
float _vrms10_rms_calc_fast__var_filt;
float _vrms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms2_rms_calc_fast__pc_cnt_1_state;
float _vrms2_rms_calc_fast__var_filt;
float _vrms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms3_rms_calc_fast__pc_cnt_1_state;
float _vrms3_rms_calc_fast__var_filt;
float _vrms4_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms4_rms_calc_fast__pc_cnt_1_state;
float _vrms4_rms_calc_fast__var_filt;
float _vrms5_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms5_rms_calc_fast__pc_cnt_1_state;
float _vrms5_rms_calc_fast__var_filt;
float _vrms6_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms6_rms_calc_fast__pc_cnt_1_state;
float _vrms6_rms_calc_fast__var_filt;
float _vrms7_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms7_rms_calc_fast__pc_cnt_1_state;
float _vrms7_rms_calc_fast__var_filt;
float _vrms8_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms8_rms_calc_fast__pc_cnt_1_state;
float _vrms8_rms_calc_fast__var_filt;
float _vrms9_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms9_rms_calc_fast__pc_cnt_1_state;
float _vrms9_rms_calc_fast__var_filt;
//@cmp.svar.end






// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _measurements_block___10_irmsa_rt1_output__out =  0.0;
    _measurements_block___10_irmsa_rt2_output__out =  0.0;
    _measurements_block___10_irmsb_rt1_output__out =  0.0;
    _measurements_block___10_irmsb_rt2_output__out =  0.0;
    _measurements_block___10_irmsc_rt1_output__out =  0.0;
    _measurements_block___10_irmsc_rt2_output__out =  0.0;
    _measurements_block___11_irmsa_rt1_output__out =  0.0;
    _measurements_block___11_irmsa_rt2_output__out =  0.0;
    _measurements_block___11_irmsb_rt1_output__out =  0.0;
    _measurements_block___11_irmsb_rt2_output__out =  0.0;
    _measurements_block___11_irmsc_rt1_output__out =  0.0;
    _measurements_block___11_irmsc_rt2_output__out =  0.0;
    _measurements_block___2_irmsa_rt1_output__out =  0.0;
    _measurements_block___2_irmsa_rt2_output__out =  0.0;
    _measurements_block___2_irmsb_rt1_output__out =  0.0;
    _measurements_block___2_irmsb_rt2_output__out =  0.0;
    _measurements_block___2_irmsc_rt1_output__out =  0.0;
    _measurements_block___2_irmsc_rt2_output__out =  0.0;
    _measurements_block___3_irmsa_rt1_output__out =  0.0;
    _measurements_block___3_irmsa_rt2_output__out =  0.0;
    _measurements_block___3_irmsb_rt1_output__out =  0.0;
    _measurements_block___3_irmsb_rt2_output__out =  0.0;
    _measurements_block___3_irmsc_rt1_output__out =  0.0;
    _measurements_block___3_irmsc_rt2_output__out =  0.0;
    _vrms1_rt1_output__out =  0.0;
    _vrms1_rt2_output__out =  0.0;
    _vrms10_rt1_output__out =  0.0;
    _vrms10_rt2_output__out =  0.0;
    _vrms2_rt1_output__out =  0.0;
    _vrms2_rt2_output__out =  0.0;
    _vrms3_rt1_output__out =  0.0;
    _vrms3_rt2_output__out =  0.0;
    _vrms4_rt1_output__out =  0.0;
    _vrms4_rt2_output__out =  0.0;
    _vrms5_rt1_output__out =  0.0;
    _vrms5_rt2_output__out =  0.0;
    _vrms6_rt1_output__out =  0.0;
    _vrms6_rt2_output__out =  0.0;
    _vrms7_rt1_output__out =  0.0;
    _vrms7_rt2_output__out =  0.0;
    _vrms8_rt1_output__out =  0.0;
    _vrms8_rt2_output__out =  0.0;
    _vrms9_rt1_output__out =  0.0;
    _vrms9_rt2_output__out =  0.0;
    _measurements_block___10_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___10_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___10_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___10_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___10_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___10_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___10_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___10_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___10_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___11_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___11_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___11_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___11_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___11_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___11_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___11_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___11_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___11_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___2_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___2_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___2_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___2_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___2_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___2_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___2_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___2_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___2_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___3_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___3_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___3_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___3_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___3_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___3_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___3_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___3_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___3_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms1_rms_calc_fast__var_eff_s = 0;
    _vrms1_rms_calc_fast__period = 0.0f;
    _vrms1_rms_calc_fast__var_filt = 0.0f;
    _vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms10_rms_calc_fast__var_eff_s = 0;
    _vrms10_rms_calc_fast__period = 0.0f;
    _vrms10_rms_calc_fast__var_filt = 0.0f;
    _vrms10_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms10_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms2_rms_calc_fast__var_eff_s = 0;
    _vrms2_rms_calc_fast__period = 0.0f;
    _vrms2_rms_calc_fast__var_filt = 0.0f;
    _vrms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms2_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms3_rms_calc_fast__var_eff_s = 0;
    _vrms3_rms_calc_fast__period = 0.0f;
    _vrms3_rms_calc_fast__var_filt = 0.0f;
    _vrms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms3_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms4_rms_calc_fast__var_eff_s = 0;
    _vrms4_rms_calc_fast__period = 0.0f;
    _vrms4_rms_calc_fast__var_filt = 0.0f;
    _vrms4_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms4_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms5_rms_calc_fast__var_eff_s = 0;
    _vrms5_rms_calc_fast__period = 0.0f;
    _vrms5_rms_calc_fast__var_filt = 0.0f;
    _vrms5_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms5_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms6_rms_calc_fast__var_eff_s = 0;
    _vrms6_rms_calc_fast__period = 0.0f;
    _vrms6_rms_calc_fast__var_filt = 0.0f;
    _vrms6_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms6_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms7_rms_calc_fast__var_eff_s = 0;
    _vrms7_rms_calc_fast__period = 0.0f;
    _vrms7_rms_calc_fast__var_filt = 0.0f;
    _vrms7_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms7_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms8_rms_calc_fast__var_eff_s = 0;
    _vrms8_rms_calc_fast__period = 0.0f;
    _vrms8_rms_calc_fast__var_filt = 0.0f;
    _vrms8_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms8_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms9_rms_calc_fast__var_eff_s = 0;
    _vrms9_rms_calc_fast__period = 0.0f;
    _vrms9_rms_calc_fast__var_filt = 0.0f;
    _vrms9_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms9_rms_calc_fast__pc_cnt_1_state = 0;
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
    XIo_OutFloat(0x5500014c, 0.0f);
    HIL_OutAO(0x2013, 0.0f);
    XIo_OutFloat(0x55000150, 0.0f);
    HIL_OutAO(0x2014, 0.0f);
    XIo_OutFloat(0x55000154, 0.0f);
    HIL_OutAO(0x2015, 0.0f);
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
    // Generated from the component: Measurements Block - 10.IrmsA.instantaneous
    _measurements_block___10_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x210));
    // Generated from the component: Measurements Block - 10.IrmsB.instantaneous
    _measurements_block___10_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: Measurements Block - 10.IrmsC.instantaneous
    _measurements_block___10_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x212));
    // Generated from the component: Measurements Block - 11.IrmsA.instantaneous
    _measurements_block___11_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x130));
    // Generated from the component: Measurements Block - 11.IrmsB.instantaneous
    _measurements_block___11_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x131));
    // Generated from the component: Measurements Block - 11.IrmsC.instantaneous
    _measurements_block___11_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x132));
    // Generated from the component: Measurements Block - 2.IrmsA.instantaneous
    _measurements_block___2_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x337));
    // Generated from the component: Measurements Block - 2.IrmsB.instantaneous
    _measurements_block___2_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x338));
    // Generated from the component: Measurements Block - 2.IrmsC.instantaneous
    _measurements_block___2_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x339));
    // Generated from the component: Measurements Block - 3.IrmsA.instantaneous
    _measurements_block___3_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x33d));
    // Generated from the component: Measurements Block - 3.IrmsB.instantaneous
    _measurements_block___3_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x33e));
    // Generated from the component: Measurements Block - 3.IrmsC.instantaneous
    _measurements_block___3_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x33f));
    // Generated from the component: Vrms1.instantaneous
    _vrms1_instantaneous__out = (HIL_InFloat(0xc80000 + 0x129));
    // Generated from the component: Vrms10.instantaneous
    _vrms10_instantaneous__out = (HIL_InFloat(0xc80000 + 0x330));
    // Generated from the component: Vrms2.instantaneous
    _vrms2_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12a));
    // Generated from the component: Vrms3.instantaneous
    _vrms3_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12b));
    // Generated from the component: Vrms4.instantaneous
    _vrms4_instantaneous__out = (HIL_InFloat(0xc80000 + 0x331));
    // Generated from the component: Vrms5.instantaneous
    _vrms5_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12c));
    // Generated from the component: Vrms6.instantaneous
    _vrms6_instantaneous__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Vrms7.instantaneous
    _vrms7_instantaneous__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Vrms8.instantaneous
    _vrms8_instantaneous__out = (HIL_InFloat(0xc80000 + 0x332));
    // Generated from the component: Vrms9.instantaneous
    _vrms9_instantaneous__out = (HIL_InFloat(0xc80000 + 0x333));
    // Generated from the component: Measurements Block - 10.IrmsA.rms_calc_fast
    _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___10_irmsa_instantaneous__out * _measurements_block___10_irmsa_instantaneous__out;
    _measurements_block___10_irmsa_rms_calc_fast__var_filt_old = _measurements_block___10_irmsa_rms_calc_fast__var_filt;
    _measurements_block___10_irmsa_rms_calc_fast__var_filt = (_measurements_block___10_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___10_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___10_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___10_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___10_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___10_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___10_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsa_rms_calc_fast__var_eff_s = _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___10_irmsa_rms_calc_fast__period = (float)_measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___10_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsA.sys1
    // Generated from the component: Measurements Block - 10.IrmsB.rms_calc_fast
    _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___10_irmsb_instantaneous__out * _measurements_block___10_irmsb_instantaneous__out;
    _measurements_block___10_irmsb_rms_calc_fast__var_filt_old = _measurements_block___10_irmsb_rms_calc_fast__var_filt;
    _measurements_block___10_irmsb_rms_calc_fast__var_filt = (_measurements_block___10_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___10_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___10_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___10_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___10_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___10_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___10_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsb_rms_calc_fast__var_eff_s = _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___10_irmsb_rms_calc_fast__period = (float)_measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___10_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsB.sys1
    // Generated from the component: Measurements Block - 10.IrmsC.rms_calc_fast
    _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___10_irmsc_instantaneous__out * _measurements_block___10_irmsc_instantaneous__out;
    _measurements_block___10_irmsc_rms_calc_fast__var_filt_old = _measurements_block___10_irmsc_rms_calc_fast__var_filt;
    _measurements_block___10_irmsc_rms_calc_fast__var_filt = (_measurements_block___10_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___10_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___10_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___10_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___10_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___10_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___10_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsc_rms_calc_fast__var_eff_s = _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___10_irmsc_rms_calc_fast__period = (float)_measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___10_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsC.sys1
    // Generated from the component: Measurements Block - 11.IrmsA.rms_calc_fast
    _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___11_irmsa_instantaneous__out * _measurements_block___11_irmsa_instantaneous__out;
    _measurements_block___11_irmsa_rms_calc_fast__var_filt_old = _measurements_block___11_irmsa_rms_calc_fast__var_filt;
    _measurements_block___11_irmsa_rms_calc_fast__var_filt = (_measurements_block___11_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___11_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___11_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___11_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___11_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___11_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___11_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsa_rms_calc_fast__var_eff_s = _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___11_irmsa_rms_calc_fast__period = (float)_measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsA.sys1
    // Generated from the component: Measurements Block - 11.IrmsB.rms_calc_fast
    _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___11_irmsb_instantaneous__out * _measurements_block___11_irmsb_instantaneous__out;
    _measurements_block___11_irmsb_rms_calc_fast__var_filt_old = _measurements_block___11_irmsb_rms_calc_fast__var_filt;
    _measurements_block___11_irmsb_rms_calc_fast__var_filt = (_measurements_block___11_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___11_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___11_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___11_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___11_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___11_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___11_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsb_rms_calc_fast__var_eff_s = _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___11_irmsb_rms_calc_fast__period = (float)_measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsB.sys1
    // Generated from the component: Measurements Block - 11.IrmsC.rms_calc_fast
    _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___11_irmsc_instantaneous__out * _measurements_block___11_irmsc_instantaneous__out;
    _measurements_block___11_irmsc_rms_calc_fast__var_filt_old = _measurements_block___11_irmsc_rms_calc_fast__var_filt;
    _measurements_block___11_irmsc_rms_calc_fast__var_filt = (_measurements_block___11_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___11_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___11_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___11_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___11_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___11_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___11_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsc_rms_calc_fast__var_eff_s = _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___11_irmsc_rms_calc_fast__period = (float)_measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsC.sys1
    // Generated from the component: Measurements Block - 2.IrmsA.rms_calc_fast
    _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___2_irmsa_instantaneous__out * _measurements_block___2_irmsa_instantaneous__out;
    _measurements_block___2_irmsa_rms_calc_fast__var_filt_old = _measurements_block___2_irmsa_rms_calc_fast__var_filt;
    _measurements_block___2_irmsa_rms_calc_fast__var_filt = (_measurements_block___2_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___2_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___2_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___2_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___2_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___2_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___2_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsa_rms_calc_fast__var_eff_s = _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___2_irmsa_rms_calc_fast__period = (float)_measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___2_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsA.sys1
    // Generated from the component: Measurements Block - 2.IrmsB.rms_calc_fast
    _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___2_irmsb_instantaneous__out * _measurements_block___2_irmsb_instantaneous__out;
    _measurements_block___2_irmsb_rms_calc_fast__var_filt_old = _measurements_block___2_irmsb_rms_calc_fast__var_filt;
    _measurements_block___2_irmsb_rms_calc_fast__var_filt = (_measurements_block___2_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___2_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___2_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___2_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___2_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___2_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___2_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsb_rms_calc_fast__var_eff_s = _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___2_irmsb_rms_calc_fast__period = (float)_measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___2_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsB.sys1
    // Generated from the component: Measurements Block - 2.IrmsC.rms_calc_fast
    _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___2_irmsc_instantaneous__out * _measurements_block___2_irmsc_instantaneous__out;
    _measurements_block___2_irmsc_rms_calc_fast__var_filt_old = _measurements_block___2_irmsc_rms_calc_fast__var_filt;
    _measurements_block___2_irmsc_rms_calc_fast__var_filt = (_measurements_block___2_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___2_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___2_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___2_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___2_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___2_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___2_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsc_rms_calc_fast__var_eff_s = _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___2_irmsc_rms_calc_fast__period = (float)_measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___2_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsC.sys1
    // Generated from the component: Measurements Block - 3.IrmsA.rms_calc_fast
    _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___3_irmsa_instantaneous__out * _measurements_block___3_irmsa_instantaneous__out;
    _measurements_block___3_irmsa_rms_calc_fast__var_filt_old = _measurements_block___3_irmsa_rms_calc_fast__var_filt;
    _measurements_block___3_irmsa_rms_calc_fast__var_filt = (_measurements_block___3_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___3_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___3_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___3_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___3_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___3_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___3_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsa_rms_calc_fast__var_eff_s = _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___3_irmsa_rms_calc_fast__period = (float)_measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsA.sys1
    // Generated from the component: Measurements Block - 3.IrmsB.rms_calc_fast
    _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___3_irmsb_instantaneous__out * _measurements_block___3_irmsb_instantaneous__out;
    _measurements_block___3_irmsb_rms_calc_fast__var_filt_old = _measurements_block___3_irmsb_rms_calc_fast__var_filt;
    _measurements_block___3_irmsb_rms_calc_fast__var_filt = (_measurements_block___3_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___3_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___3_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___3_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___3_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___3_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___3_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsb_rms_calc_fast__var_eff_s = _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___3_irmsb_rms_calc_fast__period = (float)_measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsB.sys1
    // Generated from the component: Measurements Block - 3.IrmsC.rms_calc_fast
    _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___3_irmsc_instantaneous__out * _measurements_block___3_irmsc_instantaneous__out;
    _measurements_block___3_irmsc_rms_calc_fast__var_filt_old = _measurements_block___3_irmsc_rms_calc_fast__var_filt;
    _measurements_block___3_irmsc_rms_calc_fast__var_filt = (_measurements_block___3_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___3_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___3_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___3_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___3_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___3_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___3_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsc_rms_calc_fast__var_eff_s = _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___3_irmsc_rms_calc_fast__period = (float)_measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsC.sys1
    // Generated from the component: Vrms1.rms_calc_fast
    _vrms1_rms_calc_fast__v_sq_sum_state = _vrms1_rms_calc_fast__v_sq_sum_state + _vrms1_instantaneous__out * _vrms1_instantaneous__out;
    _vrms1_rms_calc_fast__var_filt_old = _vrms1_rms_calc_fast__var_filt;
    _vrms1_rms_calc_fast__var_filt = (_vrms1_rms_calc_fast__var_filt_old * 0.909 + _vrms1_instantaneous__out * 0.0909);
    if((_vrms1_rms_calc_fast__var_filt >= 0.0f) && (_vrms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _vrms1_rms_calc_fast__var_eff_s = _vrms1_rms_calc_fast__v_sq_sum_state;
        _vrms1_rms_calc_fast__period = (float)_vrms1_rms_calc_fast__pc_cnt_1_state;
        _vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms1.sys1
    // Generated from the component: Vrms10.rms_calc_fast
    _vrms10_rms_calc_fast__v_sq_sum_state = _vrms10_rms_calc_fast__v_sq_sum_state + _vrms10_instantaneous__out * _vrms10_instantaneous__out;
    _vrms10_rms_calc_fast__var_filt_old = _vrms10_rms_calc_fast__var_filt;
    _vrms10_rms_calc_fast__var_filt = (_vrms10_rms_calc_fast__var_filt_old * 0.909 + _vrms10_instantaneous__out * 0.0909);
    if((_vrms10_rms_calc_fast__var_filt >= 0.0f) && (_vrms10_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms10_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms10_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms10_rms_calc_fast__var_zc == 1) || (5000 == _vrms10_rms_calc_fast__pc_cnt_1_state)) {
        _vrms10_rms_calc_fast__var_eff_s = _vrms10_rms_calc_fast__v_sq_sum_state;
        _vrms10_rms_calc_fast__period = (float)_vrms10_rms_calc_fast__pc_cnt_1_state;
        _vrms10_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms10.sys1
    // Generated from the component: Vrms2.rms_calc_fast
    _vrms2_rms_calc_fast__v_sq_sum_state = _vrms2_rms_calc_fast__v_sq_sum_state + _vrms2_instantaneous__out * _vrms2_instantaneous__out;
    _vrms2_rms_calc_fast__var_filt_old = _vrms2_rms_calc_fast__var_filt;
    _vrms2_rms_calc_fast__var_filt = (_vrms2_rms_calc_fast__var_filt_old * 0.909 + _vrms2_instantaneous__out * 0.0909);
    if((_vrms2_rms_calc_fast__var_filt >= 0.0f) && (_vrms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms2_rms_calc_fast__var_zc == 1) || (5000 == _vrms2_rms_calc_fast__pc_cnt_1_state)) {
        _vrms2_rms_calc_fast__var_eff_s = _vrms2_rms_calc_fast__v_sq_sum_state;
        _vrms2_rms_calc_fast__period = (float)_vrms2_rms_calc_fast__pc_cnt_1_state;
        _vrms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms2.sys1
    // Generated from the component: Vrms3.rms_calc_fast
    _vrms3_rms_calc_fast__v_sq_sum_state = _vrms3_rms_calc_fast__v_sq_sum_state + _vrms3_instantaneous__out * _vrms3_instantaneous__out;
    _vrms3_rms_calc_fast__var_filt_old = _vrms3_rms_calc_fast__var_filt;
    _vrms3_rms_calc_fast__var_filt = (_vrms3_rms_calc_fast__var_filt_old * 0.909 + _vrms3_instantaneous__out * 0.0909);
    if((_vrms3_rms_calc_fast__var_filt >= 0.0f) && (_vrms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms3_rms_calc_fast__var_zc == 1) || (5000 == _vrms3_rms_calc_fast__pc_cnt_1_state)) {
        _vrms3_rms_calc_fast__var_eff_s = _vrms3_rms_calc_fast__v_sq_sum_state;
        _vrms3_rms_calc_fast__period = (float)_vrms3_rms_calc_fast__pc_cnt_1_state;
        _vrms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms3.sys1
    // Generated from the component: Vrms4.rms_calc_fast
    _vrms4_rms_calc_fast__v_sq_sum_state = _vrms4_rms_calc_fast__v_sq_sum_state + _vrms4_instantaneous__out * _vrms4_instantaneous__out;
    _vrms4_rms_calc_fast__var_filt_old = _vrms4_rms_calc_fast__var_filt;
    _vrms4_rms_calc_fast__var_filt = (_vrms4_rms_calc_fast__var_filt_old * 0.909 + _vrms4_instantaneous__out * 0.0909);
    if((_vrms4_rms_calc_fast__var_filt >= 0.0f) && (_vrms4_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms4_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms4_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms4_rms_calc_fast__var_zc == 1) || (5000 == _vrms4_rms_calc_fast__pc_cnt_1_state)) {
        _vrms4_rms_calc_fast__var_eff_s = _vrms4_rms_calc_fast__v_sq_sum_state;
        _vrms4_rms_calc_fast__period = (float)_vrms4_rms_calc_fast__pc_cnt_1_state;
        _vrms4_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms4.sys1
    // Generated from the component: Vrms5.rms_calc_fast
    _vrms5_rms_calc_fast__v_sq_sum_state = _vrms5_rms_calc_fast__v_sq_sum_state + _vrms5_instantaneous__out * _vrms5_instantaneous__out;
    _vrms5_rms_calc_fast__var_filt_old = _vrms5_rms_calc_fast__var_filt;
    _vrms5_rms_calc_fast__var_filt = (_vrms5_rms_calc_fast__var_filt_old * 0.909 + _vrms5_instantaneous__out * 0.0909);
    if((_vrms5_rms_calc_fast__var_filt >= 0.0f) && (_vrms5_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms5_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms5_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms5_rms_calc_fast__var_zc == 1) || (5000 == _vrms5_rms_calc_fast__pc_cnt_1_state)) {
        _vrms5_rms_calc_fast__var_eff_s = _vrms5_rms_calc_fast__v_sq_sum_state;
        _vrms5_rms_calc_fast__period = (float)_vrms5_rms_calc_fast__pc_cnt_1_state;
        _vrms5_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms5.sys1
    // Generated from the component: Vrms6.rms_calc_fast
    _vrms6_rms_calc_fast__v_sq_sum_state = _vrms6_rms_calc_fast__v_sq_sum_state + _vrms6_instantaneous__out * _vrms6_instantaneous__out;
    _vrms6_rms_calc_fast__var_filt_old = _vrms6_rms_calc_fast__var_filt;
    _vrms6_rms_calc_fast__var_filt = (_vrms6_rms_calc_fast__var_filt_old * 0.909 + _vrms6_instantaneous__out * 0.0909);
    if((_vrms6_rms_calc_fast__var_filt >= 0.0f) && (_vrms6_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms6_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms6_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms6_rms_calc_fast__var_zc == 1) || (5000 == _vrms6_rms_calc_fast__pc_cnt_1_state)) {
        _vrms6_rms_calc_fast__var_eff_s = _vrms6_rms_calc_fast__v_sq_sum_state;
        _vrms6_rms_calc_fast__period = (float)_vrms6_rms_calc_fast__pc_cnt_1_state;
        _vrms6_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms6.sys1
    // Generated from the component: Vrms7.rms_calc_fast
    _vrms7_rms_calc_fast__v_sq_sum_state = _vrms7_rms_calc_fast__v_sq_sum_state + _vrms7_instantaneous__out * _vrms7_instantaneous__out;
    _vrms7_rms_calc_fast__var_filt_old = _vrms7_rms_calc_fast__var_filt;
    _vrms7_rms_calc_fast__var_filt = (_vrms7_rms_calc_fast__var_filt_old * 0.909 + _vrms7_instantaneous__out * 0.0909);
    if((_vrms7_rms_calc_fast__var_filt >= 0.0f) && (_vrms7_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms7_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms7_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms7_rms_calc_fast__var_zc == 1) || (5000 == _vrms7_rms_calc_fast__pc_cnt_1_state)) {
        _vrms7_rms_calc_fast__var_eff_s = _vrms7_rms_calc_fast__v_sq_sum_state;
        _vrms7_rms_calc_fast__period = (float)_vrms7_rms_calc_fast__pc_cnt_1_state;
        _vrms7_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms7.sys1
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
    // Generated from the component: Vrms9.rms_calc_fast
    _vrms9_rms_calc_fast__v_sq_sum_state = _vrms9_rms_calc_fast__v_sq_sum_state + _vrms9_instantaneous__out * _vrms9_instantaneous__out;
    _vrms9_rms_calc_fast__var_filt_old = _vrms9_rms_calc_fast__var_filt;
    _vrms9_rms_calc_fast__var_filt = (_vrms9_rms_calc_fast__var_filt_old * 0.909 + _vrms9_instantaneous__out * 0.0909);
    if((_vrms9_rms_calc_fast__var_filt >= 0.0f) && (_vrms9_rms_calc_fast__var_filt_old < 0.0f)) {
        _vrms9_rms_calc_fast__var_zc = 1;
    }
    else {
        _vrms9_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vrms9_rms_calc_fast__var_zc == 1) || (5000 == _vrms9_rms_calc_fast__pc_cnt_1_state)) {
        _vrms9_rms_calc_fast__var_eff_s = _vrms9_rms_calc_fast__v_sq_sum_state;
        _vrms9_rms_calc_fast__period = (float)_vrms9_rms_calc_fast__pc_cnt_1_state;
        _vrms9_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms9.sys1
    // Generated from the component: Measurements Block - 10.IrmsA.rt1.Input
    _measurements_block___10_irmsa_rt1_output__out = _measurements_block___10_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 10.IrmsA.rt2.Input
    _measurements_block___10_irmsa_rt2_output__out = _measurements_block___10_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 10.IrmsA.t1
    // Generated from the component: Measurements Block - 10.IrmsB.rt1.Input
    _measurements_block___10_irmsb_rt1_output__out = _measurements_block___10_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 10.IrmsB.rt2.Input
    _measurements_block___10_irmsb_rt2_output__out = _measurements_block___10_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 10.IrmsB.t1
    // Generated from the component: Measurements Block - 10.IrmsC.rt1.Input
    _measurements_block___10_irmsc_rt1_output__out = _measurements_block___10_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 10.IrmsC.rt2.Input
    _measurements_block___10_irmsc_rt2_output__out = _measurements_block___10_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 10.IrmsC.t1
    // Generated from the component: Measurements Block - 11.IrmsA.rt1.Input
    _measurements_block___11_irmsa_rt1_output__out = _measurements_block___11_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 11.IrmsA.rt2.Input
    _measurements_block___11_irmsa_rt2_output__out = _measurements_block___11_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 11.IrmsA.t1
    // Generated from the component: Measurements Block - 11.IrmsB.rt1.Input
    _measurements_block___11_irmsb_rt1_output__out = _measurements_block___11_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 11.IrmsB.rt2.Input
    _measurements_block___11_irmsb_rt2_output__out = _measurements_block___11_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 11.IrmsB.t1
    // Generated from the component: Measurements Block - 11.IrmsC.rt1.Input
    _measurements_block___11_irmsc_rt1_output__out = _measurements_block___11_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 11.IrmsC.rt2.Input
    _measurements_block___11_irmsc_rt2_output__out = _measurements_block___11_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 11.IrmsC.t1
    // Generated from the component: Measurements Block - 2.IrmsA.rt1.Input
    _measurements_block___2_irmsa_rt1_output__out = _measurements_block___2_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 2.IrmsA.rt2.Input
    _measurements_block___2_irmsa_rt2_output__out = _measurements_block___2_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 2.IrmsA.t1
    // Generated from the component: Measurements Block - 2.IrmsB.rt1.Input
    _measurements_block___2_irmsb_rt1_output__out = _measurements_block___2_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 2.IrmsB.rt2.Input
    _measurements_block___2_irmsb_rt2_output__out = _measurements_block___2_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 2.IrmsB.t1
    // Generated from the component: Measurements Block - 2.IrmsC.rt1.Input
    _measurements_block___2_irmsc_rt1_output__out = _measurements_block___2_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 2.IrmsC.rt2.Input
    _measurements_block___2_irmsc_rt2_output__out = _measurements_block___2_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 2.IrmsC.t1
    // Generated from the component: Measurements Block - 3.IrmsA.rt1.Input
    _measurements_block___3_irmsa_rt1_output__out = _measurements_block___3_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 3.IrmsA.rt2.Input
    _measurements_block___3_irmsa_rt2_output__out = _measurements_block___3_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 3.IrmsA.t1
    // Generated from the component: Measurements Block - 3.IrmsB.rt1.Input
    _measurements_block___3_irmsb_rt1_output__out = _measurements_block___3_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 3.IrmsB.rt2.Input
    _measurements_block___3_irmsb_rt2_output__out = _measurements_block___3_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 3.IrmsB.t1
    // Generated from the component: Measurements Block - 3.IrmsC.rt1.Input
    _measurements_block___3_irmsc_rt1_output__out = _measurements_block___3_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 3.IrmsC.rt2.Input
    _measurements_block___3_irmsc_rt2_output__out = _measurements_block___3_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 3.IrmsC.t1
    // Generated from the component: Vrms1.rt1.Input
    _vrms1_rt1_output__out = _vrms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms1.rt2.Input
    _vrms1_rt2_output__out = _vrms1_rms_calc_fast__period;
    // Generated from the component: Vrms1.t1
    // Generated from the component: Vrms10.rt1.Input
    _vrms10_rt1_output__out = _vrms10_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms10.rt2.Input
    _vrms10_rt2_output__out = _vrms10_rms_calc_fast__period;
    // Generated from the component: Vrms10.t1
    // Generated from the component: Vrms2.rt1.Input
    _vrms2_rt1_output__out = _vrms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms2.rt2.Input
    _vrms2_rt2_output__out = _vrms2_rms_calc_fast__period;
    // Generated from the component: Vrms2.t1
    // Generated from the component: Vrms3.rt1.Input
    _vrms3_rt1_output__out = _vrms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms3.rt2.Input
    _vrms3_rt2_output__out = _vrms3_rms_calc_fast__period;
    // Generated from the component: Vrms3.t1
    // Generated from the component: Vrms4.rt1.Input
    _vrms4_rt1_output__out = _vrms4_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms4.rt2.Input
    _vrms4_rt2_output__out = _vrms4_rms_calc_fast__period;
    // Generated from the component: Vrms4.t1
    // Generated from the component: Vrms5.rt1.Input
    _vrms5_rt1_output__out = _vrms5_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms5.rt2.Input
    _vrms5_rt2_output__out = _vrms5_rms_calc_fast__period;
    // Generated from the component: Vrms5.t1
    // Generated from the component: Vrms6.rt1.Input
    _vrms6_rt1_output__out = _vrms6_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms6.rt2.Input
    _vrms6_rt2_output__out = _vrms6_rms_calc_fast__period;
    // Generated from the component: Vrms6.t1
    // Generated from the component: Vrms7.rt1.Input
    _vrms7_rt1_output__out = _vrms7_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms7.rt2.Input
    _vrms7_rt2_output__out = _vrms7_rms_calc_fast__period;
    // Generated from the component: Vrms7.t1
    // Generated from the component: Vrms8.rt1.Input
    _vrms8_rt1_output__out = _vrms8_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms8.rt2.Input
    _vrms8_rt2_output__out = _vrms8_rms_calc_fast__period;
    // Generated from the component: Vrms8.t1
    // Generated from the component: Vrms9.rt1.Input
    _vrms9_rt1_output__out = _vrms9_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms9.rt2.Input
    _vrms9_rt2_output__out = _vrms9_rms_calc_fast__period;
    // Generated from the component: Vrms9.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Measurements Block - 10.IrmsA.rms_calc_fast
    if ((_measurements_block___10_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___10_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 10.IrmsB.rms_calc_fast
    if ((_measurements_block___10_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___10_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 10.IrmsC.rms_calc_fast
    if ((_measurements_block___10_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___10_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 11.IrmsA.rms_calc_fast
    if ((_measurements_block___11_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 11.IrmsB.rms_calc_fast
    if ((_measurements_block___11_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 11.IrmsC.rms_calc_fast
    if ((_measurements_block___11_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 2.IrmsA.rms_calc_fast
    if ((_measurements_block___2_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___2_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 2.IrmsB.rms_calc_fast
    if ((_measurements_block___2_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___2_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 2.IrmsC.rms_calc_fast
    if ((_measurements_block___2_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___2_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 3.IrmsA.rms_calc_fast
    if ((_measurements_block___3_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 3.IrmsB.rms_calc_fast
    if ((_measurements_block___3_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 3.IrmsC.rms_calc_fast
    if ((_measurements_block___3_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms1.rms_calc_fast
    if ((_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms10.rms_calc_fast
    if ((_vrms10_rms_calc_fast__var_zc == 1) || (5000 == _vrms10_rms_calc_fast__pc_cnt_1_state)) {
        _vrms10_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms10_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms2.rms_calc_fast
    if ((_vrms2_rms_calc_fast__var_zc == 1) || (5000 == _vrms2_rms_calc_fast__pc_cnt_1_state)) {
        _vrms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms3.rms_calc_fast
    if ((_vrms3_rms_calc_fast__var_zc == 1) || (5000 == _vrms3_rms_calc_fast__pc_cnt_1_state)) {
        _vrms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms4.rms_calc_fast
    if ((_vrms4_rms_calc_fast__var_zc == 1) || (5000 == _vrms4_rms_calc_fast__pc_cnt_1_state)) {
        _vrms4_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms4_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms5.rms_calc_fast
    if ((_vrms5_rms_calc_fast__var_zc == 1) || (5000 == _vrms5_rms_calc_fast__pc_cnt_1_state)) {
        _vrms5_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms5_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms6.rms_calc_fast
    if ((_vrms6_rms_calc_fast__var_zc == 1) || (5000 == _vrms6_rms_calc_fast__pc_cnt_1_state)) {
        _vrms6_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms6_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms7.rms_calc_fast
    if ((_vrms7_rms_calc_fast__var_zc == 1) || (5000 == _vrms7_rms_calc_fast__pc_cnt_1_state)) {
        _vrms7_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms7_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms8.rms_calc_fast
    if ((_vrms8_rms_calc_fast__var_zc == 1) || (5000 == _vrms8_rms_calc_fast__pc_cnt_1_state)) {
        _vrms8_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms8_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms9.rms_calc_fast
    if ((_vrms9_rms_calc_fast__var_zc == 1) || (5000 == _vrms9_rms_calc_fast__pc_cnt_1_state)) {
        _vrms9_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms9_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Measurements Block - 10.IrmsA.rms_calc_slow
    if(_measurements_block___10_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___10_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___10_irmsa_rt1_output__out / _measurements_block___10_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___10_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsB.rms_calc_slow
    if(_measurements_block___10_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___10_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___10_irmsb_rt1_output__out / _measurements_block___10_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___10_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsC.rms_calc_slow
    if(_measurements_block___10_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___10_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___10_irmsc_rt1_output__out / _measurements_block___10_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___10_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsA.rms_calc_slow
    if(_measurements_block___11_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___11_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___11_irmsa_rt1_output__out / _measurements_block___11_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___11_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsB.rms_calc_slow
    if(_measurements_block___11_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___11_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___11_irmsb_rt1_output__out / _measurements_block___11_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___11_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsC.rms_calc_slow
    if(_measurements_block___11_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___11_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___11_irmsc_rt1_output__out / _measurements_block___11_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___11_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsA.rms_calc_slow
    if(_measurements_block___2_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___2_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___2_irmsa_rt1_output__out / _measurements_block___2_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___2_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsB.rms_calc_slow
    if(_measurements_block___2_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___2_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___2_irmsb_rt1_output__out / _measurements_block___2_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___2_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 2.IrmsC.rms_calc_slow
    if(_measurements_block___2_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___2_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___2_irmsc_rt1_output__out / _measurements_block___2_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___2_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsA.rms_calc_slow
    if(_measurements_block___3_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___3_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___3_irmsa_rt1_output__out / _measurements_block___3_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___3_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsB.rms_calc_slow
    if(_measurements_block___3_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___3_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___3_irmsb_rt1_output__out / _measurements_block___3_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___3_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 3.IrmsC.rms_calc_slow
    if(_measurements_block___3_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___3_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___3_irmsc_rt1_output__out / _measurements_block___3_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___3_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms1.rms_calc_slow
    if(_vrms1_rt2_output__out > 0.0f) {
        _vrms1_rms_calc_slow__var_rms = sqrtf(_vrms1_rt1_output__out / _vrms1_rt2_output__out);
    }
    else {
        _vrms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms10.rms_calc_slow
    if(_vrms10_rt2_output__out > 0.0f) {
        _vrms10_rms_calc_slow__var_rms = sqrtf(_vrms10_rt1_output__out / _vrms10_rt2_output__out);
    }
    else {
        _vrms10_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms2.rms_calc_slow
    if(_vrms2_rt2_output__out > 0.0f) {
        _vrms2_rms_calc_slow__var_rms = sqrtf(_vrms2_rt1_output__out / _vrms2_rt2_output__out);
    }
    else {
        _vrms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms3.rms_calc_slow
    if(_vrms3_rt2_output__out > 0.0f) {
        _vrms3_rms_calc_slow__var_rms = sqrtf(_vrms3_rt1_output__out / _vrms3_rt2_output__out);
    }
    else {
        _vrms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms4.rms_calc_slow
    if(_vrms4_rt2_output__out > 0.0f) {
        _vrms4_rms_calc_slow__var_rms = sqrtf(_vrms4_rt1_output__out / _vrms4_rt2_output__out);
    }
    else {
        _vrms4_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms5.rms_calc_slow
    if(_vrms5_rt2_output__out > 0.0f) {
        _vrms5_rms_calc_slow__var_rms = sqrtf(_vrms5_rt1_output__out / _vrms5_rt2_output__out);
    }
    else {
        _vrms5_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms6.rms_calc_slow
    if(_vrms6_rt2_output__out > 0.0f) {
        _vrms6_rms_calc_slow__var_rms = sqrtf(_vrms6_rt1_output__out / _vrms6_rt2_output__out);
    }
    else {
        _vrms6_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms7.rms_calc_slow
    if(_vrms7_rt2_output__out > 0.0f) {
        _vrms7_rms_calc_slow__var_rms = sqrtf(_vrms7_rt1_output__out / _vrms7_rt2_output__out);
    }
    else {
        _vrms7_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms8.rms_calc_slow
    if(_vrms8_rt2_output__out > 0.0f) {
        _vrms8_rms_calc_slow__var_rms = sqrtf(_vrms8_rt1_output__out / _vrms8_rt2_output__out);
    }
    else {
        _vrms8_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms9.rms_calc_slow
    if(_vrms9_rt2_output__out > 0.0f) {
        _vrms9_rms_calc_slow__var_rms = sqrtf(_vrms9_rt1_output__out / _vrms9_rt2_output__out);
    }
    else {
        _vrms9_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 10.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000100, _measurements_block___10_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsA.rms
    HIL_OutAO(0x2000, _measurements_block___10_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsA.sys2
    // Generated from the component: Measurements Block - 10.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000104, _measurements_block___10_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsB.rms
    HIL_OutAO(0x2001, _measurements_block___10_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsB.sys2
    // Generated from the component: Measurements Block - 10.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000108, _measurements_block___10_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsC.rms
    HIL_OutAO(0x2002, _measurements_block___10_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 10.IrmsC.sys2
    // Generated from the component: Measurements Block - 11.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x5500010c, _measurements_block___11_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsA.rms
    HIL_OutAO(0x2003, _measurements_block___11_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsA.sys2
    // Generated from the component: Measurements Block - 11.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000110, _measurements_block___11_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsB.rms
    HIL_OutAO(0x2004, _measurements_block___11_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsB.sys2
    // Generated from the component: Measurements Block - 11.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000114, _measurements_block___11_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsC.rms
    HIL_OutAO(0x2005, _measurements_block___11_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsC.sys2
    // Generated from the component: Measurements Block - 2.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000118, _measurements_block___2_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsA.rms
    HIL_OutAO(0x2006, _measurements_block___2_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsA.sys2
    // Generated from the component: Measurements Block - 2.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x5500011c, _measurements_block___2_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsB.rms
    HIL_OutAO(0x2007, _measurements_block___2_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsB.sys2
    // Generated from the component: Measurements Block - 2.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000120, _measurements_block___2_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsC.rms
    HIL_OutAO(0x2008, _measurements_block___2_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 2.IrmsC.sys2
    // Generated from the component: Measurements Block - 3.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000124, _measurements_block___3_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsA.rms
    HIL_OutAO(0x2009, _measurements_block___3_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsA.sys2
    // Generated from the component: Measurements Block - 3.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000128, _measurements_block___3_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsB.rms
    HIL_OutAO(0x200a, _measurements_block___3_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsB.sys2
    // Generated from the component: Measurements Block - 3.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x5500012c, _measurements_block___3_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsC.rms
    HIL_OutAO(0x200b, _measurements_block___3_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsC.sys2
    // Generated from the component: Vrms1.cpu_trans.Input
    XIo_OutFloat(0x55000130, _vrms1_rms_calc_slow__var_rms);
    // Generated from the component: Vrms1.rms
    HIL_OutAO(0x200c, _vrms1_rms_calc_slow__var_rms);
    // Generated from the component: Vrms1.sys2
    // Generated from the component: Vrms10.cpu_trans.Input
    XIo_OutFloat(0x55000134, _vrms10_rms_calc_slow__var_rms);
    // Generated from the component: Vrms10.rms
    HIL_OutAO(0x200d, _vrms10_rms_calc_slow__var_rms);
    // Generated from the component: Vrms10.sys2
    // Generated from the component: Vrms2.cpu_trans.Input
    XIo_OutFloat(0x55000138, _vrms2_rms_calc_slow__var_rms);
    // Generated from the component: Vrms2.rms
    HIL_OutAO(0x200e, _vrms2_rms_calc_slow__var_rms);
    // Generated from the component: Vrms2.sys2
    // Generated from the component: Vrms3.cpu_trans.Input
    XIo_OutFloat(0x5500013c, _vrms3_rms_calc_slow__var_rms);
    // Generated from the component: Vrms3.rms
    HIL_OutAO(0x200f, _vrms3_rms_calc_slow__var_rms);
    // Generated from the component: Vrms3.sys2
    // Generated from the component: Vrms4.cpu_trans.Input
    XIo_OutFloat(0x55000140, _vrms4_rms_calc_slow__var_rms);
    // Generated from the component: Vrms4.rms
    HIL_OutAO(0x2010, _vrms4_rms_calc_slow__var_rms);
    // Generated from the component: Vrms4.sys2
    // Generated from the component: Vrms5.cpu_trans.Input
    XIo_OutFloat(0x55000144, _vrms5_rms_calc_slow__var_rms);
    // Generated from the component: Vrms5.rms
    HIL_OutAO(0x2011, _vrms5_rms_calc_slow__var_rms);
    // Generated from the component: Vrms5.sys2
    // Generated from the component: Vrms6.cpu_trans.Input
    XIo_OutFloat(0x55000148, _vrms6_rms_calc_slow__var_rms);
    // Generated from the component: Vrms6.rms
    HIL_OutAO(0x2012, _vrms6_rms_calc_slow__var_rms);
    // Generated from the component: Vrms6.sys2
    // Generated from the component: Vrms7.cpu_trans.Input
    XIo_OutFloat(0x5500014c, _vrms7_rms_calc_slow__var_rms);
    // Generated from the component: Vrms7.rms
    HIL_OutAO(0x2013, _vrms7_rms_calc_slow__var_rms);
    // Generated from the component: Vrms7.sys2
    // Generated from the component: Vrms8.cpu_trans.Input
    XIo_OutFloat(0x55000150, _vrms8_rms_calc_slow__var_rms);
    // Generated from the component: Vrms8.rms
    HIL_OutAO(0x2014, _vrms8_rms_calc_slow__var_rms);
    // Generated from the component: Vrms8.sys2
    // Generated from the component: Vrms9.cpu_trans.Input
    XIo_OutFloat(0x55000154, _vrms9_rms_calc_slow__var_rms);
    // Generated from the component: Vrms9.rms
    HIL_OutAO(0x2015, _vrms9_rms_calc_slow__var_rms);
    // Generated from the component: Vrms9.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------