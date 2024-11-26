//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: clock2seconds_types.h
//
// Code generated for Simulink model 'clock2seconds'.
//
// Model version                  : 1.5
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Tue Nov 26 15:29:13 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_clock2seconds_types_h_
#define RTW_HEADER_clock2seconds_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_clock2seconds_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_clock2seconds_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_rosgraph_msgs_Clock_
#define DEFINED_TYPEDEF_FOR_SL_Bus_clock2seconds_rosgraph_msgs_Clock_

// MsgType=rosgraph_msgs/Clock
struct SL_Bus_clock2seconds_rosgraph_msgs_Clock
{
  // MsgType=ros_time/Time
  SL_Bus_clock2seconds_ros_time_Time Clock_;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Parameters (default storage)
typedef struct P_clock2seconds_T_ P_clock2seconds_T;

// Forward declaration for rtModel
typedef struct tag_RTM_clock2seconds_T RT_MODEL_clock2seconds_T;

#endif                                 // RTW_HEADER_clock2seconds_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
