/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c7_untitled_restored_from_autosave.h"
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
static emlrtMCInfo c7_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c7_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c7_c_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c7_d_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtRSInfo c7_emlrtRSI = { 21, /* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_b_emlrtRSI = { 22,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_c_emlrtRSI = { 33,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_d_emlrtRSI = { 36,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_e_emlrtRSI = { 38,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_f_emlrtRSI = { 39,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_g_emlrtRSI = { 51,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_h_emlrtRSI = { 52,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_i_emlrtRSI = { 116,/* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled_restored_from_autosave:66"/* pathName */
};

static emlrtRSInfo c7_j_emlrtRSI = { 58,/* lineNo */
  "conv2",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo c7_k_emlrtRSI = { 79,/* lineNo */
  "conv2",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo c7_l_emlrtRSI = { 105,/* lineNo */
  "conv2",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\conv2.m"/* pathName */
};

static emlrtRSInfo c7_m_emlrtRSI = { 29,/* lineNo */
  "conv2AXPY",                         /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pathName */
};

static emlrtRSInfo c7_n_emlrtRSI = { 416,/* lineNo */
  "conv2AXPY",                         /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pathName */
};

static emlrtRSInfo c7_o_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c7_p_emlrtRSI = { 70,/* lineNo */
  "power",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c7_q_emlrtRSI = { 178,/* lineNo */
  "edge",                              /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c7_r_emlrtRSI = { 219,/* lineNo */
  "edge",                              /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c7_s_emlrtRSI = { 229,/* lineNo */
  "edge",                              /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c7_t_emlrtRSI = { 980,/* lineNo */
  "edge",                              /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c7_u_emlrtRSI = { 947,/* lineNo */
  "edge",                              /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c7_v_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c7_w_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_x_emlrtRSI = { 426,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_y_emlrtRSI = { 427,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_ab_emlrtRSI = { 435,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_bb_emlrtRSI = { 645,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_cb_emlrtRSI = { 683,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_db_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c7_eb_emlrtRSI = { 37,/* lineNo */
  "bwpack",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\bwpack.m"/* pathName */
};

static emlrtRSInfo c7_fb_emlrtRSI = { 880,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c7_gb_emlrtRSI = { 37,/* lineNo */
  "bwunpack",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\bwunpack.m"/* pathName */
};

static emlrtBCInfo c7_emlrtBCI = { 1,  /* iFirst */
  19,                                  /* iLast */
  435,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_emlrtDCI = { 435,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_b_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  435,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_b_emlrtDCI = { 435,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_c_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  429,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_c_emlrtDCI = { 429,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_d_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  429,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_d_emlrtDCI = { 429,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_e_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  393,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_e_emlrtDCI = { 393,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_f_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  387,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_f_emlrtDCI = { 387,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_g_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  387,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_g_emlrtDCI = { 387,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_h_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  450,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c7_h_emlrtDCI = { 450,/* lineNo */
  26,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_i_emlrtBCI = { 1,/* iFirst */
  19,                                  /* iLast */
  450,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_i_emlrtDCI = { 450,/* lineNo */
  17,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c7_update_jit_animation_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c7_do_animation_call_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_st);
static void sf_gateway_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c7_chartstep_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c7_sp);
static void initSimStructsc7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c7_conv2(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_a);
static void c7_check_forloop_overflow_error
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c7_sp, boolean_T c7_overflow);
static real_T c7_b_conv2(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_a, real_T c7_b[9]);
static real_T c7_sqrt(SFc7_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c7_sp, real_T c7_b_x);
static boolean_T c7_edge(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_varargin_1);
static boolean_T c7_imdilate(SFc7_untitled_restored_from_autosaveInstanceStruct *
  chartInstance, const emlrtStack *c7_sp, boolean_T c7_A);
static real_T c7_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_b_y, const char_T *c7_identifier);
static real_T c7_b_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static uint8_T c7_c_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_b_is_active_c7_untitled_restored_from_autosave, const char_T
   *c7_identifier);
static uint8_T c7_d_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static const mxArray *c7_chart_data_browse_helper
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c7_ssIdNumber);
static void c7_b_sqrt(SFc7_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c7_sp, real_T *c7_b_x);
static void init_dsm_address_info
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c7_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c7_st.tls = chartInstance->c7_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c7_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c7_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c7_is_active_c7_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c7_update_jit_animation_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c7_do_animation_call_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c7_st;
  const mxArray *c7_b_y = NULL;
  const mxArray *c7_c_y = NULL;
  const mxArray *c7_d_y = NULL;
  c7_st = NULL;
  c7_st = NULL;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_createcellmatrix(2, 1), false);
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", chartInstance->c7_y, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c7_b_y, 0, c7_c_y);
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y",
    &chartInstance->c7_is_active_c7_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c7_b_y, 1, c7_d_y);
  sf_mex_assign(&c7_st, c7_b_y, false);
  return c7_st;
}

static void set_sim_state_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_st)
{
  const mxArray *c7_u;
  chartInstance->c7_doneDoubleBufferReInit = true;
  c7_u = sf_mex_dup(c7_st);
  *chartInstance->c7_y = c7_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c7_u, 0)), "y");
  chartInstance->c7_is_active_c7_untitled_restored_from_autosave =
    c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
    "is_active_c7_untitled_restored_from_autosave");
  sf_mex_destroy(&c7_u);
  sf_mex_destroy(&c7_st);
}

static void sf_gateway_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c7_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c7_st.tls = chartInstance->c7_fEmlrtCtx;
  chartInstance->c7_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 2U, *chartInstance->c7_I2);
  covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 1U, *chartInstance->c7_I1);
  covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 0U, *chartInstance->c7_x);
  chartInstance->c7_sfEvent = CALL_EVENT;
  c7_chartstep_c7_untitled_restored_from_autosave(chartInstance, &c7_st);
  c7_do_animation_call_c7_untitled_restored_from_autosave(chartInstance);
  covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 3U, *chartInstance->c7_y);
}

static void mdl_start_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c7_decisionTxtStartIdx = 0U;
  static const uint32_T c7_decisionTxtEndIdx = 0U;
  static const int32_T c7_condTxtStartIdx[2] = { 2650, 2671 };

  static const int32_T c7_condTxtEndIdx[2] = { 2667, 2688 };

  static const int32_T c7_postfixPredicateTree[3] = { 0, 1, -2 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c7_chart_data_browse_helper);
  chartInstance->c7_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c7_RuntimeVar,
    &chartInstance->c7_IsDebuggerActive,
    &chartInstance->c7_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c7_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c7_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c7_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c7_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c7_decisionTxtStartIdx, &c7_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c7_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c7_covrtInstance, "", 4U, 0U, 1U, 0U, 12U, 0U,
                  0U, 0U, 14U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 3034);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U, 56, 73, -1, 99);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 1U, 100, 117, -1,
                    143);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 2U, 144, 161, -1,
                    187);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 3U, 548, 566, 593,
                    656);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 4U, 930, 948, 975,
                    1038);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 5U, 1203, 1221,
                    1248, 1311);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 6U, 1528, 1551,
                    1589, 1743);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 7U, 1606, 1629,
                    1665, 1731);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 8U, 2155, 2178,
                    2216, 2370);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 9U, 2233, 2256,
                    2292, 2358);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 10U, 2645, 2689,
                    2723, 2764);
  covrtEmlIfInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 11U, 2811, 2839,
                    2891, 2932);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U, 516, 526, 668);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 1U, 530, 540, 664);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 2U, 898, 908, 1050);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 3U, 912, 922, 1046);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 4U, 1171, 1181,
                     1323);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 5U, 1185, 1195,
                     1319);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 6U, 1487, 1497,
                     1984);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 7U, 1501, 1511,
                     1980);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 8U, 2114, 2124,
                     2611);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 9U, 2128, 2138,
                     2607);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 10U, 2613, 2623,
                     2777);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 11U, 2627, 2637,
                     2773);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 12U, 2779, 2789,
                     2945);
  covrtEmlForInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 13U, 2793, 2803,
                     2941);
  covrtEmlMCDCInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U, 2648, 2689,
                      2U, 0U, c7_condTxtStartIdx, c7_condTxtEndIdx, 3U,
                      c7_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U, 59, 73,
    -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 1U, 103,
    117, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 2U, 147,
    161, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 3U, 553,
    566, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 4U, 935,
    948, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 5U, 1208,
    1221, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 6U, 1533,
    1550, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 7U, 1611,
    1629, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 8U, 2160,
    2177, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 9U, 2238,
    2256, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 10U, 2650,
    2667, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 11U, 2671,
    2688, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 12U, 2814,
    2839, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c7_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c7_covrtInstance);
}

static void c7_chartstep_c7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c7_sp)
{
  emlrtStack c7_st;
  real_T c7_b_x;
  real_T c7_b_I1;
  real_T c7_b_I2;
  real_T c7_pA1;
  real_T c7_pB1;
  real_T c7_pF1;
  real_T c7_img;
  real_T c7_pA;
  real_T c7_b_img;
  real_T c7_pB;
  real_T c7_c_img;
  real_T c7_pF;
  real_T c7_SAx;
  int32_T c7_i;
  real_T c7_SAy;
  real_T c7_dv[9];
  static real_T c7_dv1[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0, -1.0 };

  real_T c7_a;
  real_T c7_b_a;
  real_T c7_c_x;
  real_T c7_c_a;
  real_T c7_b_y;
  real_T c7_d_a;
  real_T c7_e_a;
  real_T c7_d_x;
  real_T c7_f_a;
  real_T c7_c_y;
  real_T c7_gA;
  real_T c7_e_x;
  real_T c7_aA;
  boolean_T c7_BW1;
  boolean_T c7_A2;
  real_T c7_SBx;
  int32_T c7_i1;
  real_T c7_SBy;
  real_T c7_dv2[9];
  real_T c7_g_a;
  real_T c7_h_a;
  real_T c7_f_x;
  real_T c7_i_a;
  real_T c7_d_y;
  real_T c7_j_a;
  real_T c7_k_a;
  real_T c7_g_x;
  real_T c7_l_a;
  real_T c7_e_y;
  real_T c7_gB;
  real_T c7_h_x;
  real_T c7_aB;
  real_T c7_SFx;
  int32_T c7_i2;
  real_T c7_SFy;
  real_T c7_dv3[9];
  real_T c7_m_a;
  real_T c7_n_a;
  real_T c7_i_x;
  real_T c7_o_a;
  real_T c7_f_y;
  real_T c7_p_a;
  real_T c7_q_a;
  real_T c7_j_x;
  real_T c7_r_a;
  real_T c7_g_y;
  real_T c7_gF;
  real_T c7_k_x;
  real_T c7_aF;
  real_T c7_GAF;
  real_T c7_l_x;
  real_T c7_m_x;
  real_T c7_n_x;
  real_T c7_h_y;
  real_T c7_AAF;
  real_T c7_o_x;
  real_T c7_p_x;
  real_T c7_QgAF;
  real_T c7_q_x;
  real_T c7_r_x;
  real_T c7_QaAF;
  real_T c7_QAF;
  real_T c7_GBF;
  real_T c7_s_x;
  real_T c7_t_x;
  real_T c7_u_x;
  real_T c7_i_y;
  real_T c7_ABF;
  real_T c7_v_x;
  real_T c7_w_x;
  real_T c7_QgBF;
  real_T c7_x_x;
  real_T c7_y_x;
  real_T c7_QaBF;
  real_T c7_QBF;
  real_T c7_ab_x;
  real_T c7_bb_x;
  boolean_T c7_b;
  const mxArray *c7_j_y = NULL;
  static char_T c7_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  real_T c7_cb_x;
  const mxArray *c7_k_y = NULL;
  real_T c7_db_x;
  boolean_T c7_b_b;
  const mxArray *c7_l_y = NULL;
  boolean_T c7_c_b;
  static char_T c7_cv1[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  boolean_T c7_b1;
  const mxArray *c7_m_y = NULL;
  real_T c7_eb_x;
  real_T c7_fb_x;
  real_T c7_gb_x;
  real_T c7_hb_x;
  real_T c7_n_y;
  real_T c7_ib_x;
  real_T c7_jb_x;
  real_T c7_kb_x;
  real_T c7_lb_x;
  real_T c7_deno;
  real_T c7_mb_x;
  real_T c7_nb_x;
  real_T c7_ob_x;
  real_T c7_pb_x;
  real_T c7_o_y;
  real_T c7_qb_x;
  real_T c7_rb_x;
  real_T c7_sb_x;
  real_T c7_tb_x;
  real_T c7_nume;
  real_T c7_p_y;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_b_x = *chartInstance->c7_x;
  c7_b_I1 = *chartInstance->c7_I1;
  c7_b_I2 = *chartInstance->c7_I2;
  covrtEmlFcnEval(chartInstance->c7_covrtInstance, 4U, 0, 0);
  c7_pA1 = c7_b_I1;
  c7_pB1 = c7_b_I2;
  c7_pF1 = c7_b_x;
  covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 0,
                 covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U,
    0U, 0U, 1.0, 3.0, -1, 0U, 0));
  covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 1,
                 covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U,
    0U, 1U, 1.0, 3.0, -1, 0U, 0));
  covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 2,
                 covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U,
    0U, 2U, 1.0, 3.0, -1, 0U, 0));
  c7_img = c7_pA1;
  c7_pA = c7_img;
  c7_b_img = c7_pB1;
  c7_pB = c7_b_img;
  c7_c_img = c7_pF1;
  c7_pF = c7_c_img;
  c7_st.site = &c7_emlrtRSI;
  c7_SAx = c7_conv2(chartInstance, &c7_st, c7_pA);
  c7_st.site = &c7_emlrtRSI;
  for (c7_i = 0; c7_i < 9; c7_i++) {
    c7_dv[c7_i] = c7_dv1[c7_i];
  }

  c7_SAy = c7_b_conv2(chartInstance, &c7_st, c7_pA, c7_dv);
  c7_st.site = &c7_b_emlrtRSI;
  c7_a = c7_SAx;
  c7_b_a = c7_a;
  c7_c_x = c7_b_a;
  c7_c_a = c7_c_x;
  c7_b_y = c7_c_a * c7_c_a;
  c7_st.site = &c7_b_emlrtRSI;
  c7_d_a = c7_SAy;
  c7_e_a = c7_d_a;
  c7_d_x = c7_e_a;
  c7_f_a = c7_d_x;
  c7_c_y = c7_f_a * c7_f_a;
  c7_gA = c7_b_y + c7_c_y;
  c7_st.site = &c7_b_emlrtRSI;
  c7_b_sqrt(chartInstance, &c7_st, &c7_gA);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 0, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 1, 1);
  if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 3,
                     covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance,
        4U, 0U, 3U, c7_SAx, 0.0, -1, 0U, c7_SAx == 0.0))) {
    c7_aA = 1.5707963267948966;
  } else {
    c7_e_x = c7_SAy / c7_SAx;
    c7_aA = c7_e_x;
    c7_aA = muDoubleScalarAtan(c7_aA);
  }

  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 1, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 0, 0);
  c7_st.site = &c7_c_emlrtRSI;
  c7_BW1 = c7_edge(chartInstance, &c7_st, c7_pB1);
  c7_st.site = &c7_d_emlrtRSI;
  c7_A2 = c7_imdilate(chartInstance, &c7_st, c7_BW1);
  c7_st.site = &c7_e_emlrtRSI;
  c7_SBx = c7_conv2(chartInstance, &c7_st, c7_pB);
  c7_st.site = &c7_e_emlrtRSI;
  for (c7_i1 = 0; c7_i1 < 9; c7_i1++) {
    c7_dv2[c7_i1] = c7_dv1[c7_i1];
  }

  c7_SBy = c7_b_conv2(chartInstance, &c7_st, c7_pB, c7_dv2);
  c7_st.site = &c7_f_emlrtRSI;
  c7_g_a = c7_SBx;
  c7_h_a = c7_g_a;
  c7_f_x = c7_h_a;
  c7_i_a = c7_f_x;
  c7_d_y = c7_i_a * c7_i_a;
  c7_st.site = &c7_f_emlrtRSI;
  c7_j_a = c7_SBy;
  c7_k_a = c7_j_a;
  c7_g_x = c7_k_a;
  c7_l_a = c7_g_x;
  c7_e_y = c7_l_a * c7_l_a;
  c7_gB = c7_d_y + c7_e_y;
  c7_st.site = &c7_f_emlrtRSI;
  c7_b_sqrt(chartInstance, &c7_st, &c7_gB);
  c7_gB *= (real_T)c7_A2;
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 2, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 3, 1);
  if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 4,
                     covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance,
        4U, 0U, 4U, c7_SBx, 0.0, -1, 0U, c7_SBx == 0.0))) {
    c7_aB = 1.5707963267948966;
  } else {
    c7_h_x = c7_SBy / c7_SBx;
    c7_aB = c7_h_x;
    c7_aB = muDoubleScalarAtan(c7_aB);
  }

  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 3, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 2, 0);
  c7_st.site = &c7_g_emlrtRSI;
  c7_SFx = c7_conv2(chartInstance, &c7_st, c7_pF);
  c7_st.site = &c7_g_emlrtRSI;
  for (c7_i2 = 0; c7_i2 < 9; c7_i2++) {
    c7_dv3[c7_i2] = c7_dv1[c7_i2];
  }

  c7_SFy = c7_b_conv2(chartInstance, &c7_st, c7_pF, c7_dv3);
  c7_st.site = &c7_h_emlrtRSI;
  c7_m_a = c7_SFx;
  c7_n_a = c7_m_a;
  c7_i_x = c7_n_a;
  c7_o_a = c7_i_x;
  c7_f_y = c7_o_a * c7_o_a;
  c7_st.site = &c7_h_emlrtRSI;
  c7_p_a = c7_SFy;
  c7_q_a = c7_p_a;
  c7_j_x = c7_q_a;
  c7_r_a = c7_j_x;
  c7_g_y = c7_r_a * c7_r_a;
  c7_gF = c7_f_y + c7_g_y;
  c7_st.site = &c7_h_emlrtRSI;
  c7_b_sqrt(chartInstance, &c7_st, &c7_gF);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 4, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 5, 1);
  if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 5,
                     covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance,
        4U, 0U, 5U, c7_SFx, 0.0, -1, 0U, c7_SFx == 0.0))) {
    c7_aF = 1.5707963267948966;
  } else {
    c7_k_x = c7_SFy / c7_SFx;
    c7_aF = c7_k_x;
    c7_aF = muDoubleScalarAtan(c7_aF);
  }

  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 5, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 4, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 6, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 7, 1);
  if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 6,
                     covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance,
        4U, 0U, 6U, c7_gA, c7_gF, -1, 4U, c7_gA > c7_gF))) {
    c7_GAF = c7_gF / c7_gA;
  } else if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 7,
              covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U, 0U,
    7U, c7_gA, c7_gF, -1, 0U, c7_gA == c7_gF))) {
    c7_GAF = c7_gF;
  } else {
    c7_GAF = c7_gA / c7_gF;
  }

  c7_l_x = c7_aA - c7_aF;
  c7_m_x = c7_l_x;
  c7_n_x = c7_m_x;
  c7_h_y = muDoubleScalarAbs(c7_n_x);
  c7_AAF = 1.0 - c7_h_y / 1.5707963267948966;
  c7_o_x = -15.0 * (c7_GAF - 0.5);
  c7_p_x = c7_o_x;
  c7_p_x = muDoubleScalarExp(c7_p_x);
  c7_QgAF = 0.9994 / (1.0 + c7_p_x);
  c7_q_x = -22.0 * (c7_AAF - 0.8);
  c7_r_x = c7_q_x;
  c7_r_x = muDoubleScalarExp(c7_r_x);
  c7_QaAF = 0.9879 / (1.0 + c7_r_x);
  c7_QAF = c7_QgAF * c7_QaAF;
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 7, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 6, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 8, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 9, 1);
  if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 8,
                     covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance,
        4U, 0U, 8U, c7_gB, c7_gF, -1, 4U, c7_gB > c7_gF))) {
    c7_GBF = c7_gF / c7_gB;
  } else if (covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 9,
              covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U, 0U,
    9U, c7_gB, c7_gF, -1, 0U, c7_gB == c7_gF))) {
    c7_GBF = c7_gF;
  } else {
    c7_GBF = c7_gB / c7_gF;
  }

  c7_s_x = c7_aB - c7_aF;
  c7_t_x = c7_s_x;
  c7_u_x = c7_t_x;
  c7_i_y = muDoubleScalarAbs(c7_u_x);
  c7_ABF = 1.0 - c7_i_y / 1.5707963267948966;
  c7_v_x = -15.0 * (c7_GBF - 0.5);
  c7_w_x = c7_v_x;
  c7_w_x = muDoubleScalarExp(c7_w_x);
  c7_QgBF = 0.9994 / (1.0 + c7_w_x);
  c7_x_x = -22.0 * (c7_ABF - 0.8);
  c7_y_x = c7_x_x;
  c7_y_x = muDoubleScalarExp(c7_y_x);
  c7_QaBF = 0.9879 / (1.0 + c7_y_x);
  c7_QBF = c7_QgBF * c7_QaBF;
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 9, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 8, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 10, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 11, 1);
  if (covrtEmlCondEval(chartInstance->c7_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c7_covrtInstance, 4U, 0U, 10U, c7_gB,
                        c7_gF, -1, 4U, c7_gB > c7_gF)) || covrtEmlCondEval
      (chartInstance->c7_covrtInstance, 4U, 0, 1, covrtRelationalopUpdateFcn
       (chartInstance->c7_covrtInstance, 4U, 0U, 11U, c7_gA, c7_gF, -1, 4U,
        c7_gA > c7_gF))) {
    covrtEmlMcdcEval(chartInstance->c7_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 10, true);
  } else {
    covrtEmlMcdcEval(chartInstance->c7_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 10, false);
  }

  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 11, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 10, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 12, 1);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 13, 1);
  c7_st.site = &c7_i_emlrtRSI;
  c7_ab_x = c7_gA;
  c7_bb_x = c7_ab_x;
  c7_b = muDoubleScalarIsNaN(c7_bb_x);
  if (c7_b) {
    c7_j_y = NULL;
    sf_mex_assign(&c7_j_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c7_k_y = NULL;
    sf_mex_assign(&c7_k_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c7_st, &c7_d_emlrtMCI, "error", 0U, 2U, 14, c7_j_y, 14,
                sf_mex_call(&c7_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c7_st, NULL, "message", 1U, 1U, 14, c7_k_y)));
  }

  c7_st.site = &c7_i_emlrtRSI;
  c7_cb_x = c7_gF;
  c7_db_x = c7_cb_x;
  c7_b_b = muDoubleScalarIsNaN(c7_db_x);
  if (c7_b_b) {
    c7_l_y = NULL;
    sf_mex_assign(&c7_l_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c7_m_y = NULL;
    sf_mex_assign(&c7_m_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c7_st, &c7_d_emlrtMCI, "error", 0U, 2U, 14, c7_l_y, 14,
                sf_mex_call(&c7_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c7_st, NULL, "message", 1U, 1U, 14, c7_m_y)));
  }

  c7_c_b = (c7_gA != 0.0);
  c7_b1 = (c7_gF != 0.0);
  covrtEmlIfEval(chartInstance->c7_covrtInstance, 4U, 0, 11,
                 covrtRelationalopUpdateFcn(chartInstance->c7_covrtInstance, 4U,
    0U, 12U, c7_gF, (real_T)(c7_c_b && c7_b1), -1, 4U, c7_gF > (real_T)(c7_c_b &&
    c7_b1)));
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 13, 0);
  covrtEmlForEval(chartInstance->c7_covrtInstance, 4U, 0, 12, 0);
  c7_eb_x = c7_gA + c7_gB;
  c7_fb_x = c7_eb_x;
  c7_gb_x = c7_fb_x;
  c7_hb_x = c7_gb_x;
  c7_n_y = c7_hb_x;
  c7_ib_x = c7_n_y;
  c7_jb_x = c7_ib_x;
  c7_kb_x = c7_jb_x;
  c7_lb_x = c7_kb_x;
  c7_deno = c7_lb_x;
  c7_mb_x = c7_QAF * c7_gA + c7_QBF * c7_gB;
  c7_nb_x = c7_mb_x;
  c7_ob_x = c7_nb_x;
  c7_pb_x = c7_ob_x;
  c7_o_y = c7_pb_x;
  c7_qb_x = c7_o_y;
  c7_rb_x = c7_qb_x;
  c7_sb_x = c7_rb_x;
  c7_tb_x = c7_sb_x;
  c7_nume = c7_tb_x;
  c7_p_y = c7_nume / c7_deno;
  *chartInstance->c7_y = c7_p_y;
}

static void initSimStructsc7_untitled_restored_from_autosave
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c7_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c7_nameCaptureInfo;
}

static real_T c7_conv2(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_a)
{
  real_T c7_c;
  emlrtStack c7_st;
  emlrtStack c7_b_st;
  emlrtStack c7_c_st;
  emlrtStack c7_d_st;
  emlrtStack c7_e_st;
  emlrtStack c7_f_st;
  real_T c7_b_a;
  real_T c7_c_a;
  real_T c7_d_a;
  real_T c7_e_a;
  int32_T c7_ib;
  real_T c7_bij;
  static real_T c7_dv[9] = { -1.0, -2.0, -1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0 };

  int32_T c7_imin;
  int32_T c7_imax;
  int32_T c7_i;
  int32_T c7_b;
  int32_T c7_b_b;
  boolean_T c7_overflow;
  int32_T c7_b_i;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_st.site = &c7_j_emlrtRSI;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  c7_c_st.prev = &c7_b_st;
  c7_c_st.tls = c7_b_st.tls;
  c7_d_st.prev = &c7_c_st;
  c7_d_st.tls = c7_c_st.tls;
  c7_e_st.prev = &c7_d_st;
  c7_e_st.tls = c7_d_st.tls;
  c7_f_st.prev = &c7_e_st;
  c7_f_st.tls = c7_e_st.tls;
  c7_b_a = c7_a;
  c7_b_st.site = &c7_k_emlrtRSI;
  c7_c_a = c7_b_a;
  c7_c_st.site = &c7_l_emlrtRSI;
  c7_d_a = c7_c_a;
  c7_d_st.site = &c7_m_emlrtRSI;
  c7_e_a = c7_d_a;
  c7_c = 0.0;
  for (c7_ib = 0; c7_ib < 3; c7_ib++) {
    c7_bij = c7_dv[5 - c7_ib];
    if (c7_ib < 1) {
      c7_imin = 2 - c7_ib;
      c7_imax = 1;
    } else {
      c7_imin = 1;
      c7_imax = 2 - c7_ib;
    }

    c7_i = c7_imax - c7_imin;
    c7_e_st.site = &c7_n_emlrtRSI;
    c7_b = c7_i;
    c7_b_b = c7_b;
    if (0 > c7_b_b) {
      c7_overflow = false;
    } else {
      c7_overflow = (c7_b_b > 2147483646);
    }

    if (c7_overflow) {
      c7_f_st.site = &c7_o_emlrtRSI;
      c7_check_forloop_overflow_error(chartInstance, &c7_f_st, c7_overflow);
    }

    for (c7_b_i = 0; c7_b_i <= c7_i; c7_b_i++) {
      c7_c += c7_bij * c7_e_a;
    }
  }

  return c7_c;
}

static void c7_check_forloop_overflow_error
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c7_sp, boolean_T c7_overflow)
{
  const mxArray *c7_b_y = NULL;
  static char_T c7_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c7_c_y = NULL;
  const mxArray *c7_d_y = NULL;
  static char_T c7_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (c7_overflow) {
    c7_b_y = NULL;
    sf_mex_assign(&c7_b_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c7_c_y = NULL;
    sf_mex_assign(&c7_c_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c7_d_y = NULL;
    sf_mex_assign(&c7_d_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c7_sp, &c7_emlrtMCI, "error", 0U, 2U, 14, c7_b_y, 14,
                sf_mex_call(c7_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c7_sp, NULL, "message", 1U, 2U, 14, c7_c_y, 14, c7_d_y)));
  }
}

static real_T c7_b_conv2(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_a, real_T c7_b[9])
{
  real_T c7_c;
  emlrtStack c7_st;
  emlrtStack c7_b_st;
  emlrtStack c7_c_st;
  emlrtStack c7_d_st;
  emlrtStack c7_e_st;
  emlrtStack c7_f_st;
  real_T c7_b_a;
  real_T c7_c_a;
  real_T c7_d_a;
  real_T c7_e_a;
  int32_T c7_ib;
  real_T c7_bij;
  int32_T c7_imin;
  int32_T c7_imax;
  int32_T c7_i;
  int32_T c7_b_b;
  int32_T c7_c_b;
  boolean_T c7_overflow;
  int32_T c7_b_i;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_st.site = &c7_j_emlrtRSI;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  c7_c_st.prev = &c7_b_st;
  c7_c_st.tls = c7_b_st.tls;
  c7_d_st.prev = &c7_c_st;
  c7_d_st.tls = c7_c_st.tls;
  c7_e_st.prev = &c7_d_st;
  c7_e_st.tls = c7_d_st.tls;
  c7_f_st.prev = &c7_e_st;
  c7_f_st.tls = c7_e_st.tls;
  c7_b_a = c7_a;
  c7_b_st.site = &c7_k_emlrtRSI;
  c7_c_a = c7_b_a;
  c7_c_st.site = &c7_l_emlrtRSI;
  c7_d_a = c7_c_a;
  c7_d_st.site = &c7_m_emlrtRSI;
  c7_e_a = c7_d_a;
  c7_c = 0.0;
  for (c7_ib = 0; c7_ib < 3; c7_ib++) {
    c7_bij = c7_b[5 - c7_ib];
    if (c7_ib < 1) {
      c7_imin = 2 - c7_ib;
      c7_imax = 1;
    } else {
      c7_imin = 1;
      c7_imax = 2 - c7_ib;
    }

    c7_i = c7_imax - c7_imin;
    c7_e_st.site = &c7_n_emlrtRSI;
    c7_b_b = c7_i;
    c7_c_b = c7_b_b;
    if (0 > c7_c_b) {
      c7_overflow = false;
    } else {
      c7_overflow = (c7_c_b > 2147483646);
    }

    if (c7_overflow) {
      c7_f_st.site = &c7_o_emlrtRSI;
      c7_check_forloop_overflow_error(chartInstance, &c7_f_st, c7_overflow);
    }

    for (c7_b_i = 0; c7_b_i <= c7_i; c7_b_i++) {
      c7_c += c7_bij * c7_e_a;
    }
  }

  return c7_c;
}

static real_T c7_sqrt(SFc7_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c7_sp, real_T c7_b_x)
{
  real_T c7_c_x;
  c7_c_x = c7_b_x;
  c7_b_sqrt(chartInstance, c7_sp, &c7_c_x);
  return c7_c_x;
}

static boolean_T c7_edge(SFc7_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, real_T c7_varargin_1)
{
  emlrtStack c7_st;
  real_T c7_a;
  real_T c7_pImage;
  real_T c7_pGradientX;
  real_T c7_bx;
  real_T c7_pGradientY;
  real_T c7_by;
  real_T c7_pMagnitude;
  real_T c7_b;
  real_T c7_b_b;
  real_T c7_b_by;
  real_T c7_b_bx;
  int32_T c7_i;
  real_T c7_pGradient1;
  real_T c7_srcSizeT[2];
  real_T c7_pGradient2;
  real_T c7_b_x;
  real_T c7_c_x;
  real_T c7_d_x;
  real_T c7_e_x;
  real_T c7_b_y;
  real_T c7_cutoff;
  real_T c7_d;
  real_T c7_c_b;
  real_T c7_c_bx;
  real_T c7_c_by;
  real_T c7_b_cutoff;
  real_T c7_d_b;
  real_T c7_d_bx;
  real_T c7_d_by;
  int32_T c7_i1;
  real_T c7_c_cutoff;
  int8_T c7_offset[4];
  int32_T c7_i2;
  real_T c7_b1;
  real_T c7_b2;
  boolean_T c7_e;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_st.site = &c7_q_emlrtRSI;
  c7_a = c7_varargin_1;
  c7_pImage = c7_a;
  c7_pGradientX = c7_bx;
  c7_pGradientY = c7_by;
  c7_pMagnitude = c7_b;
  c7_b_b = c7_pMagnitude;
  c7_b_by = c7_pGradientY;
  c7_b_bx = c7_pGradientX;
  for (c7_i = 0; c7_i < 2; c7_i++) {
    c7_srcSizeT[c7_i] = 1.0;
  }

  c7_pGradient1 = c7_b_bx;
  c7_pGradient2 = c7_b_by;
  edgesobelprewitt_real64_tbb(&c7_pImage, c7_srcSizeT, true, 1.0, 1.0,
    &c7_pGradient1, &c7_pGradient2, &c7_b_b);
  c7_b_bx = c7_pGradient1;
  c7_b_by = c7_pGradient2;
  c7_bx = c7_b_bx;
  c7_by = c7_b_by;
  c7_b = c7_b_b;
  c7_b_x = c7_b;
  c7_c_x = c7_b_x;
  c7_d_x = c7_c_x;
  c7_e_x = c7_d_x;
  c7_b_y = c7_e_x;
  c7_cutoff = 4.0 * c7_b_y;
  c7_d = c7_cutoff;
  c7_st.site = &c7_r_emlrtRSI;
  c7_b_sqrt(chartInstance, &c7_st, &c7_d);
  c7_c_b = c7_b;
  c7_c_bx = c7_bx;
  c7_c_by = c7_by;
  c7_b_cutoff = c7_cutoff;
  c7_d_b = c7_c_b;
  c7_d_bx = c7_c_bx;
  c7_d_by = c7_c_by;
  for (c7_i1 = 0; c7_i1 < 4; c7_i1++) {
    c7_offset[c7_i1] = 0;
  }

  c7_c_cutoff = c7_b_cutoff;
  for (c7_i2 = 0; c7_i2 < 2; c7_i2++) {
    c7_srcSizeT[c7_i2] = 1.0;
  }

  c7_b1 = c7_d_bx;
  c7_b2 = c7_d_by;
  edgethinning_real64_tbb(&c7_d_b, &c7_b1, &c7_b2, 1.0, 1.0, c7_offset,
    2.2204460492503131E-14, c7_c_cutoff, &c7_e, c7_srcSizeT);
  return c7_e;
}

static boolean_T c7_imdilate(SFc7_untitled_restored_from_autosaveInstanceStruct *
  chartInstance, const emlrtStack *c7_sp, boolean_T c7_A)
{
  emlrtStack c7_st;
  emlrtStack c7_b_st;
  emlrtStack c7_c_st;
  emlrtStack c7_d_st;
  boolean_T c7_varargin_1;
  boolean_T c7_b_A;
  boolean_T c7_b_varargin_1;
  boolean_T c7_a;
  int32_T c7_j;
  int32_T c7_i;
  real_T c7_b_j;
  int32_T c7_b_i;
  boolean_T c7_Apadpre[100];
  real_T c7_c_i;
  int32_T c7_d_i;
  int32_T c7_i1;
  int32_T c7_c_j;
  int32_T c7_i2;
  int32_T c7_d_j;
  int32_T c7_e_i;
  int32_T c7_e_j;
  real_T c7_f_j;
  real_T c7_f_i;
  int32_T c7_g_i;
  real_T c7_d;
  int32_T c7_i3;
  int32_T c7_i4;
  int32_T c7_h_i;
  int32_T c7_i5;
  int32_T c7_i6;
  real_T c7_d1;
  boolean_T c7_Apad[361];
  int32_T c7_i7;
  real_T c7_dv[2];
  int32_T c7_i8;
  int32_T c7_i9;
  uint32_T c7_Apadpack[19];
  real_T c7_dv1[2];
  int32_T c7_i10;
  int32_T c7_i11;
  int32_T c7_i12;
  int32_T c7_i13;
  int32_T c7_i14;
  boolean_T c7_nhood[7];
  int32_T c7_i15;
  real_T c7_asizeT[2];
  real_T c7_nsizeT[2];
  uint32_T c7_b_B[19];
  int32_T c7_i16;
  int32_T c7_i17;
  int32_T c7_i18;
  static boolean_T c7_b_nhood[25] = { true, false, false, false, false, false,
    true, false, false, false, false, false, true, false, false, false, false,
    false, true, false, false, false, false, false, true };

  int32_T c7_i19;
  int32_T c7_i20;
  int32_T c7_i21;
  int32_T c7_i22;
  int32_T c7_i23;
  int32_T c7_i24;
  int32_T c7_i25;
  static boolean_T c7_c_nhood[25] = { false, false, false, false, true, false,
    false, false, true, false, false, false, true, false, false, false, true,
    false, false, false, true, false, false, false, false };

  int32_T c7_i26;
  int32_T c7_i27;
  int32_T c7_i28;
  boolean_T c7_d_nhood[5];
  int32_T c7_i29;
  int32_T c7_i30;
  int32_T c7_i31;
  int32_T c7_i32;
  int32_T c7_i33;
  int32_T c7_i34;
  int32_T c7_i35;
  real_T c7_dv2[2];
  real_T c7_dv3[2];
  (void)chartInstance;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_st.site = &c7_v_emlrtRSI;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  c7_c_st.prev = &c7_b_st;
  c7_c_st.tls = c7_b_st.tls;
  c7_d_st.prev = &c7_c_st;
  c7_d_st.tls = c7_c_st.tls;
  c7_varargin_1 = c7_A;
  c7_b_st.site = &c7_w_emlrtRSI;
  c7_b_A = c7_varargin_1;
  c7_c_st.site = &c7_x_emlrtRSI;
  c7_b_varargin_1 = c7_b_A;
  c7_d_st.site = &c7_db_emlrtRSI;
  c7_a = c7_b_varargin_1;
  for (c7_j = 0; c7_j < 9; c7_j++) {
    c7_b_j = 1.0 + (real_T)c7_j;
    for (c7_b_i = 0; c7_b_i < 10; c7_b_i++) {
      c7_c_i = 1.0 + (real_T)c7_b_i;
      c7_i1 = (int32_T)emlrtIntegerCheckR2012b(c7_b_j, &c7_f_emlrtDCI, &c7_d_st);
      c7_i2 = (int32_T)emlrtIntegerCheckR2012b(c7_c_i, &c7_g_emlrtDCI, &c7_d_st);
      c7_Apadpre[(emlrtDynamicBoundsCheckR2012b(c7_i2, 1, 10, &c7_g_emlrtBCI,
        &c7_d_st) + 10 * (emlrtDynamicBoundsCheckR2012b(c7_i1, 1, 10,
        &c7_f_emlrtBCI, &c7_d_st) - 1)) - 1] = false;
    }
  }

  for (c7_i = 0; c7_i < 9; c7_i++) {
    c7_c_i = 1.0 + (real_T)c7_i;
    c7_d_i = (int32_T)emlrtIntegerCheckR2012b(c7_c_i, &c7_e_emlrtDCI, &c7_d_st);
    c7_Apadpre[emlrtDynamicBoundsCheckR2012b(c7_d_i, 1, 10, &c7_e_emlrtBCI,
      &c7_d_st) + 89] = false;
  }

  c7_Apadpre[99] = c7_a;
  c7_c_st.site = &c7_y_emlrtRSI;
  c7_d_st.site = &c7_db_emlrtRSI;
  for (c7_c_j = 0; c7_c_j < 9; c7_c_j++) {
    for (c7_e_i = 0; c7_e_i < 19; c7_e_i++) {
      c7_f_i = 1.0 + (real_T)c7_e_i;
      c7_d = (real_T)(c7_c_j + 11);
      c7_i3 = (int32_T)emlrtIntegerCheckR2012b(c7_d, &c7_c_emlrtDCI, &c7_d_st);
      c7_i6 = (int32_T)emlrtIntegerCheckR2012b(c7_f_i, &c7_d_emlrtDCI, &c7_d_st);
      c7_Apad[(emlrtDynamicBoundsCheckR2012b(c7_i6, 1, 19, &c7_d_emlrtBCI,
                &c7_d_st) + 19 * (emlrtDynamicBoundsCheckR2012b(c7_i3, 1, 19,
                 &c7_c_emlrtBCI, &c7_d_st) - 1)) - 1] = false;
    }
  }

  for (c7_d_j = 0; c7_d_j < 10; c7_d_j++) {
    c7_f_j = 1.0 + (real_T)c7_d_j;
    for (c7_g_i = 0; c7_g_i < 9; c7_g_i++) {
      c7_i5 = (int32_T)emlrtIntegerCheckR2012b(c7_f_j, &c7_emlrtDCI, &c7_d_st);
      c7_d1 = (real_T)(c7_g_i + 11);
      c7_i8 = (int32_T)emlrtIntegerCheckR2012b(c7_d1, &c7_b_emlrtDCI, &c7_d_st);
      c7_Apad[(emlrtDynamicBoundsCheckR2012b(c7_i8, 1, 19, &c7_b_emlrtBCI,
                &c7_d_st) + 19 * (emlrtDynamicBoundsCheckR2012b(c7_i5, 1, 19,
                 &c7_emlrtBCI, &c7_d_st) - 1)) - 1] = false;
    }
  }

  for (c7_e_j = 0; c7_e_j < 10; c7_e_j++) {
    c7_f_j = 1.0 + (real_T)c7_e_j;
    for (c7_h_i = 0; c7_h_i < 10; c7_h_i++) {
      c7_f_i = 1.0 + (real_T)c7_h_i;
      c7_i9 = (int32_T)emlrtIntegerCheckR2012b(c7_f_i, &c7_h_emlrtDCI, &c7_d_st);
      c7_i10 = (int32_T)emlrtIntegerCheckR2012b(c7_f_j, &c7_h_emlrtDCI, &c7_d_st);
      c7_i11 = (int32_T)emlrtIntegerCheckR2012b(c7_f_i, &c7_i_emlrtDCI, &c7_d_st);
      c7_i13 = (int32_T)emlrtIntegerCheckR2012b(c7_f_j, &c7_i_emlrtDCI, &c7_d_st);
      c7_Apad[(emlrtDynamicBoundsCheckR2012b(c7_i11, 1, 19, &c7_i_emlrtBCI,
                &c7_d_st) + 19 * (emlrtDynamicBoundsCheckR2012b(c7_i13, 1, 19,
                 &c7_i_emlrtBCI, &c7_d_st) - 1)) - 1] = c7_Apadpre
        [(emlrtDynamicBoundsCheckR2012b(c7_i9, 1, 10, &c7_h_emlrtBCI, &c7_d_st)
          + 10 * (emlrtDynamicBoundsCheckR2012b(c7_i10, 1, 10, &c7_h_emlrtBCI,
            &c7_d_st) - 1)) - 1];
    }
  }

  c7_c_st.site = &c7_ab_emlrtRSI;
  for (c7_i4 = 0; c7_i4 < 2; c7_i4++) {
    c7_dv[c7_i4] = 19.0;
  }

  for (c7_i7 = 0; c7_i7 < 2; c7_i7++) {
    c7_dv1[c7_i7] = 1.0 + 18.0 * (real_T)c7_i7;
  }

  bwPackingtbb(c7_Apad, c7_dv, c7_Apadpack, c7_dv1, true);
  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i12 = 0; c7_i12 < 7; c7_i12++) {
    c7_nhood[c7_i12] = true;
  }

  for (c7_i14 = 0; c7_i14 < 2; c7_i14++) {
    c7_asizeT[c7_i14] = 1.0 + 18.0 * (real_T)c7_i14;
  }

  for (c7_i15 = 0; c7_i15 < 2; c7_i15++) {
    c7_nsizeT[c7_i15] = 7.0 + -6.0 * (real_T)c7_i15;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  for (c7_i16 = 0; c7_i16 < 19; c7_i16++) {
    c7_Apadpack[c7_i16] = c7_b_B[c7_i16];
  }

  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i17 = 0; c7_i17 < 2; c7_i17++) {
    c7_asizeT[c7_i17] = 1.0 + 18.0 * (real_T)c7_i17;
  }

  for (c7_i18 = 0; c7_i18 < 2; c7_i18++) {
    c7_nsizeT[c7_i18] = 5.0;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_b_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  for (c7_i19 = 0; c7_i19 < 19; c7_i19++) {
    c7_Apadpack[c7_i19] = c7_b_B[c7_i19];
  }

  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i20 = 0; c7_i20 < 7; c7_i20++) {
    c7_nhood[c7_i20] = true;
  }

  for (c7_i21 = 0; c7_i21 < 2; c7_i21++) {
    c7_asizeT[c7_i21] = 1.0 + 18.0 * (real_T)c7_i21;
  }

  for (c7_i22 = 0; c7_i22 < 2; c7_i22++) {
    c7_nsizeT[c7_i22] = 1.0 + 6.0 * (real_T)c7_i22;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  for (c7_i23 = 0; c7_i23 < 19; c7_i23++) {
    c7_Apadpack[c7_i23] = c7_b_B[c7_i23];
  }

  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i24 = 0; c7_i24 < 2; c7_i24++) {
    c7_asizeT[c7_i24] = 1.0 + 18.0 * (real_T)c7_i24;
  }

  for (c7_i25 = 0; c7_i25 < 2; c7_i25++) {
    c7_nsizeT[c7_i25] = 5.0;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_c_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  for (c7_i26 = 0; c7_i26 < 19; c7_i26++) {
    c7_Apadpack[c7_i26] = c7_b_B[c7_i26];
  }

  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i27 = 0; c7_i27 < 5; c7_i27++) {
    c7_d_nhood[c7_i27] = true;
  }

  for (c7_i28 = 0; c7_i28 < 2; c7_i28++) {
    c7_asizeT[c7_i28] = 1.0 + 18.0 * (real_T)c7_i28;
  }

  for (c7_i29 = 0; c7_i29 < 2; c7_i29++) {
    c7_nsizeT[c7_i29] = 1.0 + 4.0 * (real_T)c7_i29;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_d_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  for (c7_i30 = 0; c7_i30 < 19; c7_i30++) {
    c7_Apadpack[c7_i30] = c7_b_B[c7_i30];
  }

  c7_c_st.site = &c7_bb_emlrtRSI;
  for (c7_i31 = 0; c7_i31 < 5; c7_i31++) {
    c7_d_nhood[c7_i31] = true;
  }

  for (c7_i32 = 0; c7_i32 < 2; c7_i32++) {
    c7_asizeT[c7_i32] = 1.0 + 18.0 * (real_T)c7_i32;
  }

  for (c7_i33 = 0; c7_i33 < 2; c7_i33++) {
    c7_nsizeT[c7_i33] = 5.0 + -4.0 * (real_T)c7_i33;
  }

  dilate_packed_uint32(c7_Apadpack, c7_asizeT, 2.0, c7_d_nhood, c7_nsizeT, 2.0,
                       c7_b_B, true);
  c7_c_st.site = &c7_cb_emlrtRSI;
  for (c7_i34 = 0; c7_i34 < 2; c7_i34++) {
    c7_dv2[c7_i34] = 1.0 + 18.0 * (real_T)c7_i34;
  }

  for (c7_i35 = 0; c7_i35 < 2; c7_i35++) {
    c7_dv3[c7_i35] = 19.0;
  }

  bwUnpackingtbb(c7_b_B, c7_dv2, c7_Apad, c7_dv3, true);
  return c7_Apad[180];
}

static real_T c7_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_b_y, const char_T *c7_identifier)
{
  real_T c7_c_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = (const char *)c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_c_y = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_y), &c7_thisId);
  sf_mex_destroy(&c7_b_y);
  return c7_c_y;
}

static real_T c7_b_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  real_T c7_b_y;
  real_T c7_d;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_d, 1, 0, 0U, 0, 0U, 0);
  c7_b_y = c7_d;
  sf_mex_destroy(&c7_u);
  return c7_b_y;
}

static uint8_T c7_c_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_b_is_active_c7_untitled_restored_from_autosave, const char_T
   *c7_identifier)
{
  uint8_T c7_b_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = (const char *)c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_b_y = c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c7_b_is_active_c7_untitled_restored_from_autosave), &c7_thisId);
  sf_mex_destroy(&c7_b_is_active_c7_untitled_restored_from_autosave);
  return c7_b_y;
}

static uint8_T c7_d_emlrt_marshallIn
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_b_y;
  uint8_T c7_b_u;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_b_u, 1, 3, 0U, 0, 0U, 0);
  c7_b_y = c7_b_u;
  sf_mex_destroy(&c7_u);
  return c7_b_y;
}

static const mxArray *c7_chart_data_browse_helper
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c7_ssIdNumber)
{
  const mxArray *c7_mxData = NULL;
  real_T c7_d;
  real_T c7_d1;
  real_T c7_d2;
  real_T c7_d3;
  c7_mxData = NULL;
  switch (c7_ssIdNumber) {
   case 9U:
    c7_d = *chartInstance->c7_x;
    sf_mex_assign(&c7_mxData, sf_mex_create("mxData", &c7_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c7_d1 = *chartInstance->c7_y;
    sf_mex_assign(&c7_mxData, sf_mex_create("mxData", &c7_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 11U:
    c7_d2 = *chartInstance->c7_I1;
    sf_mex_assign(&c7_mxData, sf_mex_create("mxData", &c7_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c7_d3 = *chartInstance->c7_I2;
    sf_mex_assign(&c7_mxData, sf_mex_create("mxData", &c7_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c7_mxData;
}

static void c7_b_sqrt(SFc7_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c7_sp, real_T *c7_b_x)
{
  real_T c7_c_x;
  boolean_T c7_p;
  boolean_T c7_b_p;
  const mxArray *c7_b_y = NULL;
  static char_T c7_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c7_c_y = NULL;
  const mxArray *c7_d_y = NULL;
  static char_T c7_cv1[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c7_c_x = *c7_b_x;
  if (c7_c_x < 0.0) {
    c7_p = true;
  } else {
    c7_p = false;
  }

  c7_b_p = c7_p;
  if (c7_b_p) {
    c7_b_y = NULL;
    sf_mex_assign(&c7_b_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c7_c_y = NULL;
    sf_mex_assign(&c7_c_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c7_d_y = NULL;
    sf_mex_assign(&c7_d_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c7_sp, &c7_c_emlrtMCI, "error", 0U, 2U, 14, c7_b_y, 14,
                sf_mex_call(c7_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c7_sp, NULL, "message", 1U, 2U, 14, c7_c_y, 14, c7_d_y)));
  }

  *c7_b_x = muDoubleScalarSqrt(*c7_b_x);
}

static void init_dsm_address_info
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c7_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c7_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c7_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c7_y = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c7_I1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c7_I2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c7_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2383180316U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3741964396U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(355759039U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2779786572U);
}

mxArray *sf_c7_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.EdgeSobelPrewittTbbBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.EdgeThinningTbbBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.BwpacktbbBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.Morphop_packed_Buildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.BwunpacktbbBuildable"));
  return(mxcell3p);
}

mxArray *sf_c7_untitled_restored_from_autosave_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("edgesobelprewitt_real64_tbb");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c7_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c7_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNTzaPL80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC4Q"
    "CEa"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "szcAA8NH7IO62rfWscj11oH";
}

static void sf_opaque_initialize_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c7_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c7_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c7_untitled_restored_from_autosave
      ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c7_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc7_untitled_restored_from_autosave
    ((SFc7_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_untitled_restored_from_autosave
      ((SFc7_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc7_untitled_restored_from_autosave
      ((SFc7_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c7_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV8tu00AUtdOCigSoSEhsECCxgEUXwAJY0UceaqSUVqSFZZiOb+Ih4xkzj7Rlg1jDB7DiC/g",
    "A1mz5AVZs2fIJ3HHcNDh2TBtRgYQlxx7PuWfua+6deH5zw8PrIt7vL3neWXwu4F3xhteZdOyP3c",
    "Pv896tdLyMQsJGW0SRSHtTL0EieAJacmuYFE3RlbkwJrqgQFDExlKZIjbNIsuZ6DesoI5PPwsZD",
    "duhtDxYQ1kSbAp+gGyxNVvIU2MKqGkABCZU0vbCBie9kcbK7FVDoH1to2kmaDBtGzu19IblhsUc",
    "6vtAm0IbghrrI93ahhiomv1CM52lun0IlFHMGRG51oZEtyFGBxvYiQP83bQGjcrCaEiUWYOQDEC",
    "3WD/hlAKynEzjxC4TxEjFCK9HvOoEJ3Xb4qjPhgyAT3EI6ramgPRjyYQpjn+7gZbWBdnlUINd2y",
    "tma8NL64L/lMEeqEK/datyAIr0YFMULpo4pL6fRGuUJZMwwyJ4StQqxfhpCAqzFzNHtwnGCbZRo",
    "ggGiZFNva3YAN1byGajpsvMsi1jo2GwdRksYasPYFoURmwNKqqEc10I25ZxCwbAE9YaMWQ6bMia",
    "j9OaBdsSHezSu3g3WMEw8CmsKkXAcsM1yACSuvMYC8uvSGq1kVEVk7fWak1OT8KawoDqEgp5VUA",
    "RpgF9lri3mC1g2sUegaiVSdTLAw8zpAzl6a4VtT2p+uiTKUXkyAQX0UJgpHsYS9wJOxo3zTSYi2",
    "UZjhIaQuAKDOOwgdsGsTk+0a60reK+GzBzUANNFYvzour6zx3vqP+c/43+cyiXfd4e4/FzeLyxZ",
    "3bdc5Vf8XOZdSv4xff9RG5lTO5CZp35jJzDLeL9pf/hB9y89vnN24/fX9N338rW9yfW95N3J/ep",
    "crx+fTEdXz0sjKNEH0zkl8Ouj+k1n8N/ZYx/MR3rV3R19eHj9QfNzfv3VPeZpi/u3pXrCd9Cib6",
    "VjL6H32+4Cn0QJ/VWK9oM0oOEGxM7bK+O/+GYvmdL/HEu/T68fizPJn95JRvH+RL5RXw7yOTtyd",
    "e/sTKb/HD95yX6L2XivZT04Q5xuxs69EHHCixmHIKOAqxICl+6SkYdYo3UeCTJ7tOT5v1x5bxTl",
    "vtX9Pzvlz9v3+/0sbkTyvkz9s3TkpvVvuP2878NP60veBn84l9sx6znrD+N/+od7zx0PR0/Gv1F",
    "qYaMBzmn1XS6BaSbN3sK9v0EW9ShHA==",
    ""
  };

  static char newstr [1233] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c7_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c7_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4036914123U));
  ssSetChecksum1(S,(3256755045U));
  ssSetChecksum2(S,(3886844801U));
  ssSetChecksum3(S,(3733742463U));
}

static void mdlRTW_c7_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c7_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc7_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc7_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc7_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc7_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c7_untitled_restored_from_autosave;
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
    chartInstance->c7_JITStateAnimation,
    chartInstance->c7_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c7_untitled_restored_from_autosave(chartInstance);
}

void c7_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c7_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
