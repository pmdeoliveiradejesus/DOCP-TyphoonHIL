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
float _measurements_block___13_irmsa_instantaneous__out;
float _measurements_block___13_irmsb_instantaneous__out;
float _measurements_block___13_irmsc_instantaneous__out;
float _measurements_block___14_irmsa_instantaneous__out;
float _measurements_block___14_irmsb_instantaneous__out;
float _measurements_block___14_irmsc_instantaneous__out;
float _measurements_block___5_irmsa_instantaneous__out;
float _measurements_block___5_irmsb_instantaneous__out;
float _measurements_block___5_irmsc_instantaneous__out;
float _measurements_block___6_irmsa_instantaneous__out;
float _measurements_block___6_irmsb_instantaneous__out;
float _measurements_block___6_irmsc_instantaneous__out;
float _measurements_block___8_irmsa_instantaneous__out;
float _measurements_block___8_irmsb_instantaneous__out;
float _measurements_block___8_irmsc_instantaneous__out;
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
float _measurements_block___6_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___6_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___6_irmsa_rms_calc_fast__var_zc;
float _measurements_block___6_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___6_irmsa_rms_calc_slow__var_rms;
float _measurements_block___6_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___6_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___6_irmsb_rms_calc_fast__var_zc;
float _measurements_block___6_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___6_irmsb_rms_calc_slow__var_rms;
float _measurements_block___6_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___6_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___6_irmsc_rms_calc_fast__var_zc;
float _measurements_block___6_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___6_irmsc_rms_calc_slow__var_rms;
float _measurements_block___8_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___8_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___8_irmsa_rms_calc_fast__var_zc;
float _measurements_block___8_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___8_irmsa_rms_calc_slow__var_rms;
float _measurements_block___8_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___8_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___8_irmsb_rms_calc_fast__var_zc;
float _measurements_block___8_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___8_irmsb_rms_calc_slow__var_rms;
float _measurements_block___8_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___8_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___8_irmsc_rms_calc_fast__var_zc;
float _measurements_block___8_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___8_irmsc_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
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
float _measurements_block___6_irmsa_rt1_output__out =  0.0;
float _measurements_block___6_irmsa_rt2_output__out =  0.0;
float _measurements_block___6_irmsb_rt1_output__out =  0.0;
float _measurements_block___6_irmsb_rt2_output__out =  0.0;
float _measurements_block___6_irmsc_rt1_output__out =  0.0;
float _measurements_block___6_irmsc_rt2_output__out =  0.0;
float _measurements_block___8_irmsa_rt1_output__out =  0.0;
float _measurements_block___8_irmsa_rt2_output__out =  0.0;
float _measurements_block___8_irmsb_rt1_output__out =  0.0;
float _measurements_block___8_irmsb_rt2_output__out =  0.0;
float _measurements_block___8_irmsc_rt1_output__out =  0.0;
float _measurements_block___8_irmsc_rt2_output__out =  0.0;
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
float _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___6_irmsa_rms_calc_fast__var_filt;
float _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___6_irmsb_rms_calc_fast__var_filt;
float _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___6_irmsc_rms_calc_fast__var_filt;
float _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___8_irmsa_rms_calc_fast__var_filt;
float _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___8_irmsb_rms_calc_fast__var_filt;
float _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___8_irmsc_rms_calc_fast__var_filt;
//@cmp.svar.end






// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
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
    _measurements_block___6_irmsa_rt1_output__out =  0.0;
    _measurements_block___6_irmsa_rt2_output__out =  0.0;
    _measurements_block___6_irmsb_rt1_output__out =  0.0;
    _measurements_block___6_irmsb_rt2_output__out =  0.0;
    _measurements_block___6_irmsc_rt1_output__out =  0.0;
    _measurements_block___6_irmsc_rt2_output__out =  0.0;
    _measurements_block___8_irmsa_rt1_output__out =  0.0;
    _measurements_block___8_irmsa_rt2_output__out =  0.0;
    _measurements_block___8_irmsb_rt1_output__out =  0.0;
    _measurements_block___8_irmsb_rt2_output__out =  0.0;
    _measurements_block___8_irmsc_rt1_output__out =  0.0;
    _measurements_block___8_irmsc_rt2_output__out =  0.0;
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
    _measurements_block___6_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___6_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___6_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___6_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___6_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___6_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___6_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___6_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___6_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___8_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___8_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___8_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___8_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___8_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___8_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___8_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___8_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___8_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
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
    // Generated from the component: Measurements Block - 13.IrmsA.instantaneous
    _measurements_block___13_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x1f));
    // Generated from the component: Measurements Block - 13.IrmsB.instantaneous
    _measurements_block___13_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x20));
    // Generated from the component: Measurements Block - 13.IrmsC.instantaneous
    _measurements_block___13_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x21));
    // Generated from the component: Measurements Block - 14.IrmsA.instantaneous
    _measurements_block___14_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x330));
    // Generated from the component: Measurements Block - 14.IrmsB.instantaneous
    _measurements_block___14_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x331));
    // Generated from the component: Measurements Block - 14.IrmsC.instantaneous
    _measurements_block___14_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x332));
    // Generated from the component: Measurements Block - 5.IrmsA.instantaneous
    _measurements_block___5_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x228));
    // Generated from the component: Measurements Block - 5.IrmsB.instantaneous
    _measurements_block___5_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x229));
    // Generated from the component: Measurements Block - 5.IrmsC.instantaneous
    _measurements_block___5_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x22a));
    // Generated from the component: Measurements Block - 6.IrmsA.instantaneous
    _measurements_block___6_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x116));
    // Generated from the component: Measurements Block - 6.IrmsB.instantaneous
    _measurements_block___6_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x117));
    // Generated from the component: Measurements Block - 6.IrmsC.instantaneous
    _measurements_block___6_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x118));
    // Generated from the component: Measurements Block - 8.IrmsA.instantaneous
    _measurements_block___8_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x336));
    // Generated from the component: Measurements Block - 8.IrmsB.instantaneous
    _measurements_block___8_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x337));
    // Generated from the component: Measurements Block - 8.IrmsC.instantaneous
    _measurements_block___8_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x338));
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
    // Generated from the component: Measurements Block - 6.IrmsA.rms_calc_fast
    _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___6_irmsa_instantaneous__out * _measurements_block___6_irmsa_instantaneous__out;
    _measurements_block___6_irmsa_rms_calc_fast__var_filt_old = _measurements_block___6_irmsa_rms_calc_fast__var_filt;
    _measurements_block___6_irmsa_rms_calc_fast__var_filt = (_measurements_block___6_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___6_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___6_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___6_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___6_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___6_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___6_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsa_rms_calc_fast__var_eff_s = _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___6_irmsa_rms_calc_fast__period = (float)_measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___6_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 6.IrmsA.sys1
    // Generated from the component: Measurements Block - 6.IrmsB.rms_calc_fast
    _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___6_irmsb_instantaneous__out * _measurements_block___6_irmsb_instantaneous__out;
    _measurements_block___6_irmsb_rms_calc_fast__var_filt_old = _measurements_block___6_irmsb_rms_calc_fast__var_filt;
    _measurements_block___6_irmsb_rms_calc_fast__var_filt = (_measurements_block___6_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___6_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___6_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___6_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___6_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___6_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___6_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsb_rms_calc_fast__var_eff_s = _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___6_irmsb_rms_calc_fast__period = (float)_measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___6_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 6.IrmsB.sys1
    // Generated from the component: Measurements Block - 6.IrmsC.rms_calc_fast
    _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___6_irmsc_instantaneous__out * _measurements_block___6_irmsc_instantaneous__out;
    _measurements_block___6_irmsc_rms_calc_fast__var_filt_old = _measurements_block___6_irmsc_rms_calc_fast__var_filt;
    _measurements_block___6_irmsc_rms_calc_fast__var_filt = (_measurements_block___6_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___6_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___6_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___6_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___6_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___6_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___6_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsc_rms_calc_fast__var_eff_s = _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___6_irmsc_rms_calc_fast__period = (float)_measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___6_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 6.IrmsC.sys1
    // Generated from the component: Measurements Block - 8.IrmsA.rms_calc_fast
    _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___8_irmsa_instantaneous__out * _measurements_block___8_irmsa_instantaneous__out;
    _measurements_block___8_irmsa_rms_calc_fast__var_filt_old = _measurements_block___8_irmsa_rms_calc_fast__var_filt;
    _measurements_block___8_irmsa_rms_calc_fast__var_filt = (_measurements_block___8_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___8_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___8_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___8_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___8_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___8_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___8_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsa_rms_calc_fast__var_eff_s = _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___8_irmsa_rms_calc_fast__period = (float)_measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___8_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsA.sys1
    // Generated from the component: Measurements Block - 8.IrmsB.rms_calc_fast
    _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___8_irmsb_instantaneous__out * _measurements_block___8_irmsb_instantaneous__out;
    _measurements_block___8_irmsb_rms_calc_fast__var_filt_old = _measurements_block___8_irmsb_rms_calc_fast__var_filt;
    _measurements_block___8_irmsb_rms_calc_fast__var_filt = (_measurements_block___8_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___8_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___8_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___8_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___8_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___8_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___8_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsb_rms_calc_fast__var_eff_s = _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___8_irmsb_rms_calc_fast__period = (float)_measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___8_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsB.sys1
    // Generated from the component: Measurements Block - 8.IrmsC.rms_calc_fast
    _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___8_irmsc_instantaneous__out * _measurements_block___8_irmsc_instantaneous__out;
    _measurements_block___8_irmsc_rms_calc_fast__var_filt_old = _measurements_block___8_irmsc_rms_calc_fast__var_filt;
    _measurements_block___8_irmsc_rms_calc_fast__var_filt = (_measurements_block___8_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___8_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___8_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___8_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___8_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___8_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___8_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsc_rms_calc_fast__var_eff_s = _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___8_irmsc_rms_calc_fast__period = (float)_measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___8_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsC.sys1
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
    // Generated from the component: Measurements Block - 6.IrmsA.rt1.Input
    _measurements_block___6_irmsa_rt1_output__out = _measurements_block___6_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 6.IrmsA.rt2.Input
    _measurements_block___6_irmsa_rt2_output__out = _measurements_block___6_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 6.IrmsA.t1
    // Generated from the component: Measurements Block - 6.IrmsB.rt1.Input
    _measurements_block___6_irmsb_rt1_output__out = _measurements_block___6_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 6.IrmsB.rt2.Input
    _measurements_block___6_irmsb_rt2_output__out = _measurements_block___6_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 6.IrmsB.t1
    // Generated from the component: Measurements Block - 6.IrmsC.rt1.Input
    _measurements_block___6_irmsc_rt1_output__out = _measurements_block___6_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 6.IrmsC.rt2.Input
    _measurements_block___6_irmsc_rt2_output__out = _measurements_block___6_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 6.IrmsC.t1
    // Generated from the component: Measurements Block - 8.IrmsA.rt1.Input
    _measurements_block___8_irmsa_rt1_output__out = _measurements_block___8_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 8.IrmsA.rt2.Input
    _measurements_block___8_irmsa_rt2_output__out = _measurements_block___8_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 8.IrmsA.t1
    // Generated from the component: Measurements Block - 8.IrmsB.rt1.Input
    _measurements_block___8_irmsb_rt1_output__out = _measurements_block___8_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 8.IrmsB.rt2.Input
    _measurements_block___8_irmsb_rt2_output__out = _measurements_block___8_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 8.IrmsB.t1
    // Generated from the component: Measurements Block - 8.IrmsC.rt1.Input
    _measurements_block___8_irmsc_rt1_output__out = _measurements_block___8_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 8.IrmsC.rt2.Input
    _measurements_block___8_irmsc_rt2_output__out = _measurements_block___8_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 8.IrmsC.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
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
    // Generated from the component: Measurements Block - 6.IrmsA.rms_calc_fast
    if ((_measurements_block___6_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___6_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 6.IrmsB.rms_calc_fast
    if ((_measurements_block___6_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___6_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 6.IrmsC.rms_calc_fast
    if ((_measurements_block___6_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___6_irmsc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 8.IrmsA.rms_calc_fast
    if ((_measurements_block___8_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___8_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 8.IrmsB.rms_calc_fast
    if ((_measurements_block___8_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___8_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 8.IrmsC.rms_calc_fast
    if ((_measurements_block___8_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___8_irmsc_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Measurements Block - 6.IrmsA.rms_calc_slow
    if(_measurements_block___6_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___6_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___6_irmsa_rt1_output__out / _measurements_block___6_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___6_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 6.IrmsB.rms_calc_slow
    if(_measurements_block___6_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___6_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___6_irmsb_rt1_output__out / _measurements_block___6_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___6_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 6.IrmsC.rms_calc_slow
    if(_measurements_block___6_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___6_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___6_irmsc_rt1_output__out / _measurements_block___6_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___6_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsA.rms_calc_slow
    if(_measurements_block___8_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___8_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___8_irmsa_rt1_output__out / _measurements_block___8_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___8_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsB.rms_calc_slow
    if(_measurements_block___8_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___8_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___8_irmsb_rt1_output__out / _measurements_block___8_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___8_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 8.IrmsC.rms_calc_slow
    if(_measurements_block___8_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___8_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___8_irmsc_rt1_output__out / _measurements_block___8_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___8_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 13.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000100, _measurements_block___13_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsA.rms
    HIL_OutAO(0x2000, _measurements_block___13_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsA.sys2
    // Generated from the component: Measurements Block - 13.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000104, _measurements_block___13_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsB.rms
    HIL_OutAO(0x2001, _measurements_block___13_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsB.sys2
    // Generated from the component: Measurements Block - 13.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000108, _measurements_block___13_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsC.rms
    HIL_OutAO(0x2002, _measurements_block___13_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 13.IrmsC.sys2
    // Generated from the component: Measurements Block - 14.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x5500010c, _measurements_block___14_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsA.rms
    HIL_OutAO(0x2003, _measurements_block___14_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsA.sys2
    // Generated from the component: Measurements Block - 14.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000110, _measurements_block___14_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsB.rms
    HIL_OutAO(0x2004, _measurements_block___14_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsB.sys2
    // Generated from the component: Measurements Block - 14.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000114, _measurements_block___14_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsC.rms
    HIL_OutAO(0x2005, _measurements_block___14_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 14.IrmsC.sys2
    // Generated from the component: Measurements Block - 5.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000118, _measurements_block___5_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsA.rms
    HIL_OutAO(0x2006, _measurements_block___5_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsA.sys2
    // Generated from the component: Measurements Block - 5.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x5500011c, _measurements_block___5_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsB.rms
    HIL_OutAO(0x2007, _measurements_block___5_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsB.sys2
    // Generated from the component: Measurements Block - 5.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000120, _measurements_block___5_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsC.rms
    HIL_OutAO(0x2008, _measurements_block___5_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 5.IrmsC.sys2
    // Generated from the component: Measurements Block - 6.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000124, _measurements_block___6_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsA.rms
    HIL_OutAO(0x2009, _measurements_block___6_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsA.sys2
    // Generated from the component: Measurements Block - 6.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000128, _measurements_block___6_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsB.rms
    HIL_OutAO(0x200a, _measurements_block___6_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsB.sys2
    // Generated from the component: Measurements Block - 6.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x5500012c, _measurements_block___6_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsC.rms
    HIL_OutAO(0x200b, _measurements_block___6_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 6.IrmsC.sys2
    // Generated from the component: Measurements Block - 8.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000130, _measurements_block___8_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsA.rms
    HIL_OutAO(0x200c, _measurements_block___8_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsA.sys2
    // Generated from the component: Measurements Block - 8.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000134, _measurements_block___8_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsB.rms
    HIL_OutAO(0x200d, _measurements_block___8_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsB.sys2
    // Generated from the component: Measurements Block - 8.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000138, _measurements_block___8_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsC.rms
    HIL_OutAO(0x200e, _measurements_block___8_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 8.IrmsC.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------