/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c2_untitled_restored_from_autosave.h"
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
static emlrtMCInfo c2_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 4,  /* lineNo */
  "Fusion model1",                     /* fcnName */
  "#untitled_restored_from_autosave:74"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 5,/* lineNo */
  "Fusion model1",                     /* fcnName */
  "#untitled_restored_from_autosave:74"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 28,/* lineNo */
  "Fusion model1",                     /* fcnName */
  "#untitled_restored_from_autosave:74"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 30,/* lineNo */
  "Fusion model1",                     /* fcnName */
  "#untitled_restored_from_autosave:74"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 40,/* lineNo */
  "Fusion model1",                     /* fcnName */
  "#untitled_restored_from_autosave:74"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 23,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 645,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 849,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 931,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 1005,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 1033,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 1045,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 70,/* lineNo */
  "power",                             /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  1,                                   /* iLast */
  9,                                   /* lineNo */
  5,                                   /* colNo */
  "IW",                                /* aName */
  "Fusion model1",                     /* fName */
  "#untitled_restored_from_autosave:74",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 9,  /* lineNo */
  5,                                   /* colNo */
  "Fusion model1",                     /* fName */
  "#untitled_restored_from_autosave:74",/* pName */
  1                                    /* checkKind */
};

static const boolean_T c2_bv[25] = { true, false, false, false, false, false,
  true, false, false, false, false, false, true, false, false, false, false,
  false, true, false, false, false, false, false, true };

static const boolean_T c2_bv1[25] = { false, false, false, false, true, false,
  false, false, true, false, false, false, true, false, false, false, true,
  false, false, false, true, false, false, false, false };

static const char_T c2_cv[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c2_cv1[19] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
  'b', 'e', 'r', ' ', '1', ',', ' ', 'I', 'M', ',' };

/* Function Declarations */
static void initialize_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_st);
static void sf_gateway_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initSimStructsc2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c2_imerode(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A);
static void c2_validateattributes
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c2_sp, real_T c2_a);
static void c2_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_b[100]);
static void c2_b_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1[100], real_T c2_b[361]);
static real_T c2_imdilate(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A);
static void c2_b_validateattributes
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c2_sp, real_T c2_a);
static void c2_c_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_b[100]);
static void c2_d_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1[100], real_T c2_b[361]);
static uint8_T c2_emlrt_marshallIn
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_b_y, const char_T *c2_identifier);
static uint8_T c2_b_emlrt_marshallIn
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_chart_data_browse_helper
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c2_ssIdNumber);
static void init_dsm_address_info
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c2_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(2, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_y, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_st)
{
  const mxArray *c2_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_y = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "y");
  chartInstance->c2_is_active_c2_untitled_restored_from_autosave =
    c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)),
                        "is_active_c2_untitled_restored_from_autosave");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack c2_b_st;
  real_T c2_b_I1;
  real_T c2_b_x;
  real_T c2_b_I2;
  real_T c2_IW;
  real_T c2_d;
  boolean_T c2_covSaturation;
  uint8_T c2_u;
  uint32_T c2_u1;
  boolean_T c2_b_covSaturation;
  uint8_T c2_b_IW;
  uint8_T c2_varargin_1;
  uint8_T c2_c_x;
  uint8_T c2_d_x;
  uint8_T c2_e_x;
  uint8_T c2_f_x;
  uint8_T c2_g_x;
  uint8_T c2_maxval;
  uint8_T c2_h_x;
  uint8_T c2_i_x;
  uint8_T c2_j_x;
  uint8_T c2_k_x;
  real_T c2_b_y;
  real_T c2_II;
  uint8_T c2_uv[1];
  int32_T c2_i;
  int32_T c2_b_i;
  real_T c2_b_varargin_1;
  real_T c2_d1;
  real_T c2_a_tmp;
  int32_T c2_c_i;
  real_T c2_c_varargin_1;
  int32_T c2_j;
  boolean_T c2_tooBig;
  real_T c2_b_j;
  int32_T c2_d_i;
  int32_T c2_e_i;
  real_T c2_f_i;
  boolean_T c2_modeFlag;
  real_T c2_a[25];
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  boolean_T c2_conn[25];
  int32_T c2_i4;
  real_T c2_padSizeT[2];
  int32_T c2_i5;
  int32_T c2_i6;
  real_T c2_outSizeT[2];
  int32_T c2_i7;
  real_T c2_G;
  static real_T c2_kernel[25] = { 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968,
    0.013306209891013651, 0.059634295436180138, 0.098320331348845769,
    0.059634295436180138, 0.013306209891013651, 0.021938231279714643,
    0.098320331348845769, 0.16210282163712664, 0.098320331348845769,
    0.021938231279714643, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.021938231279714643,
    0.013306209891013651, 0.0029690167439504968 };

  real_T c2_connDimsT[2];
  int32_T c2_i8;
  real_T c2_d_varargin_1;
  real_T c2_l_x;
  static real_T c2_nonZeroKernel[25] = { 0.0029690167439504968,
    0.013306209891013651, 0.021938231279714643, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.021938231279714643, 0.098320331348845769, 0.16210282163712664,
    0.098320331348845769, 0.021938231279714643, 0.013306209891013651,
    0.059634295436180138, 0.098320331348845769, 0.059634295436180138,
    0.013306209891013651, 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968 };

  real_T c2_startT[2];
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_b_maxval;
  real_T c2_e_varargin_1;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_c_maxval;
  real_T c2_v_x;
  real_T c2_w_x;
  real_T c2_x_x;
  real_T c2_c_y;
  real_T c2_y_x;
  real_T c2_ab_x;
  real_T c2_bb_x;
  real_T c2_d_y;
  real_T c2_lm;
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_cb_x;
  real_T c2_d_a;
  real_T c2_I22;
  real_T c2_f_varargin_1;
  real_T c2_db_x;
  real_T c2_eb_x;
  real_T c2_fb_x;
  real_T c2_gb_x;
  real_T c2_hb_x;
  real_T c2_s;
  real_T c2_d2;
  boolean_T c2_c_covSaturation;
  uint8_T c2_u2;
  uint8_T c2_I23;
  real_T c2_d3;
  boolean_T c2_d_covSaturation;
  uint8_T c2_u3;
  uint8_T c2_I11;
  real_T c2_d4;
  boolean_T c2_e_covSaturation;
  uint8_T c2_u4;
  uint8_T c2_I12;
  real_T c2_g_varargin_1;
  real_T c2_varargin_2;
  real_T c2_ib_x;
  real_T c2_e_y;
  real_T c2_jb_x;
  real_T c2_f_y;
  real_T c2_kb_x;
  real_T c2_g_y;
  real_T c2_lb_x;
  real_T c2_h_y;
  real_T c2_mb_x;
  real_T c2_i_y;
  real_T c2_nb_x;
  real_T c2_j_y;
  real_T c2_I31;
  real_T c2_d5;
  boolean_T c2_f_covSaturation;
  uint8_T c2_u5;
  uint8_T c2_I41;
  uint8_T c2_e_a;
  uint32_T c2_u6;
  boolean_T c2_g_covSaturation;
  uint8_T c2_k_y;
  uint32_T c2_q0;
  uint32_T c2_qY;
  boolean_T c2_h_covSaturation;
  uint32_T c2_u7;
  uint32_T c2_u8;
  boolean_T c2_i_covSaturation;
  real_T c2_d6;
  boolean_T c2_j_covSaturation;
  uint8_T c2_u9;
  uint8_T c2_I51;
  real_T c2_d7;
  boolean_T c2_k_covSaturation;
  uint8_T c2_u10;
  uint8_T c2_I61;
  real_T c2_d8;
  boolean_T c2_l_covSaturation;
  uint8_T c2_u11;
  uint8_T c2_I71;
  real_T c2_f_a;
  uint8_T c2_b;
  real_T c2_d9;
  boolean_T c2_m_covSaturation;
  uint8_T c2_u12;
  uint8_T c2_l_y;
  real_T c2_g_a;
  uint8_T c2_b_b;
  real_T c2_d10;
  boolean_T c2_n_covSaturation;
  uint8_T c2_u13;
  uint8_T c2_m_y;
  real_T c2_h_a;
  uint8_T c2_c_b;
  real_T c2_d11;
  boolean_T c2_o_covSaturation;
  uint8_T c2_u14;
  uint8_T c2_n_y;
  real_T c2_i_a;
  uint8_T c2_d_b;
  real_T c2_d12;
  boolean_T c2_p_covSaturation;
  uint8_T c2_u15;
  uint8_T c2_o_y;
  real_T c2_d13;
  boolean_T c2_q_covSaturation;
  uint8_T c2_u16;
  uint32_T c2_u17;
  boolean_T c2_r_covSaturation;
  uint32_T c2_u18;
  boolean_T c2_s_covSaturation;
  uint32_T c2_u19;
  boolean_T c2_t_covSaturation;
  uint8_T c2_p_y;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, *chartInstance->c2_I2);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_x);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, *chartInstance->c2_I1);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_b_I1 = *chartInstance->c2_I1;
  c2_b_x = *chartInstance->c2_x;
  c2_b_I2 = *chartInstance->c2_I2;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_st.site = &c2_emlrtRSI;
  c2_IW = c2_imerode(chartInstance, &c2_b_st, c2_b_I2);
  c2_b_st.site = &c2_b_emlrtRSI;
  c2_IW = c2_imdilate(chartInstance, &c2_b_st, c2_IW);
  c2_d = muDoubleScalarRound(c2_b_I2 - c2_IW);
  c2_covSaturation = false;
  if (c2_d < 256.0) {
    if (c2_d >= 0.0) {
      c2_u = (uint8_T)c2_d;
    } else {
      c2_covSaturation = true;
      c2_u = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 111, 12);
    }
  } else if (c2_d >= 256.0) {
    c2_covSaturation = true;
    c2_u = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 111, 12);
  } else {
    c2_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
    c2_covSaturation);
  c2_u1 = (uint32_T)c2_u + 1U;
  c2_b_covSaturation = false;
  if (c2_u1 > 255U) {
    c2_b_covSaturation = true;
    c2_u1 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 111, 14);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 1, 0,
    c2_b_covSaturation);
  c2_b_IW = (uint8_T)c2_u1;
  c2_varargin_1 = c2_b_IW;
  c2_c_x = c2_varargin_1;
  c2_d_x = c2_c_x;
  c2_e_x = c2_d_x;
  c2_f_x = c2_e_x;
  c2_g_x = c2_f_x;
  c2_maxval = c2_g_x;
  c2_h_x = c2_maxval;
  c2_i_x = c2_h_x;
  c2_j_x = c2_i_x;
  c2_k_x = c2_j_x;
  c2_b_y = (real_T)c2_k_x;
  c2_II = c2_b_y;
  c2_uv[0] = c2_b_IW;
  c2_i = 0;
  while (c2_i <= 0) {
    c2_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_b_i = 1;
  while (c2_b_i - 1 <= 0) {
    if ((real_T)c2_b_IW < c2_II) {
      c2_d1 = (real_T)c2_b_i;
      c2_c_i = (int32_T)emlrtIntegerCheckR2012b(c2_d1, &c2_emlrtDCI, &c2_st);
      c2_uv[emlrtDynamicBoundsCheckR2012b(c2_c_i, 1, 1, &c2_emlrtBCI, &c2_st) -
        1] = 0U;
    }

    c2_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_b_IW = c2_uv[0];
  c2_b_varargin_1 = c2_b_I2;
  c2_a_tmp = c2_b_varargin_1;
  c2_c_varargin_1 = c2_a_tmp;
  for (c2_j = 0; c2_j < 5; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 5; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      c2_a[((int32_T)c2_f_i + 5 * ((int32_T)c2_b_j - 1)) - 1] = c2_c_varargin_1;
    }
  }

  c2_tooBig = true;
  for (c2_d_i = 0; c2_d_i < 2; c2_d_i++) {
    c2_tooBig = false;
  }

  if (!c2_tooBig) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 5.0;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 1.0;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 5.0;
    }

    ippfilter_real64(c2_a, &c2_G, c2_outSizeT, 2.0, c2_padSizeT, c2_kernel,
                     c2_connDimsT, false);
  } else {
    for (c2_i1 = 0; c2_i1 < 25; c2_i1++) {
      c2_conn[c2_i1] = true;
    }

    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_padSizeT[c2_i3] = 5.0;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_outSizeT[c2_i5] = 1.0;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_connDimsT[c2_i7] = 5.0;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_startT[c2_i8] = 2.0;
    }

    imfilter_real64(c2_a, &c2_G, 2.0, c2_outSizeT, 2.0, c2_padSizeT,
                    c2_nonZeroKernel, 25.0, c2_conn, 2.0, c2_connDimsT,
                    c2_startT, 2.0, true, false);
  }

  c2_d_varargin_1 = c2_G;
  c2_l_x = c2_d_varargin_1;
  c2_m_x = c2_l_x;
  c2_n_x = c2_m_x;
  c2_o_x = c2_n_x;
  c2_p_x = c2_o_x;
  c2_b_maxval = c2_p_x;
  c2_e_varargin_1 = c2_b_maxval;
  c2_q_x = c2_e_varargin_1;
  c2_r_x = c2_q_x;
  c2_s_x = c2_r_x;
  c2_t_x = c2_s_x;
  c2_u_x = c2_t_x;
  c2_c_maxval = c2_u_x;
  c2_v_x = c2_b_I2;
  c2_w_x = c2_v_x;
  c2_x_x = c2_w_x;
  c2_c_y = c2_x_x;
  c2_y_x = c2_c_y;
  c2_ab_x = c2_y_x;
  c2_bb_x = c2_ab_x;
  c2_d_y = c2_bb_x;
  c2_lm = c2_c_maxval - 0.5 * c2_d_y;
  c2_b_a = c2_G - c2_lm;
  c2_c_a = c2_b_a;
  c2_cb_x = c2_c_a;
  c2_d_a = c2_cb_x;
  c2_I22 = c2_d_a * c2_d_a;
  c2_f_varargin_1 = c2_I22;
  c2_db_x = c2_f_varargin_1;
  c2_eb_x = c2_db_x;
  c2_fb_x = c2_eb_x;
  c2_gb_x = c2_fb_x;
  c2_hb_x = c2_gb_x;
  c2_s = c2_hb_x;
  c2_I22 /= c2_s;
  c2_I22 *= c2_b_I2;
  c2_d2 = muDoubleScalarRound(c2_b_I2 - c2_I22 * 255.0);
  c2_c_covSaturation = false;
  if (c2_d2 < 256.0) {
    if (c2_d2 >= 0.0) {
      c2_u2 = (uint8_T)c2_d2;
    } else {
      c2_c_covSaturation = true;
      c2_u2 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 660, 17);
    }
  } else if (c2_d2 >= 256.0) {
    c2_c_covSaturation = true;
    c2_u2 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 660, 17);
  } else {
    c2_u2 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 2, 0,
    c2_c_covSaturation);
  c2_I23 = c2_u2;
  c2_d3 = muDoubleScalarRound(c2_b_I1 - c2_I22 * 255.0);
  c2_d_covSaturation = false;
  if (c2_d3 < 256.0) {
    if (c2_d3 >= 0.0) {
      c2_u3 = (uint8_T)c2_d3;
    } else {
      c2_d_covSaturation = true;
      c2_u3 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 690, 17);
    }
  } else if (c2_d3 >= 256.0) {
    c2_d_covSaturation = true;
    c2_u3 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 690, 17);
  } else {
    c2_u3 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 3, 0,
    c2_d_covSaturation);
  c2_I11 = c2_u3;
  c2_d4 = muDoubleScalarRound(c2_b_I1 - (real_T)c2_I11);
  c2_e_covSaturation = false;
  if (c2_d4 < 256.0) {
    if (c2_d4 >= 0.0) {
      c2_u4 = (uint8_T)c2_d4;
    } else {
      c2_e_covSaturation = true;
      c2_u4 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 726, 6);
    }
  } else if (c2_d4 >= 256.0) {
    c2_e_covSaturation = true;
    c2_u4 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 726, 6);
  } else {
    c2_u4 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 4, 0,
    c2_e_covSaturation);
  c2_I12 = c2_u4;
  c2_g_varargin_1 = c2_b_I1;
  c2_varargin_2 = c2_b_I2;
  c2_ib_x = c2_g_varargin_1;
  c2_e_y = c2_varargin_2;
  c2_jb_x = c2_ib_x;
  c2_f_y = c2_e_y;
  c2_kb_x = c2_jb_x;
  c2_g_y = c2_f_y;
  c2_lb_x = c2_kb_x;
  c2_h_y = c2_g_y;
  c2_mb_x = c2_lb_x;
  c2_i_y = c2_h_y;
  c2_nb_x = c2_mb_x;
  c2_j_y = c2_i_y;
  c2_I31 = muDoubleScalarMin(c2_nb_x, c2_j_y);
  c2_d5 = muDoubleScalarRound(c2_I22 - c2_I31);
  c2_f_covSaturation = false;
  if (c2_d5 < 256.0) {
    if (c2_d5 >= 0.0) {
      c2_u5 = (uint8_T)c2_d5;
    } else {
      c2_f_covSaturation = true;
      c2_u5 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 762, 14);
    }
  } else if (c2_d5 >= 256.0) {
    c2_f_covSaturation = true;
    c2_u5 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 762, 14);
  } else {
    c2_u5 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 5, 0,
    c2_f_covSaturation);
  c2_I41 = c2_u5;
  c2_e_a = c2_I41;
  c2_u6 = (uint32_T)c2_e_a * 255U;
  c2_g_covSaturation = false;
  if (c2_u6 > 255U) {
    c2_g_covSaturation = true;
    c2_u6 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 797, 7);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 7, 0,
    c2_g_covSaturation);
  c2_k_y = (uint8_T)c2_u6;
  c2_q0 = c2_b_IW;
  c2_qY = c2_q0 - (uint32_T)c2_k_y;
  c2_h_covSaturation = false;
  if (c2_qY > c2_q0) {
    c2_h_covSaturation = true;
    c2_qY = 0U;
    sf_data_saturate_error(chartInstance->S, 1U, 794, 10);
  }

  c2_u7 = c2_qY;
  if (c2_u7 > 255U) {
    c2_h_covSaturation = true;
    c2_u7 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 794, 10);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 6, 0,
    c2_h_covSaturation);
  c2_b_IW = (uint8_T)c2_u7;
  c2_u8 = (uint32_T)c2_I41 + (uint32_T)c2_b_IW;
  c2_i_covSaturation = false;
  if (c2_u8 > 255U) {
    c2_i_covSaturation = true;
    c2_u8 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 823, 6);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 8, 0,
    c2_i_covSaturation);
  c2_I41 = (uint8_T)c2_u8;
  c2_d6 = muDoubleScalarRound((real_T)c2_I23 - c2_I31);
  c2_j_covSaturation = false;
  if (c2_d6 < 256.0) {
    if (c2_d6 >= 0.0) {
      c2_u9 = (uint8_T)c2_d6;
    } else {
      c2_j_covSaturation = true;
      c2_u9 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 843, 7);
    }
  } else if (c2_d6 >= 256.0) {
    c2_j_covSaturation = true;
    c2_u9 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 843, 7);
  } else {
    c2_u9 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 9, 0,
    c2_j_covSaturation);
  c2_I51 = c2_u9;
  c2_d7 = muDoubleScalarRound((real_T)c2_I11 - c2_I31);
  c2_k_covSaturation = false;
  if (c2_d7 < 256.0) {
    if (c2_d7 >= 0.0) {
      c2_u10 = (uint8_T)c2_d7;
    } else {
      c2_k_covSaturation = true;
      c2_u10 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 871, 7);
    }
  } else if (c2_d7 >= 256.0) {
    c2_k_covSaturation = true;
    c2_u10 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 871, 7);
  } else {
    c2_u10 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 10, 0,
    c2_k_covSaturation);
  c2_I61 = c2_u10;
  c2_d8 = muDoubleScalarRound((real_T)c2_I12 - c2_I31);
  c2_l_covSaturation = false;
  if (c2_d8 < 256.0) {
    if (c2_d8 >= 0.0) {
      c2_u11 = (uint8_T)c2_d8;
    } else {
      c2_l_covSaturation = true;
      c2_u11 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 898, 7);
    }
  } else if (c2_d8 >= 256.0) {
    c2_l_covSaturation = true;
    c2_u11 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 898, 7);
  } else {
    c2_u11 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 11, 0,
    c2_l_covSaturation);
  c2_I71 = c2_u11;
  c2_f_a = 0.5 + c2_b_x;
  c2_b = c2_I41;
  c2_d9 = muDoubleScalarRound(c2_f_a * (real_T)c2_b);
  c2_m_covSaturation = false;
  if (c2_d9 < 256.0) {
    if (c2_d9 >= 0.0) {
      c2_u12 = (uint8_T)c2_d9;
    } else {
      c2_m_covSaturation = true;
      c2_u12 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 923, 13);
    }
  } else if (c2_d9 >= 256.0) {
    c2_m_covSaturation = true;
    c2_u12 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 923, 13);
  } else {
    c2_u12 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 16, 0,
    c2_m_covSaturation);
  c2_l_y = c2_u12;
  c2_g_a = 0.5 - c2_b_x;
  c2_b_b = c2_I51;
  c2_d10 = muDoubleScalarRound(c2_g_a * (real_T)c2_b_b);
  c2_n_covSaturation = false;
  if (c2_d10 < 256.0) {
    if (c2_d10 >= 0.0) {
      c2_u13 = (uint8_T)c2_d10;
    } else {
      c2_n_covSaturation = true;
      c2_u13 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 937, 11);
    }
  } else if (c2_d10 >= 256.0) {
    c2_n_covSaturation = true;
    c2_u13 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 937, 11);
  } else {
    c2_u13 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 17, 0,
    c2_n_covSaturation);
  c2_m_y = c2_u13;
  c2_h_a = 0.5 + c2_b_x;
  c2_c_b = c2_I61;
  c2_d11 = muDoubleScalarRound(c2_h_a * (real_T)c2_c_b);
  c2_o_covSaturation = false;
  if (c2_d11 < 256.0) {
    if (c2_d11 >= 0.0) {
      c2_u14 = (uint8_T)c2_d11;
    } else {
      c2_o_covSaturation = true;
      c2_u14 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 949, 11);
    }
  } else if (c2_d11 >= 256.0) {
    c2_o_covSaturation = true;
    c2_u14 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 949, 11);
  } else {
    c2_u14 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 18, 0,
    c2_o_covSaturation);
  c2_n_y = c2_u14;
  c2_i_a = 0.5 - c2_b_x;
  c2_d_b = c2_I71;
  c2_d12 = muDoubleScalarRound(c2_i_a * (real_T)c2_d_b);
  c2_p_covSaturation = false;
  if (c2_d12 < 256.0) {
    if (c2_d12 >= 0.0) {
      c2_u15 = (uint8_T)c2_d12;
    } else {
      c2_p_covSaturation = true;
      c2_u15 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 961, 11);
    }
  } else if (c2_d12 >= 256.0) {
    c2_p_covSaturation = true;
    c2_u15 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 961, 11);
  } else {
    c2_u15 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 19, 0,
    c2_p_covSaturation);
  c2_o_y = c2_u15;
  c2_d13 = muDoubleScalarRound(c2_I31 + (real_T)c2_l_y);
  c2_q_covSaturation = false;
  if (c2_d13 < 256.0) {
    if (c2_d13 >= 0.0) {
      c2_u16 = (uint8_T)c2_d13;
    } else {
      c2_q_covSaturation = true;
      c2_u16 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 919, 17);
    }
  } else if (c2_d13 >= 256.0) {
    c2_q_covSaturation = true;
    c2_u16 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 919, 17);
  } else {
    c2_u16 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 12, 0,
    c2_q_covSaturation);
  c2_u17 = (uint32_T)c2_u16 + (uint32_T)c2_m_y;
  c2_r_covSaturation = false;
  if (c2_u17 > 255U) {
    c2_r_covSaturation = true;
    c2_u17 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 919, 29);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 13, 0,
    c2_r_covSaturation);
  c2_u18 = (uint32_T)(uint8_T)c2_u17 + (uint32_T)c2_n_y;
  c2_s_covSaturation = false;
  if (c2_u18 > 255U) {
    c2_s_covSaturation = true;
    c2_u18 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 919, 41);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 14, 0,
    c2_s_covSaturation);
  c2_u19 = (uint32_T)(uint8_T)c2_u18 + (uint32_T)c2_o_y;
  c2_t_covSaturation = false;
  if (c2_u19 > 255U) {
    c2_t_covSaturation = true;
    c2_u19 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 919, 53);
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 15, 0,
    c2_t_covSaturation);
  c2_p_y = (uint8_T)c2_u19;
  *chartInstance->c2_y = c2_p_y;
  c2_do_animation_call_c2_untitled_restored_from_autosave(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                    *chartInstance->c2_y);
}

static void mdl_start_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  20U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 996);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 111, -1,
    123);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 111, -1,
    125);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 660, -1,
    677);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 690, -1,
    707);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 726, -1,
    732);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 762, -1,
    776);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 794, -1,
    804);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 797, -1,
    804);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 823, -1,
    829);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 843, -1,
    850);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 871,
    -1, 878);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 898,
    -1, 905);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 12U, 919,
    -1, 936);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 13U, 919,
    -1, 948);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 14U, 919,
    -1, 960);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 15U, 919,
    -1, 972);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 16U, 923,
    -1, 936);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 17U, 937,
    -1, 948);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 18U, 949,
    -1, 960);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 19U, 961,
    -1, 972);
}

static void mdl_cleanup_runtime_resources_c2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void initSimStructsc2_untitled_restored_from_autosave
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c2_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_imerode(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  real_T c2_varargin_1;
  real_T c2_b_A;
  real_T c2_Apadpre[100];
  real_T c2_Apad[361];
  int32_T c2_i;
  int32_T c2_i1;
  boolean_T c2_nhood[7];
  int32_T c2_i2;
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_b_B[361];
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  boolean_T c2_b_nhood[5];
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_f_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_varargin_1 = c2_A;
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_b_A = c2_varargin_1;
  c2_c_st.site = &c2_h_emlrtRSI;
  c2_validateattributes(chartInstance, &c2_c_st, c2_b_A);
  c2_padarray(chartInstance, c2_b_A, c2_Apadpre);
  c2_b_padarray(chartInstance, c2_Apadpre, c2_Apad);
  for (c2_i = 0; c2_i < 7; c2_i++) {
    c2_nhood[c2_i] = true;
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_asizeT[c2_i1] = 19.0;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 7.0 + -6.0 * (real_T)c2_i2;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_nhood, c2_nsizeT, 2.0,
                        c2_b_B);
  for (c2_i3 = 0; c2_i3 < 361; c2_i3++) {
    c2_Apad[c2_i3] = c2_b_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 19.0;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 5.0;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_bv, c2_nsizeT, 2.0, c2_b_B);
  for (c2_i6 = 0; c2_i6 < 361; c2_i6++) {
    c2_Apad[c2_i6] = c2_b_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 7; c2_i7++) {
    c2_nhood[c2_i7] = true;
  }

  for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
    c2_asizeT[c2_i8] = 19.0;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 6.0 * (real_T)c2_i9;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_nhood, c2_nsizeT, 2.0,
                        c2_b_B);
  for (c2_i10 = 0; c2_i10 < 361; c2_i10++) {
    c2_Apad[c2_i10] = c2_b_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 19.0;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 5.0;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_bv1, c2_nsizeT, 2.0, c2_b_B);
  for (c2_i13 = 0; c2_i13 < 361; c2_i13++) {
    c2_Apad[c2_i13] = c2_b_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 5; c2_i14++) {
    c2_b_nhood[c2_i14] = true;
  }

  for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
    c2_asizeT[c2_i15] = 19.0;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 4.0 * (real_T)c2_i16;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_b_nhood, c2_nsizeT, 2.0,
                        c2_b_B);
  for (c2_i17 = 0; c2_i17 < 361; c2_i17++) {
    c2_Apad[c2_i17] = c2_b_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 5; c2_i18++) {
    c2_b_nhood[c2_i18] = true;
  }

  for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
    c2_asizeT[c2_i19] = 19.0;
  }

  for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
    c2_nsizeT[c2_i20] = 5.0 + -4.0 * (real_T)c2_i20;
  }

  erode_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_b_nhood, c2_nsizeT, 2.0,
                        c2_b_B);
  return c2_b_B[180];
}

static void c2_validateattributes
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c2_sp, real_T c2_a)
{
  emlrtStack c2_st;
  real_T c2_b_a;
  real_T c2_c_a;
  boolean_T c2_p;
  real_T c2_b_x;
  real_T c2_c_x;
  boolean_T c2_b;
  boolean_T c2_b_p;
  boolean_T c2_b_b;
  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'e',
    'r', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'N', 'a', 'N' };

  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_j_emlrtRSI;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_p = true;
  c2_b_x = c2_c_a;
  c2_c_x = c2_b_x;
  c2_b = muDoubleScalarIsNaN(c2_c_x);
  c2_b_p = !c2_b;
  if (!c2_b_p) {
    c2_p = false;
  }

  if (c2_p) {
    c2_b_b = true;
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c2_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }
}

static void c2_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_b[100])
{
  real_T c2_a;
  int32_T c2_j;
  int32_T c2_i;
  real_T c2_b_j;
  int32_T c2_b_i;
  real_T c2_c_i;
  (void)chartInstance;
  c2_a = c2_varargin_1;
  for (c2_j = 0; c2_j < 9; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_b_i = 0; c2_b_i < 10; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_b[((int32_T)c2_c_i + 10 * ((int32_T)c2_b_j - 1)) - 1] = rtInf;
    }
  }

  for (c2_i = 0; c2_i < 9; c2_i++) {
    c2_c_i = (real_T)c2_i + 1.0;
    c2_b[(int32_T)c2_c_i + 89] = rtInf;
  }

  c2_b[99] = c2_a;
}

static void c2_b_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1[100], real_T c2_b[361])
{
  int32_T c2_j;
  int32_T c2_b_j;
  int32_T c2_i;
  int32_T c2_c_j;
  real_T c2_d_j;
  real_T c2_b_i;
  int32_T c2_c_i;
  int32_T c2_d_i;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 9; c2_j++) {
    for (c2_i = 0; c2_i < 19; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      c2_b[((int32_T)c2_b_i + 19 * (c2_j + 10)) - 1] = rtInf;
    }
  }

  for (c2_b_j = 0; c2_b_j < 10; c2_b_j++) {
    c2_d_j = (real_T)c2_b_j + 1.0;
    for (c2_c_i = 0; c2_c_i < 9; c2_c_i++) {
      c2_b[(c2_c_i + 19 * ((int32_T)c2_d_j - 1)) + 10] = rtInf;
    }
  }

  for (c2_c_j = 0; c2_c_j < 10; c2_c_j++) {
    c2_d_j = (real_T)c2_c_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 10; c2_d_i++) {
      c2_b_i = (real_T)c2_d_i + 1.0;
      c2_b[((int32_T)c2_b_i + 19 * ((int32_T)c2_d_j - 1)) - 1] = c2_varargin_1
        [((int32_T)c2_b_i + 10 * ((int32_T)c2_d_j - 1)) - 1];
    }
  }
}

static real_T c2_imdilate(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_A)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  real_T c2_varargin_1;
  real_T c2_b_A;
  real_T c2_Apadpre[100];
  real_T c2_Apad[361];
  int32_T c2_i;
  int32_T c2_i1;
  boolean_T c2_nhood[7];
  int32_T c2_i2;
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_b_B[361];
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  boolean_T c2_b_nhood[5];
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_l_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_varargin_1 = c2_A;
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_b_A = c2_varargin_1;
  c2_c_st.site = &c2_h_emlrtRSI;
  c2_b_validateattributes(chartInstance, &c2_c_st, c2_b_A);
  c2_c_padarray(chartInstance, c2_b_A, c2_Apadpre);
  c2_d_padarray(chartInstance, c2_Apadpre, c2_Apad);
  for (c2_i = 0; c2_i < 7; c2_i++) {
    c2_nhood[c2_i] = true;
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_asizeT[c2_i1] = 19.0;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 7.0 + -6.0 * (real_T)c2_i2;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_nhood, c2_nsizeT, 2.0,
    c2_b_B);
  for (c2_i3 = 0; c2_i3 < 361; c2_i3++) {
    c2_Apad[c2_i3] = c2_b_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 19.0;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 5.0;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_bv, c2_nsizeT, 2.0, c2_b_B);
  for (c2_i6 = 0; c2_i6 < 361; c2_i6++) {
    c2_Apad[c2_i6] = c2_b_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 7; c2_i7++) {
    c2_nhood[c2_i7] = true;
  }

  for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
    c2_asizeT[c2_i8] = 19.0;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 6.0 * (real_T)c2_i9;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_nhood, c2_nsizeT, 2.0,
    c2_b_B);
  for (c2_i10 = 0; c2_i10 < 361; c2_i10++) {
    c2_Apad[c2_i10] = c2_b_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 19.0;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 5.0;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_bv1, c2_nsizeT, 2.0, c2_b_B);
  for (c2_i13 = 0; c2_i13 < 361; c2_i13++) {
    c2_Apad[c2_i13] = c2_b_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 5; c2_i14++) {
    c2_b_nhood[c2_i14] = true;
  }

  for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
    c2_asizeT[c2_i15] = 19.0;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 4.0 * (real_T)c2_i16;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_b_nhood, c2_nsizeT, 2.0,
    c2_b_B);
  for (c2_i17 = 0; c2_i17 < 361; c2_i17++) {
    c2_Apad[c2_i17] = c2_b_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 5; c2_i18++) {
    c2_b_nhood[c2_i18] = true;
  }

  for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
    c2_asizeT[c2_i19] = 19.0;
  }

  for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
    c2_nsizeT[c2_i20] = 5.0 + -4.0 * (real_T)c2_i20;
  }

  dilate_flat_real64_tbb(c2_Apad, c2_asizeT, 2.0, c2_b_nhood, c2_nsizeT, 2.0,
    c2_b_B);
  return c2_b_B[180];
}

static void c2_b_validateattributes
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c2_sp, real_T c2_a)
{
  emlrtStack c2_st;
  real_T c2_b_a;
  real_T c2_c_a;
  boolean_T c2_p;
  real_T c2_b_x;
  real_T c2_c_x;
  boolean_T c2_b;
  boolean_T c2_b_p;
  boolean_T c2_b_b;
  const mxArray *c2_b_y = NULL;
  static char_T c2_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'd',
    'i', 'l', 'a', 't', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
    'o', 'n', 'N', 'a', 'N' };

  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_j_emlrtRSI;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_p = true;
  c2_b_x = c2_c_a;
  c2_c_x = c2_b_x;
  c2_b = muDoubleScalarIsNaN(c2_c_x);
  c2_b_p = !c2_b;
  if (!c2_b_p) {
    c2_p = false;
  }

  if (c2_p) {
    c2_b_b = true;
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c2_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }
}

static void c2_c_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1, real_T c2_b[100])
{
  real_T c2_a;
  int32_T c2_j;
  int32_T c2_i;
  real_T c2_b_j;
  int32_T c2_b_i;
  real_T c2_c_i;
  (void)chartInstance;
  c2_a = c2_varargin_1;
  for (c2_j = 0; c2_j < 9; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_b_i = 0; c2_b_i < 10; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_b[((int32_T)c2_c_i + 10 * ((int32_T)c2_b_j - 1)) - 1] = rtMinusInf;
    }
  }

  for (c2_i = 0; c2_i < 9; c2_i++) {
    c2_c_i = (real_T)c2_i + 1.0;
    c2_b[(int32_T)c2_c_i + 89] = rtMinusInf;
  }

  c2_b[99] = c2_a;
}

static void c2_d_padarray(SFc2_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c2_varargin_1[100], real_T c2_b[361])
{
  int32_T c2_j;
  int32_T c2_b_j;
  int32_T c2_i;
  int32_T c2_c_j;
  real_T c2_d_j;
  real_T c2_b_i;
  int32_T c2_c_i;
  int32_T c2_d_i;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 9; c2_j++) {
    for (c2_i = 0; c2_i < 19; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      c2_b[((int32_T)c2_b_i + 19 * (c2_j + 10)) - 1] = rtMinusInf;
    }
  }

  for (c2_b_j = 0; c2_b_j < 10; c2_b_j++) {
    c2_d_j = (real_T)c2_b_j + 1.0;
    for (c2_c_i = 0; c2_c_i < 9; c2_c_i++) {
      c2_b[(c2_c_i + 19 * ((int32_T)c2_d_j - 1)) + 10] = rtMinusInf;
    }
  }

  for (c2_c_j = 0; c2_c_j < 10; c2_c_j++) {
    c2_d_j = (real_T)c2_c_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 10; c2_d_i++) {
      c2_b_i = (real_T)c2_d_i + 1.0;
      c2_b[((int32_T)c2_b_i + 19 * ((int32_T)c2_d_j - 1)) - 1] = c2_varargin_1
        [((int32_T)c2_b_i + 10 * ((int32_T)c2_d_j - 1)) - 1];
    }
  }
}

static uint8_T c2_emlrt_marshallIn
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_b_y, const char_T *c2_identifier)
{
  uint8_T c2_c_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_c_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_y), &c2_thisId);
  sf_mex_destroy(&c2_b_y);
  return c2_c_y;
}

static uint8_T c2_b_emlrt_marshallIn
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_y;
  uint8_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static const mxArray *c2_chart_data_browse_helper
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c2_ssIdNumber)
{
  const mxArray *c2_mxData = NULL;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  uint8_T c2_u;
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 4U:
    c2_d = *chartInstance->c2_I1;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c2_d1 = *chartInstance->c2_x;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c2_d2 = *chartInstance->c2_I2;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c2_u = *chartInstance->c2_y;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_u, 3, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c2_mxData;
}

static void init_dsm_address_info
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_I1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c2_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c2_I2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
  chartInstance->c2_y = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(717113471U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3261139777U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1645882425U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(546760231U);
}

mxArray *sf_c2_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,3);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Morphop_flat_tbb_Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_untitled_restored_from_autosave_jit_fallback_info(void)
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

mxArray *sf_c2_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNTzaKL80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC3X"
    "yEV"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "smNTvW8R9C1cNCO8SyFRlyB";
}

static void sf_opaque_initialize_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_untitled_restored_from_autosave
      ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_untitled_restored_from_autosave
    ((SFc2_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_untitled_restored_from_autosave
      ((SFc2_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc2_untitled_restored_from_autosave
      ((SFc2_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV01u20YUJhU3SIAkcIECQYECyS5F4EXalbtpHFNSK0D+gakkyEodD5/EgYYz7PzQ1i6brrN",
    "NDpBNTpAL5A7pLXqEvqFoWaFIMbYQIwVKgCKH871v3t+8N/L83p6H1x28X3/redfxeQPvlje7vi",
    "nG/sI9+77hPSjGj1FI2OSQKJJob+UlSAJHoCW3hknREyNZCWNiBAoERWwqlalj0yyxnIlJ1wrq+",
    "PTzmNE4jKXl0S7KkuhA8CmypdYcIk+bKaCmCxCZWEk7jrucjOcaK3MSxEAn2iarTNBgQps6tfSe",
    "5YalHDqnQHtCG4Ia63PdQkMMBOa01kxnqQ7PgDJJOSOi0tqY6BBSdLCBp2mEvwfWoFFlGI2JMrs",
    "Qkwx0n01yTimgzMk0ThwzQYxUjPBOwgMnuKzbIUd99mQEfIVDULddBWSSSiZMffzDLlraEeSYQx",
    "uO7bieLYQ/rQv+MwYnoGr9NgpkBoqM4UDULpo7pHOaR2ueJcswwxJ4RtQTivHTENVmL2aODgnGC",
    "QYoUQeD3MieHiiWoXtr2WzSc5nZtGVsMgu2boLlbJ0MVkVhztalIiCc61rYQKZ9yIDnrG1iyGrY",
    "jLUapzWLBhId7NK7fjdYwTDwBSyQImKV4cpKgLzu7GNh+RRJrTYyCTB52/3+8vQyrCcMqBGhUFU",
    "FFGEa0Ge5e+vZIqZd7BGIWplcvSrwLEOaUJ4eWdE+kWqCPllRRM5NcBGtBSZ6jLHEnfBU46ZZBX",
    "OxbMJRQmOIXIFhHPZw2yC2wifalbYnuO8yZqZt0FSxtCqqrv888s77z63P6D9ncuXnjws8fgWPt",
    "/Asr3uz9Sn+WmndFn7xfT+X21mQu11aZ6Mk53CbeP/98rcPbx++uPVu683371791W1a319a38/f",
    "ndz71sX69Z1i/MNZYZwneraUXw77+4JeGxX8dxf4N4uxTvYH2fPto1+Cn+h+cLAdTrtHfLqb891",
    "o0LdV0vfs+31XoadpXm+1or2oOEi4MbGz9ur4txf0vd7gj5vF99n1z+P15L/bKcdxo0F+E9+mpb",
    "y9/Pr3d9aTn63/R4P+W6V4b+V9eEjc7oYh/XloBRYzDtFQAVYkhS8jJZMhsUZqPJKU9+ll8/6ic",
    "t4Vy/1X9PzfL1/evs/pY9cuKeev2TevSm5d+y7az782/Kq+4JXwm1+xHeues740/qN3sfPQvWL8",
    "6/wvShAzHlWcVovpPpBR1ewV2PcvC8ifUg==",
    ""
  };

  static char newstr [1237] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c2_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3309797593U));
  ssSetChecksum1(S,(207170213U));
  ssSetChecksum2(S,(429468842U));
  ssSetChecksum3(S,(1183158186U));
}

static void mdlRTW_c2_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc2_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc2_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc2_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc2_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_untitled_restored_from_autosave;
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
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_untitled_restored_from_autosave(chartInstance);
}

void c2_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
