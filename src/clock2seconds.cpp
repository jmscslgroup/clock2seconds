//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: clock2seconds.cpp
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
#include "clock2seconds.h"
#include "rtwtypes.h"
#include "clock2seconds_types.h"

// Block signals (default storage)
B_clock2seconds_T clock2seconds_B;

// Block states (default storage)
DW_clock2seconds_T clock2seconds_DW;

// Real-time model
RT_MODEL_clock2seconds_T clock2seconds_M_ = RT_MODEL_clock2seconds_T();
RT_MODEL_clock2seconds_T *const clock2seconds_M = &clock2seconds_M_;

// Model step function
void clock2seconds_step(void)
{
  SL_Bus_clock2seconds_rosgraph_msgs_Clock b_varargout_2;
  SL_Bus_clock2seconds_std_msgs_Float64 rtb_BusAssignment;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S3>/SourceBlock'
  b_varargout_1 = Sub_clock2seconds_2.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S4>/In1'
    clock2seconds_B.In1 = b_varargout_2;
  }

  // End of MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Product: '<Root>/Divide'
  //   Sum: '<Root>/Add'

  rtb_BusAssignment.Data = clock2seconds_B.In1.Clock_.Nsec /
    clock2seconds_P.Constant_Value_f + clock2seconds_B.In1.Clock_.Sec;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_clock2seconds_4.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void clock2seconds_initialize(void)
{
  {
    char_T b_zeroDelimTopic_0[11];
    char_T b_zeroDelimTopic[7];
    static const char_T tmp[6] = { '/', 'c', 'l', 'o', 'c', 'k' };

    static const char_T tmp_0[10] = { 'c', 'l', 'o', 'c', 'k', '_', 's', 'e',
      'c', 's' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S4>/In1' incorporates:
    //   Outport: '<S4>/Out1'

    clock2seconds_B.In1 = clock2seconds_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    clock2seconds_DW.obj_g.matlabCodegenIsDeleted = false;
    clock2seconds_DW.obj_g.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[6] = '\x00';
    Sub_clock2seconds_2.createSubscriber(&b_zeroDelimTopic[0], 1);
    clock2seconds_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    clock2seconds_DW.obj.matlabCodegenIsDeleted = false;
    clock2seconds_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[10] = '\x00';
    Pub_clock2seconds_4.createPublisher(&b_zeroDelimTopic_0[0], 1);
    clock2seconds_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void clock2seconds_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!clock2seconds_DW.obj_g.matlabCodegenIsDeleted) {
    clock2seconds_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!clock2seconds_DW.obj.matlabCodegenIsDeleted) {
    clock2seconds_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
