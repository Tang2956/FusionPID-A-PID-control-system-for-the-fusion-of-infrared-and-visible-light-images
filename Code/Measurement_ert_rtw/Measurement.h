/*
 * File: Measurement.h
 *
 * Code generated for Simulink model 'Measurement'.
 *
 * Model version                  : 6.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jun 26 19:20:14 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Measurement_h_
#define RTW_HEADER_Measurement_h_
#include <math.h>
#include <string.h>
#ifndef Measurement_COMMON_INCLUDES_
#define Measurement_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Measurement_COMMON_INCLUDES_ */

#include "Measurement_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T SAx[279000];
  real_T SAy[279000];
  real_T gA[279000];
  real_T aA[279000];
  real_T aB[279000];
  real_T gF[279000];
  real_T pA[279000];
  real_T pB[279000];
  real_T pF[279000];
  real_T x[620];
} B_Measurement_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T I1[279000];                  /* '<Root>/I1' */
  uint8_T y[279000];                   /* '<Root>/x' */
  uint8_T I2[279000];                  /* '<Root>/I2' */
} ExtU_Measurement_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
} ExtY_Measurement_T;

/* Real-time Model Data Structure */
struct tag_RTM_Measurement_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Measurement_T Measurement_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Measurement_T Measurement_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Measurement_T Measurement_Y;

/* Model entry point functions */
extern void Measurement_initialize(void);
extern void Measurement_step(void);
extern void Measurement_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Measurement_T *const Measurement_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('untitled1/Measurement function1')    - opens subsystem untitled1/Measurement function1
 * hilite_system('untitled1/Measurement function1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'untitled1'
 * '<S1>'   : 'untitled1/Measurement function1'
 */
#endif                                 /* RTW_HEADER_Measurement_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
