/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c5_untitled_restored_from_autosave.h"
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
static emlrtMCInfo c5_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtRSInfo c5_emlrtRSI = { 6,  /* lineNo */
  "MATLAB Function4",                  /* fcnName */
  "#untitled_restored_from_autosave:61"/* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 7,/* lineNo */
  "MATLAB Function4",                  /* fcnName */
  "#untitled_restored_from_autosave:61"/* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 23,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 645,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c5_h_emlrtRSI = { 849,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c5_i_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtBCInfo c5_emlrtBCI = { 1,  /* iFirst */
  1,                                   /* iLast */
  11,                                  /* lineNo */
  5,                                   /* colNo */
  "IW",                                /* aName */
  "MATLAB Function4",                  /* fName */
  "#untitled_restored_from_autosave:61",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_emlrtDCI = { 11, /* lineNo */
  5,                                   /* colNo */
  "MATLAB Function4",                  /* fName */
  "#untitled_restored_from_autosave:61",/* pName */
  1                                    /* checkKind */
};

static const boolean_T c5_bv[121] = { true, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, true };

static const boolean_T c5_bv1[121] = { false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false };

static const char_T c5_cv[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c5_cv1[19] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
  'b', 'e', 'r', ' ', '1', ',', ' ', 'I', 'M', ',' };

/* Function Declarations */
static void initialize_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c5_update_jit_animation_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c5_do_animation_call_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_st);
static void sf_gateway_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initSimStructsc5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c5_imerode(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_A);
static void c5_validateattributes
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c5_sp, real_T c5_a);
static void c5_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_b[400]);
static void c5_b_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1[400], real_T c5_b[1521]);
static real_T c5_imdilate(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_A);
static void c5_b_validateattributes
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c5_sp, real_T c5_a);
static void c5_c_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_b[400]);
static void c5_d_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1[400], real_T c5_b[1521]);
static uint8_T c5_emlrt_marshallIn
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_b_y, const char_T *c5_identifier);
static uint8_T c5_b_emlrt_marshallIn
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static const mxArray *c5_chart_data_browse_helper
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c5_ssIdNumber);
static void init_dsm_address_info
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c5_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_is_active_c5_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c5_update_jit_animation_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_do_animation_call_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_createcellmatrix(2, 1), false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", chartInstance->c5_y, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_b_y, 0, c5_c_y);
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c5_b_y, 1, c5_d_y);
  sf_mex_assign(&c5_st, c5_b_y, false);
  return c5_st;
}

static void set_sim_state_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_st)
{
  const mxArray *c5_u;
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_y = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 0)), "y");
  chartInstance->c5_is_active_c5_untitled_restored_from_autosave =
    c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
                        "is_active_c5_untitled_restored_from_autosave");
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void sf_gateway_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack c5_b_st;
  real_T c5_b_x;
  real_T c5_b_I1;
  real_T c5_b_I2;
  real_T c5_IW;
  real_T c5_d;
  boolean_T c5_covSaturation;
  uint8_T c5_u;
  uint32_T c5_u1;
  boolean_T c5_b_covSaturation;
  uint8_T c5_b_IW;
  uint8_T c5_uv[1];
  int32_T c5_i;
  int32_T c5_b_i;
  uint8_T c5_I22;
  real_T c5_d1;
  real_T c5_d2;
  int32_T c5_c_i;
  boolean_T c5_c_covSaturation;
  uint8_T c5_u2;
  uint8_T c5_I23;
  real_T c5_d3;
  boolean_T c5_d_covSaturation;
  uint8_T c5_u3;
  uint8_T c5_I11;
  real_T c5_d4;
  boolean_T c5_e_covSaturation;
  uint8_T c5_u4;
  uint8_T c5_I12;
  real_T c5_varargin_1;
  real_T c5_varargin_2;
  real_T c5_c_x;
  real_T c5_b_y;
  real_T c5_d_x;
  real_T c5_c_y;
  real_T c5_e_x;
  real_T c5_d_y;
  real_T c5_f_x;
  real_T c5_e_y;
  real_T c5_g_x;
  real_T c5_f_y;
  real_T c5_h_x;
  real_T c5_g_y;
  real_T c5_I31;
  uint8_T c5_I41;
  real_T c5_d5;
  boolean_T c5_f_covSaturation;
  uint8_T c5_u5;
  uint8_T c5_I51;
  real_T c5_d6;
  boolean_T c5_g_covSaturation;
  uint8_T c5_u6;
  uint8_T c5_I61;
  real_T c5_d7;
  boolean_T c5_h_covSaturation;
  uint8_T c5_u7;
  uint8_T c5_I71;
  real_T c5_a;
  uint8_T c5_b;
  real_T c5_d8;
  boolean_T c5_i_covSaturation;
  uint8_T c5_u8;
  uint8_T c5_h_y;
  real_T c5_b_a;
  uint8_T c5_b_b;
  real_T c5_d9;
  boolean_T c5_j_covSaturation;
  uint8_T c5_u9;
  uint8_T c5_i_y;
  real_T c5_c_a;
  uint8_T c5_c_b;
  real_T c5_d10;
  boolean_T c5_k_covSaturation;
  uint8_T c5_u10;
  uint8_T c5_j_y;
  real_T c5_d_a;
  uint8_T c5_d_b;
  real_T c5_d11;
  boolean_T c5_l_covSaturation;
  uint8_T c5_u11;
  uint8_T c5_k_y;
  real_T c5_d12;
  boolean_T c5_m_covSaturation;
  uint8_T c5_u12;
  uint32_T c5_u13;
  boolean_T c5_n_covSaturation;
  uint32_T c5_u14;
  boolean_T c5_o_covSaturation;
  uint32_T c5_u15;
  boolean_T c5_p_covSaturation;
  uint8_T c5_l_y;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 2U, *chartInstance->c5_I2);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U, *chartInstance->c5_I1);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U, *chartInstance->c5_x);
  chartInstance->c5_sfEvent = CALL_EVENT;
  c5_b_x = *chartInstance->c5_x;
  c5_b_I1 = *chartInstance->c5_I1;
  c5_b_I2 = *chartInstance->c5_I2;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  c5_b_st.site = &c5_emlrtRSI;
  c5_IW = c5_imerode(chartInstance, &c5_b_st, c5_b_I2);
  c5_b_st.site = &c5_b_emlrtRSI;
  c5_IW = c5_imdilate(chartInstance, &c5_b_st, c5_IW);
  c5_d = muDoubleScalarRound(c5_b_I2 - c5_IW);
  c5_covSaturation = false;
  if (c5_d < 256.0) {
    if (c5_d >= 0.0) {
      c5_u = (uint8_T)c5_d;
    } else {
      c5_covSaturation = true;
      c5_u = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 106, 12);
    }
  } else if (c5_d >= 256.0) {
    c5_covSaturation = true;
    c5_u = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 106, 12);
  } else {
    c5_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 0, 0,
    c5_covSaturation);
  c5_u1 = (uint32_T)c5_u + 1U;
  c5_b_covSaturation = false;
  if (c5_u1 > 255U) {
    c5_b_covSaturation = true;
    c5_u1 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 106, 14);
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 1, 0,
    c5_b_covSaturation);
  c5_b_IW = (uint8_T)c5_u1;
  c5_uv[0] = c5_b_IW;
  c5_i = 0;
  while (c5_i <= 0) {
    c5_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c5_b_i = 1;
  while (c5_b_i - 1 <= 0) {
    if ((real_T)c5_b_IW < 0.0) {
      c5_d1 = (real_T)c5_b_i;
      c5_c_i = (int32_T)emlrtIntegerCheckR2012b(c5_d1, &c5_emlrtDCI, &c5_st);
      c5_uv[emlrtDynamicBoundsCheckR2012b(c5_c_i, 1, 1, &c5_emlrtBCI, &c5_st) -
        1] = 0U;
    }

    c5_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c5_b_IW = c5_uv[0];
  c5_I22 = c5_b_IW;
  c5_d2 = muDoubleScalarRound(c5_b_I2 - 255.0);
  c5_c_covSaturation = false;
  if (c5_d2 < 256.0) {
    if (c5_d2 >= 0.0) {
      c5_u2 = (uint8_T)c5_d2;
    } else {
      c5_c_covSaturation = true;
      c5_u2 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 498, 10);
    }
  } else if (c5_d2 >= 256.0) {
    c5_c_covSaturation = true;
    c5_u2 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 498, 10);
  } else {
    c5_u2 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 2, 0,
    c5_c_covSaturation);
  c5_I23 = c5_u2;
  c5_d3 = muDoubleScalarRound(c5_b_I1 - 255.0);
  c5_d_covSaturation = false;
  if (c5_d3 < 256.0) {
    if (c5_d3 >= 0.0) {
      c5_u3 = (uint8_T)c5_d3;
    } else {
      c5_d_covSaturation = true;
      c5_u3 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 528, 10);
    }
  } else if (c5_d3 >= 256.0) {
    c5_d_covSaturation = true;
    c5_u3 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 528, 10);
  } else {
    c5_u3 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 3, 0,
    c5_d_covSaturation);
  c5_I11 = c5_u3;
  c5_d4 = muDoubleScalarRound(c5_b_I1 - (real_T)c5_I11);
  c5_e_covSaturation = false;
  if (c5_d4 < 256.0) {
    if (c5_d4 >= 0.0) {
      c5_u4 = (uint8_T)c5_d4;
    } else {
      c5_e_covSaturation = true;
      c5_u4 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 558, 6);
    }
  } else if (c5_d4 >= 256.0) {
    c5_e_covSaturation = true;
    c5_u4 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 558, 6);
  } else {
    c5_u4 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 4, 0,
    c5_e_covSaturation);
  c5_I12 = c5_u4;
  c5_varargin_1 = c5_b_I1;
  c5_varargin_2 = c5_b_I2;
  c5_c_x = c5_varargin_1;
  c5_b_y = c5_varargin_2;
  c5_d_x = c5_c_x;
  c5_c_y = c5_b_y;
  c5_e_x = c5_d_x;
  c5_d_y = c5_c_y;
  c5_f_x = c5_e_x;
  c5_e_y = c5_d_y;
  c5_g_x = c5_f_x;
  c5_f_y = c5_e_y;
  c5_h_x = c5_g_x;
  c5_g_y = c5_f_y;
  c5_I31 = muDoubleScalarMin(c5_h_x, c5_g_y);
  c5_I41 = c5_I22;
  c5_d5 = muDoubleScalarRound((real_T)c5_I23 - c5_I31);
  c5_f_covSaturation = false;
  if (c5_d5 < 256.0) {
    if (c5_d5 >= 0.0) {
      c5_u5 = (uint8_T)c5_d5;
    } else {
      c5_f_covSaturation = true;
      c5_u5 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 669, 7);
    }
  } else if (c5_d5 >= 256.0) {
    c5_f_covSaturation = true;
    c5_u5 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 669, 7);
  } else {
    c5_u5 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 5, 0,
    c5_f_covSaturation);
  c5_I51 = c5_u5;
  c5_d6 = muDoubleScalarRound((real_T)c5_I11 - c5_I31);
  c5_g_covSaturation = false;
  if (c5_d6 < 256.0) {
    if (c5_d6 >= 0.0) {
      c5_u6 = (uint8_T)c5_d6;
    } else {
      c5_g_covSaturation = true;
      c5_u6 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 697, 7);
    }
  } else if (c5_d6 >= 256.0) {
    c5_g_covSaturation = true;
    c5_u6 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 697, 7);
  } else {
    c5_u6 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 6, 0,
    c5_g_covSaturation);
  c5_I61 = c5_u6;
  c5_d7 = muDoubleScalarRound((real_T)c5_I12 - c5_I31);
  c5_h_covSaturation = false;
  if (c5_d7 < 256.0) {
    if (c5_d7 >= 0.0) {
      c5_u7 = (uint8_T)c5_d7;
    } else {
      c5_h_covSaturation = true;
      c5_u7 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 724, 7);
    }
  } else if (c5_d7 >= 256.0) {
    c5_h_covSaturation = true;
    c5_u7 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 724, 7);
  } else {
    c5_u7 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 7, 0,
    c5_h_covSaturation);
  c5_I71 = c5_u7;
  c5_a = 0.5 + c5_b_x;
  c5_b = c5_I41;
  c5_d8 = muDoubleScalarRound(c5_a * (real_T)c5_b);
  c5_i_covSaturation = false;
  if (c5_d8 < 256.0) {
    if (c5_d8 >= 0.0) {
      c5_u8 = (uint8_T)c5_d8;
    } else {
      c5_i_covSaturation = true;
      c5_u8 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 748, 13);
    }
  } else if (c5_d8 >= 256.0) {
    c5_i_covSaturation = true;
    c5_u8 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 748, 13);
  } else {
    c5_u8 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 12, 0,
    c5_i_covSaturation);
  c5_h_y = c5_u8;
  c5_b_a = 0.5 - c5_b_x;
  c5_b_b = c5_I51;
  c5_d9 = muDoubleScalarRound(c5_b_a * (real_T)c5_b_b);
  c5_j_covSaturation = false;
  if (c5_d9 < 256.0) {
    if (c5_d9 >= 0.0) {
      c5_u9 = (uint8_T)c5_d9;
    } else {
      c5_j_covSaturation = true;
      c5_u9 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 762, 11);
    }
  } else if (c5_d9 >= 256.0) {
    c5_j_covSaturation = true;
    c5_u9 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 762, 11);
  } else {
    c5_u9 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 13, 0,
    c5_j_covSaturation);
  c5_i_y = c5_u9;
  c5_c_a = 0.5 + c5_b_x;
  c5_c_b = c5_I61;
  c5_d10 = muDoubleScalarRound(c5_c_a * (real_T)c5_c_b);
  c5_k_covSaturation = false;
  if (c5_d10 < 256.0) {
    if (c5_d10 >= 0.0) {
      c5_u10 = (uint8_T)c5_d10;
    } else {
      c5_k_covSaturation = true;
      c5_u10 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 774, 11);
    }
  } else if (c5_d10 >= 256.0) {
    c5_k_covSaturation = true;
    c5_u10 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 774, 11);
  } else {
    c5_u10 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 14, 0,
    c5_k_covSaturation);
  c5_j_y = c5_u10;
  c5_d_a = 0.5 - c5_b_x;
  c5_d_b = c5_I71;
  c5_d11 = muDoubleScalarRound(c5_d_a * (real_T)c5_d_b);
  c5_l_covSaturation = false;
  if (c5_d11 < 256.0) {
    if (c5_d11 >= 0.0) {
      c5_u11 = (uint8_T)c5_d11;
    } else {
      c5_l_covSaturation = true;
      c5_u11 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 786, 11);
    }
  } else if (c5_d11 >= 256.0) {
    c5_l_covSaturation = true;
    c5_u11 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 786, 11);
  } else {
    c5_u11 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 15, 0,
    c5_l_covSaturation);
  c5_k_y = c5_u11;
  c5_d12 = muDoubleScalarRound(c5_I31 + (real_T)c5_h_y);
  c5_m_covSaturation = false;
  if (c5_d12 < 256.0) {
    if (c5_d12 >= 0.0) {
      c5_u12 = (uint8_T)c5_d12;
    } else {
      c5_m_covSaturation = true;
      c5_u12 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 744, 17);
    }
  } else if (c5_d12 >= 256.0) {
    c5_m_covSaturation = true;
    c5_u12 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 744, 17);
  } else {
    c5_u12 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 8, 0,
    c5_m_covSaturation);
  c5_u13 = (uint32_T)c5_u12 + (uint32_T)c5_i_y;
  c5_n_covSaturation = false;
  if (c5_u13 > 255U) {
    c5_n_covSaturation = true;
    c5_u13 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 744, 29);
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 9, 0,
    c5_n_covSaturation);
  c5_u14 = (uint32_T)(uint8_T)c5_u13 + (uint32_T)c5_j_y;
  c5_o_covSaturation = false;
  if (c5_u14 > 255U) {
    c5_o_covSaturation = true;
    c5_u14 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 744, 41);
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 10, 0,
    c5_o_covSaturation);
  c5_u15 = (uint32_T)(uint8_T)c5_u14 + (uint32_T)c5_k_y;
  c5_p_covSaturation = false;
  if (c5_u15 > 255U) {
    c5_p_covSaturation = true;
    c5_u15 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 744, 53);
  }

  covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 11, 0,
    c5_p_covSaturation);
  c5_l_y = (uint8_T)c5_u15;
  *chartInstance->c5_y = c5_l_y;
  c5_do_animation_call_c5_untitled_restored_from_autosave(chartInstance);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 3U, (real_T)
                    *chartInstance->c5_y);
}

static void mdl_start_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  static const uint32_T c5_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c5_chart_data_browse_helper);
  chartInstance->c5_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c5_RuntimeVar,
    &chartInstance->c5_IsDebuggerActive,
    &chartInstance->c5_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c5_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  16U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 1, -1, 819);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 106, -1,
    118);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 106, -1,
    120);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 498, -1,
    508);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 528, -1,
    538);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 558, -1,
    564);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 5U, 669, -1,
    676);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 6U, 697, -1,
    704);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 7U, 724, -1,
    731);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 8U, 744, -1,
    761);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 9U, 744, -1,
    773);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 10U, 744,
    -1, 785);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 11U, 744,
    -1, 797);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 12U, 748,
    -1, 761);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 13U, 762,
    -1, 773);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 14U, 774,
    -1, 785);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 15U, 786,
    -1, 797);
}

static void mdl_cleanup_runtime_resources_c5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c5_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void initSimStructsc5_untitled_restored_from_autosave
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c5_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static real_T c5_imerode(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_A)
{
  emlrtStack c5_st;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  real_T c5_varargin_1;
  real_T c5_b_A;
  real_T c5_Apadpre[400];
  real_T c5_Apad[1521];
  int32_T c5_i;
  int32_T c5_i1;
  boolean_T c5_nhood[15];
  int32_T c5_i2;
  real_T c5_asizeT[2];
  real_T c5_nsizeT[2];
  real_T c5_b_B[1521];
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  boolean_T c5_b_nhood[5];
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i20;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_c_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_varargin_1 = c5_A;
  c5_b_st.site = &c5_d_emlrtRSI;
  c5_b_A = c5_varargin_1;
  c5_c_st.site = &c5_e_emlrtRSI;
  c5_validateattributes(chartInstance, &c5_c_st, c5_b_A);
  c5_padarray(chartInstance, c5_b_A, c5_Apadpre);
  c5_b_padarray(chartInstance, c5_Apadpre, c5_Apad);
  for (c5_i = 0; c5_i < 15; c5_i++) {
    c5_nhood[c5_i] = true;
  }

  for (c5_i1 = 0; c5_i1 < 2; c5_i1++) {
    c5_asizeT[c5_i1] = 39.0;
  }

  for (c5_i2 = 0; c5_i2 < 2; c5_i2++) {
    c5_nsizeT[c5_i2] = 15.0 + -14.0 * (real_T)c5_i2;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_nhood, c5_nsizeT, 2.0,
                        c5_b_B);
  for (c5_i3 = 0; c5_i3 < 1521; c5_i3++) {
    c5_Apad[c5_i3] = c5_b_B[c5_i3];
  }

  for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
    c5_asizeT[c5_i4] = 39.0;
  }

  for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
    c5_nsizeT[c5_i5] = 11.0;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_bv, c5_nsizeT, 2.0, c5_b_B);
  for (c5_i6 = 0; c5_i6 < 1521; c5_i6++) {
    c5_Apad[c5_i6] = c5_b_B[c5_i6];
  }

  for (c5_i7 = 0; c5_i7 < 15; c5_i7++) {
    c5_nhood[c5_i7] = true;
  }

  for (c5_i8 = 0; c5_i8 < 2; c5_i8++) {
    c5_asizeT[c5_i8] = 39.0;
  }

  for (c5_i9 = 0; c5_i9 < 2; c5_i9++) {
    c5_nsizeT[c5_i9] = 1.0 + 14.0 * (real_T)c5_i9;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_nhood, c5_nsizeT, 2.0,
                        c5_b_B);
  for (c5_i10 = 0; c5_i10 < 1521; c5_i10++) {
    c5_Apad[c5_i10] = c5_b_B[c5_i10];
  }

  for (c5_i11 = 0; c5_i11 < 2; c5_i11++) {
    c5_asizeT[c5_i11] = 39.0;
  }

  for (c5_i12 = 0; c5_i12 < 2; c5_i12++) {
    c5_nsizeT[c5_i12] = 11.0;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_bv1, c5_nsizeT, 2.0, c5_b_B);
  for (c5_i13 = 0; c5_i13 < 1521; c5_i13++) {
    c5_Apad[c5_i13] = c5_b_B[c5_i13];
  }

  for (c5_i14 = 0; c5_i14 < 5; c5_i14++) {
    c5_b_nhood[c5_i14] = true;
  }

  for (c5_i15 = 0; c5_i15 < 2; c5_i15++) {
    c5_asizeT[c5_i15] = 39.0;
  }

  for (c5_i16 = 0; c5_i16 < 2; c5_i16++) {
    c5_nsizeT[c5_i16] = 1.0 + 4.0 * (real_T)c5_i16;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_b_nhood, c5_nsizeT, 2.0,
                        c5_b_B);
  for (c5_i17 = 0; c5_i17 < 1521; c5_i17++) {
    c5_Apad[c5_i17] = c5_b_B[c5_i17];
  }

  for (c5_i18 = 0; c5_i18 < 5; c5_i18++) {
    c5_b_nhood[c5_i18] = true;
  }

  for (c5_i19 = 0; c5_i19 < 2; c5_i19++) {
    c5_asizeT[c5_i19] = 39.0;
  }

  for (c5_i20 = 0; c5_i20 < 2; c5_i20++) {
    c5_nsizeT[c5_i20] = 5.0 + -4.0 * (real_T)c5_i20;
  }

  erode_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_b_nhood, c5_nsizeT, 2.0,
                        c5_b_B);
  return c5_b_B[760];
}

static void c5_validateattributes
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c5_sp, real_T c5_a)
{
  emlrtStack c5_st;
  real_T c5_b_a;
  real_T c5_c_a;
  boolean_T c5_p;
  real_T c5_b_x;
  real_T c5_c_x;
  boolean_T c5_b;
  boolean_T c5_b_p;
  boolean_T c5_b_b;
  const mxArray *c5_b_y = NULL;
  static char_T c5_b_cv[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'e',
    'r', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'N', 'a', 'N' };

  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_g_emlrtRSI;
  c5_b_a = c5_a;
  c5_c_a = c5_b_a;
  c5_p = true;
  c5_b_x = c5_c_a;
  c5_c_x = c5_b_x;
  c5_b = muDoubleScalarIsNaN(c5_c_x);
  c5_b_p = !c5_b;
  if (!c5_b_p) {
    c5_p = false;
  }

  if (c5_p) {
    c5_b_b = true;
  } else {
    c5_b_b = false;
  }

  if (!c5_b_b) {
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c5_st, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_b_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_c_y, 14, c5_d_y)));
  }
}

static void c5_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_b[400])
{
  real_T c5_a;
  int32_T c5_j;
  int32_T c5_i;
  real_T c5_b_j;
  int32_T c5_b_i;
  real_T c5_c_i;
  (void)chartInstance;
  c5_a = c5_varargin_1;
  for (c5_j = 0; c5_j < 19; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    for (c5_b_i = 0; c5_b_i < 20; c5_b_i++) {
      c5_c_i = (real_T)c5_b_i + 1.0;
      c5_b[((int32_T)c5_c_i + 20 * ((int32_T)c5_b_j - 1)) - 1] = rtInf;
    }
  }

  for (c5_i = 0; c5_i < 19; c5_i++) {
    c5_c_i = (real_T)c5_i + 1.0;
    c5_b[(int32_T)c5_c_i + 379] = rtInf;
  }

  c5_b[399] = c5_a;
}

static void c5_b_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1[400], real_T c5_b[1521])
{
  int32_T c5_j;
  int32_T c5_b_j;
  int32_T c5_i;
  int32_T c5_c_j;
  real_T c5_d_j;
  real_T c5_b_i;
  int32_T c5_c_i;
  int32_T c5_d_i;
  (void)chartInstance;
  for (c5_j = 0; c5_j < 19; c5_j++) {
    for (c5_i = 0; c5_i < 39; c5_i++) {
      c5_b_i = (real_T)c5_i + 1.0;
      c5_b[((int32_T)c5_b_i + 39 * (c5_j + 20)) - 1] = rtInf;
    }
  }

  for (c5_b_j = 0; c5_b_j < 20; c5_b_j++) {
    c5_d_j = (real_T)c5_b_j + 1.0;
    for (c5_c_i = 0; c5_c_i < 19; c5_c_i++) {
      c5_b[(c5_c_i + 39 * ((int32_T)c5_d_j - 1)) + 20] = rtInf;
    }
  }

  for (c5_c_j = 0; c5_c_j < 20; c5_c_j++) {
    c5_d_j = (real_T)c5_c_j + 1.0;
    for (c5_d_i = 0; c5_d_i < 20; c5_d_i++) {
      c5_b_i = (real_T)c5_d_i + 1.0;
      c5_b[((int32_T)c5_b_i + 39 * ((int32_T)c5_d_j - 1)) - 1] = c5_varargin_1
        [((int32_T)c5_b_i + 20 * ((int32_T)c5_d_j - 1)) - 1];
    }
  }
}

static real_T c5_imdilate(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_A)
{
  emlrtStack c5_st;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  real_T c5_varargin_1;
  real_T c5_b_A;
  real_T c5_Apadpre[400];
  real_T c5_Apad[1521];
  int32_T c5_i;
  int32_T c5_i1;
  boolean_T c5_nhood[15];
  int32_T c5_i2;
  real_T c5_asizeT[2];
  real_T c5_nsizeT[2];
  real_T c5_b_B[1521];
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  boolean_T c5_b_nhood[5];
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i20;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_i_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_varargin_1 = c5_A;
  c5_b_st.site = &c5_d_emlrtRSI;
  c5_b_A = c5_varargin_1;
  c5_c_st.site = &c5_e_emlrtRSI;
  c5_b_validateattributes(chartInstance, &c5_c_st, c5_b_A);
  c5_c_padarray(chartInstance, c5_b_A, c5_Apadpre);
  c5_d_padarray(chartInstance, c5_Apadpre, c5_Apad);
  for (c5_i = 0; c5_i < 15; c5_i++) {
    c5_nhood[c5_i] = true;
  }

  for (c5_i1 = 0; c5_i1 < 2; c5_i1++) {
    c5_asizeT[c5_i1] = 39.0;
  }

  for (c5_i2 = 0; c5_i2 < 2; c5_i2++) {
    c5_nsizeT[c5_i2] = 15.0 + -14.0 * (real_T)c5_i2;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_nhood, c5_nsizeT, 2.0,
    c5_b_B);
  for (c5_i3 = 0; c5_i3 < 1521; c5_i3++) {
    c5_Apad[c5_i3] = c5_b_B[c5_i3];
  }

  for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
    c5_asizeT[c5_i4] = 39.0;
  }

  for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
    c5_nsizeT[c5_i5] = 11.0;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_bv, c5_nsizeT, 2.0, c5_b_B);
  for (c5_i6 = 0; c5_i6 < 1521; c5_i6++) {
    c5_Apad[c5_i6] = c5_b_B[c5_i6];
  }

  for (c5_i7 = 0; c5_i7 < 15; c5_i7++) {
    c5_nhood[c5_i7] = true;
  }

  for (c5_i8 = 0; c5_i8 < 2; c5_i8++) {
    c5_asizeT[c5_i8] = 39.0;
  }

  for (c5_i9 = 0; c5_i9 < 2; c5_i9++) {
    c5_nsizeT[c5_i9] = 1.0 + 14.0 * (real_T)c5_i9;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_nhood, c5_nsizeT, 2.0,
    c5_b_B);
  for (c5_i10 = 0; c5_i10 < 1521; c5_i10++) {
    c5_Apad[c5_i10] = c5_b_B[c5_i10];
  }

  for (c5_i11 = 0; c5_i11 < 2; c5_i11++) {
    c5_asizeT[c5_i11] = 39.0;
  }

  for (c5_i12 = 0; c5_i12 < 2; c5_i12++) {
    c5_nsizeT[c5_i12] = 11.0;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_bv1, c5_nsizeT, 2.0, c5_b_B);
  for (c5_i13 = 0; c5_i13 < 1521; c5_i13++) {
    c5_Apad[c5_i13] = c5_b_B[c5_i13];
  }

  for (c5_i14 = 0; c5_i14 < 5; c5_i14++) {
    c5_b_nhood[c5_i14] = true;
  }

  for (c5_i15 = 0; c5_i15 < 2; c5_i15++) {
    c5_asizeT[c5_i15] = 39.0;
  }

  for (c5_i16 = 0; c5_i16 < 2; c5_i16++) {
    c5_nsizeT[c5_i16] = 1.0 + 4.0 * (real_T)c5_i16;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_b_nhood, c5_nsizeT, 2.0,
    c5_b_B);
  for (c5_i17 = 0; c5_i17 < 1521; c5_i17++) {
    c5_Apad[c5_i17] = c5_b_B[c5_i17];
  }

  for (c5_i18 = 0; c5_i18 < 5; c5_i18++) {
    c5_b_nhood[c5_i18] = true;
  }

  for (c5_i19 = 0; c5_i19 < 2; c5_i19++) {
    c5_asizeT[c5_i19] = 39.0;
  }

  for (c5_i20 = 0; c5_i20 < 2; c5_i20++) {
    c5_nsizeT[c5_i20] = 5.0 + -4.0 * (real_T)c5_i20;
  }

  dilate_flat_real64_tbb(c5_Apad, c5_asizeT, 2.0, c5_b_nhood, c5_nsizeT, 2.0,
    c5_b_B);
  return c5_b_B[760];
}

static void c5_b_validateattributes
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c5_sp, real_T c5_a)
{
  emlrtStack c5_st;
  real_T c5_b_a;
  real_T c5_c_a;
  boolean_T c5_p;
  real_T c5_b_x;
  real_T c5_c_x;
  boolean_T c5_b;
  boolean_T c5_b_p;
  boolean_T c5_b_b;
  const mxArray *c5_b_y = NULL;
  static char_T c5_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'd',
    'i', 'l', 'a', 't', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
    'o', 'n', 'N', 'a', 'N' };

  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_g_emlrtRSI;
  c5_b_a = c5_a;
  c5_c_a = c5_b_a;
  c5_p = true;
  c5_b_x = c5_c_a;
  c5_c_x = c5_b_x;
  c5_b = muDoubleScalarIsNaN(c5_c_x);
  c5_b_p = !c5_b;
  if (!c5_b_p) {
    c5_p = false;
  }

  if (c5_p) {
    c5_b_b = true;
  } else {
    c5_b_b = false;
  }

  if (!c5_b_b) {
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c5_st, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_b_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_c_y, 14, c5_d_y)));
  }
}

static void c5_c_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1, real_T c5_b[400])
{
  real_T c5_a;
  int32_T c5_j;
  int32_T c5_i;
  real_T c5_b_j;
  int32_T c5_b_i;
  real_T c5_c_i;
  (void)chartInstance;
  c5_a = c5_varargin_1;
  for (c5_j = 0; c5_j < 19; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    for (c5_b_i = 0; c5_b_i < 20; c5_b_i++) {
      c5_c_i = (real_T)c5_b_i + 1.0;
      c5_b[((int32_T)c5_c_i + 20 * ((int32_T)c5_b_j - 1)) - 1] = rtMinusInf;
    }
  }

  for (c5_i = 0; c5_i < 19; c5_i++) {
    c5_c_i = (real_T)c5_i + 1.0;
    c5_b[(int32_T)c5_c_i + 379] = rtMinusInf;
  }

  c5_b[399] = c5_a;
}

static void c5_d_padarray(SFc5_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c5_varargin_1[400], real_T c5_b[1521])
{
  int32_T c5_j;
  int32_T c5_b_j;
  int32_T c5_i;
  int32_T c5_c_j;
  real_T c5_d_j;
  real_T c5_b_i;
  int32_T c5_c_i;
  int32_T c5_d_i;
  (void)chartInstance;
  for (c5_j = 0; c5_j < 19; c5_j++) {
    for (c5_i = 0; c5_i < 39; c5_i++) {
      c5_b_i = (real_T)c5_i + 1.0;
      c5_b[((int32_T)c5_b_i + 39 * (c5_j + 20)) - 1] = rtMinusInf;
    }
  }

  for (c5_b_j = 0; c5_b_j < 20; c5_b_j++) {
    c5_d_j = (real_T)c5_b_j + 1.0;
    for (c5_c_i = 0; c5_c_i < 19; c5_c_i++) {
      c5_b[(c5_c_i + 39 * ((int32_T)c5_d_j - 1)) + 20] = rtMinusInf;
    }
  }

  for (c5_c_j = 0; c5_c_j < 20; c5_c_j++) {
    c5_d_j = (real_T)c5_c_j + 1.0;
    for (c5_d_i = 0; c5_d_i < 20; c5_d_i++) {
      c5_b_i = (real_T)c5_d_i + 1.0;
      c5_b[((int32_T)c5_b_i + 39 * ((int32_T)c5_d_j - 1)) - 1] = c5_varargin_1
        [((int32_T)c5_b_i + 20 * ((int32_T)c5_d_j - 1)) - 1];
    }
  }
}

static uint8_T c5_emlrt_marshallIn
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_b_y, const char_T *c5_identifier)
{
  uint8_T c5_c_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_c_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_y), &c5_thisId);
  sf_mex_destroy(&c5_b_y);
  return c5_c_y;
}

static uint8_T c5_b_emlrt_marshallIn
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_b_y;
  uint8_T c5_b_u;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 3, 0U, 0, 0U, 0);
  c5_b_y = c5_b_u;
  sf_mex_destroy(&c5_u);
  return c5_b_y;
}

static const mxArray *c5_chart_data_browse_helper
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c5_ssIdNumber)
{
  const mxArray *c5_mxData = NULL;
  real_T c5_d;
  real_T c5_d1;
  uint8_T c5_u;
  real_T c5_d2;
  c5_mxData = NULL;
  switch (c5_ssIdNumber) {
   case 9U:
    c5_d = *chartInstance->c5_x;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    c5_d1 = *chartInstance->c5_I1;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c5_u = *chartInstance->c5_y;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_u, 3, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c5_d2 = *chartInstance->c5_I2;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c5_mxData;
}

static void init_dsm_address_info
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c5_I1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c5_y = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_I2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3134815396U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2732166788U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(112797965U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1455327886U);
}

mxArray *sf_c5_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Morphop_flat_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c5_untitled_restored_from_autosave_jit_fallback_info(void)
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

mxArray *sf_c5_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNTzaNL80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC35"
    "iEY"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sBrMmyhj1rEtsHddSVBLuXH";
}

static void sf_opaque_initialize_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_untitled_restored_from_autosave
      ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c5_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_untitled_restored_from_autosave
    ((SFc5_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_untitled_restored_from_autosave
      ((SFc5_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc5_untitled_restored_from_autosave
      ((SFc5_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV91u00gUttMuAglQkVbaGwRcIMEFF3Cx0t6wlOZHjZTQCpeC4CI7HZ/EsxnPmPlxmwfgFRD",
    "vwAvwClxzww3vwCNwxnHT4NgxbUTFSmvJscfznW/O35wz8fxu38PrKt7vrnneBXxexLvhTa/f8r",
    "E/d0+/r3t38vEjFBI23iWKxNpbegkSw1PQklvDpOiKoSyFMTEEBYIiNpHKVLFpFlvOxLhjBXV8+",
    "nnEaBRE0vJwC2VJuCP4BNkSa3aRp8UUUNMBCE2kpB1FHU5GM42VOWxGQMfaxstM0GACmzi1dN9y",
    "wxIO7SOgXaENQY31iW6BIQaa5qjSTGepDo6BMk44I6LU2ojoABJ0sIFnSYi/O9agUUUYjYgyWxC",
    "RFHSPjTNOKaDIyTROHDBBjFSM8HbMm05wUbddjvr0ZQh8iUNQty0FZJxIJkx1/IMOWtoW5IBDCw",
    "7sqJotgNfWBX+fwSGoSr8NmzIFRUawIyoXzRzSPsqiNcuSRZhhMewT9Zhi/DSEldmLmaMDgnGCP",
    "ZSogkFmZFfvKZaieyvZbNx1mVm3ZWw8Dbaug2Vs7RSWRWHG1qGiSTjXlbA9mfQgBZ6xtoghy2FT",
    "1nKc1izck+hgl97Vu8EKhoHPYU0pQlYarrQAyOrOEyws3yOp1UbGTUzeVq+3OL0I6woDakgolFU",
    "BRZgG9Fnm3mq2kGkXewSiViZTrww8zZA6lKeHVrQOpRqjT5YUkRMTXEQrgbEeYSxxJzzTuGmWwV",
    "ws63CU0AhCV2AYhz5uG8SW+ES70vYY913KzKQFmiqWlEXV9Z/73kn/ufwD/edYrvi8O8fjl/B4c",
    "8/iupca3+PXCus28Ivv+5nc5pzclcI66wU5h9tw9+7a209v3j9MX3788urGbVq3vr+wvp+9O7kP",
    "jdP166v5+PpxYZwlerqQXw67PafXegn/H3P8G/kYW0E/nkT/PlBto7fDMNjf6tkX2xnfxRp9GwV",
    "9j7/fchV6kmT1VivaDfODhBsTO22vjv+vOX0v1PjjUv59en19tJr875vFOK7XyG/g26SQt2df/9",
    "bmavLT9f+p0f9eId73sj48IG53w4D+ObACixmHcKAAK5LCl6GS8YBYIzUeSYr79Kx5f1o575zl/",
    "it6/u+Xn2/fj/SxtTPK+Sv2zfOSW9W+0/bzXw2/rC94BfzGL2zHquesn43/7J3uPHQzH/89+4vS",
    "jBgPS06r+XQPyLBs9hzs+wbMzZ+q",
    ""
  };

  static char newstr [1229] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c5_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2516799504U));
  ssSetChecksum1(S,(1034651091U));
  ssSetChecksum2(S,(3720960630U));
  ssSetChecksum3(S,(1663311451U));
}

static void mdlRTW_c5_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc5_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc5_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc5_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc5_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_untitled_restored_from_autosave;
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
    chartInstance->c5_JITStateAnimation,
    chartInstance->c5_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c5_untitled_restored_from_autosave(chartInstance);
}

void c5_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
