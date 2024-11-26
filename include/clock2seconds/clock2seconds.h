//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: clock2seconds.h
//
// Code generated for Simulink model 'clock2seconds'.
//
// Model version                  : 1.4
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Tue Nov 26 14:00:19 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_clock2seconds_h_
#define RTW_HEADER_clock2seconds_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "clock2seconds_types.h"
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_clock2seconds_T {
  SL_Bus_clock2seconds_std_msgs_Time In1;// '<S4>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_clock2seconds_T {
  ros_slroscpp_internal_block_P_T obj; // '<S2>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S3>/SourceBlock'
};

// Parameters (default storage)
struct P_clock2seconds_T_ {
  SL_Bus_clock2seconds_std_msgs_Time Out1_Y0;// Computed Parameter: Out1_Y0
                                                //  Referenced by: '<S4>/Out1'

  SL_Bus_clock2seconds_std_msgs_Time Constant_Value;// Computed Parameter: Constant_Value
                                                       //  Referenced by: '<S3>/Constant'

  SL_Bus_clock2seconds_std_msgs_Float64 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                            //  Referenced by: '<S1>/Constant'

  real_T Constant_Value_f;             // Expression: 1000000000
                                          //  Referenced by: '<Root>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_clock2seconds_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_clock2seconds_T clock2seconds_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_clock2seconds_T clock2seconds_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_clock2seconds_T clock2seconds_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void clock2seconds_initialize(void);
  extern void clock2seconds_step(void);
  extern void clock2seconds_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_clock2seconds_T *const clock2seconds_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'clock2seconds'
//  '<S1>'   : 'clock2seconds/Blank Message'
//  '<S2>'   : 'clock2seconds/Publish'
//  '<S3>'   : 'clock2seconds/Subscribe'
//  '<S4>'   : 'clock2seconds/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_clock2seconds_h_

//
// File trailer for generated code.
//
// [EOF]
//
