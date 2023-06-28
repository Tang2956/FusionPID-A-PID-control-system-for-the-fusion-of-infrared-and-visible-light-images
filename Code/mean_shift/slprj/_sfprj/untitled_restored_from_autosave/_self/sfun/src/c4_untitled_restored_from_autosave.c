/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c4_untitled_restored_from_autosave.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 5,  /* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#untitled_restored_from_autosave:60"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#untitled_restored_from_autosave:60"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 34,/* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#untitled_restored_from_autosave:60"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 23,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 645,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 849,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  1,                                   /* iLast */
  10,                                  /* lineNo */
  5,                                   /* colNo */
  "IW",                                /* aName */
  "MATLAB Function3",                  /* fName */
  "#untitled_restored_from_autosave:60",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 10, /* lineNo */
  5,                                   /* colNo */
  "MATLAB Function3",                  /* fName */
  "#untitled_restored_from_autosave:60",/* pName */
  1                                    /* checkKind */
};

static const boolean_T c4_bv[9] = { true, false, false, false, true, false,
  false, false, true };

static const boolean_T c4_bv1[9] = { false, false, true, false, true, false,
  true, false, false };

static const char_T c4_cv[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c4_cv1[19] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
  'b', 'e', 'r', ' ', '1', ',', ' ', 'I', 'M', ',' };

/* Function Declarations */
static void initialize_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c4_update_jit_animation_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_st);
static void sf_gateway_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initSimStructsc4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c4_imerode(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_A);
static void c4_validateattributes
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, real_T c4_a);
static void c4_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1, real_T c4_b[49]);
static void c4_b_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1[49], real_T c4_b[169]);
static real_T c4_imdilate(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_A);
static void c4_b_validateattributes
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, real_T c4_a);
static void c4_c_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1, real_T c4_b[49]);
static void c4_d_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1[49], real_T c4_b[169]);
static uint8_T c4_emlrt_marshallIn
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_b_y, const char_T *c4_identifier);
static uint8_T c4_b_emlrt_marshallIn
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_chart_data_browse_helper
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c4_ssIdNumber);
static void init_dsm_address_info
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c4_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_jit_animation_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_createcellmatrix(2, 1), false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", chartInstance->c4_y, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 0, c4_c_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c4_b_y, 1, c4_d_y);
  sf_mex_assign(&c4_st, c4_b_y, false);
  return c4_st;
}

static void set_sim_state_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_y = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "y");
  chartInstance->c4_is_active_c4_untitled_restored_from_autosave =
    c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "is_active_c4_untitled_restored_from_autosave");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void sf_gateway_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack c4_b_st;
  real_T c4_b_x;
  real_T c4_b_I1;
  real_T c4_b_I2;
  real_T c4_I22;
  real_T c4_IW;
  real_T c4_d;
  boolean_T c4_covSaturation;
  uint8_T c4_u;
  uint32_T c4_u1;
  boolean_T c4_b_covSaturation;
  uint8_T c4_b_IW;
  uint8_T c4_varargin_1;
  uint8_T c4_c_x;
  uint8_T c4_d_x;
  uint8_T c4_e_x;
  uint8_T c4_f_x;
  uint8_T c4_g_x;
  uint8_T c4_maxval;
  uint8_T c4_h_x;
  uint8_T c4_i_x;
  uint8_T c4_j_x;
  uint8_T c4_k_x;
  real_T c4_b_y;
  real_T c4_II;
  int32_T c4_i;
  int32_T c4_b_i;
  real_T c4_d1;
  real_T c4_d2;
  boolean_T c4_c_covSaturation;
  int32_T c4_c_i;
  uint8_T c4_u2;
  uint8_T c4_I23;
  real_T c4_d3;
  boolean_T c4_d_covSaturation;
  uint8_T c4_u3;
  uint8_T c4_I11;
  real_T c4_d4;
  boolean_T c4_e_covSaturation;
  uint8_T c4_u4;
  uint8_T c4_I12;
  real_T c4_b_varargin_1;
  real_T c4_varargin_2;
  real_T c4_l_x;
  real_T c4_c_y;
  real_T c4_m_x;
  real_T c4_d_y;
  real_T c4_n_x;
  real_T c4_e_y;
  real_T c4_o_x;
  real_T c4_f_y;
  real_T c4_p_x;
  real_T c4_g_y;
  real_T c4_q_x;
  real_T c4_h_y;
  real_T c4_I31;
  real_T c4_d5;
  boolean_T c4_f_covSaturation;
  uint8_T c4_u5;
  uint8_T c4_I41;
  real_T c4_d6;
  boolean_T c4_g_covSaturation;
  uint8_T c4_u6;
  uint8_T c4_I51;
  real_T c4_d7;
  boolean_T c4_h_covSaturation;
  uint8_T c4_u7;
  uint8_T c4_I61;
  real_T c4_d8;
  boolean_T c4_i_covSaturation;
  uint8_T c4_u8;
  uint8_T c4_I71;
  real_T c4_a;
  uint8_T c4_b;
  real_T c4_d9;
  boolean_T c4_j_covSaturation;
  uint8_T c4_u9;
  uint8_T c4_i_y;
  real_T c4_b_a;
  uint8_T c4_b_b;
  real_T c4_d10;
  boolean_T c4_k_covSaturation;
  uint8_T c4_u10;
  uint8_T c4_j_y;
  real_T c4_c_a;
  uint8_T c4_c_b;
  real_T c4_d11;
  boolean_T c4_l_covSaturation;
  uint8_T c4_u11;
  uint8_T c4_k_y;
  real_T c4_d_a;
  uint8_T c4_d_b;
  real_T c4_d12;
  boolean_T c4_m_covSaturation;
  uint8_T c4_u12;
  uint8_T c4_l_y;
  real_T c4_d13;
  boolean_T c4_n_covSaturation;
  uint8_T c4_u13;
  uint32_T c4_u14;
  boolean_T c4_o_covSaturation;
  uint32_T c4_u15;
  boolean_T c4_p_covSaturation;
  uint32_T c4_u16;
  boolean_T c4_q_covSaturation;
  uint8_T c4_m_y;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U, *chartInstance->c4_I2);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, *chartInstance->c4_I1);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, *chartInstance->c4_x);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_b_x = *chartInstance->c4_x;
  c4_b_I1 = *chartInstance->c4_I1;
  c4_b_I2 = *chartInstance->c4_I2;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_I22 = c4_b_I2;
  c4_b_st.site = &c4_emlrtRSI;
  c4_IW = c4_imerode(chartInstance, &c4_b_st, c4_b_I2);
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_IW = c4_imdilate(chartInstance, &c4_b_st, c4_IW);
  c4_d = muDoubleScalarRound(c4_b_I2 - c4_IW);
  c4_covSaturation = false;
  if (c4_d < 256.0) {
    if (c4_d >= 0.0) {
      c4_u = (uint8_T)c4_d;
    } else {
      c4_covSaturation = true;
      c4_u = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 111, 12);
    }
  } else if (c4_d >= 256.0) {
    c4_covSaturation = true;
    c4_u = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 111, 12);
  } else {
    c4_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 0, 0,
    c4_covSaturation);
  c4_u1 = (uint32_T)c4_u + 1U;
  c4_b_covSaturation = false;
  if (c4_u1 > 255U) {
    c4_b_covSaturation = true;
    c4_u1 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 111, 14);
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 1, 0,
    c4_b_covSaturation);
  c4_b_IW = (uint8_T)c4_u1;
  c4_varargin_1 = c4_b_IW;
  c4_c_x = c4_varargin_1;
  c4_d_x = c4_c_x;
  c4_e_x = c4_d_x;
  c4_f_x = c4_e_x;
  c4_g_x = c4_f_x;
  c4_maxval = c4_g_x;
  c4_h_x = c4_maxval;
  c4_i_x = c4_h_x;
  c4_j_x = c4_i_x;
  c4_k_x = c4_j_x;
  c4_b_y = (real_T)c4_k_x;
  c4_II = c4_b_y;
  c4_i = 0;
  while (c4_i <= 0) {
    c4_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c4_b_i = 1;
  while (c4_b_i - 1 <= 0) {
    if ((real_T)c4_b_IW < c4_II) {
      c4_d2 = (real_T)c4_b_i;
      c4_c_i = (int32_T)emlrtIntegerCheckR2012b(c4_d2, &c4_emlrtDCI, &c4_st);
      emlrtDynamicBoundsCheckR2012b(c4_c_i, 1, 1, &c4_emlrtBCI, &c4_st);
    }

    c4_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 0);
  c4_d1 = muDoubleScalarRound(c4_b_I2 - c4_I22 * 255.0);
  c4_c_covSaturation = false;
  if (c4_d1 < 256.0) {
    if (c4_d1 >= 0.0) {
      c4_u2 = (uint8_T)c4_d1;
    } else {
      c4_c_covSaturation = true;
      c4_u2 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 515, 17);
    }
  } else if (c4_d1 >= 256.0) {
    c4_c_covSaturation = true;
    c4_u2 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 515, 17);
  } else {
    c4_u2 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 2, 0,
    c4_c_covSaturation);
  c4_I23 = c4_u2;
  c4_d3 = muDoubleScalarRound(c4_b_I1 - c4_I22 * 255.0);
  c4_d_covSaturation = false;
  if (c4_d3 < 256.0) {
    if (c4_d3 >= 0.0) {
      c4_u3 = (uint8_T)c4_d3;
    } else {
      c4_d_covSaturation = true;
      c4_u3 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 545, 17);
    }
  } else if (c4_d3 >= 256.0) {
    c4_d_covSaturation = true;
    c4_u3 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 545, 17);
  } else {
    c4_u3 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 3, 0,
    c4_d_covSaturation);
  c4_I11 = c4_u3;
  c4_d4 = muDoubleScalarRound(c4_b_I1 - (real_T)c4_I11);
  c4_e_covSaturation = false;
  if (c4_d4 < 256.0) {
    if (c4_d4 >= 0.0) {
      c4_u4 = (uint8_T)c4_d4;
    } else {
      c4_e_covSaturation = true;
      c4_u4 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 581, 6);
    }
  } else if (c4_d4 >= 256.0) {
    c4_e_covSaturation = true;
    c4_u4 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 581, 6);
  } else {
    c4_u4 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 4, 0,
    c4_e_covSaturation);
  c4_I12 = c4_u4;
  c4_b_varargin_1 = c4_b_I1;
  c4_varargin_2 = c4_b_I2;
  c4_l_x = c4_b_varargin_1;
  c4_c_y = c4_varargin_2;
  c4_m_x = c4_l_x;
  c4_d_y = c4_c_y;
  c4_n_x = c4_m_x;
  c4_e_y = c4_d_y;
  c4_o_x = c4_n_x;
  c4_f_y = c4_e_y;
  c4_p_x = c4_o_x;
  c4_g_y = c4_f_y;
  c4_q_x = c4_p_x;
  c4_h_y = c4_g_y;
  c4_I31 = muDoubleScalarMin(c4_q_x, c4_h_y);
  c4_d5 = muDoubleScalarRound(c4_I22 - c4_I31);
  c4_f_covSaturation = false;
  if (c4_d5 < 256.0) {
    if (c4_d5 >= 0.0) {
      c4_u5 = (uint8_T)c4_d5;
    } else {
      c4_f_covSaturation = true;
      c4_u5 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 617, 14);
    }
  } else if (c4_d5 >= 256.0) {
    c4_f_covSaturation = true;
    c4_u5 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 617, 14);
  } else {
    c4_u5 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 5, 0,
    c4_f_covSaturation);
  c4_I41 = c4_u5;
  c4_d6 = muDoubleScalarRound((real_T)c4_I23 - c4_I31);
  c4_g_covSaturation = false;
  if (c4_d6 < 256.0) {
    if (c4_d6 >= 0.0) {
      c4_u6 = (uint8_T)c4_d6;
    } else {
      c4_g_covSaturation = true;
      c4_u6 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 694, 7);
    }
  } else if (c4_d6 >= 256.0) {
    c4_g_covSaturation = true;
    c4_u6 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 694, 7);
  } else {
    c4_u6 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 6, 0,
    c4_g_covSaturation);
  c4_I51 = c4_u6;
  c4_d7 = muDoubleScalarRound((real_T)c4_I11 - c4_I31);
  c4_h_covSaturation = false;
  if (c4_d7 < 256.0) {
    if (c4_d7 >= 0.0) {
      c4_u7 = (uint8_T)c4_d7;
    } else {
      c4_h_covSaturation = true;
      c4_u7 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 722, 7);
    }
  } else if (c4_d7 >= 256.0) {
    c4_h_covSaturation = true;
    c4_u7 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 722, 7);
  } else {
    c4_u7 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 7, 0,
    c4_h_covSaturation);
  c4_I61 = c4_u7;
  c4_d8 = muDoubleScalarRound((real_T)c4_I12 - c4_I31);
  c4_i_covSaturation = false;
  if (c4_d8 < 256.0) {
    if (c4_d8 >= 0.0) {
      c4_u8 = (uint8_T)c4_d8;
    } else {
      c4_i_covSaturation = true;
      c4_u8 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 749, 7);
    }
  } else if (c4_d8 >= 256.0) {
    c4_i_covSaturation = true;
    c4_u8 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 749, 7);
  } else {
    c4_u8 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 8, 0,
    c4_i_covSaturation);
  c4_I71 = c4_u8;
  c4_a = 0.5 + c4_b_x;
  c4_b = c4_I41;
  c4_d9 = muDoubleScalarRound(c4_a * (real_T)c4_b);
  c4_j_covSaturation = false;
  if (c4_d9 < 256.0) {
    if (c4_d9 >= 0.0) {
      c4_u9 = (uint8_T)c4_d9;
    } else {
      c4_j_covSaturation = true;
      c4_u9 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 774, 13);
    }
  } else if (c4_d9 >= 256.0) {
    c4_j_covSaturation = true;
    c4_u9 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 774, 13);
  } else {
    c4_u9 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 13, 0,
    c4_j_covSaturation);
  c4_i_y = c4_u9;
  c4_b_a = 0.5 - c4_b_x;
  c4_b_b = c4_I51;
  c4_d10 = muDoubleScalarRound(c4_b_a * (real_T)c4_b_b);
  c4_k_covSaturation = false;
  if (c4_d10 < 256.0) {
    if (c4_d10 >= 0.0) {
      c4_u10 = (uint8_T)c4_d10;
    } else {
      c4_k_covSaturation = true;
      c4_u10 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 788, 11);
    }
  } else if (c4_d10 >= 256.0) {
    c4_k_covSaturation = true;
    c4_u10 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 788, 11);
  } else {
    c4_u10 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 14, 0,
    c4_k_covSaturation);
  c4_j_y = c4_u10;
  c4_c_a = 0.5 + c4_b_x;
  c4_c_b = c4_I61;
  c4_d11 = muDoubleScalarRound(c4_c_a * (real_T)c4_c_b);
  c4_l_covSaturation = false;
  if (c4_d11 < 256.0) {
    if (c4_d11 >= 0.0) {
      c4_u11 = (uint8_T)c4_d11;
    } else {
      c4_l_covSaturation = true;
      c4_u11 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 800, 11);
    }
  } else if (c4_d11 >= 256.0) {
    c4_l_covSaturation = true;
    c4_u11 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 800, 11);
  } else {
    c4_u11 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 15, 0,
    c4_l_covSaturation);
  c4_k_y = c4_u11;
  c4_d_a = 0.5 - c4_b_x;
  c4_d_b = c4_I71;
  c4_d12 = muDoubleScalarRound(c4_d_a * (real_T)c4_d_b);
  c4_m_covSaturation = false;
  if (c4_d12 < 256.0) {
    if (c4_d12 >= 0.0) {
      c4_u12 = (uint8_T)c4_d12;
    } else {
      c4_m_covSaturation = true;
      c4_u12 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 812, 11);
    }
  } else if (c4_d12 >= 256.0) {
    c4_m_covSaturation = true;
    c4_u12 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 812, 11);
  } else {
    c4_u12 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 16, 0,
    c4_m_covSaturation);
  c4_l_y = c4_u12;
  c4_d13 = muDoubleScalarRound(c4_I31 + (real_T)c4_i_y);
  c4_n_covSaturation = false;
  if (c4_d13 < 256.0) {
    if (c4_d13 >= 0.0) {
      c4_u13 = (uint8_T)c4_d13;
    } else {
      c4_n_covSaturation = true;
      c4_u13 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 770, 17);
    }
  } else if (c4_d13 >= 256.0) {
    c4_n_covSaturation = true;
    c4_u13 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 770, 17);
  } else {
    c4_u13 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 9, 0,
    c4_n_covSaturation);
  c4_u14 = (uint32_T)c4_u13 + (uint32_T)c4_j_y;
  c4_o_covSaturation = false;
  if (c4_u14 > 255U) {
    c4_o_covSaturation = true;
    c4_u14 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 770, 29);
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 10, 0,
    c4_o_covSaturation);
  c4_u15 = (uint32_T)(uint8_T)c4_u14 + (uint32_T)c4_k_y;
  c4_p_covSaturation = false;
  if (c4_u15 > 255U) {
    c4_p_covSaturation = true;
    c4_u15 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 770, 41);
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 11, 0,
    c4_p_covSaturation);
  c4_u16 = (uint32_T)(uint8_T)c4_u15 + (uint32_T)c4_l_y;
  c4_q_covSaturation = false;
  if (c4_u16 > 255U) {
    c4_q_covSaturation = true;
    c4_u16 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 770, 53);
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 12, 0,
    c4_q_covSaturation);
  c4_m_y = (uint8_T)c4_u16;
  *chartInstance->c4_y = c4_m_y;
  c4_do_animation_call_c4_untitled_restored_from_autosave(chartInstance);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U, (real_T)
                    *chartInstance->c4_y);
}

static void mdl_start_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  17U, 0U, 2U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 1, -1, 845);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 111, -1,
    123);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 111, -1,
    125);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 2U, 515, -1,
    532);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 3U, 545, -1,
    562);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 4U, 581, -1,
    587);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 5U, 617, -1,
    631);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 6U, 694, -1,
    701);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 7U, 722, -1,
    729);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 8U, 749, -1,
    756);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 9U, 770, -1,
    787);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 10U, 770,
    -1, 799);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 11U, 770,
    -1, 811);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 12U, 770,
    -1, 823);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 13U, 774,
    -1, 787);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 14U, 788,
    -1, 799);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 15U, 800,
    -1, 811);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 16U, 812,
    -1, 823);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 308, 319, 375);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 323, 334, 371);
}

static void mdl_cleanup_runtime_resources_c4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void initSimStructsc4_untitled_restored_from_autosave
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c4_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_imerode(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_A)
{
  emlrtStack c4_st;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  real_T c4_varargin_1;
  real_T c4_b_A;
  real_T c4_Apadpre[49];
  real_T c4_Apad[169];
  int32_T c4_i;
  int32_T c4_i1;
  boolean_T c4_nhood[5];
  int32_T c4_i2;
  real_T c4_asizeT[2];
  real_T c4_nsizeT[2];
  real_T c4_b_B[169];
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i20;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_d_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_varargin_1 = c4_A;
  c4_b_st.site = &c4_e_emlrtRSI;
  c4_b_A = c4_varargin_1;
  c4_c_st.site = &c4_f_emlrtRSI;
  c4_validateattributes(chartInstance, &c4_c_st, c4_b_A);
  c4_padarray(chartInstance, c4_b_A, c4_Apadpre);
  c4_b_padarray(chartInstance, c4_Apadpre, c4_Apad);
  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_nhood[c4_i] = true;
  }

  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_asizeT[c4_i1] = 13.0;
  }

  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_nsizeT[c4_i2] = 5.0 + -4.0 * (real_T)c4_i2;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
                        c4_b_B);
  for (c4_i3 = 0; c4_i3 < 169; c4_i3++) {
    c4_Apad[c4_i3] = c4_b_B[c4_i3];
  }

  for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
    c4_asizeT[c4_i4] = 13.0;
  }

  for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
    c4_nsizeT[c4_i5] = 3.0;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_bv, c4_nsizeT, 2.0, c4_b_B);
  for (c4_i6 = 0; c4_i6 < 169; c4_i6++) {
    c4_Apad[c4_i6] = c4_b_B[c4_i6];
  }

  for (c4_i7 = 0; c4_i7 < 5; c4_i7++) {
    c4_nhood[c4_i7] = true;
  }

  for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
    c4_asizeT[c4_i8] = 13.0;
  }

  for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
    c4_nsizeT[c4_i9] = 1.0 + 4.0 * (real_T)c4_i9;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
                        c4_b_B);
  for (c4_i10 = 0; c4_i10 < 169; c4_i10++) {
    c4_Apad[c4_i10] = c4_b_B[c4_i10];
  }

  for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
    c4_asizeT[c4_i11] = 13.0;
  }

  for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
    c4_nsizeT[c4_i12] = 3.0;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_bv1, c4_nsizeT, 2.0, c4_b_B);
  for (c4_i13 = 0; c4_i13 < 169; c4_i13++) {
    c4_Apad[c4_i13] = c4_b_B[c4_i13];
  }

  for (c4_i14 = 0; c4_i14 < 5; c4_i14++) {
    c4_nhood[c4_i14] = true;
  }

  for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
    c4_asizeT[c4_i15] = 13.0;
  }

  for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
    c4_nsizeT[c4_i16] = 1.0 + 4.0 * (real_T)c4_i16;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
                        c4_b_B);
  for (c4_i17 = 0; c4_i17 < 169; c4_i17++) {
    c4_Apad[c4_i17] = c4_b_B[c4_i17];
  }

  for (c4_i18 = 0; c4_i18 < 5; c4_i18++) {
    c4_nhood[c4_i18] = true;
  }

  for (c4_i19 = 0; c4_i19 < 2; c4_i19++) {
    c4_asizeT[c4_i19] = 13.0;
  }

  for (c4_i20 = 0; c4_i20 < 2; c4_i20++) {
    c4_nsizeT[c4_i20] = 5.0 + -4.0 * (real_T)c4_i20;
  }

  erode_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
                        c4_b_B);
  return c4_b_B[84];
}

static void c4_validateattributes
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, real_T c4_a)
{
  emlrtStack c4_st;
  real_T c4_b_a;
  real_T c4_c_a;
  boolean_T c4_p;
  real_T c4_b_x;
  real_T c4_c_x;
  boolean_T c4_b;
  boolean_T c4_b_p;
  boolean_T c4_b_b;
  const mxArray *c4_b_y = NULL;
  static char_T c4_b_cv[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'e',
    'r', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'N', 'a', 'N' };

  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_h_emlrtRSI;
  c4_b_a = c4_a;
  c4_c_a = c4_b_a;
  c4_p = true;
  c4_b_x = c4_c_a;
  c4_c_x = c4_b_x;
  c4_b = muDoubleScalarIsNaN(c4_c_x);
  c4_b_p = !c4_b;
  if (!c4_b_p) {
    c4_p = false;
  }

  if (c4_p) {
    c4_b_b = true;
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c4_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }
}

static void c4_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1, real_T c4_b[49])
{
  real_T c4_a;
  int32_T c4_j;
  int32_T c4_i;
  real_T c4_b_j;
  int32_T c4_b_i;
  real_T c4_c_i;
  (void)chartInstance;
  c4_a = c4_varargin_1;
  for (c4_j = 0; c4_j < 6; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_b_i = 0; c4_b_i < 7; c4_b_i++) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_b[((int32_T)c4_c_i + 7 * ((int32_T)c4_b_j - 1)) - 1] = rtInf;
    }
  }

  for (c4_i = 0; c4_i < 6; c4_i++) {
    c4_c_i = (real_T)c4_i + 1.0;
    c4_b[(int32_T)c4_c_i + 41] = rtInf;
  }

  c4_b[48] = c4_a;
}

static void c4_b_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1[49], real_T c4_b[169])
{
  int32_T c4_j;
  int32_T c4_b_j;
  int32_T c4_i;
  int32_T c4_c_j;
  real_T c4_d_j;
  real_T c4_b_i;
  int32_T c4_c_i;
  int32_T c4_d_i;
  (void)chartInstance;
  for (c4_j = 0; c4_j < 6; c4_j++) {
    for (c4_i = 0; c4_i < 13; c4_i++) {
      c4_b_i = (real_T)c4_i + 1.0;
      c4_b[((int32_T)c4_b_i + 13 * (c4_j + 7)) - 1] = rtInf;
    }
  }

  for (c4_b_j = 0; c4_b_j < 7; c4_b_j++) {
    c4_d_j = (real_T)c4_b_j + 1.0;
    for (c4_c_i = 0; c4_c_i < 6; c4_c_i++) {
      c4_b[(c4_c_i + 13 * ((int32_T)c4_d_j - 1)) + 7] = rtInf;
    }
  }

  for (c4_c_j = 0; c4_c_j < 7; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_d_i = 0; c4_d_i < 7; c4_d_i++) {
      c4_b_i = (real_T)c4_d_i + 1.0;
      c4_b[((int32_T)c4_b_i + 13 * ((int32_T)c4_d_j - 1)) - 1] = c4_varargin_1
        [((int32_T)c4_b_i + 7 * ((int32_T)c4_d_j - 1)) - 1];
    }
  }
}

static real_T c4_imdilate(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_A)
{
  emlrtStack c4_st;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  real_T c4_varargin_1;
  real_T c4_b_A;
  real_T c4_Apadpre[49];
  real_T c4_Apad[169];
  int32_T c4_i;
  int32_T c4_i1;
  boolean_T c4_nhood[5];
  int32_T c4_i2;
  real_T c4_asizeT[2];
  real_T c4_nsizeT[2];
  real_T c4_b_B[169];
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i20;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_j_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_varargin_1 = c4_A;
  c4_b_st.site = &c4_e_emlrtRSI;
  c4_b_A = c4_varargin_1;
  c4_c_st.site = &c4_f_emlrtRSI;
  c4_b_validateattributes(chartInstance, &c4_c_st, c4_b_A);
  c4_c_padarray(chartInstance, c4_b_A, c4_Apadpre);
  c4_d_padarray(chartInstance, c4_Apadpre, c4_Apad);
  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_nhood[c4_i] = true;
  }

  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_asizeT[c4_i1] = 13.0;
  }

  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_nsizeT[c4_i2] = 5.0 + -4.0 * (real_T)c4_i2;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
    c4_b_B);
  for (c4_i3 = 0; c4_i3 < 169; c4_i3++) {
    c4_Apad[c4_i3] = c4_b_B[c4_i3];
  }

  for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
    c4_asizeT[c4_i4] = 13.0;
  }

  for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
    c4_nsizeT[c4_i5] = 3.0;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_bv, c4_nsizeT, 2.0, c4_b_B);
  for (c4_i6 = 0; c4_i6 < 169; c4_i6++) {
    c4_Apad[c4_i6] = c4_b_B[c4_i6];
  }

  for (c4_i7 = 0; c4_i7 < 5; c4_i7++) {
    c4_nhood[c4_i7] = true;
  }

  for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
    c4_asizeT[c4_i8] = 13.0;
  }

  for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
    c4_nsizeT[c4_i9] = 1.0 + 4.0 * (real_T)c4_i9;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
    c4_b_B);
  for (c4_i10 = 0; c4_i10 < 169; c4_i10++) {
    c4_Apad[c4_i10] = c4_b_B[c4_i10];
  }

  for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
    c4_asizeT[c4_i11] = 13.0;
  }

  for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
    c4_nsizeT[c4_i12] = 3.0;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_bv1, c4_nsizeT, 2.0, c4_b_B);
  for (c4_i13 = 0; c4_i13 < 169; c4_i13++) {
    c4_Apad[c4_i13] = c4_b_B[c4_i13];
  }

  for (c4_i14 = 0; c4_i14 < 5; c4_i14++) {
    c4_nhood[c4_i14] = true;
  }

  for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
    c4_asizeT[c4_i15] = 13.0;
  }

  for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
    c4_nsizeT[c4_i16] = 1.0 + 4.0 * (real_T)c4_i16;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
    c4_b_B);
  for (c4_i17 = 0; c4_i17 < 169; c4_i17++) {
    c4_Apad[c4_i17] = c4_b_B[c4_i17];
  }

  for (c4_i18 = 0; c4_i18 < 5; c4_i18++) {
    c4_nhood[c4_i18] = true;
  }

  for (c4_i19 = 0; c4_i19 < 2; c4_i19++) {
    c4_asizeT[c4_i19] = 13.0;
  }

  for (c4_i20 = 0; c4_i20 < 2; c4_i20++) {
    c4_nsizeT[c4_i20] = 5.0 + -4.0 * (real_T)c4_i20;
  }

  dilate_flat_real64_tbb(c4_Apad, c4_asizeT, 2.0, c4_nhood, c4_nsizeT, 2.0,
    c4_b_B);
  return c4_b_B[84];
}

static void c4_b_validateattributes
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c4_sp, real_T c4_a)
{
  emlrtStack c4_st;
  real_T c4_b_a;
  real_T c4_c_a;
  boolean_T c4_p;
  real_T c4_b_x;
  real_T c4_c_x;
  boolean_T c4_b;
  boolean_T c4_b_p;
  boolean_T c4_b_b;
  const mxArray *c4_b_y = NULL;
  static char_T c4_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'd',
    'i', 'l', 'a', 't', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
    'o', 'n', 'N', 'a', 'N' };

  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_h_emlrtRSI;
  c4_b_a = c4_a;
  c4_c_a = c4_b_a;
  c4_p = true;
  c4_b_x = c4_c_a;
  c4_c_x = c4_b_x;
  c4_b = muDoubleScalarIsNaN(c4_c_x);
  c4_b_p = !c4_b;
  if (!c4_b_p) {
    c4_p = false;
  }

  if (c4_p) {
    c4_b_b = true;
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c4_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }
}

static void c4_c_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1, real_T c4_b[49])
{
  real_T c4_a;
  int32_T c4_j;
  int32_T c4_i;
  real_T c4_b_j;
  int32_T c4_b_i;
  real_T c4_c_i;
  (void)chartInstance;
  c4_a = c4_varargin_1;
  for (c4_j = 0; c4_j < 6; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_b_i = 0; c4_b_i < 7; c4_b_i++) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_b[((int32_T)c4_c_i + 7 * ((int32_T)c4_b_j - 1)) - 1] = rtMinusInf;
    }
  }

  for (c4_i = 0; c4_i < 6; c4_i++) {
    c4_c_i = (real_T)c4_i + 1.0;
    c4_b[(int32_T)c4_c_i + 41] = rtMinusInf;
  }

  c4_b[48] = c4_a;
}

static void c4_d_padarray(SFc4_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c4_varargin_1[49], real_T c4_b[169])
{
  int32_T c4_j;
  int32_T c4_b_j;
  int32_T c4_i;
  int32_T c4_c_j;
  real_T c4_d_j;
  real_T c4_b_i;
  int32_T c4_c_i;
  int32_T c4_d_i;
  (void)chartInstance;
  for (c4_j = 0; c4_j < 6; c4_j++) {
    for (c4_i = 0; c4_i < 13; c4_i++) {
      c4_b_i = (real_T)c4_i + 1.0;
      c4_b[((int32_T)c4_b_i + 13 * (c4_j + 7)) - 1] = rtMinusInf;
    }
  }

  for (c4_b_j = 0; c4_b_j < 7; c4_b_j++) {
    c4_d_j = (real_T)c4_b_j + 1.0;
    for (c4_c_i = 0; c4_c_i < 6; c4_c_i++) {
      c4_b[(c4_c_i + 13 * ((int32_T)c4_d_j - 1)) + 7] = rtMinusInf;
    }
  }

  for (c4_c_j = 0; c4_c_j < 7; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_d_i = 0; c4_d_i < 7; c4_d_i++) {
      c4_b_i = (real_T)c4_d_i + 1.0;
      c4_b[((int32_T)c4_b_i + 13 * ((int32_T)c4_d_j - 1)) - 1] = c4_varargin_1
        [((int32_T)c4_b_i + 7 * ((int32_T)c4_d_j - 1)) - 1];
    }
  }
}

static uint8_T c4_emlrt_marshallIn
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_b_y, const char_T *c4_identifier)
{
  uint8_T c4_c_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_c_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_y), &c4_thisId);
  sf_mex_destroy(&c4_b_y);
  return c4_c_y;
}

static uint8_T c4_b_emlrt_marshallIn
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_y;
  uint8_T c4_b_u;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_b_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static const mxArray *c4_chart_data_browse_helper
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c4_ssIdNumber)
{
  const mxArray *c4_mxData = NULL;
  real_T c4_d;
  real_T c4_d1;
  uint8_T c4_u;
  real_T c4_d2;
  c4_mxData = NULL;
  switch (c4_ssIdNumber) {
   case 9U:
    c4_d = *chartInstance->c4_x;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    c4_d1 = *chartInstance->c4_I1;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c4_u = *chartInstance->c4_y;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_u, 3, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c4_d2 = *chartInstance->c4_I2;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c4_mxData;
}

static void init_dsm_address_info
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c4_I1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c4_y = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_I2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1146488291U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4126229651U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(679388424U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2814155762U);
}

mxArray *sf_c4_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Morphop_flat_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c4_untitled_restored_from_autosave_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("erode_flat_real64_tbb");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNTzaJL80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC3u"
    "SEX"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "stBuwzBmH3ZUwrPewqX4e3E";
}

static void sf_opaque_initialize_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_untitled_restored_from_autosave
      ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_untitled_restored_from_autosave
    ((SFc4_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_untitled_restored_from_autosave
      ((SFc4_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc4_untitled_restored_from_autosave
      ((SFc4_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV8tu00AUtdNSFQmqIiEhJCTYwaJCILpgBW1eIlL6EGkLYkGY2jfxKOMZdx5JyxaJb+AX+AP",
    "El/QDWLDkE7jjuGnq2DFt1AokLDn2eM49c19z78RxGxsOXkt4f7nlOAv4XMS75Ayva8nYHbuH3+",
    "edh8n4JQpxE24TSULlTL04CeE1KMGMpoI3eEdkwijvgATuITYSUuexKRoaRnmvbrhn+dSbgHpBK",
    "xCG+WWUJf4WZ0fIFhm9jTxVKsHTdQBfB1KYblBnpDvSWOpBJQCvp0w4zQQFumUiq5baMEzTiEHt",
    "ELwGV5qgxupUt5YmGir6MNdMa6lqnQBFGDFKeKa1AVEtiNDBGnYjH3+3jEaj0jAvIFKXISB9UE3",
    "aizkFhzQnVTixTznRQlLCaiGrWMFJ3bYZ6rMhfGBTHIK6lSWQXiQo1/nxb9XR0hon+wyqsG+6+W",
    "wtODA2+HsUBiBz/dapiD5I0oUtnrto7JDaYRytUZZMwjQNYY/IdQ/jp8DPzV7MHNUiGCfYQYk8G",
    "MRGNtSOpH10by6bCRs2M4u2jAmHwVZFsJit1odpURix1T1eIYypXNiOiJrQBxazVokm02FD1myc",
    "UtTfEehgm975u8FwioFPYBXBfZoZrn4KENedTSwsZ5GeUVqEFUzearM5OT0Ja3ANskM8yKoCklA",
    "F6LPYvflsPlU29ghErXSsXhZ4mCFFKEd1DK8OhOyhT6YUkVMTbERzgaHqYixxJ+wq3DTTYDaWRT",
    "iPeAH4tsBQBhu4bRCb4RNlS9s67rs+1UdVUJ6kUVZUbf954pz2nxt/0H9O5NLPR2M8bgaPM/ZMr",
    "3u9dBY/l1q3hF9c143l1sbkbqbWmU/JWdyyfR4vfH0qf9798enx+0/fP28Wre9OrO/G71buW+l8",
    "/XopGd87KYyjRO9P5JfFvhrTaz6D/84Y/3IyVrpsBh/L4atn73YHchsGB29X4Vkt5lss0LeU0vf",
    "k+wNboY+iuN4q6TX85CBhx8QM26vlfz6m70KBP64n34fXr5ezyd9eS8dxvkB+Gd+OUnl78fUfrM",
    "0mP1z/Q4H+K6l4r8R9uE3s7oa2t9o2HIsZA78tASuSxJeOFGGbGC0UHknS+/SieX9eOeeK5f4VP",
    "f/75fLt+5M+NndBOXfGvnlVcrPad95+/rfhp/UFJ4Vf/ovtmPWcddn4Y+d856H7yfjF6C9KJaDM",
    "zzitJtNNIJ2s2Suw7zcbSqAv",
    ""
  };

  static char newstr [1225] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c4_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2835798022U));
  ssSetChecksum1(S,(434663985U));
  ssSetChecksum2(S,(1580106724U));
  ssSetChecksum3(S,(1317452419U));
}

static void mdlRTW_c4_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc4_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc4_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc4_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc4_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_untitled_restored_from_autosave;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_untitled_restored_from_autosave(chartInstance);
}

void c4_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
