/*
 * File: Measurement.c
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

#include "Measurement.h"
#include "Measurement_private.h"

/* Block signals (default storage) */
B_Measurement_T Measurement_B;

/* External inputs (root inport signals with default storage) */
ExtU_Measurement_T Measurement_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Measurement_T Measurement_Y;

/* Real-time model */
static RT_MODEL_Measurement_T Measurement_M_;
RT_MODEL_Measurement_T *const Measurement_M = &Measurement_M_;

/* Forward declaration for local functions */
static void Measurement_conv2(const real_T a[279000], const real_T b[9], real_T
  c[279000]);
static void Measurement_sum(const real_T x[279000], real_T y[620]);

/* Function for MATLAB Function: '<Root>/Measurement function1' */
static void Measurement_conv2(const real_T a[279000], const real_T b[9], real_T
  c[279000])
{
  real_T bij;
  int32_T aColOffset;
  int32_T bColOffset;
  int32_T i;
  int32_T ia;
  int32_T ia_tmp_tmp;
  int32_T ic;
  int32_T j;
  int32_T jb;
  int32_T jbmax;
  memset(&c[0], 0, 279000U * sizeof(real_T));
  for (j = 0; j < 620; j++) {
    if (j + 1 < 619) {
      jbmax = 2;
    } else {
      jbmax = 620 - j;
    }

    aColOffset = j * 450 - 1;
    for (jb = (j + 1 <= 1); jb <= jbmax; jb++) {
      bColOffset = 8 - jb * 3;
      bij = b[bColOffset];
      ic = aColOffset + 2;
      ia_tmp_tmp = (jb - 1) * 450 + aColOffset;
      ia = ia_tmp_tmp + 2;
      for (i = 0; i < 449; i++) {
        c[ic] += a[ia - 1] * bij;
        ic++;
        ia++;
      }

      bij = b[bColOffset - 1];
      ic = aColOffset + 1;
      ia = ia_tmp_tmp + 2;
      for (i = 0; i < 450; i++) {
        c[ic] += a[ia - 1] * bij;
        ic++;
        ia++;
      }

      bij = b[bColOffset - 2];
      ic = aColOffset + 1;
      ia = ia_tmp_tmp + 3;
      for (i = 0; i < 449; i++) {
        c[ic] += a[ia - 1] * bij;
        ic++;
        ia++;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/Measurement function1' */
static void Measurement_sum(const real_T x[279000], real_T y[620])
{
  int32_T k;
  int32_T xi;
  int32_T xpageoffset;
  for (xi = 0; xi < 620; xi++) {
    xpageoffset = xi * 450;
    y[xi] = x[xpageoffset];
    for (k = 0; k < 449; k++) {
      y[xi] += x[(xpageoffset + k) + 1];
    }
  }
}

/* Model step function */
void Measurement_step(void)
{
  real_T aF;
  real_T deno;
  real_T gA;
  real_T gF;
  real_T nume;
  int32_T SAx_tmp;
  int32_T i;
  int32_T k;
  static const real_T b[9] = { -1.0, -2.0, -1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0 };

  static const real_T c[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0, -1.0 };

  /* MATLAB Function: '<Root>/Measurement function1' incorporates:
   *  Inport: '<Root>/I1'
   *  Inport: '<Root>/I2'
   *  Inport: '<Root>/x'
   */
  for (k = 0; k < 279000; k++) {
    Measurement_B.pA[k] = (real_T)Measurement_U.I1[k] / 255.0;
    Measurement_B.pB[k] = (real_T)Measurement_U.I2[k] / 255.0;
    Measurement_B.pF[k] = (real_T)Measurement_U.y[k] / 255.0;
  }

  Measurement_conv2(Measurement_B.pA, b, Measurement_B.SAx);
  Measurement_conv2(Measurement_B.pA, c, Measurement_B.SAy);
  for (k = 0; k < 279000; k++) {
    deno = Measurement_B.SAy[k];
    nume = Measurement_B.SAx[k];
    Measurement_B.gA[k] = sqrt(nume * nume + deno * deno);
  }

  for (k = 0; k < 620; k++) {
    for (i = 0; i < 450; i++) {
      SAx_tmp = 450 * k + i;
      nume = Measurement_B.SAx[SAx_tmp];
      if (nume == 0.0) {
        Measurement_B.aA[SAx_tmp] = 1.5707963267948966;
      } else {
        Measurement_B.aA[SAx_tmp] = atan(Measurement_B.SAy[SAx_tmp] / nume);
      }
    }
  }

  Measurement_conv2(Measurement_B.pB, b, Measurement_B.pA);
  Measurement_conv2(Measurement_B.pB, c, Measurement_B.SAx);
  for (k = 0; k < 279000; k++) {
    nume = Measurement_B.SAx[k];
    deno = Measurement_B.pA[k];
    Measurement_B.SAy[k] = sqrt(deno * deno + nume * nume);
  }

  for (k = 0; k < 620; k++) {
    for (i = 0; i < 450; i++) {
      SAx_tmp = 450 * k + i;
      deno = Measurement_B.pA[SAx_tmp];
      if (deno == 0.0) {
        Measurement_B.aB[SAx_tmp] = 1.5707963267948966;
      } else {
        Measurement_B.aB[SAx_tmp] = atan(Measurement_B.SAx[SAx_tmp] / deno);
      }
    }
  }

  Measurement_conv2(Measurement_B.pF, b, Measurement_B.pA);
  Measurement_conv2(Measurement_B.pF, c, Measurement_B.SAx);
  for (k = 0; k < 279000; k++) {
    nume = Measurement_B.SAx[k];
    deno = Measurement_B.pA[k];
    Measurement_B.gF[k] = sqrt(deno * deno + nume * nume);
  }

  for (k = 0; k < 620; k++) {
    for (i = 0; i < 450; i++) {
      SAx_tmp = 450 * k + i;
      nume = Measurement_B.SAy[SAx_tmp];
      gF = Measurement_B.gF[SAx_tmp];
      gA = Measurement_B.gA[SAx_tmp];
      deno = Measurement_B.pA[SAx_tmp];
      if (deno == 0.0) {
        aF = 1.5707963267948966;
      } else {
        aF = atan(Measurement_B.SAx[SAx_tmp] / deno);
      }

      if (gA > gF) {
        deno = gF / gA;
      } else if (gA == gF) {
        deno = gF;
      } else {
        deno = gA / gF;
      }

      Measurement_B.pB[SAx_tmp] = 0.9879 / (exp(((1.0 - fabs
        (Measurement_B.aA[SAx_tmp] - aF) / 1.5707963267948966) - 0.8) * -22.0) +
        1.0) * (0.9994 / (exp((deno - 0.5) * -15.0) + 1.0));
      if (nume > gF) {
        deno = gF / nume;
      } else if (nume == gF) {
        deno = gF;
      } else {
        deno = nume / gF;
      }

      nume = 1.0 - fabs(Measurement_B.aB[SAx_tmp] - aF) / 1.5707963267948966;
      Measurement_B.pF[SAx_tmp] = 0.9994 / (exp((deno - 0.5) * -15.0) + 1.0) *
        (0.9879 / (exp((nume - 0.8) * -22.0) + 1.0));
      Measurement_B.pA[SAx_tmp] = deno;
      Measurement_B.SAx[SAx_tmp] = nume;
    }
  }

  for (k = 0; k < 279000; k++) {
    Measurement_B.pA[k] = Measurement_B.gA[k] + Measurement_B.SAy[k];
  }

  Measurement_sum(Measurement_B.pA, Measurement_B.x);
  deno = Measurement_B.x[0];
  for (k = 0; k < 619; k++) {
    deno += Measurement_B.x[k + 1];
  }

  for (k = 0; k < 279000; k++) {
    Measurement_B.pA[k] = Measurement_B.pB[k] * Measurement_B.gA[k] +
      Measurement_B.pF[k] * Measurement_B.SAy[k];
  }

  Measurement_sum(Measurement_B.pA, Measurement_B.x);
  nume = Measurement_B.x[0];
  for (k = 0; k < 619; k++) {
    nume += Measurement_B.x[k + 1];
  }

  /* Outport: '<Root>/y' incorporates:
   *  MATLAB Function: '<Root>/Measurement function1'
   */
  Measurement_Y.y = nume / deno;
}

/* Model initialize function */
void Measurement_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Measurement_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
