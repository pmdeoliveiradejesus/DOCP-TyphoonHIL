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
float _measurements_block___11_irmsa_instantaneous__out;
float _measurements_block___11_irmsb_instantaneous__out;
float _measurements_block___11_irmsc_instantaneous__out;
float _measurements_block___12_irmsa_instantaneous__out;
float _measurements_block___12_irmsb_instantaneous__out;
float _measurements_block___12_irmsc_instantaneous__out;
float _measurements_block___3_irmsa_instantaneous__out;
float _measurements_block___3_irmsb_instantaneous__out;
float _measurements_block___3_irmsc_instantaneous__out;
float _measurements_block___4_irmsa_instantaneous__out;
float _measurements_block___4_irmsb_instantaneous__out;
float _measurements_block___4_irmsc_instantaneous__out;
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
float _measurements_block___12_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___12_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___12_irmsa_rms_calc_fast__var_zc;
float _measurements_block___12_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___12_irmsa_rms_calc_slow__var_rms;
float _measurements_block___12_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___12_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___12_irmsb_rms_calc_fast__var_zc;
float _measurements_block___12_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___12_irmsb_rms_calc_slow__var_rms;
float _measurements_block___12_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___12_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___12_irmsc_rms_calc_fast__var_zc;
float _measurements_block___12_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___12_irmsc_rms_calc_slow__var_rms;
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
float _measurements_block___4_irmsa_rms_calc_fast__var_eff_s;
float _measurements_block___4_irmsa_rms_calc_fast__period;
X_UnInt8 _measurements_block___4_irmsa_rms_calc_fast__var_zc;
float _measurements_block___4_irmsa_rms_calc_fast__var_filt_old;
float _measurements_block___4_irmsa_rms_calc_slow__var_rms;
float _measurements_block___4_irmsb_rms_calc_fast__var_eff_s;
float _measurements_block___4_irmsb_rms_calc_fast__period;
X_UnInt8 _measurements_block___4_irmsb_rms_calc_fast__var_zc;
float _measurements_block___4_irmsb_rms_calc_fast__var_filt_old;
float _measurements_block___4_irmsb_rms_calc_slow__var_rms;
float _measurements_block___4_irmsc_rms_calc_fast__var_eff_s;
float _measurements_block___4_irmsc_rms_calc_fast__period;
X_UnInt8 _measurements_block___4_irmsc_rms_calc_fast__var_zc;
float _measurements_block___4_irmsc_rms_calc_fast__var_filt_old;
float _measurements_block___4_irmsc_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _measurements_block___11_irmsa_rt1_output__out =  0.0;
float _measurements_block___11_irmsa_rt2_output__out =  0.0;
float _measurements_block___11_irmsb_rt1_output__out =  0.0;
float _measurements_block___11_irmsb_rt2_output__out =  0.0;
float _measurements_block___11_irmsc_rt1_output__out =  0.0;
float _measurements_block___11_irmsc_rt2_output__out =  0.0;
float _measurements_block___12_irmsa_rt1_output__out =  0.0;
float _measurements_block___12_irmsa_rt2_output__out =  0.0;
float _measurements_block___12_irmsb_rt1_output__out =  0.0;
float _measurements_block___12_irmsb_rt2_output__out =  0.0;
float _measurements_block___12_irmsc_rt1_output__out =  0.0;
float _measurements_block___12_irmsc_rt2_output__out =  0.0;
float _measurements_block___3_irmsa_rt1_output__out =  0.0;
float _measurements_block___3_irmsa_rt2_output__out =  0.0;
float _measurements_block___3_irmsb_rt1_output__out =  0.0;
float _measurements_block___3_irmsb_rt2_output__out =  0.0;
float _measurements_block___3_irmsc_rt1_output__out =  0.0;
float _measurements_block___3_irmsc_rt2_output__out =  0.0;
float _measurements_block___4_irmsa_rt1_output__out =  0.0;
float _measurements_block___4_irmsa_rt2_output__out =  0.0;
float _measurements_block___4_irmsb_rt1_output__out =  0.0;
float _measurements_block___4_irmsb_rt2_output__out =  0.0;
float _measurements_block___4_irmsc_rt1_output__out =  0.0;
float _measurements_block___4_irmsc_rt2_output__out =  0.0;
float _measurements_block___11_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsa_rms_calc_fast__var_filt;
float _measurements_block___11_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsb_rms_calc_fast__var_filt;
float _measurements_block___11_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___11_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___11_irmsc_rms_calc_fast__var_filt;
float _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___12_irmsa_rms_calc_fast__var_filt;
float _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___12_irmsb_rms_calc_fast__var_filt;
float _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___12_irmsc_rms_calc_fast__var_filt;
float _measurements_block___3_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsa_rms_calc_fast__var_filt;
float _measurements_block___3_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsb_rms_calc_fast__var_filt;
float _measurements_block___3_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___3_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___3_irmsc_rms_calc_fast__var_filt;
float _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___4_irmsa_rms_calc_fast__var_filt;
float _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___4_irmsb_rms_calc_fast__var_filt;
float _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state;
float _measurements_block___4_irmsc_rms_calc_fast__var_filt;
//@cmp.svar.end






// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _measurements_block___11_irmsa_rt1_output__out =  0.0;
    _measurements_block___11_irmsa_rt2_output__out =  0.0;
    _measurements_block___11_irmsb_rt1_output__out =  0.0;
    _measurements_block___11_irmsb_rt2_output__out =  0.0;
    _measurements_block___11_irmsc_rt1_output__out =  0.0;
    _measurements_block___11_irmsc_rt2_output__out =  0.0;
    _measurements_block___12_irmsa_rt1_output__out =  0.0;
    _measurements_block___12_irmsa_rt2_output__out =  0.0;
    _measurements_block___12_irmsb_rt1_output__out =  0.0;
    _measurements_block___12_irmsb_rt2_output__out =  0.0;
    _measurements_block___12_irmsc_rt1_output__out =  0.0;
    _measurements_block___12_irmsc_rt2_output__out =  0.0;
    _measurements_block___3_irmsa_rt1_output__out =  0.0;
    _measurements_block___3_irmsa_rt2_output__out =  0.0;
    _measurements_block___3_irmsb_rt1_output__out =  0.0;
    _measurements_block___3_irmsb_rt2_output__out =  0.0;
    _measurements_block___3_irmsc_rt1_output__out =  0.0;
    _measurements_block___3_irmsc_rt2_output__out =  0.0;
    _measurements_block___4_irmsa_rt1_output__out =  0.0;
    _measurements_block___4_irmsa_rt2_output__out =  0.0;
    _measurements_block___4_irmsb_rt1_output__out =  0.0;
    _measurements_block___4_irmsb_rt2_output__out =  0.0;
    _measurements_block___4_irmsc_rt1_output__out =  0.0;
    _measurements_block___4_irmsc_rt2_output__out =  0.0;
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
    _measurements_block___12_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___12_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___12_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___12_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___12_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___12_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___12_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___12_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___12_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
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
    _measurements_block___4_irmsa_rms_calc_fast__var_eff_s = 0;
    _measurements_block___4_irmsa_rms_calc_fast__period = 0.0f;
    _measurements_block___4_irmsa_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___4_irmsb_rms_calc_fast__var_eff_s = 0;
    _measurements_block___4_irmsb_rms_calc_fast__period = 0.0f;
    _measurements_block___4_irmsb_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    _measurements_block___4_irmsc_rms_calc_fast__var_eff_s = 0;
    _measurements_block___4_irmsc_rms_calc_fast__period = 0.0f;
    _measurements_block___4_irmsc_rms_calc_fast__var_filt = 0.0f;
    _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
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
    // Generated from the component: Measurements Block - 11.IrmsA.instantaneous
    _measurements_block___11_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x124));
    // Generated from the component: Measurements Block - 11.IrmsB.instantaneous
    _measurements_block___11_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x125));
    // Generated from the component: Measurements Block - 11.IrmsC.instantaneous
    _measurements_block___11_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x126));
    // Generated from the component: Measurements Block - 12.IrmsA.instantaneous
    _measurements_block___12_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12a));
    // Generated from the component: Measurements Block - 12.IrmsB.instantaneous
    _measurements_block___12_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12b));
    // Generated from the component: Measurements Block - 12.IrmsC.instantaneous
    _measurements_block___12_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x12c));
    // Generated from the component: Measurements Block - 3.IrmsA.instantaneous
    _measurements_block___3_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x326));
    // Generated from the component: Measurements Block - 3.IrmsB.instantaneous
    _measurements_block___3_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x327));
    // Generated from the component: Measurements Block - 3.IrmsC.instantaneous
    _measurements_block___3_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x328));
    // Generated from the component: Measurements Block - 4.IrmsA.instantaneous
    _measurements_block___4_irmsa_instantaneous__out = (HIL_InFloat(0xc80000 + 0x225));
    // Generated from the component: Measurements Block - 4.IrmsB.instantaneous
    _measurements_block___4_irmsb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x226));
    // Generated from the component: Measurements Block - 4.IrmsC.instantaneous
    _measurements_block___4_irmsc_instantaneous__out = (HIL_InFloat(0xc80000 + 0x227));
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
    // Generated from the component: Measurements Block - 12.IrmsA.rms_calc_fast
    _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___12_irmsa_instantaneous__out * _measurements_block___12_irmsa_instantaneous__out;
    _measurements_block___12_irmsa_rms_calc_fast__var_filt_old = _measurements_block___12_irmsa_rms_calc_fast__var_filt;
    _measurements_block___12_irmsa_rms_calc_fast__var_filt = (_measurements_block___12_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___12_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___12_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___12_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___12_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___12_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___12_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsa_rms_calc_fast__var_eff_s = _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___12_irmsa_rms_calc_fast__period = (float)_measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___12_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 12.IrmsA.sys1
    // Generated from the component: Measurements Block - 12.IrmsB.rms_calc_fast
    _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___12_irmsb_instantaneous__out * _measurements_block___12_irmsb_instantaneous__out;
    _measurements_block___12_irmsb_rms_calc_fast__var_filt_old = _measurements_block___12_irmsb_rms_calc_fast__var_filt;
    _measurements_block___12_irmsb_rms_calc_fast__var_filt = (_measurements_block___12_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___12_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___12_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___12_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___12_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___12_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___12_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsb_rms_calc_fast__var_eff_s = _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___12_irmsb_rms_calc_fast__period = (float)_measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___12_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 12.IrmsB.sys1
    // Generated from the component: Measurements Block - 12.IrmsC.rms_calc_fast
    _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___12_irmsc_instantaneous__out * _measurements_block___12_irmsc_instantaneous__out;
    _measurements_block___12_irmsc_rms_calc_fast__var_filt_old = _measurements_block___12_irmsc_rms_calc_fast__var_filt;
    _measurements_block___12_irmsc_rms_calc_fast__var_filt = (_measurements_block___12_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___12_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___12_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___12_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___12_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___12_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___12_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsc_rms_calc_fast__var_eff_s = _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___12_irmsc_rms_calc_fast__period = (float)_measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___12_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 12.IrmsC.sys1
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
    // Generated from the component: Measurements Block - 4.IrmsA.rms_calc_fast
    _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state = _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state + _measurements_block___4_irmsa_instantaneous__out * _measurements_block___4_irmsa_instantaneous__out;
    _measurements_block___4_irmsa_rms_calc_fast__var_filt_old = _measurements_block___4_irmsa_rms_calc_fast__var_filt;
    _measurements_block___4_irmsa_rms_calc_fast__var_filt = (_measurements_block___4_irmsa_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___4_irmsa_instantaneous__out * 0.0909);
    if((_measurements_block___4_irmsa_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___4_irmsa_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___4_irmsa_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___4_irmsa_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___4_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsa_rms_calc_fast__var_eff_s = _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state;
        _measurements_block___4_irmsa_rms_calc_fast__period = (float)_measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___4_irmsa_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 4.IrmsA.sys1
    // Generated from the component: Measurements Block - 4.IrmsB.rms_calc_fast
    _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state = _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state + _measurements_block___4_irmsb_instantaneous__out * _measurements_block___4_irmsb_instantaneous__out;
    _measurements_block___4_irmsb_rms_calc_fast__var_filt_old = _measurements_block___4_irmsb_rms_calc_fast__var_filt;
    _measurements_block___4_irmsb_rms_calc_fast__var_filt = (_measurements_block___4_irmsb_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___4_irmsb_instantaneous__out * 0.0909);
    if((_measurements_block___4_irmsb_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___4_irmsb_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___4_irmsb_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___4_irmsb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___4_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsb_rms_calc_fast__var_eff_s = _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state;
        _measurements_block___4_irmsb_rms_calc_fast__period = (float)_measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___4_irmsb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 4.IrmsB.sys1
    // Generated from the component: Measurements Block - 4.IrmsC.rms_calc_fast
    _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state = _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state + _measurements_block___4_irmsc_instantaneous__out * _measurements_block___4_irmsc_instantaneous__out;
    _measurements_block___4_irmsc_rms_calc_fast__var_filt_old = _measurements_block___4_irmsc_rms_calc_fast__var_filt;
    _measurements_block___4_irmsc_rms_calc_fast__var_filt = (_measurements_block___4_irmsc_rms_calc_fast__var_filt_old * 0.909 + _measurements_block___4_irmsc_instantaneous__out * 0.0909);
    if((_measurements_block___4_irmsc_rms_calc_fast__var_filt >= 0.0f) && (_measurements_block___4_irmsc_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurements_block___4_irmsc_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurements_block___4_irmsc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurements_block___4_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsc_rms_calc_fast__var_eff_s = _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state;
        _measurements_block___4_irmsc_rms_calc_fast__period = (float)_measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state;
        _measurements_block___4_irmsc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurements Block - 4.IrmsC.sys1
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
    // Generated from the component: Measurements Block - 12.IrmsA.rt1.Input
    _measurements_block___12_irmsa_rt1_output__out = _measurements_block___12_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 12.IrmsA.rt2.Input
    _measurements_block___12_irmsa_rt2_output__out = _measurements_block___12_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 12.IrmsA.t1
    // Generated from the component: Measurements Block - 12.IrmsB.rt1.Input
    _measurements_block___12_irmsb_rt1_output__out = _measurements_block___12_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 12.IrmsB.rt2.Input
    _measurements_block___12_irmsb_rt2_output__out = _measurements_block___12_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 12.IrmsB.t1
    // Generated from the component: Measurements Block - 12.IrmsC.rt1.Input
    _measurements_block___12_irmsc_rt1_output__out = _measurements_block___12_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 12.IrmsC.rt2.Input
    _measurements_block___12_irmsc_rt2_output__out = _measurements_block___12_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 12.IrmsC.t1
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
    // Generated from the component: Measurements Block - 4.IrmsA.rt1.Input
    _measurements_block___4_irmsa_rt1_output__out = _measurements_block___4_irmsa_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 4.IrmsA.rt2.Input
    _measurements_block___4_irmsa_rt2_output__out = _measurements_block___4_irmsa_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 4.IrmsA.t1
    // Generated from the component: Measurements Block - 4.IrmsB.rt1.Input
    _measurements_block___4_irmsb_rt1_output__out = _measurements_block___4_irmsb_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 4.IrmsB.rt2.Input
    _measurements_block___4_irmsb_rt2_output__out = _measurements_block___4_irmsb_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 4.IrmsB.t1
    // Generated from the component: Measurements Block - 4.IrmsC.rt1.Input
    _measurements_block___4_irmsc_rt1_output__out = _measurements_block___4_irmsc_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurements Block - 4.IrmsC.rt2.Input
    _measurements_block___4_irmsc_rt2_output__out = _measurements_block___4_irmsc_rms_calc_fast__period;
    // Generated from the component: Measurements Block - 4.IrmsC.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
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
    // Generated from the component: Measurements Block - 12.IrmsA.rms_calc_fast
    if ((_measurements_block___12_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___12_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 12.IrmsB.rms_calc_fast
    if ((_measurements_block___12_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___12_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 12.IrmsC.rms_calc_fast
    if ((_measurements_block___12_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___12_irmsc_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Measurements Block - 4.IrmsA.rms_calc_fast
    if ((_measurements_block___4_irmsa_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___4_irmsa_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 4.IrmsB.rms_calc_fast
    if ((_measurements_block___4_irmsb_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___4_irmsb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurements Block - 4.IrmsC.rms_calc_fast
    if ((_measurements_block___4_irmsc_rms_calc_fast__var_zc == 1) || (5000 == _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state)) {
        _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurements_block___4_irmsc_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Measurements Block - 12.IrmsA.rms_calc_slow
    if(_measurements_block___12_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___12_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___12_irmsa_rt1_output__out / _measurements_block___12_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___12_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 12.IrmsB.rms_calc_slow
    if(_measurements_block___12_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___12_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___12_irmsb_rt1_output__out / _measurements_block___12_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___12_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 12.IrmsC.rms_calc_slow
    if(_measurements_block___12_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___12_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___12_irmsc_rt1_output__out / _measurements_block___12_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___12_irmsc_rms_calc_slow__var_rms = 0.0f;
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
    // Generated from the component: Measurements Block - 4.IrmsA.rms_calc_slow
    if(_measurements_block___4_irmsa_rt2_output__out > 0.0f) {
        _measurements_block___4_irmsa_rms_calc_slow__var_rms = sqrtf(_measurements_block___4_irmsa_rt1_output__out / _measurements_block___4_irmsa_rt2_output__out);
    }
    else {
        _measurements_block___4_irmsa_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 4.IrmsB.rms_calc_slow
    if(_measurements_block___4_irmsb_rt2_output__out > 0.0f) {
        _measurements_block___4_irmsb_rms_calc_slow__var_rms = sqrtf(_measurements_block___4_irmsb_rt1_output__out / _measurements_block___4_irmsb_rt2_output__out);
    }
    else {
        _measurements_block___4_irmsb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 4.IrmsC.rms_calc_slow
    if(_measurements_block___4_irmsc_rt2_output__out > 0.0f) {
        _measurements_block___4_irmsc_rms_calc_slow__var_rms = sqrtf(_measurements_block___4_irmsc_rt1_output__out / _measurements_block___4_irmsc_rt2_output__out);
    }
    else {
        _measurements_block___4_irmsc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurements Block - 11.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000100, _measurements_block___11_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsA.rms
    HIL_OutAO(0x2000, _measurements_block___11_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsA.sys2
    // Generated from the component: Measurements Block - 11.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000104, _measurements_block___11_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsB.rms
    HIL_OutAO(0x2001, _measurements_block___11_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsB.sys2
    // Generated from the component: Measurements Block - 11.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000108, _measurements_block___11_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsC.rms
    HIL_OutAO(0x2002, _measurements_block___11_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 11.IrmsC.sys2
    // Generated from the component: Measurements Block - 12.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x5500010c, _measurements_block___12_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsA.rms
    HIL_OutAO(0x2003, _measurements_block___12_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsA.sys2
    // Generated from the component: Measurements Block - 12.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000110, _measurements_block___12_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsB.rms
    HIL_OutAO(0x2004, _measurements_block___12_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsB.sys2
    // Generated from the component: Measurements Block - 12.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000114, _measurements_block___12_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsC.rms
    HIL_OutAO(0x2005, _measurements_block___12_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 12.IrmsC.sys2
    // Generated from the component: Measurements Block - 3.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000118, _measurements_block___3_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsA.rms
    HIL_OutAO(0x2006, _measurements_block___3_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsA.sys2
    // Generated from the component: Measurements Block - 3.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x5500011c, _measurements_block___3_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsB.rms
    HIL_OutAO(0x2007, _measurements_block___3_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsB.sys2
    // Generated from the component: Measurements Block - 3.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x55000120, _measurements_block___3_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsC.rms
    HIL_OutAO(0x2008, _measurements_block___3_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 3.IrmsC.sys2
    // Generated from the component: Measurements Block - 4.IrmsA.cpu_trans.Input
    XIo_OutFloat(0x55000124, _measurements_block___4_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsA.rms
    HIL_OutAO(0x2009, _measurements_block___4_irmsa_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsA.sys2
    // Generated from the component: Measurements Block - 4.IrmsB.cpu_trans.Input
    XIo_OutFloat(0x55000128, _measurements_block___4_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsB.rms
    HIL_OutAO(0x200a, _measurements_block___4_irmsb_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsB.sys2
    // Generated from the component: Measurements Block - 4.IrmsC.cpu_trans.Input
    XIo_OutFloat(0x5500012c, _measurements_block___4_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsC.rms
    HIL_OutAO(0x200b, _measurements_block___4_irmsc_rms_calc_slow__var_rms);
    // Generated from the component: Measurements Block - 4.IrmsC.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------