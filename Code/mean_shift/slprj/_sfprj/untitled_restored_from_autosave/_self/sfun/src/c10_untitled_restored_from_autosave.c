/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c10_untitled_restored_from_autosave.h"
#include <string.h>
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
static emlrtMCInfo c10_emlrtMCI = { 88,/* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c10_b_emlrtMCI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c10_c_emlrtMCI = { 59,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRSInfo c10_emlrtRSI = { 6, /* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_b_emlrtRSI = { 20,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_c_emlrtRSI = { 21,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_d_emlrtRSI = { 26,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_e_emlrtRSI = { 36,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_f_emlrtRSI = { 38,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_g_emlrtRSI = { 46,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_h_emlrtRSI = { 60,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_i_emlrtRSI = { 61,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_j_emlrtRSI = { 66,/* lineNo */
  "Fusion model3",                     /* fcnName */
  "#untitled_restored_from_autosave:76"/* pathName */
};

static emlrtRSInfo c10_k_emlrtRSI = { 382,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_l_emlrtRSI = { 385,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_m_emlrtRSI = { 389,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_n_emlrtRSI = { 392,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_o_emlrtRSI = { 574,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_p_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c10_q_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c10_r_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c10_s_emlrtRSI = { 457,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_t_emlrtRSI = { 466,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_u_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c10_v_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c10_w_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c10_x_emlrtRSI = { 444,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_y_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_ab_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_bb_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_cb_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c10_db_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_eb_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_fb_emlrtRSI = { 857,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_gb_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c10_hb_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c10_ib_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c10_jb_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c10_kb_emlrtRSI = { 931,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_lb_emlrtRSI = { 1005,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_mb_emlrtRSI = { 1033,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_nb_emlrtRSI = { 1045,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c10_ob_emlrtRSI = { 64,/* lineNo */
  "power",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c10_pb_emlrtRSI = { 188,/* lineNo */
  "power",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c10_qb_emlrtRSI = { 66,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c10_rb_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo c10_emlrtRTEI = { 320,/* lineNo */
  30,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c10_b_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76"/* pName */
};

static emlrtRTEInfo c10_c_emlrtRTEI = { 59,/* lineNo */
  9,                                   /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76"/* pName */
};

static emlrtRTEInfo c10_d_emlrtRTEI = { 492,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c10_e_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c10_f_emlrtRTEI = { 580,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtDCInfo c10_emlrtDCI = { 19,/* lineNo */
  18,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_emlrtBCI = { 1, /* iFirst */
  69,                                  /* iLast */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_b_emlrtDCI = { 19,/* lineNo */
  22,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_b_emlrtBCI = { 1,/* iFirst */
  69,                                  /* iLast */
  19,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_c_emlrtDCI = { 19,/* lineNo */
  26,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_c_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  19,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_d_emlrtDCI = { 19,/* lineNo */
  30,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_d_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  19,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_e_emlrtDCI = { 59,/* lineNo */
  18,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_e_emlrtBCI = { 1,/* iFirst */
  69,                                  /* iLast */
  59,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_f_emlrtDCI = { 59,/* lineNo */
  22,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_f_emlrtBCI = { 1,/* iFirst */
  69,                                  /* iLast */
  59,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_g_emlrtDCI = { 59,/* lineNo */
  26,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_g_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  59,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_h_emlrtDCI = { 59,/* lineNo */
  30,                                  /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_h_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  59,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c10_i_emlrtBCI = { 1,/* iFirst */
  69,                                  /* iLast */
  21,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_i_emlrtDCI = { 21,/* lineNo */
  9,                                   /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_j_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  21,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c10_k_emlrtBCI = { 1,/* iFirst */
  69,                                  /* iLast */
  61,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_j_emlrtDCI = { 61,/* lineNo */
  9,                                   /* colNo */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_l_emlrtBCI = { 1,/* iFirst */
  79,                                  /* iLast */
  61,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model3",                     /* fName */
  "#untitled_restored_from_autosave:76",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c10_m_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  5,                                   /* lineNo */
  11,                                  /* colNo */
  "tmp",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_k_emlrtDCI = { 5,/* lineNo */
  11,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_n_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  24,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_l_emlrtDCI = { 12,/* lineNo */
  24,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_o_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_m_emlrtDCI = { 12,/* lineNo */
  17,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\\xe7\xac?7\xe7\xaf\x87\\\xe4\xbb\xa3\xe7\xa0\x81\\\\FT\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_p_emlrtBCI = { 1,/* iFirst */
  475,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c10_q_emlrtBCI = { 1,/* iFirst */
  575,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static const char_T c10_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c10_update_jit_animation_state_c10_untitled_restored_from_autosa
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c10_do_animation_call_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_st);
static void sf_gateway_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c10_chartstep_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp);
static void initSimStructsc10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c10_mean_shift(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, real_T c10_ser[441], real_T c10_p);
static void c10_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_c_Ain[273125], uint8_T
  c10_Bout[2784]);
static void c10_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2]);
static void c10_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[58], int32_T c10_b[22], int32_T c10_c[1276]);
static void c10_b_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[58], real_T c10_b[1276], real_T c10_c[1276]);
static void c10_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c10_b_x[1276], real_T c10_b_y[58]);
static void c10_c_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1276], real_T c10_b[58], real_T c10_c[1276]);
static real_T c10_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x);
static void c10_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                    [1276], boolean_T c10_b_y[22]);
static void c10_check_forloop_overflow_error
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp);
static void c10_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[273125], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [27550]);
static void c10_b_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2]);
static void c10_d_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[48], int32_T c10_b[22], int32_T c10_c[1056]);
static void c10_e_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[48], real_T c10_b[1056], real_T c10_c[1056]);
static void c10_b_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[1056], real_T c10_b_y[48]);
static void c10_f_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1056], real_T c10_b[48], real_T c10_c[1056]);
static real_T c10_b_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x);
static void c10_b_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [1056], boolean_T c10_b_y[22]);
static void c10_b_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [2784]);
static void c10_power(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_a[441], real_T c10_b_y[441]);
static void c10_exp(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c10_b_x[441], real_T c10_c_x[441]);
static real_T c10_c_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x[441]);
static void c10_b_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_c_Ain[2784], uint8_T
  c10_Bout[273125]);
static void c10_c_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2]);
static void c10_g_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[475], int32_T c10_b[4], int32_T c10_c[1900]);
static void c10_h_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[475], real_T c10_b[1900], real_T c10_c[1900]);
static void c10_d_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[1900], real_T c10_b_y[475]);
static void c10_i_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1900], real_T c10_b[475], real_T c10_c[1900]);
static real_T c10_c_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x);
static void c10_c_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [1900], boolean_T c10_b_y[4]);
static void c10_c_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[2784], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [27550]);
static void c10_d_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2]);
static void c10_j_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[575], int32_T c10_b[4], int32_T c10_c[2300]);
static void c10_k_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[575], real_T c10_b[2300], real_T c10_c[2300]);
static void c10_e_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[2300], real_T c10_b_y[575]);
static void c10_l_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[2300], real_T c10_b[575], real_T c10_c[2300]);
static real_T c10_d_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x);
static void c10_d_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [2300], boolean_T c10_b_y[4]);
static void c10_d_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [273125]);
static void c10_imfilter(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_b_varargin_1[273125],
  uint8_T c10_b[273125]);
static void c10_padImage(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_a_tmp[273125], uint8_T
  c10_b_a[277341]);
static void c10_mean(SFc10_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, uint8_T c10_b_x[273125], real_T c10_b_y[575]);
static real_T c10_b_mean(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x[575]);
static void c10_b_power(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, uint8_T c10_b_a[273125], uint8_T c10_b_y[273125]);
static void c10_c_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, real_T c10_c_Ain[2784], real_T
  c10_Bout[273125]);
static void c10_e_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_in_[2784], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], real_T c10_out_
   [27550]);
static void c10_f_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], real_T c10_out_
   [273125]);
static void c10_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_b_y, const char_T *c10_identifier, uint8_T c10_c_y[273125]);
static void c10_b_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId, uint8_T c10_b_y
   [273125]);
static uint8_T c10_c_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_b_is_active_c10_untitled_restored_from_autosave, const char_T
   *c10_identifier);
static uint8_T c10_d_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static const mxArray *c10_chart_data_browse_helper
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c10_ssIdNumber);
static void c10_b_exp(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[441]);
static void c10_emxEnsureCapacity_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, c10_emxArray_uint8_T *c10_emxArray, int32_T c10_oldNumel,
   const emlrtRTEInfo *c10_srcLocation);
static void c10_emxInit_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, c10_emxArray_uint8_T **c10_pEmxArray, int32_T
   c10_numDimensions, const emlrtRTEInfo *c10_srcLocation);
static void c10_emxFree_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance,
   c10_emxArray_uint8_T **c10_pEmxArray);
static void init_dsm_address_info
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c10_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c10_st.tls = chartInstance->c10_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c10_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c10_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c10_is_active_c10_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c10_update_jit_animation_state_c10_untitled_restored_from_autosa
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c10_do_animation_call_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c10_st;
  const mxArray *c10_b_y = NULL;
  const mxArray *c10_c_y = NULL;
  const mxArray *c10_d_y = NULL;
  c10_st = NULL;
  c10_st = NULL;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_createcellmatrix(2, 1), false);
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", *chartInstance->c10_y, 3, 0U, 1U,
    0U, 2, 475, 575), false);
  sf_mex_setcell(c10_b_y, 0, c10_c_y);
  c10_d_y = NULL;
  sf_mex_assign(&c10_d_y, sf_mex_create("y",
    &chartInstance->c10_is_active_c10_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_b_y, 1, c10_d_y);
  sf_mex_assign(&c10_st, c10_b_y, false);
  return c10_st;
}

static void set_sim_state_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_st)
{
  const mxArray *c10_u;
  int32_T c10_i;
  chartInstance->c10_doneDoubleBufferReInit = true;
  c10_u = sf_mex_dup(c10_st);
  c10_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 0)), "y",
                       chartInstance->c10_uv);
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    (*chartInstance->c10_y)[c10_i] = chartInstance->c10_uv[c10_i];
  }

  chartInstance->c10_is_active_c10_untitled_restored_from_autosave =
    c10_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 1)),
    "is_active_c10_untitled_restored_from_autosave");
  sf_mex_destroy(&c10_u);
  sf_mex_destroy(&c10_st);
}

static void sf_gateway_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c10_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_i2;
  c10_st.tls = chartInstance->c10_fEmlrtCtx;
  chartInstance->c10_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 2U, (real_T)
                      (*chartInstance->c10_I2)[c10_i]);
  }

  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 1U, *chartInstance->c10_x);
  for (c10_i1 = 0; c10_i1 < 273125; c10_i1++) {
    covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 0U, (real_T)
                      (*chartInstance->c10_I1)[c10_i1]);
  }

  chartInstance->c10_sfEvent = CALL_EVENT;
  c10_chartstep_c10_untitled_restored_from_autosave(chartInstance, &c10_st);
  c10_do_animation_call_c10_untitled_restored_from_autosave(chartInstance);
  for (c10_i2 = 0; c10_i2 < 273125; c10_i2++) {
    covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 3U, (real_T)
                      (*chartInstance->c10_y)[c10_i2]);
  }
}

static void mdl_start_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c10_decisionTxtStartIdx = 0U;
  static const uint32_T c10_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c10_chart_data_browse_helper);
  chartInstance->c10_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c10_RuntimeVar,
    &chartInstance->c10_IsDebuggerActive,
    &chartInstance->c10_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c10_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c10_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c10_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c10_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c10_decisionTxtStartIdx, &c10_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c10_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c10_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  14U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1972);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U, 1046,
    -1, 1052);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 1U, 1697,
    -1, 1739);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 2U, 1902,
    -1, 1913);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 3U, 1905,
    -1, 1913);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 4U, 1918,
    -1, 1931);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 5U, 1918,
    -1, 1939);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 6U, 1918,
    -1, 1946);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 7U, 1932,
    -1, 1939);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 8U, 1940,
    -1, 1946);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 9U, 633,
    -1, 661);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 10U, 872,
    -1, 883);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 11U, 875,
    -1, 883);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 12U, 961,
    -1, 991);
  covrtEmlSaturationInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 13U, 999,
    -1, 1003);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U, 414, 428, 627);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 1U, 432, 446, 619);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 2U, 1447, 1461,
                     1660);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 3U, 1465, 1479,
                     1652);
  covrtEmlInitFcn(chartInstance->c10_covrtInstance,
                  "E:/\xb2\xa9\xca\xbf\xbf\xc6\xd1\xd0/\xb5\xda\x37\xc6\xaa/\xb4\xfa\xc2\xeb/FT/mean_shift/mean_shift.m",
                  14U, 0U, 1U, 0U, 2U, 0U, 0U, 0U, 1U, 1U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 0U, "mean_shift",
                     0, -1, 620);
  covrtEmlIfInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 0U, 176, 189, -1,
                    279);
  covrtEmlIfInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 1U, 416, 436, 490,
                    493);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 0U, 152, 164,
                     291);
  covrtEmlWhileInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 0U, 112, 120,
                       493);
  covrtEmlRelationalInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 0U, 179,
    189, -1, 1U);
  covrtEmlRelationalInitFcn(chartInstance->c10_covrtInstance, 14U, 0U, 1U, 419,
    436, -1, 2U);
}

static void mdl_cleanup_runtime_resources_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c10_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c10_covrtInstance);
}

static void c10_chartstep_c10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp)
{
  emlrtStack c10_st;
  int32_T c10_i;
  real_T c10_b_x;
  int32_T c10_i1;
  int32_T c10_i2;
  uint8_T c10_I4[2784];
  int32_T c10_i3;
  int32_T c10_i4;
  int32_T c10_i5;
  int32_T c10_i6;
  int32_T c10_i7;
  int32_T c10_i8;
  int32_T c10_i9;
  int32_T c10_i10;
  int32_T c10_i11;
  int32_T c10_i12;
  int32_T c10_i13;
  int32_T c10_i14;
  int32_T c10_i15;
  int32_T c10_i16;
  int32_T c10_i17;
  int32_T c10_i18;
  int32_T c10_i19;
  real_T c10_d_imgn[638];
  int32_T c10_i20;
  int32_T c10_i21;
  int32_T c10_i22;
  int32_T c10_i23;
  int32_T c10_i24;
  int32_T c10_i25;
  int32_T c10_i26;
  int32_T c10_i27;
  real_T c10_e_imgn[759];
  int32_T c10_i28;
  int32_T c10_i29;
  int32_T c10_i30;
  int32_T c10_i31;
  int32_T c10_i32;
  int32_T c10_i33;
  real_T c10_f_imgn[690];
  int32_T c10_b_i;
  int32_T c10_i34;
  real_T c10_c_i;
  int32_T c10_i35;
  int32_T c10_i36;
  int32_T c10_j;
  int32_T c10_i37;
  real_T c10_b_j;
  int32_T c10_i38;
  real_T c10_d;
  int32_T c10_i39;
  real_T c10_d1;
  real_T c10_d2;
  boolean_T c10_covSaturation;
  boolean_T c10_b;
  int32_T c10_i40;
  real_T c10_d3;
  boolean_T c10_b1;
  boolean_T c10_b_covSaturation;
  boolean_T c10_b2;
  uint32_T c10_q0;
  uint8_T c10_u;
  boolean_T c10_b3;
  int32_T c10_i41;
  uint32_T c10_qY;
  boolean_T c10_c_covSaturation;
  uint8_T c10_u1;
  int32_T c10_i42;
  int32_T c10_i43;
  int32_T c10_i44;
  int32_T c10_c_j;
  int32_T c10_i45;
  uint32_T c10_u2;
  real_T c10_d4;
  int32_T c10_i46;
  int32_T c10_d_j;
  real_T c10_d5;
  uint8_T c10_maxval[575];
  boolean_T c10_b4;
  uint8_T c10_b_maxval;
  uint8_T c10_x_data[575];
  int32_T c10_d_i;
  boolean_T c10_b5;
  int32_T c10_k;
  boolean_T c10_b6;
  boolean_T c10_b7;
  int32_T c10_i47;
  int32_T c10_i48;
  int32_T c10_i49;
  real_T c10_dv[575];
  int32_T c10_i50;
  real_T c10_d6;
  int32_T c10_i51;
  boolean_T c10_d_covSaturation;
  int32_T c10_ser_size[2];
  int32_T c10_loop_ub;
  uint8_T c10_u3;
  int32_T c10_i52;
  int32_T c10_b_loop_ub;
  int32_T c10_nx;
  int32_T c10_i53;
  uint8_T c10_lm;
  int32_T c10_i54;
  const mxArray *c10_b_y = NULL;
  int32_T c10_i55;
  static char_T c10_b_cv[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  uint32_T c10_b_q0;
  const mxArray *c10_c_y = NULL;
  uint32_T c10_b_qY;
  int32_T c10_i56;
  real_T c10_ser[441];
  int32_T c10_i57;
  boolean_T c10_e_covSaturation;
  int32_T c10_i58;
  c10_emxArray_uint8_T *c10_c_x;
  int32_T c10_i59;
  uint32_T c10_u4;
  int32_T c10_i60;
  uint8_T c10_s;
  int32_T c10_b_k;
  uint8_T c10_d_y;
  uint8_T c10_e_y;
  uint8_T c10_f_y;
  uint8_T c10_g_y;
  uint8_T c10_h_y;
  int32_T c10_c_k;
  int32_T c10_i61;
  int32_T c10_d_k;
  uint8_T c10_d_x;
  uint32_T c10_u5;
  uint8_T c10_i_y;
  int32_T c10_i62;
  boolean_T c10_f_covSaturation;
  uint8_T c10_e_x;
  uint8_T c10_j_y;
  uint8_T c10_z;
  int32_T c10_i63;
  uint32_T c10_u6;
  int32_T c10_i64;
  int32_T c10_i65;
  int32_T c10_i66;
  int32_T c10_i67;
  int32_T c10_i68;
  int32_T c10_i69;
  int32_T c10_i70;
  int32_T c10_i71;
  int32_T c10_i72;
  int32_T c10_i73;
  int32_T c10_i74;
  int32_T c10_i75;
  int32_T c10_i76;
  int32_T c10_i77;
  int32_T c10_i78;
  int32_T c10_i79;
  real_T c10_g_imgn[638];
  int32_T c10_i80;
  int32_T c10_i81;
  int32_T c10_i82;
  int32_T c10_i83;
  int32_T c10_i84;
  int32_T c10_i85;
  int32_T c10_i86;
  int32_T c10_i87;
  real_T c10_h_imgn[759];
  int32_T c10_i88;
  int32_T c10_i89;
  int32_T c10_i90;
  int32_T c10_i91;
  int32_T c10_i92;
  int32_T c10_i93;
  real_T c10_i_imgn[690];
  int32_T c10_e_i;
  int32_T c10_i94;
  int32_T c10_i95;
  int32_T c10_i96;
  int32_T c10_e_j;
  int32_T c10_i97;
  int32_T c10_i98;
  real_T c10_d7;
  int32_T c10_i99;
  real_T c10_d8;
  boolean_T c10_b8;
  int32_T c10_i100;
  real_T c10_d9;
  boolean_T c10_b9;
  boolean_T c10_g_covSaturation;
  boolean_T c10_b10;
  int32_T c10_i101;
  real_T c10_d10;
  boolean_T c10_b11;
  boolean_T c10_h_covSaturation;
  real_T c10_b_a;
  uint32_T c10_c_q0;
  uint8_T c10_u7;
  int32_T c10_i102;
  int32_T c10_i103;
  int32_T c10_i104;
  uint32_T c10_c_qY;
  int32_T c10_i105;
  boolean_T c10_i_covSaturation;
  uint8_T c10_u8;
  int32_T c10_i106;
  real_T c10_c_a;
  real_T c10_d11;
  real_T c10_d12;
  int32_T c10_i107;
  boolean_T c10_j_covSaturation;
  real_T c10_d13;
  uint32_T c10_u9;
  boolean_T c10_b12;
  real_T c10_d_a;
  real_T c10_d14;
  boolean_T c10_b13;
  int32_T c10_i108;
  boolean_T c10_k_covSaturation;
  uint8_T c10_u10;
  boolean_T c10_b14;
  boolean_T c10_b15;
  int32_T c10_i109;
  real_T c10_d15;
  boolean_T c10_l_covSaturation;
  uint8_T c10_u11;
  int32_T c10_i110;
  int32_T c10_i111;
  uint32_T c10_u12;
  int32_T c10_i112;
  boolean_T c10_m_covSaturation;
  int32_T c10_i113;
  uint8_T c10_u13;
  int32_T c10_c_loop_ub;
  uint32_T c10_u14;
  int32_T c10_i114;
  boolean_T c10_n_covSaturation;
  int32_T c10_d_loop_ub;
  int32_T c10_b_nx;
  int32_T c10_i115;
  const mxArray *c10_k_y = NULL;
  int32_T c10_i116;
  static char_T c10_cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  const mxArray *c10_l_y = NULL;
  int32_T c10_i117;
  int32_T c10_i118;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    chartInstance->c10_I[c10_i] = (*chartInstance->c10_I1)[c10_i];
  }

  c10_b_x = *chartInstance->c10_x;
  for (c10_i1 = 0; c10_i1 < 273125; c10_i1++) {
    chartInstance->c10_IW2[c10_i1] = (*chartInstance->c10_I2)[c10_i1];
  }

  covrtEmlFcnEval(chartInstance->c10_covrtInstance, 4U, 0, 0);
  c10_st.site = &c10_emlrtRSI;
  for (c10_i2 = 0; c10_i2 < 273125; c10_i2++) {
    chartInstance->c10_b_I[c10_i2] = chartInstance->c10_I[c10_i2];
  }

  c10_imresize(chartInstance, &c10_st, chartInstance->c10_b_I, c10_I4);
  for (c10_i3 = 0; c10_i3 < 2784; c10_i3++) {
    chartInstance->c10_img1[c10_i3] = (real_T)c10_I4[c10_i3];
  }

  for (c10_i4 = 0; c10_i4 < 5451; c10_i4++) {
    chartInstance->c10_c_imgn[c10_i4] = 0.0;
  }

  c10_i5 = 0;
  c10_i6 = 0;
  for (c10_i7 = 0; c10_i7 < 58; c10_i7++) {
    for (c10_i9 = 0; c10_i9 < 48; c10_i9++) {
      chartInstance->c10_c_imgn[(c10_i9 + c10_i5) + 700] =
        chartInstance->c10_img1[c10_i9 + c10_i6];
    }

    c10_i5 += 69;
    c10_i6 += 48;
  }

  c10_i8 = 0;
  c10_i10 = 0;
  for (c10_i11 = 0; c10_i11 < 58; c10_i11++) {
    for (c10_i13 = 0; c10_i13 < 10; c10_i13++) {
      chartInstance->c10_c_imgn[(c10_i13 + c10_i8) + 690] =
        chartInstance->c10_img1[c10_i13 + c10_i10];
    }

    c10_i8 += 69;
    c10_i10 += 48;
  }

  c10_i12 = 0;
  c10_i14 = 0;
  for (c10_i15 = 0; c10_i15 < 11; c10_i15++) {
    for (c10_i17 = 0; c10_i17 < 58; c10_i17++) {
      c10_d_imgn[c10_i17 + c10_i12] = chartInstance->c10_c_imgn[(c10_i17 +
        c10_i14) + 3933];
    }

    c10_i12 += 58;
    c10_i14 += 69;
  }

  c10_i16 = 0;
  c10_i18 = 0;
  for (c10_i19 = 0; c10_i19 < 11; c10_i19++) {
    for (c10_i21 = 0; c10_i21 < 58; c10_i21++) {
      chartInstance->c10_c_imgn[(c10_i21 + c10_i16) + 4692] = c10_d_imgn[c10_i21
        + c10_i18];
    }

    c10_i16 += 69;
    c10_i18 += 58;
  }

  c10_i20 = 0;
  c10_i22 = 0;
  for (c10_i23 = 0; c10_i23 < 69; c10_i23++) {
    for (c10_i25 = 0; c10_i25 < 11; c10_i25++) {
      c10_e_imgn[c10_i25 + c10_i20] = chartInstance->c10_c_imgn[(c10_i25 +
        c10_i22) + 737];
    }

    c10_i20 += 11;
    c10_i22 += 69;
  }

  c10_i24 = 0;
  c10_i26 = 0;
  for (c10_i27 = 0; c10_i27 < 69; c10_i27++) {
    for (c10_i29 = 0; c10_i29 < 11; c10_i29++) {
      chartInstance->c10_c_imgn[(c10_i29 + c10_i24) + 748] = c10_e_imgn[c10_i29
        + c10_i26];
    }

    c10_i24 += 69;
    c10_i26 += 11;
  }

  c10_i28 = 0;
  for (c10_i30 = 0; c10_i30 < 10; c10_i30++) {
    for (c10_i32 = 0; c10_i32 < 69; c10_i32++) {
      c10_f_imgn[c10_i32 + c10_i28] = chartInstance->c10_c_imgn[(c10_i32 +
        c10_i28) + 690];
    }

    c10_i28 += 69;
  }

  c10_i31 = 0;
  for (c10_i33 = 0; c10_i33 < 10; c10_i33++) {
    for (c10_i34 = 0; c10_i34 < 69; c10_i34++) {
      chartInstance->c10_c_imgn[c10_i34 + c10_i31] = c10_f_imgn[c10_i34 +
        c10_i31];
    }

    c10_i31 += 69;
  }

  for (c10_b_i = 0; c10_b_i < 48; c10_b_i++) {
    c10_c_i = 11.0 + (real_T)c10_b_i;
    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 0, 1);
    for (c10_j = 0; c10_j < 58; c10_j++) {
      c10_b_j = 11.0 + (real_T)c10_j;
      covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 1, 1);
      c10_d = c10_c_i - 10.0;
      c10_d2 = c10_c_i + 10.0;
      c10_b = (c10_d > c10_d2);
      c10_b1 = c10_b;
      c10_b2 = false;
      c10_b3 = (c10_b1 || c10_b2);
      if (c10_b3) {
        c10_i43 = 1;
        c10_i44 = 0;
      } else {
        c10_i42 = (int32_T)emlrtIntegerCheckR2012b(c10_d, &c10_emlrtDCI, c10_sp);
        c10_i43 = emlrtDynamicBoundsCheckR2012b(c10_i42, 1, 69, &c10_emlrtBCI,
          c10_sp);
        c10_i45 = (int32_T)emlrtIntegerCheckR2012b(c10_d2, &c10_b_emlrtDCI,
          c10_sp);
        c10_i44 = emlrtDynamicBoundsCheckR2012b(c10_i45, 1, 69, &c10_b_emlrtBCI,
          c10_sp);
      }

      c10_d4 = c10_b_j - 10.0;
      c10_d5 = c10_b_j + 10.0;
      c10_b4 = (c10_d4 > c10_d5);
      c10_b5 = c10_b4;
      c10_b6 = false;
      c10_b7 = (c10_b5 || c10_b6);
      if (c10_b7) {
        c10_i49 = 1;
        c10_i50 = 0;
      } else {
        c10_i48 = (int32_T)emlrtIntegerCheckR2012b(c10_d4, &c10_c_emlrtDCI,
          c10_sp);
        c10_i49 = emlrtDynamicBoundsCheckR2012b(c10_i48, 1, 79, &c10_c_emlrtBCI,
          c10_sp);
        c10_i51 = (int32_T)emlrtIntegerCheckR2012b(c10_d5, &c10_d_emlrtDCI,
          c10_sp);
        c10_i50 = emlrtDynamicBoundsCheckR2012b(c10_i51, 1, 79, &c10_d_emlrtBCI,
          c10_sp);
      }

      c10_ser_size[0] = (c10_i44 - c10_i43) + 1;
      c10_ser_size[1] = (c10_i50 - c10_i49) + 1;
      c10_loop_ub = c10_i50 - c10_i49;
      for (c10_i52 = 0; c10_i52 <= c10_loop_ub; c10_i52++) {
        c10_b_loop_ub = c10_i44 - c10_i43;
        for (c10_i53 = 0; c10_i53 <= c10_b_loop_ub; c10_i53++) {
          chartInstance->c10_ser_data[c10_i53 + c10_ser_size[0] * c10_i52] =
            chartInstance->c10_c_imgn[((c10_i43 + c10_i53) + 69 * ((c10_i49 +
            c10_i52) - 1)) - 1];
        }
      }

      c10_st.site = &c10_b_emlrtRSI;
      c10_nx = c10_ser_size[0] * c10_ser_size[1];
      if (441 != c10_nx) {
        c10_b_y = NULL;
        sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_b_cv, 10, 0U, 1U, 0U, 2,
          1, 40), false);
        c10_c_y = NULL;
        sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_b_cv, 10, 0U, 1U, 0U, 2,
          1, 40), false);
        sf_mex_call(&c10_st, &c10_c_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                    sf_mex_call(&c10_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
      }

      for (c10_i55 = 0; c10_i55 < 441; c10_i55++) {
        c10_ser[c10_i55] = chartInstance->c10_ser_data[c10_i55];
      }

      c10_i56 = (int32_T)emlrtIntegerCheckR2012b(c10_c_i, &c10_i_emlrtDCI,
        c10_sp);
      c10_i58 = (int32_T)emlrtIntegerCheckR2012b(c10_b_j, &c10_i_emlrtDCI,
        c10_sp);
      c10_st.site = &c10_c_emlrtRSI;
      chartInstance->c10_c_imgn[(emlrtDynamicBoundsCheckR2012b(c10_i56, 1, 69,
        &c10_i_emlrtBCI, c10_sp) + 69 * (emlrtDynamicBoundsCheckR2012b(c10_i58,
        1, 79, &c10_j_emlrtBCI, c10_sp) - 1)) - 1] = c10_mean_shift
        (chartInstance, &c10_st, c10_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 0, 0);
  c10_i35 = 0;
  c10_i36 = 0;
  for (c10_i37 = 0; c10_i37 < 58; c10_i37++) {
    for (c10_i38 = 0; c10_i38 < 48; c10_i38++) {
      c10_d1 = muDoubleScalarRound(chartInstance->c10_c_imgn[(c10_i38 + c10_i36)
        + 700]);
      c10_covSaturation = false;
      if (c10_d1 < 256.0) {
        if (c10_d1 >= 0.0) {
          c10_u = (uint8_T)c10_d1;
        } else {
          c10_covSaturation = true;
          c10_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 633, 28);
        }
      } else if (c10_d1 >= 256.0) {
        c10_covSaturation = true;
        c10_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 633, 28);
      } else {
        c10_u = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 9, 0,
        c10_covSaturation);
      c10_I4[c10_i38 + c10_i35] = c10_u;
    }

    c10_i35 += 48;
    c10_i36 += 69;
  }

  c10_st.site = &c10_d_emlrtRSI;
  c10_b_imresize(chartInstance, &c10_st, c10_I4, chartInstance->c10_imgn);
  for (c10_i39 = 0; c10_i39 < 273125; c10_i39++) {
    c10_d3 = muDoubleScalarRound(0.5 * (real_T)chartInstance->c10_imgn[c10_i39]);
    c10_b_covSaturation = false;
    if (c10_d3 < 256.0) {
      if (c10_d3 >= 0.0) {
        c10_u1 = (uint8_T)c10_d3;
      } else {
        c10_b_covSaturation = true;
        c10_u1 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 875, 8);
      }
    } else if (c10_d3 >= 256.0) {
      c10_b_covSaturation = true;
      c10_u1 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 875, 8);
    } else {
      c10_u1 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 11, 0,
      c10_b_covSaturation);
    chartInstance->c10_imgn[c10_i39] = c10_u1;
  }

  for (c10_i40 = 0; c10_i40 < 273125; c10_i40++) {
    c10_q0 = chartInstance->c10_I[c10_i40];
    c10_qY = c10_q0 - (uint32_T)chartInstance->c10_imgn[c10_i40];
    c10_c_covSaturation = false;
    if (c10_qY > c10_q0) {
      c10_c_covSaturation = true;
      c10_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 872, 11);
    }

    c10_u2 = c10_qY;
    if (c10_u2 > 255U) {
      c10_c_covSaturation = true;
      c10_u2 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 872, 11);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 10, 0,
      c10_c_covSaturation);
    chartInstance->c10_I[c10_i40] = (uint8_T)c10_u2;
  }

  c10_st.site = &c10_e_emlrtRSI;
  for (c10_i41 = 0; c10_i41 < 273125; c10_i41++) {
    chartInstance->c10_b_IW2[c10_i41] = chartInstance->c10_IW2[c10_i41];
  }

  c10_imfilter(chartInstance, &c10_st, chartInstance->c10_b_IW2,
               chartInstance->c10_imgn);
  for (c10_c_j = 0; c10_c_j < 575; c10_c_j++) {
    c10_d_j = c10_c_j;
    c10_maxval[c10_d_j] = chartInstance->c10_imgn[475 * c10_d_j];
    for (c10_d_i = 0; c10_d_i < 474; c10_d_i++) {
      if (c10_maxval[c10_d_j] < chartInstance->c10_imgn[(c10_d_i + 475 * c10_d_j)
          + 1]) {
        c10_maxval[c10_d_j] = chartInstance->c10_imgn[(c10_d_i + 475 * c10_d_j)
          + 1];
      }
    }
  }

  for (c10_i46 = 0; c10_i46 < 575; c10_i46++) {
    c10_x_data[c10_i46] = c10_maxval[c10_i46];
  }

  c10_b_maxval = c10_x_data[0];
  for (c10_k = 0; c10_k < 574; c10_k++) {
    if (c10_b_maxval < c10_x_data[c10_k + 1]) {
      c10_b_maxval = c10_x_data[c10_k + 1];
    }
  }

  for (c10_i47 = 0; c10_i47 < 273125; c10_i47++) {
    chartInstance->c10_c_IW2[c10_i47] = chartInstance->c10_IW2[c10_i47];
  }

  c10_mean(chartInstance, chartInstance->c10_c_IW2, c10_dv);
  c10_d6 = muDoubleScalarRound((real_T)c10_b_maxval - 0.3 * c10_b_mean
    (chartInstance, c10_dv));
  c10_d_covSaturation = false;
  if (c10_d6 < 256.0) {
    if (c10_d6 >= 0.0) {
      c10_u3 = (uint8_T)c10_d6;
    } else {
      c10_d_covSaturation = true;
      c10_u3 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 961, 30);
    }
  } else if (c10_d6 >= 256.0) {
    c10_d_covSaturation = true;
    c10_u3 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 961, 30);
  } else {
    c10_u3 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 12, 0,
    c10_d_covSaturation);
  c10_lm = c10_u3;
  for (c10_i54 = 0; c10_i54 < 273125; c10_i54++) {
    c10_b_q0 = chartInstance->c10_imgn[c10_i54];
    c10_b_qY = c10_b_q0 - (uint32_T)c10_lm;
    c10_e_covSaturation = false;
    if (c10_b_qY > c10_b_q0) {
      c10_e_covSaturation = true;
      c10_b_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 999, 4);
    }

    c10_u4 = c10_b_qY;
    if (c10_u4 > 255U) {
      c10_e_covSaturation = true;
      c10_u4 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 999, 4);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 13, 0,
      c10_e_covSaturation);
    chartInstance->c10_b_imgn[c10_i54] = (uint8_T)c10_u4;
  }

  c10_st.site = &c10_f_emlrtRSI;
  c10_b_power(chartInstance, chartInstance->c10_b_imgn, chartInstance->c10_sm);
  for (c10_i57 = 0; c10_i57 < 273125; c10_i57++) {
    chartInstance->c10_imgn[c10_i57] = chartInstance->c10_sm[c10_i57];
  }

  c10_emxInit_uint8_T(chartInstance, c10_sp, &c10_c_x, 1, &c10_emlrtRTEI);
  c10_i59 = c10_c_x->size[0];
  c10_c_x->size[0] = 273125;
  c10_emxEnsureCapacity_uint8_T(chartInstance, c10_sp, c10_c_x, c10_i59,
    &c10_emlrtRTEI);
  for (c10_i60 = 0; c10_i60 < 273125; c10_i60++) {
    c10_c_x->data[c10_i60] = chartInstance->c10_imgn[c10_i60];
  }

  c10_s = c10_c_x->data[0];
  for (c10_b_k = 0; c10_b_k < 273124; c10_b_k++) {
    if (c10_s < c10_c_x->data[c10_b_k + 1]) {
      c10_s = c10_c_x->data[c10_b_k + 1];
    }
  }

  c10_emxFree_uint8_T(chartInstance, &c10_c_x);
  c10_d_y = c10_s;
  c10_e_y = c10_d_y;
  c10_f_y = c10_e_y;
  c10_g_y = c10_f_y;
  c10_h_y = c10_g_y;
  for (c10_c_k = 0; c10_c_k < 273125; c10_c_k++) {
    c10_d_k = c10_c_k;
    c10_d_x = chartInstance->c10_sm[c10_d_k];
    c10_i_y = c10_h_y;
    if (c10_i_y == 0) {
      if (c10_d_x == 0) {
        c10_z = 0U;
      } else {
        c10_z = MAX_uint8_T;
      }
    } else {
      c10_e_x = c10_d_x;
      c10_j_y = c10_i_y;
      c10_u6 = c10_j_y;
      if (c10_u6 == 0U) {
        c10_z = MAX_uint8_T;
      } else {
        c10_z = (uint8_T)((uint32_T)c10_e_x / c10_u6);
      }

      c10_e_x = (uint8_T)((uint32_T)c10_e_x - (uint32_T)(uint8_T)((uint32_T)
        c10_z * (uint32_T)c10_j_y));
      if ((c10_e_x > 0) && (c10_e_x >= (uint8_T)((uint32_T)(uint8_T)((uint32_T)
             c10_j_y >> 1) + (uint32_T)(uint8_T)(c10_j_y & 1)))) {
        c10_z = (uint8_T)((uint32_T)c10_z + 1U);
      }
    }

    chartInstance->c10_sa[c10_d_k] = c10_z;
  }

  for (c10_i61 = 0; c10_i61 < 273125; c10_i61++) {
    c10_u5 = (uint32_T)chartInstance->c10_IW2[c10_i61] * (uint32_T)
      chartInstance->c10_sa[c10_i61];
    c10_f_covSaturation = false;
    if (c10_u5 > 255U) {
      c10_f_covSaturation = true;
      c10_u5 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1046, 6);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 0, 0,
      c10_f_covSaturation);
    chartInstance->c10_sa[c10_i61] = (uint8_T)c10_u5;
  }

  c10_st.site = &c10_g_emlrtRSI;
  for (c10_i62 = 0; c10_i62 < 273125; c10_i62++) {
    chartInstance->c10_d_IW2[c10_i62] = chartInstance->c10_IW2[c10_i62];
  }

  c10_imresize(chartInstance, &c10_st, chartInstance->c10_d_IW2, c10_I4);
  for (c10_i63 = 0; c10_i63 < 2784; c10_i63++) {
    chartInstance->c10_img1[c10_i63] = (real_T)c10_I4[c10_i63];
  }

  for (c10_i64 = 0; c10_i64 < 5451; c10_i64++) {
    chartInstance->c10_c_imgn[c10_i64] = 0.0;
  }

  c10_i65 = 0;
  c10_i66 = 0;
  for (c10_i67 = 0; c10_i67 < 58; c10_i67++) {
    for (c10_i69 = 0; c10_i69 < 48; c10_i69++) {
      chartInstance->c10_c_imgn[(c10_i69 + c10_i65) + 700] =
        chartInstance->c10_img1[c10_i69 + c10_i66];
    }

    c10_i65 += 69;
    c10_i66 += 48;
  }

  c10_i68 = 0;
  c10_i70 = 0;
  for (c10_i71 = 0; c10_i71 < 58; c10_i71++) {
    for (c10_i73 = 0; c10_i73 < 10; c10_i73++) {
      chartInstance->c10_c_imgn[(c10_i73 + c10_i68) + 690] =
        chartInstance->c10_img1[c10_i73 + c10_i70];
    }

    c10_i68 += 69;
    c10_i70 += 48;
  }

  c10_i72 = 0;
  c10_i74 = 0;
  for (c10_i75 = 0; c10_i75 < 11; c10_i75++) {
    for (c10_i77 = 0; c10_i77 < 58; c10_i77++) {
      c10_g_imgn[c10_i77 + c10_i72] = chartInstance->c10_c_imgn[(c10_i77 +
        c10_i74) + 3933];
    }

    c10_i72 += 58;
    c10_i74 += 69;
  }

  c10_i76 = 0;
  c10_i78 = 0;
  for (c10_i79 = 0; c10_i79 < 11; c10_i79++) {
    for (c10_i81 = 0; c10_i81 < 58; c10_i81++) {
      chartInstance->c10_c_imgn[(c10_i81 + c10_i76) + 4692] = c10_g_imgn[c10_i81
        + c10_i78];
    }

    c10_i76 += 69;
    c10_i78 += 58;
  }

  c10_i80 = 0;
  c10_i82 = 0;
  for (c10_i83 = 0; c10_i83 < 69; c10_i83++) {
    for (c10_i85 = 0; c10_i85 < 11; c10_i85++) {
      c10_h_imgn[c10_i85 + c10_i80] = chartInstance->c10_c_imgn[(c10_i85 +
        c10_i82) + 737];
    }

    c10_i80 += 11;
    c10_i82 += 69;
  }

  c10_i84 = 0;
  c10_i86 = 0;
  for (c10_i87 = 0; c10_i87 < 69; c10_i87++) {
    for (c10_i89 = 0; c10_i89 < 11; c10_i89++) {
      chartInstance->c10_c_imgn[(c10_i89 + c10_i84) + 748] = c10_h_imgn[c10_i89
        + c10_i86];
    }

    c10_i84 += 69;
    c10_i86 += 11;
  }

  c10_i88 = 0;
  for (c10_i90 = 0; c10_i90 < 10; c10_i90++) {
    for (c10_i92 = 0; c10_i92 < 69; c10_i92++) {
      c10_i_imgn[c10_i92 + c10_i88] = chartInstance->c10_c_imgn[(c10_i92 +
        c10_i88) + 690];
    }

    c10_i88 += 69;
  }

  c10_i91 = 0;
  for (c10_i93 = 0; c10_i93 < 10; c10_i93++) {
    for (c10_i94 = 0; c10_i94 < 69; c10_i94++) {
      chartInstance->c10_c_imgn[c10_i94 + c10_i91] = c10_i_imgn[c10_i94 +
        c10_i91];
    }

    c10_i91 += 69;
  }

  for (c10_e_i = 0; c10_e_i < 48; c10_e_i++) {
    c10_c_i = 11.0 + (real_T)c10_e_i;
    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 2, 1);
    for (c10_e_j = 0; c10_e_j < 58; c10_e_j++) {
      c10_b_j = 11.0 + (real_T)c10_e_j;
      covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 3, 1);
      c10_d7 = c10_c_i - 10.0;
      c10_d8 = c10_c_i + 10.0;
      c10_b8 = (c10_d7 > c10_d8);
      c10_b9 = c10_b8;
      c10_b10 = false;
      c10_b11 = (c10_b9 || c10_b10);
      if (c10_b11) {
        c10_i103 = 1;
        c10_i105 = 0;
      } else {
        c10_i102 = (int32_T)emlrtIntegerCheckR2012b(c10_d7, &c10_e_emlrtDCI,
          c10_sp);
        c10_i103 = emlrtDynamicBoundsCheckR2012b(c10_i102, 1, 69,
          &c10_e_emlrtBCI, c10_sp);
        c10_i106 = (int32_T)emlrtIntegerCheckR2012b(c10_d8, &c10_f_emlrtDCI,
          c10_sp);
        c10_i105 = emlrtDynamicBoundsCheckR2012b(c10_i106, 1, 69,
          &c10_f_emlrtBCI, c10_sp);
      }

      c10_d12 = c10_b_j - 10.0;
      c10_d13 = c10_b_j + 10.0;
      c10_b12 = (c10_d12 > c10_d13);
      c10_b13 = c10_b12;
      c10_b14 = false;
      c10_b15 = (c10_b13 || c10_b14);
      if (c10_b15) {
        c10_i111 = 1;
        c10_i112 = 0;
      } else {
        c10_i110 = (int32_T)emlrtIntegerCheckR2012b(c10_d12, &c10_g_emlrtDCI,
          c10_sp);
        c10_i111 = emlrtDynamicBoundsCheckR2012b(c10_i110, 1, 79,
          &c10_g_emlrtBCI, c10_sp);
        c10_i113 = (int32_T)emlrtIntegerCheckR2012b(c10_d13, &c10_h_emlrtDCI,
          c10_sp);
        c10_i112 = emlrtDynamicBoundsCheckR2012b(c10_i113, 1, 79,
          &c10_h_emlrtBCI, c10_sp);
      }

      c10_ser_size[0] = (c10_i105 - c10_i103) + 1;
      c10_ser_size[1] = (c10_i112 - c10_i111) + 1;
      c10_c_loop_ub = c10_i112 - c10_i111;
      for (c10_i114 = 0; c10_i114 <= c10_c_loop_ub; c10_i114++) {
        c10_d_loop_ub = c10_i105 - c10_i103;
        for (c10_i115 = 0; c10_i115 <= c10_d_loop_ub; c10_i115++) {
          chartInstance->c10_ser_data[c10_i115 + c10_ser_size[0] * c10_i114] =
            chartInstance->c10_c_imgn[((c10_i103 + c10_i115) + 69 * ((c10_i111 +
            c10_i114) - 1)) - 1];
        }
      }

      c10_st.site = &c10_h_emlrtRSI;
      c10_b_nx = c10_ser_size[0] * c10_ser_size[1];
      if (441 != c10_b_nx) {
        c10_k_y = NULL;
        sf_mex_assign(&c10_k_y, sf_mex_create("y", c10_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c10_l_y = NULL;
        sf_mex_assign(&c10_l_y, sf_mex_create("y", c10_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c10_st, &c10_c_emlrtMCI, "error", 0U, 2U, 14, c10_k_y, 14,
                    sf_mex_call(&c10_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_st, NULL, "message", 1U, 1U, 14, c10_l_y)));
      }

      for (c10_i116 = 0; c10_i116 < 441; c10_i116++) {
        c10_ser[c10_i116] = chartInstance->c10_ser_data[c10_i116];
      }

      c10_i117 = (int32_T)emlrtIntegerCheckR2012b(c10_c_i, &c10_j_emlrtDCI,
        c10_sp);
      c10_i118 = (int32_T)emlrtIntegerCheckR2012b(c10_b_j, &c10_j_emlrtDCI,
        c10_sp);
      c10_st.site = &c10_i_emlrtRSI;
      chartInstance->c10_c_imgn[(emlrtDynamicBoundsCheckR2012b(c10_i117, 1, 69,
        &c10_k_emlrtBCI, c10_sp) + 69 * (emlrtDynamicBoundsCheckR2012b(c10_i118,
        1, 79, &c10_l_emlrtBCI, c10_sp) - 1)) - 1] = c10_mean_shift
        (chartInstance, &c10_st, c10_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 2, 0);
  c10_i95 = 0;
  c10_i96 = 0;
  for (c10_i97 = 0; c10_i97 < 58; c10_i97++) {
    for (c10_i98 = 0; c10_i98 < 48; c10_i98++) {
      chartInstance->c10_img1[c10_i98 + c10_i95] = chartInstance->c10_c_imgn
        [(c10_i98 + c10_i96) + 700];
    }

    c10_i95 += 48;
    c10_i96 += 69;
  }

  c10_st.site = &c10_j_emlrtRSI;
  c10_c_imresize(chartInstance, &c10_st, chartInstance->c10_img1,
                 chartInstance->c10_dv1);
  for (c10_i99 = 0; c10_i99 < 273125; c10_i99++) {
    c10_d9 = muDoubleScalarRound(chartInstance->c10_dv1[c10_i99]);
    c10_g_covSaturation = false;
    if (c10_d9 < 256.0) {
      if (c10_d9 >= 0.0) {
        c10_u7 = (uint8_T)c10_d9;
      } else {
        c10_g_covSaturation = true;
        c10_u7 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1697, 42);
      }
    } else if (c10_d9 >= 256.0) {
      c10_g_covSaturation = true;
      c10_u7 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1697, 42);
    } else {
      c10_u7 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 1, 0,
      c10_g_covSaturation);
    chartInstance->c10_imgn[c10_i99] = c10_u7;
  }

  for (c10_i100 = 0; c10_i100 < 273125; c10_i100++) {
    c10_d10 = muDoubleScalarRound(0.5 * (real_T)chartInstance->c10_imgn[c10_i100]);
    c10_h_covSaturation = false;
    if (c10_d10 < 256.0) {
      if (c10_d10 >= 0.0) {
        c10_u8 = (uint8_T)c10_d10;
      } else {
        c10_h_covSaturation = true;
        c10_u8 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1905, 8);
      }
    } else if (c10_d10 >= 256.0) {
      c10_h_covSaturation = true;
      c10_u8 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1905, 8);
    } else {
      c10_u8 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 3, 0,
      c10_h_covSaturation);
    chartInstance->c10_imgn[c10_i100] = c10_u8;
  }

  for (c10_i101 = 0; c10_i101 < 273125; c10_i101++) {
    c10_c_q0 = chartInstance->c10_IW2[c10_i101];
    c10_c_qY = c10_c_q0 - (uint32_T)chartInstance->c10_imgn[c10_i101];
    c10_i_covSaturation = false;
    if (c10_c_qY > c10_c_q0) {
      c10_i_covSaturation = true;
      c10_c_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 1902, 11);
    }

    c10_u9 = c10_c_qY;
    if (c10_u9 > 255U) {
      c10_i_covSaturation = true;
      c10_u9 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1902, 11);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 2, 0,
      c10_i_covSaturation);
    chartInstance->c10_IW2[c10_i101] = (uint8_T)c10_u9;
  }

  c10_b_a = 0.5 + c10_b_x;
  for (c10_i104 = 0; c10_i104 < 273125; c10_i104++) {
    c10_d11 = muDoubleScalarRound(c10_b_a * (real_T)chartInstance->
      c10_I[c10_i104]);
    c10_j_covSaturation = false;
    if (c10_d11 < 256.0) {
      if (c10_d11 >= 0.0) {
        c10_u10 = (uint8_T)c10_d11;
      } else {
        c10_j_covSaturation = true;
        c10_u10 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1918, 13);
      }
    } else if (c10_d11 >= 256.0) {
      c10_j_covSaturation = true;
      c10_u10 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1918, 13);
    } else {
      c10_u10 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 4, 0,
      c10_j_covSaturation);
    chartInstance->c10_I[c10_i104] = c10_u10;
  }

  c10_c_a = c10_b_x;
  for (c10_i107 = 0; c10_i107 < 273125; c10_i107++) {
    c10_d14 = muDoubleScalarRound(c10_c_a * (real_T)chartInstance->
      c10_IW2[c10_i107]);
    c10_k_covSaturation = false;
    if (c10_d14 < 256.0) {
      if (c10_d14 >= 0.0) {
        c10_u11 = (uint8_T)c10_d14;
      } else {
        c10_k_covSaturation = true;
        c10_u11 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1932, 7);
      }
    } else if (c10_d14 >= 256.0) {
      c10_k_covSaturation = true;
      c10_u11 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1932, 7);
    } else {
      c10_u11 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 7, 0,
      c10_k_covSaturation);
    chartInstance->c10_IW2[c10_i107] = c10_u11;
  }

  c10_d_a = c10_b_x;
  for (c10_i108 = 0; c10_i108 < 273125; c10_i108++) {
    c10_d15 = muDoubleScalarRound(c10_d_a * (real_T)chartInstance->
      c10_sa[c10_i108]);
    c10_l_covSaturation = false;
    if (c10_d15 < 256.0) {
      if (c10_d15 >= 0.0) {
        c10_u13 = (uint8_T)c10_d15;
      } else {
        c10_l_covSaturation = true;
        c10_u13 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1940, 6);
      }
    } else if (c10_d15 >= 256.0) {
      c10_l_covSaturation = true;
      c10_u13 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1940, 6);
    } else {
      c10_u13 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 8, 0,
      c10_l_covSaturation);
    chartInstance->c10_sa[c10_i108] = c10_u13;
  }

  for (c10_i109 = 0; c10_i109 < 273125; c10_i109++) {
    c10_u12 = (uint32_T)chartInstance->c10_I[c10_i109] + (uint32_T)
      chartInstance->c10_IW2[c10_i109];
    c10_m_covSaturation = false;
    if (c10_u12 > 255U) {
      c10_m_covSaturation = true;
      c10_u12 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1918, 21);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 5, 0,
      c10_m_covSaturation);
    c10_u14 = (uint32_T)(uint8_T)c10_u12 + (uint32_T)chartInstance->
      c10_sa[c10_i109];
    c10_n_covSaturation = false;
    if (c10_u14 > 255U) {
      c10_n_covSaturation = true;
      c10_u14 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1918, 28);
    }

    covrtSaturationUpdateFcn(chartInstance->c10_covrtInstance, 4, 0, 6, 0,
      c10_n_covSaturation);
    (*chartInstance->c10_y)[c10_i109] = (uint8_T)c10_u14;
  }
}

static void initSimStructsc10_untitled_restored_from_autosave
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c10_mean_shift(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, real_T c10_ser[441], real_T c10_p)
{
  int32_T c10_i;
  int32_T c10_i1;
  real_T c10_tmp[441];
  real_T c10_pre_w;
  real_T c10_point;
  int32_T c10_exitg1;
  int32_T c10_i2;
  int32_T c10_b_i;
  real_T c10_c_i;
  int32_T c10_i3;
  real_T c10_b_ser[441];
  int32_T c10_i4;
  int32_T c10_i5;
  int32_T c10_i6;
  real_T c10_K[441];
  int32_T c10_i7;
  int32_T c10_i8;
  real_T c10_w;
  real_T c10_b_tmp[441];
  real_T c10_b_x;
  real_T c10_c_x;
  real_T c10_d_x;
  real_T c10_b_y;
  real_T c10_e_x;
  real_T c10_f_x;
  real_T c10_g_x;
  real_T c10_c_y;
  covrtEmlFcnEval(chartInstance->c10_covrtInstance, 14U, 0, 0);
  for (c10_i = 0; c10_i < 441; c10_i++) {
    c10_tmp[c10_i] = c10_ser[c10_i];
  }

  c10_i1 = (int32_T)emlrtIntegerCheckR2012b(c10_p, &c10_k_emlrtDCI, c10_sp);
  c10_pre_w = c10_tmp[emlrtDynamicBoundsCheckR2012b(c10_i1, 1, 441,
    &c10_m_emlrtBCI, c10_sp) - 1];
  c10_point = c10_p;
  do {
    c10_exitg1 = 0;
    covrtEmlWhileEval(chartInstance->c10_covrtInstance, 14U, 0, 0, true);
    for (c10_i2 = 0; c10_i2 < 441; c10_i2++) {
      c10_ser[c10_i2] = c10_tmp[c10_i2] - c10_pre_w;
    }

    for (c10_b_i = 0; c10_b_i < 441; c10_b_i++) {
      c10_c_i = 1.0 + (real_T)c10_b_i;
      covrtEmlForEval(chartInstance->c10_covrtInstance, 14U, 0, 0, 1);
      if (covrtEmlIfEval(chartInstance->c10_covrtInstance, 14U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c10_covrtInstance, 14U, 0U, 0U, c10_c_i,
                          c10_point, -1, 1U, c10_c_i != c10_point))) {
        c10_i4 = (int32_T)emlrtIntegerCheckR2012b(c10_c_i, &c10_l_emlrtDCI,
          c10_sp);
        c10_i6 = (int32_T)emlrtIntegerCheckR2012b(c10_c_i, &c10_m_emlrtDCI,
          c10_sp);
        c10_ser[emlrtDynamicBoundsCheckR2012b(c10_i6, 1, 441, &c10_o_emlrtBCI,
          c10_sp) - 1] = c10_ser[emlrtDynamicBoundsCheckR2012b(c10_i4, 1, 441,
          &c10_n_emlrtBCI, c10_sp) - 1] / (c10_c_i - c10_point);
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c10_covrtInstance, 14U, 0, 0, 0);
    for (c10_i3 = 0; c10_i3 < 441; c10_i3++) {
      c10_b_ser[c10_i3] = c10_ser[c10_i3];
    }

    c10_power(chartInstance, c10_b_ser, c10_ser);
    for (c10_i5 = 0; c10_i5 < 441; c10_i5++) {
      c10_K[c10_i5] = -0.5 * c10_ser[c10_i5];
    }

    c10_b_exp(chartInstance, c10_K);
    for (c10_i7 = 0; c10_i7 < 441; c10_i7++) {
      c10_K[c10_i7] *= 3.9894228040143274;
    }

    for (c10_i8 = 0; c10_i8 < 441; c10_i8++) {
      c10_b_tmp[c10_i8] = c10_tmp[c10_i8] * c10_K[c10_i8];
    }

    c10_w = c10_c_sum(chartInstance, c10_b_tmp) / c10_c_sum(chartInstance, c10_K);
    c10_b_x = c10_w - c10_pre_w;
    c10_c_x = c10_b_x;
    c10_d_x = c10_c_x;
    c10_b_y = muDoubleScalarAbs(c10_d_x);
    c10_e_x = c10_w - c10_pre_w;
    c10_f_x = c10_e_x;
    c10_g_x = c10_f_x;
    c10_c_y = muDoubleScalarAbs(c10_g_x);
    if (covrtEmlIfEval(chartInstance->c10_covrtInstance, 14U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c10_covrtInstance, 14U, 0U, 1U, c10_b_y,
                        0.01, -1, 2U, c10_c_y < 0.01))) {
      c10_exitg1 = 1;
    } else {
      c10_pre_w = c10_w;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  } while (c10_exitg1 == 0);

  return c10_w;
}

const mxArray
  *sf_c10_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  const char * c10_data[4] = {
    "789c6360f4f465646060e0638000033608cd0bc4c78012025071260654802ecf8885ce4352cfcac0c2f0b31ea20f260fd2df0fe527e7e795a4569440387989b9"
    "a9709d29f9b99979897925219505a90c45a9c5f93965a9296099b4cc9cd490ccdcd460648e1f8897eb862405e780a4406ce78cd4e4ece0d25c86a28c62840b73",
    "9039f0f04840f2efaf7a847f59b08407b23c3a00f9f72823828fae8e0f1a1e0564da07339a8b807d30f9dcd4c4bcf8e28cccb41254fb1328b49f0da7fd109994"
    "fcd2a49c54847d3b28b44f07877d82503a024a4733b832c402b115833e4354f0eb888b952215fa0c3ad5e60cc7abf5191efb3102796e0c2140d95c8654864460",
    "da8d672866c860c864486328c121aa071425146efc44fa039946f6072f030738df3cabbb0116c566df4f02f6fd24c3be6bc1bf1be9691f0c0c947d1538ccc396"
    "0eb1d92786c33e0134f972b3e4489710e7a2d0a2c810fff0c40c5313bf4c2757843b0208d843c81d0c487c6477d0da7c00bf7d8fb4",
    "" };

  c10_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c10_data[0], 1608U, &c10_nameCaptureInfo);
  return c10_nameCaptureInfo;
}

static void c10_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_c_Ain[273125], uint8_T
  c10_Bout[2784])
{
  emlrtStack c10_st;
  real_T c10_c_weights_data[1276];
  int32_T c10_weights_size[2];
  int32_T c10_indices_data[1276];
  int32_T c10_indices_size[2];
  int32_T c10_i;
  uint8_T c10_c_APartialResize[27550];
  real_T c10_d_weights_data[1056];
  int32_T c10_b_weights_size[2];
  int32_T c10_b_indices_data[1056];
  int32_T c10_b_indices_size[2];
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_k_emlrtRSI;
  c10_contributions(chartInstance, &c10_st, c10_c_weights_data, c10_weights_size,
                    c10_indices_data, c10_indices_size);
  c10_st.site = &c10_l_emlrtRSI;
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    chartInstance->c10_b_Ain[c10_i] = c10_c_Ain[c10_i];
  }

  c10_resizeAlongDim(chartInstance, &c10_st, chartInstance->c10_b_Ain,
                     c10_c_weights_data, c10_weights_size, c10_indices_data,
                     c10_c_APartialResize);
  c10_st.site = &c10_m_emlrtRSI;
  c10_b_contributions(chartInstance, &c10_st, c10_d_weights_data,
                      c10_b_weights_size, c10_b_indices_data, c10_b_indices_size);
  c10_st.site = &c10_n_emlrtRSI;
  c10_b_resizeAlongDim(chartInstance, &c10_st, c10_c_APartialResize,
                       c10_d_weights_data, c10_b_weights_size,
                       c10_b_indices_data, c10_Bout);
}

static void c10_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2])
{
  emlrtStack c10_st;
  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_iv[22];
  int32_T c10_iv1[58];
  int32_T c10_b_indices[1276];
  static int32_T c10_iv2[58] = { -5, 5, 15, 25, 35, 45, 55, 64, 74, 84, 94, 104,
    114, 124, 134, 144, 154, 164, 173, 183, 193, 203, 213, 223, 233, 243, 253,
    263, 273, 283, 292, 302, 312, 322, 332, 342, 352, 362, 372, 382, 392, 402,
    411, 421, 431, 441, 451, 461, 471, 481, 491, 501, 511, 520, 530, 540, 550,
    560 };

  int32_T c10_i2;
  int32_T c10_i3;
  real_T c10_c_indices[1276];
  real_T c10_dv[58];
  real_T c10_b_x[1276];
  static real_T c10_b_dv1[58] = { 5.4568965517241379, 15.370689655172413,
    25.284482758620687, 35.198275862068968, 45.112068965517246,
    55.025862068965516, 64.939655172413779, 74.853448275862064,
    84.767241379310335, 94.681034482758619, 104.59482758620689,
    114.50862068965516, 124.42241379310344, 134.33620689655172, 144.25,
    154.16379310344828, 164.07758620689657, 173.99137931034483,
    183.90517241379311, 193.81896551724139, 203.73275862068965,
    213.64655172413794, 223.56034482758622, 233.47413793103448,
    243.38793103448276, 253.30172413793105, 263.2155172413793,
    273.12931034482756, 283.04310344827587, 292.95689655172413,
    302.87068965517244, 312.7844827586207, 322.69827586206895,
    332.61206896551727, 342.52586206896552, 352.43965517241378,
    362.35344827586209, 372.26724137931035, 382.18103448275861,
    392.09482758620692, 402.00862068965517, 411.92241379310343,
    421.83620689655174, 431.75, 441.66379310344826, 451.57758620689657,
    461.49137931034483, 471.40517241379308, 481.31896551724139,
    491.23275862068965, 501.14655172413791, 511.06034482758622,
    520.97413793103442, 530.88793103448268, 540.80172413793093,
    550.71551724137919, 560.62931034482756, 570.54310344827582 };

  int32_T c10_i4;
  int32_T c10_i5;
  int32_T c10_i6;
  boolean_T c10_bv[1276];
  int32_T c10_i7;
  boolean_T c10_bv1[1276];
  int32_T c10_i8;
  boolean_T c10_bv2[1276];
  int32_T c10_i9;
  boolean_T c10_bv3[1276];
  int32_T c10_i10;
  int32_T c10_i11;
  real_T c10_c_x[1276];
  real_T c10_dv2[58];
  int32_T c10_i12;
  real_T c10_d_x[1276];
  int32_T c10_aux[1150];
  int32_T c10_b_i;
  int32_T c10_c_i;
  real_T c10_d_i;
  int32_T c10_i13;
  real_T c10_oldIdx;
  real_T c10_k;
  real_T c10_e_x[1276];
  boolean_T c10_copyCols[22];
  real_T c10_b_a;
  int32_T c10_trueCount;
  int32_T c10_c;
  int32_T c10_e_i;
  int32_T c10_tmp_size[2];
  int32_T c10_partialTrueCount;
  int32_T c10_f_i;
  int32_T c10_tmp_data[22];
  int32_T c10_i14;
  int32_T c10_b_trueCount;
  int32_T c10_loop_ub;
  int32_T c10_g_i;
  int32_T c10_i15;
  int32_T c10_b_tmp_size[2];
  int32_T c10_b_partialTrueCount;
  int32_T c10_h_i;
  int32_T c10_b_tmp_data[22];
  int32_T c10_i16;
  int32_T c10_b_loop_ub;
  int32_T c10_i17;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  for (c10_i = 0; c10_i < 22; c10_i++) {
    c10_iv[c10_i] = c10_i;
  }

  for (c10_i1 = 0; c10_i1 < 58; c10_i1++) {
    c10_iv1[c10_i1] = c10_iv2[c10_i1];
  }

  c10_bsxfun(chartInstance, c10_iv1, c10_iv, c10_b_indices);
  for (c10_i2 = 0; c10_i2 < 1276; c10_i2++) {
    c10_c_indices[c10_i2] = (real_T)c10_b_indices[c10_i2];
  }

  for (c10_i3 = 0; c10_i3 < 58; c10_i3++) {
    c10_dv[c10_i3] = c10_b_dv1[c10_i3];
  }

  c10_b_bsxfun(chartInstance, c10_dv, c10_c_indices, c10_b_x);
  for (c10_i4 = 0; c10_i4 < 1276; c10_i4++) {
    c10_b_x[c10_i4] *= 0.10086956521739131;
  }

  for (c10_i5 = 0; c10_i5 < 1276; c10_i5++) {
    c10_bv[c10_i5] = (0.0 <= c10_b_x[c10_i5]);
  }

  for (c10_i6 = 0; c10_i6 < 1276; c10_i6++) {
    c10_bv1[c10_i6] = (c10_b_x[c10_i6] <= 1.0);
  }

  for (c10_i7 = 0; c10_i7 < 1276; c10_i7++) {
    c10_bv2[c10_i7] = (-1.0 <= c10_b_x[c10_i7]);
  }

  for (c10_i8 = 0; c10_i8 < 1276; c10_i8++) {
    c10_bv3[c10_i8] = (c10_b_x[c10_i8] < 0.0);
  }

  for (c10_i9 = 0; c10_i9 < 1276; c10_i9++) {
    c10_b_x[c10_i9] = (c10_b_x[c10_i9] + 1.0) * (real_T)(c10_bv2[c10_i9] &&
      c10_bv3[c10_i9]) + (1.0 - c10_b_x[c10_i9]) * (real_T)(c10_bv[c10_i9] &&
      c10_bv1[c10_i9]);
  }

  for (c10_i10 = 0; c10_i10 < 1276; c10_i10++) {
    c10_b_x[c10_i10] *= 0.10086956521739131;
  }

  for (c10_i11 = 0; c10_i11 < 1276; c10_i11++) {
    c10_c_x[c10_i11] = c10_b_x[c10_i11];
  }

  c10_sum(chartInstance, c10_c_x, c10_dv2);
  for (c10_i12 = 0; c10_i12 < 1276; c10_i12++) {
    c10_d_x[c10_i12] = c10_b_x[c10_i12];
  }

  c10_c_bsxfun(chartInstance, c10_d_x, c10_dv2, c10_b_x);
  c10_aux[0] = 1;
  c10_aux[575] = 575;
  for (c10_b_i = 0; c10_b_i < 574; c10_b_i++) {
    c10_aux[c10_b_i + 1] = c10_aux[c10_b_i] + 1;
    c10_aux[c10_b_i + 576] = c10_aux[c10_b_i + 575] - 1;
  }

  for (c10_c_i = 0; c10_c_i < 1276; c10_c_i++) {
    c10_d_i = (real_T)c10_c_i + 1.0;
    c10_oldIdx = (real_T)c10_b_indices[(int32_T)c10_d_i - 1];
    c10_k = c10_mod(chartInstance, c10_oldIdx - 1.0);
    c10_b_a = c10_k;
    c10_c = (int32_T)c10_b_a;
    c10_b_indices[(int32_T)c10_d_i - 1] = c10_aux[c10_c];
  }

  c10_st.site = &c10_o_emlrtRSI;
  for (c10_i13 = 0; c10_i13 < 1276; c10_i13++) {
    c10_e_x[c10_i13] = c10_b_x[c10_i13];
  }

  c10_any(chartInstance, &c10_st, c10_e_x, c10_copyCols);
  c10_trueCount = 0;
  for (c10_e_i = 0; c10_e_i < 22; c10_e_i++) {
    if (c10_copyCols[c10_e_i]) {
      c10_trueCount++;
    }
  }

  c10_tmp_size[1] = c10_trueCount;
  c10_partialTrueCount = 0;
  for (c10_f_i = 0; c10_f_i < 22; c10_f_i++) {
    if (c10_copyCols[c10_f_i]) {
      c10_tmp_data[c10_partialTrueCount] = c10_f_i + 1;
      c10_partialTrueCount++;
    }
  }

  c10_weights_size[0] = c10_tmp_size[1];
  c10_weights_size[1] = 58;
  for (c10_i14 = 0; c10_i14 < 58; c10_i14++) {
    c10_loop_ub = c10_tmp_size[1] - 1;
    for (c10_i15 = 0; c10_i15 <= c10_loop_ub; c10_i15++) {
      c10_c_weights_data[c10_i15 + c10_weights_size[0] * c10_i14] =
        c10_b_x[c10_i14 + 58 * (c10_tmp_data[c10_i15] - 1)];
    }
  }

  c10_b_trueCount = 0;
  for (c10_g_i = 0; c10_g_i < 22; c10_g_i++) {
    if (c10_copyCols[c10_g_i]) {
      c10_b_trueCount++;
    }
  }

  c10_b_tmp_size[1] = c10_b_trueCount;
  c10_b_partialTrueCount = 0;
  for (c10_h_i = 0; c10_h_i < 22; c10_h_i++) {
    if (c10_copyCols[c10_h_i]) {
      c10_b_tmp_data[c10_b_partialTrueCount] = c10_h_i + 1;
      c10_b_partialTrueCount++;
    }
  }

  c10_indices_size[0] = c10_b_tmp_size[1];
  c10_indices_size[1] = 58;
  for (c10_i16 = 0; c10_i16 < 58; c10_i16++) {
    c10_b_loop_ub = c10_b_tmp_size[1] - 1;
    for (c10_i17 = 0; c10_i17 <= c10_b_loop_ub; c10_i17++) {
      c10_indices_data[c10_i17 + c10_indices_size[0] * c10_i16] =
        c10_b_indices[c10_i16 + 58 * (c10_b_tmp_data[c10_i17] - 1)];
    }
  }
}

static void c10_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[58], int32_T c10_b[22], int32_T c10_c[1276])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_6;
  int32_T c10_c_a;
  int32_T c10_b_b;
  int32_T c10_b_c;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 58; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c_a = c10_b_a[c10_b_varargin_3];
      c10_b_b = c10_b[c10_varargin_6];
      c10_b_c = c10_c_a + c10_b_b;
      c10_c[c10_c_varargin_1 + 58 * c10_varargin_2] = c10_b_c;
    }
  }
}

static void c10_b_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[58], real_T c10_b[1276], real_T c10_c[1276])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_5;
  int32_T c10_varargin_6;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 58; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_5 = c10_b_ib;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c[c10_c_varargin_1 + 58 * c10_varargin_2] = c10_b_a[c10_b_varargin_3]
        - c10_b[c10_varargin_5 + 58 * c10_varargin_6];
    }
  }
}

static void c10_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c10_b_x[1276], real_T c10_b_y[58])
{
  int32_T c10_j;
  int32_T c10_k;
  int32_T c10_b_j;
  int32_T c10_xoffset;
  int32_T c10_c_j;
  int32_T c10_ix;
  (void)chartInstance;
  for (c10_j = 0; c10_j < 58; c10_j++) {
    c10_b_j = c10_j;
    c10_b_y[c10_b_j] = c10_b_x[c10_b_j];
  }

  for (c10_k = 0; c10_k < 21; c10_k++) {
    c10_xoffset = (c10_k + 1) * 58;
    for (c10_c_j = 0; c10_c_j < 58; c10_c_j++) {
      c10_b_j = c10_c_j;
      c10_ix = c10_xoffset + c10_b_j;
      c10_b_y[c10_b_j] += c10_b_x[c10_ix];
    }
  }
}

static void c10_c_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1276], real_T c10_b[58], real_T c10_c[1276])
{
  int32_T c10_k;
  int32_T c10_ia;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_k;
  int32_T c10_b_ia;
  int32_T c10_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_b_varargin_2;
  int32_T c10_varargin_3;
  int32_T c10_varargin_4;
  int32_T c10_varargin_5;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ia = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_2 = c10_ia + 1;
    for (c10_b_k = 0; c10_b_k < 58; c10_b_k++) {
      c10_b_ia = c10_b_k;
      c10_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_b_varargin_2 = c10_b_varargin_1 - 1;
      c10_varargin_3 = c10_b_ia;
      c10_varargin_4 = c10_varargin_2 - 1;
      c10_varargin_5 = c10_ib;
      c10_c[c10_c_varargin_1 + 58 * c10_b_varargin_2] = c10_b_a[c10_varargin_3 +
        58 * c10_varargin_4] / c10_b[c10_varargin_5];
    }
  }
}

static real_T c10_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x)
{
  real_T c10_r;
  real_T c10_c_x;
  real_T c10_d_x;
  real_T c10_e_x;
  real_T c10_f_x;
  boolean_T c10_b;
  real_T c10_g_x;
  boolean_T c10_b_b;
  boolean_T c10_rEQ0;
  (void)chartInstance;
  c10_c_x = c10_b_x;
  c10_d_x = c10_c_x;
  c10_e_x = c10_d_x;
  c10_f_x = c10_e_x;
  c10_b = muDoubleScalarIsNaN(c10_f_x);
  if (c10_b) {
    c10_r = rtNaN;
  } else {
    c10_g_x = c10_e_x;
    c10_b_b = muDoubleScalarIsInf(c10_g_x);
    if (c10_b_b) {
      c10_r = rtNaN;
    } else if (c10_e_x == 0.0) {
      c10_r = 0.0;
    } else {
      c10_r = muDoubleScalarRem(c10_e_x, 1150.0);
      c10_rEQ0 = (c10_r == 0.0);
      if (c10_rEQ0) {
        c10_r = 0.0;
      } else {
        if (c10_e_x < 0.0) {
          c10_r += 1150.0;
        }
      }
    }
  }

  return c10_r;
}

static void c10_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                    [1276], boolean_T c10_b_y[22])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  emlrtStack c10_c_st;
  int32_T c10_i;
  int32_T c10_i2;
  int32_T c10_iy;
  int32_T c10_b_i;
  int32_T c10_i1;
  int32_T c10_b_a;
  int32_T c10_c_a;
  int32_T c10_d_a;
  int32_T c10_e_a;
  int32_T c10_f_a;
  int32_T c10_b;
  int32_T c10_g_a;
  int32_T c10_b_b;
  boolean_T c10_overflow;
  int32_T c10_ix;
  boolean_T c10_exitg1;
  real_T c10_c_x;
  boolean_T c10_c_b;
  boolean_T c10_d_b;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_p_emlrtRSI;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  c10_c_st.prev = &c10_b_st;
  c10_c_st.tls = c10_b_st.tls;
  for (c10_i = 0; c10_i < 22; c10_i++) {
    c10_b_y[c10_i] = false;
  }

  c10_i2 = 0;
  c10_iy = -1;
  for (c10_b_i = 0; c10_b_i < 22; c10_b_i++) {
    c10_i1 = c10_i2;
    c10_b_a = c10_i2 + 57;
    c10_i2 = c10_b_a;
    c10_c_a = c10_i1 + 1;
    c10_i1 = c10_c_a;
    c10_d_a = c10_i2 + 1;
    c10_i2 = c10_d_a;
    c10_e_a = c10_iy + 1;
    c10_iy = c10_e_a;
    c10_b_st.site = &c10_q_emlrtRSI;
    c10_f_a = c10_i1;
    c10_b = c10_i2;
    c10_g_a = c10_f_a;
    c10_b_b = c10_b;
    if (c10_g_a > c10_b_b) {
      c10_overflow = false;
    } else {
      c10_overflow = (c10_b_b > 2147483646);
    }

    if (c10_overflow) {
      c10_c_st.site = &c10_r_emlrtRSI;
      c10_check_forloop_overflow_error(chartInstance, &c10_c_st);
    }

    c10_ix = c10_i1 - 1;
    c10_exitg1 = false;
    while ((!c10_exitg1) && (c10_ix + 1 <= c10_i2)) {
      if (c10_b_x[c10_ix] == 0.0) {
        c10_c_b = true;
      } else {
        c10_c_x = c10_b_x[c10_ix];
        c10_d_b = muDoubleScalarIsNaN(c10_c_x);
        if (c10_d_b) {
          c10_c_b = true;
        } else {
          c10_c_b = false;
        }
      }

      if (!c10_c_b) {
        c10_b_y[c10_iy] = true;
        c10_exitg1 = true;
      } else {
        c10_ix++;
      }
    }
  }
}

static void c10_check_forloop_overflow_error
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp)
{
  const mxArray *c10_b_y = NULL;
  static char_T c10_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c10_c_y = NULL;
  const mxArray *c10_d_y = NULL;
  static char_T c10_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c10_d_y = NULL;
  sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c10_sp, &c10_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
              sf_mex_call(c10_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
    (c10_sp, NULL, "message", 1U, 2U, 14, c10_c_y, 14, c10_d_y)));
}

static void c10_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[273125], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [27550])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inRInd;
  real_T c10_b_inRInd;
  real_T c10_b_varargin_1;
  real_T c10_c_varargin_1;
  real_T c10_b_x;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  int32_T c10_idx;
  real_T c10_rowStart;
  const mxArray *c10_c_y = NULL;
  int32_T c10_outCInd;
  real_T c10_b_outCInd;
  real_T c10_sumVal1;
  int32_T c10_i;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i1;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  real_T c10_c_x;
  const mxArray *c10_e_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b2;
  boolean_T c10_c_p;
  const mxArray *c10_f_y = NULL;
  int32_T c10_psiz;
  int32_T c10_b_idx;
  const mxArray *c10_g_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i2;
  int32_T c10_k;
  real_T c10_d1;
  int32_T c10_b_a;
  int32_T c10_c;
  int32_T c10_c_a;
  uint8_T c10_u;
  int32_T c10_b_c;
  real_T c10_d_a;
  int32_T c10_b_b;
  int32_T c10_pixelIndex;
  uint8_T c10_pixelValue;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inRInd = 0; c10_inRInd < 475; c10_inRInd++) {
    c10_b_inRInd = (real_T)c10_inRInd + 1.0;
    c10_st.site = &c10_s_emlrtRSI;
    c10_b_varargin_1 = c10_b_inRInd;
    c10_b_st.site = &c10_u_emlrtRSI;
    c10_c_varargin_1 = c10_b_varargin_1;
    c10_b_x = c10_c_varargin_1;
    if (c10_b_x <= 475.0) {
      c10_b = true;
    } else {
      c10_b = false;
    }

    if (!c10_b) {
      c10_p = false;
    } else {
      c10_p = true;
    }

    if (!c10_p) {
      c10_b_y = NULL;
      sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c10_c_y = NULL;
      sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                  sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
    }

    c10_idx = (int32_T)c10_c_varargin_1;
    c10_rowStart = (real_T)c10_idx;
    for (c10_outCInd = 0; c10_outCInd < 58; c10_outCInd++) {
      c10_b_outCInd = (real_T)c10_outCInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_t_emlrtRSI;
      for (c10_i = 0; c10_i < 2; c10_i++) {
        c10_siz[c10_i] = (real_T)c10_weights_size[c10_i];
      }

      c10_varargin_2 = c10_b_outCInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_b_siz[c10_i1] = (int32_T)c10_siz[c10_i1];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_c_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_c_x <= (real_T)c10_c_hi) {
        c10_b2 = true;
      } else {
        c10_b2 = false;
      }

      if (!c10_b2) {
        c10_c_p = false;
      } else {
        c10_c_p = true;
      }

      if (!c10_c_p) {
        c10_f_y = NULL;
        sf_mex_assign(&c10_f_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_g_y = NULL;
        sf_mex_assign(&c10_g_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_f_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_g_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_b_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_b_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i2 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i2; c10_k++) {
        c10_b_a = c10_indices_data[c10_linearInds] - 1;
        c10_c = c10_b_a;
        c10_c_a = c10_c;
        c10_b_c = c10_c_a * 475;
        c10_d_a = c10_rowStart;
        c10_b_b = c10_b_c;
        c10_pixelIndex = ((int32_T)c10_d_a + c10_b_b) - 1;
        c10_pixelValue = c10_in_[c10_pixelIndex];
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] * (real_T)
          c10_pixelValue;
        c10_linearInds++;
      }

      c10_d1 = muDoubleScalarRound(c10_sumVal1);
      if (c10_d1 < 256.0) {
        if (c10_d1 >= 0.0) {
          c10_u = (uint8_T)c10_d1;
        } else {
          c10_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c10_d1 >= 256.0) {
        c10_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c10_u = 0U;
      }

      c10_out_[((int32_T)c10_b_inRInd + 475 * ((int32_T)c10_b_outCInd - 1)) - 1]
        = c10_u;
    }
  }
}

static void c10_b_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2])
{
  emlrtStack c10_st;
  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_iv[22];
  int32_T c10_iv1[48];
  int32_T c10_b_indices[1056];
  static int32_T c10_iv2[48] = { -5, 5, 15, 25, 35, 45, 54, 64, 74, 84, 94, 104,
    114, 124, 134, 143, 153, 163, 173, 183, 193, 203, 213, 223, 233, 242, 252,
    262, 272, 282, 292, 302, 312, 322, 332, 341, 351, 361, 371, 381, 391, 401,
    411, 421, 430, 440, 450, 460 };

  int32_T c10_i2;
  int32_T c10_i3;
  real_T c10_c_indices[1056];
  real_T c10_dv[48];
  real_T c10_b_x[1056];
  static real_T c10_b_dv1[48] = { 5.447916666666667, 15.34375,
    25.239583333333332, 35.135416666666671, 45.03125, 54.927083333333336,
    64.822916666666657, 74.71875, 84.614583333333329, 94.510416666666657,
    104.40625, 114.30208333333333, 124.19791666666667, 134.09375,
    143.98958333333334, 153.88541666666669, 163.78125, 173.67708333333334,
    183.57291666666669, 193.46875, 203.36458333333334, 213.26041666666669,
    223.15625000000003, 233.05208333333334, 242.94791666666669,
    252.84375000000003, 262.73958333333331, 272.63541666666663, 282.53125,
    292.42708333333331, 302.32291666666663, 312.21875, 322.11458333333331,
    332.01041666666663, 341.90625, 351.80208333333331, 361.69791666666663,
    371.59375, 381.48958333333331, 391.38541666666663, 401.28125,
    411.17708333333331, 421.07291666666669, 430.96875, 440.86458333333331,
    450.76041666666669, 460.65625, 470.55208333333331 };

  int32_T c10_i4;
  int32_T c10_i5;
  int32_T c10_i6;
  boolean_T c10_bv[1056];
  int32_T c10_i7;
  boolean_T c10_bv1[1056];
  int32_T c10_i8;
  boolean_T c10_bv2[1056];
  int32_T c10_i9;
  boolean_T c10_bv3[1056];
  int32_T c10_i10;
  int32_T c10_i11;
  real_T c10_c_x[1056];
  real_T c10_dv2[48];
  int32_T c10_i12;
  real_T c10_d_x[1056];
  int32_T c10_aux[950];
  int32_T c10_b_i;
  int32_T c10_c_i;
  real_T c10_d_i;
  int32_T c10_i13;
  real_T c10_oldIdx;
  real_T c10_k;
  real_T c10_e_x[1056];
  boolean_T c10_copyCols[22];
  real_T c10_b_a;
  int32_T c10_trueCount;
  int32_T c10_c;
  int32_T c10_e_i;
  int32_T c10_tmp_size[2];
  int32_T c10_partialTrueCount;
  int32_T c10_f_i;
  int32_T c10_tmp_data[22];
  int32_T c10_i14;
  int32_T c10_b_trueCount;
  int32_T c10_loop_ub;
  int32_T c10_g_i;
  int32_T c10_i15;
  int32_T c10_b_tmp_size[2];
  int32_T c10_b_partialTrueCount;
  int32_T c10_h_i;
  int32_T c10_b_tmp_data[22];
  int32_T c10_i16;
  int32_T c10_b_loop_ub;
  int32_T c10_i17;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  for (c10_i = 0; c10_i < 22; c10_i++) {
    c10_iv[c10_i] = c10_i;
  }

  for (c10_i1 = 0; c10_i1 < 48; c10_i1++) {
    c10_iv1[c10_i1] = c10_iv2[c10_i1];
  }

  c10_d_bsxfun(chartInstance, c10_iv1, c10_iv, c10_b_indices);
  for (c10_i2 = 0; c10_i2 < 1056; c10_i2++) {
    c10_c_indices[c10_i2] = (real_T)c10_b_indices[c10_i2];
  }

  for (c10_i3 = 0; c10_i3 < 48; c10_i3++) {
    c10_dv[c10_i3] = c10_b_dv1[c10_i3];
  }

  c10_e_bsxfun(chartInstance, c10_dv, c10_c_indices, c10_b_x);
  for (c10_i4 = 0; c10_i4 < 1056; c10_i4++) {
    c10_b_x[c10_i4] *= 0.10105263157894737;
  }

  for (c10_i5 = 0; c10_i5 < 1056; c10_i5++) {
    c10_bv[c10_i5] = (0.0 <= c10_b_x[c10_i5]);
  }

  for (c10_i6 = 0; c10_i6 < 1056; c10_i6++) {
    c10_bv1[c10_i6] = (c10_b_x[c10_i6] <= 1.0);
  }

  for (c10_i7 = 0; c10_i7 < 1056; c10_i7++) {
    c10_bv2[c10_i7] = (-1.0 <= c10_b_x[c10_i7]);
  }

  for (c10_i8 = 0; c10_i8 < 1056; c10_i8++) {
    c10_bv3[c10_i8] = (c10_b_x[c10_i8] < 0.0);
  }

  for (c10_i9 = 0; c10_i9 < 1056; c10_i9++) {
    c10_b_x[c10_i9] = (c10_b_x[c10_i9] + 1.0) * (real_T)(c10_bv2[c10_i9] &&
      c10_bv3[c10_i9]) + (1.0 - c10_b_x[c10_i9]) * (real_T)(c10_bv[c10_i9] &&
      c10_bv1[c10_i9]);
  }

  for (c10_i10 = 0; c10_i10 < 1056; c10_i10++) {
    c10_b_x[c10_i10] *= 0.10105263157894737;
  }

  for (c10_i11 = 0; c10_i11 < 1056; c10_i11++) {
    c10_c_x[c10_i11] = c10_b_x[c10_i11];
  }

  c10_b_sum(chartInstance, c10_c_x, c10_dv2);
  for (c10_i12 = 0; c10_i12 < 1056; c10_i12++) {
    c10_d_x[c10_i12] = c10_b_x[c10_i12];
  }

  c10_f_bsxfun(chartInstance, c10_d_x, c10_dv2, c10_b_x);
  c10_aux[0] = 1;
  c10_aux[475] = 475;
  for (c10_b_i = 0; c10_b_i < 474; c10_b_i++) {
    c10_aux[c10_b_i + 1] = c10_aux[c10_b_i] + 1;
    c10_aux[c10_b_i + 476] = c10_aux[c10_b_i + 475] - 1;
  }

  for (c10_c_i = 0; c10_c_i < 1056; c10_c_i++) {
    c10_d_i = (real_T)c10_c_i + 1.0;
    c10_oldIdx = (real_T)c10_b_indices[(int32_T)c10_d_i - 1];
    c10_k = c10_b_mod(chartInstance, c10_oldIdx - 1.0);
    c10_b_a = c10_k;
    c10_c = (int32_T)c10_b_a;
    c10_b_indices[(int32_T)c10_d_i - 1] = c10_aux[c10_c];
  }

  c10_st.site = &c10_o_emlrtRSI;
  for (c10_i13 = 0; c10_i13 < 1056; c10_i13++) {
    c10_e_x[c10_i13] = c10_b_x[c10_i13];
  }

  c10_b_any(chartInstance, &c10_st, c10_e_x, c10_copyCols);
  c10_trueCount = 0;
  for (c10_e_i = 0; c10_e_i < 22; c10_e_i++) {
    if (c10_copyCols[c10_e_i]) {
      c10_trueCount++;
    }
  }

  c10_tmp_size[1] = c10_trueCount;
  c10_partialTrueCount = 0;
  for (c10_f_i = 0; c10_f_i < 22; c10_f_i++) {
    if (c10_copyCols[c10_f_i]) {
      c10_tmp_data[c10_partialTrueCount] = c10_f_i + 1;
      c10_partialTrueCount++;
    }
  }

  c10_weights_size[0] = c10_tmp_size[1];
  c10_weights_size[1] = 48;
  for (c10_i14 = 0; c10_i14 < 48; c10_i14++) {
    c10_loop_ub = c10_tmp_size[1] - 1;
    for (c10_i15 = 0; c10_i15 <= c10_loop_ub; c10_i15++) {
      c10_c_weights_data[c10_i15 + c10_weights_size[0] * c10_i14] =
        c10_b_x[c10_i14 + 48 * (c10_tmp_data[c10_i15] - 1)];
    }
  }

  c10_b_trueCount = 0;
  for (c10_g_i = 0; c10_g_i < 22; c10_g_i++) {
    if (c10_copyCols[c10_g_i]) {
      c10_b_trueCount++;
    }
  }

  c10_b_tmp_size[1] = c10_b_trueCount;
  c10_b_partialTrueCount = 0;
  for (c10_h_i = 0; c10_h_i < 22; c10_h_i++) {
    if (c10_copyCols[c10_h_i]) {
      c10_b_tmp_data[c10_b_partialTrueCount] = c10_h_i + 1;
      c10_b_partialTrueCount++;
    }
  }

  c10_indices_size[0] = c10_b_tmp_size[1];
  c10_indices_size[1] = 48;
  for (c10_i16 = 0; c10_i16 < 48; c10_i16++) {
    c10_b_loop_ub = c10_b_tmp_size[1] - 1;
    for (c10_i17 = 0; c10_i17 <= c10_b_loop_ub; c10_i17++) {
      c10_indices_data[c10_i17 + c10_indices_size[0] * c10_i16] =
        c10_b_indices[c10_i16 + 48 * (c10_b_tmp_data[c10_i17] - 1)];
    }
  }
}

static void c10_d_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[48], int32_T c10_b[22], int32_T c10_c[1056])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_6;
  int32_T c10_c_a;
  int32_T c10_b_b;
  int32_T c10_b_c;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 48; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c_a = c10_b_a[c10_b_varargin_3];
      c10_b_b = c10_b[c10_varargin_6];
      c10_b_c = c10_c_a + c10_b_b;
      c10_c[c10_c_varargin_1 + 48 * c10_varargin_2] = c10_b_c;
    }
  }
}

static void c10_e_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[48], real_T c10_b[1056], real_T c10_c[1056])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_5;
  int32_T c10_varargin_6;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 48; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_5 = c10_b_ib;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c[c10_c_varargin_1 + 48 * c10_varargin_2] = c10_b_a[c10_b_varargin_3]
        - c10_b[c10_varargin_5 + 48 * c10_varargin_6];
    }
  }
}

static void c10_b_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[1056], real_T c10_b_y[48])
{
  int32_T c10_j;
  int32_T c10_k;
  int32_T c10_b_j;
  int32_T c10_xoffset;
  int32_T c10_c_j;
  int32_T c10_ix;
  (void)chartInstance;
  for (c10_j = 0; c10_j < 48; c10_j++) {
    c10_b_j = c10_j;
    c10_b_y[c10_b_j] = c10_b_x[c10_b_j];
  }

  for (c10_k = 0; c10_k < 21; c10_k++) {
    c10_xoffset = (c10_k + 1) * 48;
    for (c10_c_j = 0; c10_c_j < 48; c10_c_j++) {
      c10_b_j = c10_c_j;
      c10_ix = c10_xoffset + c10_b_j;
      c10_b_y[c10_b_j] += c10_b_x[c10_ix];
    }
  }
}

static void c10_f_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1056], real_T c10_b[48], real_T c10_c[1056])
{
  int32_T c10_k;
  int32_T c10_ia;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_k;
  int32_T c10_b_ia;
  int32_T c10_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_b_varargin_2;
  int32_T c10_varargin_3;
  int32_T c10_varargin_4;
  int32_T c10_varargin_5;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 22; c10_k++) {
    c10_ia = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_2 = c10_ia + 1;
    for (c10_b_k = 0; c10_b_k < 48; c10_b_k++) {
      c10_b_ia = c10_b_k;
      c10_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_b_varargin_2 = c10_b_varargin_1 - 1;
      c10_varargin_3 = c10_b_ia;
      c10_varargin_4 = c10_varargin_2 - 1;
      c10_varargin_5 = c10_ib;
      c10_c[c10_c_varargin_1 + 48 * c10_b_varargin_2] = c10_b_a[c10_varargin_3 +
        48 * c10_varargin_4] / c10_b[c10_varargin_5];
    }
  }
}

static real_T c10_b_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x)
{
  real_T c10_r;
  real_T c10_c_x;
  real_T c10_d_x;
  real_T c10_e_x;
  real_T c10_f_x;
  boolean_T c10_b;
  real_T c10_g_x;
  boolean_T c10_b_b;
  boolean_T c10_rEQ0;
  (void)chartInstance;
  c10_c_x = c10_b_x;
  c10_d_x = c10_c_x;
  c10_e_x = c10_d_x;
  c10_f_x = c10_e_x;
  c10_b = muDoubleScalarIsNaN(c10_f_x);
  if (c10_b) {
    c10_r = rtNaN;
  } else {
    c10_g_x = c10_e_x;
    c10_b_b = muDoubleScalarIsInf(c10_g_x);
    if (c10_b_b) {
      c10_r = rtNaN;
    } else if (c10_e_x == 0.0) {
      c10_r = 0.0;
    } else {
      c10_r = muDoubleScalarRem(c10_e_x, 950.0);
      c10_rEQ0 = (c10_r == 0.0);
      if (c10_rEQ0) {
        c10_r = 0.0;
      } else {
        if (c10_e_x < 0.0) {
          c10_r += 950.0;
        }
      }
    }
  }

  return c10_r;
}

static void c10_b_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [1056], boolean_T c10_b_y[22])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  emlrtStack c10_c_st;
  int32_T c10_i;
  int32_T c10_i2;
  int32_T c10_iy;
  int32_T c10_b_i;
  int32_T c10_i1;
  int32_T c10_b_a;
  int32_T c10_c_a;
  int32_T c10_d_a;
  int32_T c10_e_a;
  int32_T c10_f_a;
  int32_T c10_b;
  int32_T c10_g_a;
  int32_T c10_b_b;
  boolean_T c10_overflow;
  int32_T c10_ix;
  boolean_T c10_exitg1;
  real_T c10_c_x;
  boolean_T c10_c_b;
  boolean_T c10_d_b;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_p_emlrtRSI;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  c10_c_st.prev = &c10_b_st;
  c10_c_st.tls = c10_b_st.tls;
  for (c10_i = 0; c10_i < 22; c10_i++) {
    c10_b_y[c10_i] = false;
  }

  c10_i2 = 0;
  c10_iy = -1;
  for (c10_b_i = 0; c10_b_i < 22; c10_b_i++) {
    c10_i1 = c10_i2;
    c10_b_a = c10_i2 + 47;
    c10_i2 = c10_b_a;
    c10_c_a = c10_i1 + 1;
    c10_i1 = c10_c_a;
    c10_d_a = c10_i2 + 1;
    c10_i2 = c10_d_a;
    c10_e_a = c10_iy + 1;
    c10_iy = c10_e_a;
    c10_b_st.site = &c10_q_emlrtRSI;
    c10_f_a = c10_i1;
    c10_b = c10_i2;
    c10_g_a = c10_f_a;
    c10_b_b = c10_b;
    if (c10_g_a > c10_b_b) {
      c10_overflow = false;
    } else {
      c10_overflow = (c10_b_b > 2147483646);
    }

    if (c10_overflow) {
      c10_c_st.site = &c10_r_emlrtRSI;
      c10_check_forloop_overflow_error(chartInstance, &c10_c_st);
    }

    c10_ix = c10_i1 - 1;
    c10_exitg1 = false;
    while ((!c10_exitg1) && (c10_ix + 1 <= c10_i2)) {
      if (c10_b_x[c10_ix] == 0.0) {
        c10_c_b = true;
      } else {
        c10_c_x = c10_b_x[c10_ix];
        c10_d_b = muDoubleScalarIsNaN(c10_c_x);
        if (c10_d_b) {
          c10_c_b = true;
        } else {
          c10_c_b = false;
        }
      }

      if (!c10_c_b) {
        c10_b_y[c10_iy] = true;
        c10_exitg1 = true;
      } else {
        c10_ix++;
      }
    }
  }
}

static void c10_b_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [2784])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inCInd;
  real_T c10_b_inCInd;
  int32_T c10_c_inCInd;
  int32_T c10_i;
  int32_T c10_outRInd;
  uint8_T c10_inCol[475];
  real_T c10_b_outRInd;
  real_T c10_sumVal1;
  int32_T c10_i1;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i2;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  real_T c10_b_x;
  const mxArray *c10_c_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  int32_T c10_psiz;
  int32_T c10_idx;
  const mxArray *c10_e_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i3;
  int32_T c10_k;
  real_T c10_d1;
  int32_T c10_b_a;
  uint8_T c10_u;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inCInd = 0; c10_inCInd < 58; c10_inCInd++) {
    c10_b_inCInd = (real_T)c10_inCInd + 1.0;
    c10_c_inCInd = (int32_T)c10_b_inCInd - 1;
    for (c10_i = 0; c10_i < 475; c10_i++) {
      c10_inCol[c10_i] = c10_in_[c10_i + 475 * c10_c_inCInd];
    }

    for (c10_outRInd = 0; c10_outRInd < 48; c10_outRInd++) {
      c10_b_outRInd = (real_T)c10_outRInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_x_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_siz[c10_i1] = (real_T)c10_weights_size[c10_i1];
      }

      c10_varargin_2 = c10_b_outRInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i2 = 0; c10_i2 < 2; c10_i2++) {
        c10_b_siz[c10_i2] = (int32_T)c10_siz[c10_i2];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b = true;
      } else {
        c10_b = false;
      }

      if (!c10_b) {
        c10_p = false;
      } else {
        c10_p = true;
      }

      if (!c10_p) {
        c10_b_y = NULL;
        sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_c_y = NULL;
        sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_b_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_b_x <= (real_T)c10_c_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i3 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i3; c10_k++) {
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] * (real_T)
          c10_inCol[c10_indices_data[c10_linearInds] - 1];
        c10_b_a = c10_linearInds + 1;
        c10_linearInds = c10_b_a;
      }

      c10_d1 = muDoubleScalarRound(c10_sumVal1);
      if (c10_d1 < 256.0) {
        if (c10_d1 >= 0.0) {
          c10_u = (uint8_T)c10_d1;
        } else {
          c10_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c10_d1 >= 256.0) {
        c10_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c10_u = 0U;
      }

      c10_out_[((int32_T)c10_b_outRInd + 48 * ((int32_T)c10_b_inCInd - 1)) - 1] =
        c10_u;
    }
  }
}

static void c10_power(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_a[441], real_T c10_b_y[441])
{
  int32_T c10_k;
  int32_T c10_b_k;
  real_T c10_c_a;
  real_T c10_c_y;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 441; c10_k++) {
    c10_b_k = c10_k;
    c10_c_a = c10_b_a[c10_b_k];
    c10_c_y = c10_c_a * c10_c_a;
    c10_b_y[c10_b_k] = c10_c_y;
  }
}

static void c10_exp(SFc10_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c10_b_x[441], real_T c10_c_x[441])
{
  int32_T c10_i;
  for (c10_i = 0; c10_i < 441; c10_i++) {
    c10_c_x[c10_i] = c10_b_x[c10_i];
  }

  c10_b_exp(chartInstance, c10_c_x);
}

static real_T c10_c_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x[441])
{
  real_T c10_b_y;
  int32_T c10_k;
  int32_T c10_xoffset;
  int32_T c10_ix;
  (void)chartInstance;
  c10_b_y = c10_b_x[0];
  for (c10_k = 0; c10_k < 440; c10_k++) {
    c10_xoffset = c10_k;
    c10_ix = c10_xoffset;
    c10_b_y += c10_b_x[c10_ix + 1];
  }

  return c10_b_y;
}

static void c10_b_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_c_Ain[2784], uint8_T
  c10_Bout[273125])
{
  emlrtStack c10_st;
  real_T c10_c_weights_data[1900];
  int32_T c10_weights_size[2];
  int32_T c10_indices_data[1900];
  int32_T c10_indices_size[2];
  int32_T c10_i;
  uint8_T c10_d_Ain[2784];
  int32_T c10_b_weights_size[2];
  int32_T c10_b_indices_data[2300];
  int32_T c10_b_indices_size[2];
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_y_emlrtRSI;
  c10_c_contributions(chartInstance, &c10_st, c10_c_weights_data,
                      c10_weights_size, c10_indices_data, c10_indices_size);
  c10_st.site = &c10_ab_emlrtRSI;
  for (c10_i = 0; c10_i < 2784; c10_i++) {
    c10_d_Ain[c10_i] = c10_c_Ain[c10_i];
  }

  c10_c_resizeAlongDim(chartInstance, &c10_st, c10_d_Ain, c10_c_weights_data,
                       c10_weights_size, c10_indices_data,
                       chartInstance->c10_b_APartialResize);
  c10_st.site = &c10_bb_emlrtRSI;
  c10_d_contributions(chartInstance, &c10_st, chartInstance->c10_b_weights_data,
                      c10_b_weights_size, c10_b_indices_data, c10_b_indices_size);
  c10_st.site = &c10_cb_emlrtRSI;
  c10_d_resizeAlongDim(chartInstance, &c10_st,
                       chartInstance->c10_b_APartialResize,
                       chartInstance->c10_b_weights_data, c10_b_weights_size,
                       c10_b_indices_data, c10_Bout);
}

static void c10_c_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2])
{
  emlrtStack c10_st;
  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_iv[4];
  int32_T c10_iv1[475];
  int32_T c10_b_indices[1900];
  static int32_T c10_iv2[475] = { -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18,
    18, 18, 18, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22,
    22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 23, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 30, 30,
    30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 33, 33, 33, 33, 34,
    34, 34, 34, 34, 34, 34, 34, 34, 34, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
    36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 42, 42, 42, 42, 42, 42, 42, 42, 42, 43, 43, 43, 43, 43, 43, 43,
    43, 43, 43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45, 45, 45, 45, 45, 45,
    45, 45, 45, 45, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 47, 47, 47, 47, 47 };

  int32_T c10_i2;
  int32_T c10_i3;
  real_T c10_c_indices[1900];
  real_T c10_dv[475];
  real_T c10_f[1900];
  static real_T c10_b_dv1[475] = { 0.55052631578947364, 0.651578947368421,
    0.75263157894736832, 0.85368421052631582, 0.95473684210526311,
    1.0557894736842104, 1.1568421052631579, 1.2578947368421052,
    1.3589473684210525, 1.46, 1.5610526315789472, 1.6621052631578945,
    1.763157894736842, 1.8642105263157893, 1.9652631578947366,
    2.0663157894736841, 2.1673684210526316, 2.2684210526315787,
    2.3694736842105262, 2.4705263157894737, 2.5715789473684207,
    2.6726315789473682, 2.7736842105263158, 2.8747368421052628,
    2.9757894736842103, 3.0768421052631578, 3.1778947368421049,
    3.2789473684210524, 3.38, 3.481052631578947, 3.5821052631578945,
    3.683157894736842, 3.784210526315789, 3.8852631578947365, 3.986315789473684,
    4.0873684210526315, 4.188421052631579, 4.2894736842105265,
    4.3905263157894732, 4.4915789473684216, 4.5926315789473682,
    4.6936842105263157, 4.7947368421052632, 4.8957894736842107,
    4.9968421052631582, 5.0978947368421057, 5.1989473684210523, 5.3,
    5.4010526315789473, 5.5021052631578948, 5.6031578947368423, 5.70421052631579,
    5.8052631578947365, 5.906315789473684, 6.0073684210526315, 6.108421052631579,
    6.2094736842105265, 6.310526315789474, 6.4115789473684215,
    6.5126315789473681, 6.6136842105263156, 6.7147368421052631,
    6.8157894736842106, 6.9168421052631581, 7.0178947368421056,
    7.1189473684210522, 7.22, 7.3210526315789473, 7.4221052631578948,
    7.5231578947368423, 7.62421052631579, 7.7252631578947364, 7.8263157894736839,
    7.9273684210526314, 8.0284210526315789, 8.1294736842105255,
    8.2305263157894739, 8.33157894736842, 8.4326315789473671, 8.5336842105263155,
    8.6347368421052622, 8.7357894736842088, 8.8368421052631572,
    8.9378947368421038, 9.0389473684210522, 9.1399999999999988,
    9.2410526315789472, 9.3421052631578938, 9.44315789473684, 9.5442105263157888,
    9.6452631578947354, 9.7463157894736838, 9.84736842105263, 9.9484210526315771,
    10.049473684210525, 10.150526315789472, 10.25157894736842,
    10.352631578947367, 10.453684210526315, 10.554736842105262,
    10.655789473684209, 10.756842105263157, 10.857894736842104,
    10.958947368421052, 11.059999999999999, 11.161052631578945,
    11.262105263157894, 11.36315789473684, 11.464210526315789,
    11.565263157894735, 11.666315789473684, 11.76736842105263,
    11.868421052631577, 11.969473684210525, 12.070526315789472,
    12.17157894736842, 12.272631578947367, 12.373684210526315,
    12.474736842105262, 12.575789473684209, 12.676842105263157,
    12.777894736842104, 12.878947368421052, 12.979999999999999,
    13.081052631578945, 13.182105263157894, 13.28315789473684,
    13.384210526315789, 13.485263157894735, 13.586315789473684,
    13.68736842105263, 13.788421052631577, 13.889473684210525,
    13.990526315789472, 14.09157894736842, 14.192631578947367,
    14.293684210526315, 14.394736842105262, 14.495789473684209,
    14.596842105263157, 14.697894736842104, 14.798947368421052,
    14.899999999999999, 15.001052631578945, 15.102105263157894,
    15.20315789473684, 15.304210526315789, 15.405263157894735,
    15.506315789473684, 15.60736842105263, 15.708421052631577,
    15.809473684210525, 15.910526315789472, 16.01157894736842,
    16.112631578947369, 16.213684210526313, 16.314736842105262,
    16.41578947368421, 16.516842105263159, 16.617894736842107,
    16.718947368421052, 16.82, 16.921052631578949, 17.022105263157894,
    17.123157894736842, 17.22421052631579, 17.325263157894739,
    17.426315789473684, 17.527368421052632, 17.62842105263158,
    17.729473684210525, 17.830526315789474, 17.931578947368422,
    18.03263157894737, 18.133684210526315, 18.234736842105264,
    18.335789473684212, 18.436842105263157, 18.537894736842105,
    18.638947368421054, 18.74, 18.841052631578947, 18.942105263157895,
    19.043157894736844, 19.144210526315788, 19.245263157894737,
    19.346315789473685, 19.44736842105263, 19.548421052631578,
    19.649473684210527, 19.750526315789475, 19.85157894736842,
    19.952631578947368, 20.053684210526317, 20.154736842105262,
    20.25578947368421, 20.356842105263159, 20.457894736842107,
    20.558947368421052, 20.66, 20.761052631578949, 20.862105263157893,
    20.963157894736842, 21.06421052631579, 21.165263157894739,
    21.266315789473683, 21.367368421052632, 21.46842105263158,
    21.569473684210525, 21.670526315789473, 21.771578947368422,
    21.872631578947367, 21.973684210526315, 22.074736842105263,
    22.175789473684212, 22.276842105263157, 22.377894736842105,
    22.478947368421053, 22.58, 22.681052631578947, 22.782105263157895,
    22.883157894736843, 22.984210526315788, 23.085263157894737,
    23.186315789473685, 23.28736842105263, 23.388421052631578,
    23.489473684210527, 23.590526315789475, 23.69157894736842,
    23.792631578947368, 23.893684210526317, 23.994736842105262,
    24.09578947368421, 24.196842105263158, 24.297894736842107,
    24.398947368421052, 24.5, 24.601052631578948, 24.702105263157893,
    24.803157894736842, 24.90421052631579, 25.005263157894738,
    25.106315789473683, 25.207368421052632, 25.30842105263158,
    25.409473684210525, 25.510526315789473, 25.611578947368422,
    25.712631578947367, 25.813684210526315, 25.914736842105263,
    26.015789473684212, 26.116842105263157, 26.217894736842105,
    26.318947368421053, 26.419999999999998, 26.521052631578947,
    26.622105263157895, 26.723157894736843, 26.824210526315788,
    26.925263157894737, 27.026315789473685, 27.12736842105263,
    27.228421052631578, 27.329473684210527, 27.430526315789475,
    27.53157894736842, 27.632631578947368, 27.733684210526317,
    27.834736842105261, 27.93578947368421, 28.036842105263158,
    28.137894736842107, 28.238947368421051, 28.34, 28.441052631578948,
    28.542105263157893, 28.643157894736841, 28.74421052631579,
    28.845263157894735, 28.946315789473683, 29.047368421052632,
    29.14842105263158, 29.249473684210525, 29.350526315789473,
    29.451578947368422, 29.552631578947366, 29.653684210526315,
    29.754736842105263, 29.855789473684212, 29.956842105263156,
    30.057894736842105, 30.158947368421053, 30.259999999999998,
    30.361052631578946, 30.462105263157895, 30.563157894736843,
    30.664210526315788, 30.765263157894736, 30.866315789473685,
    30.96736842105263, 31.068421052631578, 31.169473684210526,
    31.270526315789475, 31.37157894736842, 31.472631578947368,
    31.573684210526316, 31.674736842105261, 31.77578947368421,
    31.876842105263158, 31.977894736842103, 32.078947368421048, 32.18,
    32.281052631578945, 32.382105263157889, 32.483157894736841,
    32.584210526315786, 32.685263157894731, 32.786315789473683,
    32.887368421052628, 32.988421052631573, 33.089473684210525,
    33.190526315789469, 33.291578947368414, 33.392631578947366,
    33.493684210526311, 33.594736842105256, 33.695789473684208,
    33.796842105263153, 33.8978947368421, 33.998947368421049, 34.099999999999994,
    34.201052631578946, 34.302105263157891, 34.403157894736836,
    34.504210526315788, 34.605263157894733, 34.706315789473678,
    34.80736842105263, 34.908421052631574, 35.009473684210519,
    35.110526315789471, 35.211578947368416, 35.312631578947361,
    35.413684210526313, 35.514736842105258, 35.61578947368421,
    35.716842105263154, 35.8178947368421, 35.918947368421051, 36.019999999999996,
    36.121052631578941, 36.222105263157893, 36.323157894736838,
    36.424210526315782, 36.525263157894734, 36.626315789473679,
    36.727368421052624, 36.828421052631576, 36.929473684210521,
    37.030526315789466, 37.131578947368418, 37.232631578947363,
    37.333684210526314, 37.434736842105259, 37.535789473684204,
    37.636842105263156, 37.7378947368421, 37.838947368421046, 37.94,
    38.041052631578943, 38.142105263157887, 38.243157894736839,
    38.344210526315784, 38.445263157894729, 38.546315789473681,
    38.647368421052626, 38.748421052631578, 38.849473684210523,
    38.950526315789467, 39.051578947368419, 39.152631578947364,
    39.253684210526309, 39.354736842105261, 39.455789473684206,
    39.556842105263151, 39.6578947368421, 39.758947368421047, 39.859999999999992,
    39.961052631578944, 40.062105263157889, 40.163157894736834,
    40.264210526315786, 40.365263157894731, 40.466315789473683,
    40.567368421052628, 40.668421052631572, 40.769473684210524,
    40.870526315789469, 40.971578947368414, 41.072631578947366,
    41.173684210526311, 41.274736842105256, 41.375789473684208,
    41.476842105263152, 41.5778947368421, 41.678947368421049, 41.779999999999994,
    41.881052631578946, 41.982105263157891, 42.083157894736836,
    42.184210526315788, 42.285263157894732, 42.386315789473677,
    42.487368421052629, 42.588421052631574, 42.689473684210519,
    42.790526315789471, 42.891578947368416, 42.992631578947361,
    43.093684210526312, 43.194736842105257, 43.2957894736842, 43.396842105263154,
    43.4978947368421, 43.598947368421051, 43.699999999999996, 43.801052631578941,
    43.902105263157893, 44.003157894736837, 44.104210526315782,
    44.205263157894734, 44.306315789473679, 44.407368421052624,
    44.508421052631576, 44.609473684210521, 44.710526315789465,
    44.811578947368417, 44.912631578947362, 45.013684210526314,
    45.114736842105259, 45.215789473684204, 45.316842105263156, 45.4178947368421,
    45.518947368421045, 45.62, 45.721052631578942, 45.822105263157887,
    45.923157894736839, 46.024210526315784, 46.125263157894729,
    46.226315789473681, 46.327368421052626, 46.42842105263157,
    46.529473684210522, 46.630526315789467, 46.731578947368419,
    46.832631578947364, 46.933684210526309, 47.034736842105261,
    47.135789473684206, 47.23684210526315, 47.3378947368421, 47.438947368421047,
    47.539999999999992, 47.641052631578944, 47.742105263157889,
    47.843157894736834, 47.944210526315786, 48.04526315789473,
    48.146315789473682, 48.247368421052627, 48.348421052631572,
    48.449473684210524 };

  int32_T c10_i4;
  int32_T c10_i5;
  boolean_T c10_bv[1900];
  int32_T c10_i6;
  boolean_T c10_bv1[1900];
  int32_T c10_i7;
  boolean_T c10_bv2[1900];
  int32_T c10_i8;
  boolean_T c10_bv3[1900];
  int32_T c10_i9;
  real_T c10_b_f[1900];
  real_T c10_dv2[475];
  int32_T c10_i10;
  real_T c10_c_f[1900];
  int32_T c10_aux[96];
  int32_T c10_b_i;
  int32_T c10_c_i;
  real_T c10_d_i;
  int32_T c10_i11;
  real_T c10_oldIdx;
  real_T c10_k;
  real_T c10_d_f[1900];
  boolean_T c10_copyCols[4];
  real_T c10_b_a;
  int32_T c10_trueCount;
  int32_T c10_c;
  int32_T c10_e_i;
  int32_T c10_tmp_size[2];
  int32_T c10_partialTrueCount;
  int32_T c10_f_i;
  int32_T c10_tmp_data[4];
  int32_T c10_i12;
  int32_T c10_b_trueCount;
  int32_T c10_loop_ub;
  int32_T c10_g_i;
  int32_T c10_i13;
  int32_T c10_b_tmp_size[2];
  int32_T c10_b_partialTrueCount;
  int32_T c10_h_i;
  int32_T c10_b_tmp_data[4];
  int32_T c10_i14;
  int32_T c10_b_loop_ub;
  int32_T c10_i15;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  for (c10_i = 0; c10_i < 4; c10_i++) {
    c10_iv[c10_i] = c10_i;
  }

  for (c10_i1 = 0; c10_i1 < 475; c10_i1++) {
    c10_iv1[c10_i1] = c10_iv2[c10_i1];
  }

  c10_g_bsxfun(chartInstance, c10_iv1, c10_iv, c10_b_indices);
  for (c10_i2 = 0; c10_i2 < 1900; c10_i2++) {
    c10_c_indices[c10_i2] = (real_T)c10_b_indices[c10_i2];
  }

  for (c10_i3 = 0; c10_i3 < 475; c10_i3++) {
    c10_dv[c10_i3] = c10_b_dv1[c10_i3];
  }

  c10_h_bsxfun(chartInstance, c10_dv, c10_c_indices, c10_f);
  for (c10_i4 = 0; c10_i4 < 1900; c10_i4++) {
    c10_bv[c10_i4] = (0.0 <= c10_f[c10_i4]);
  }

  for (c10_i5 = 0; c10_i5 < 1900; c10_i5++) {
    c10_bv1[c10_i5] = (c10_f[c10_i5] <= 1.0);
  }

  for (c10_i6 = 0; c10_i6 < 1900; c10_i6++) {
    c10_bv2[c10_i6] = (-1.0 <= c10_f[c10_i6]);
  }

  for (c10_i7 = 0; c10_i7 < 1900; c10_i7++) {
    c10_bv3[c10_i7] = (c10_f[c10_i7] < 0.0);
  }

  for (c10_i8 = 0; c10_i8 < 1900; c10_i8++) {
    c10_f[c10_i8] = (c10_f[c10_i8] + 1.0) * (real_T)(c10_bv2[c10_i8] &&
      c10_bv3[c10_i8]) + (1.0 - c10_f[c10_i8]) * (real_T)(c10_bv[c10_i8] &&
      c10_bv1[c10_i8]);
  }

  for (c10_i9 = 0; c10_i9 < 1900; c10_i9++) {
    c10_b_f[c10_i9] = c10_f[c10_i9];
  }

  c10_d_sum(chartInstance, c10_b_f, c10_dv2);
  for (c10_i10 = 0; c10_i10 < 1900; c10_i10++) {
    c10_c_f[c10_i10] = c10_f[c10_i10];
  }

  c10_i_bsxfun(chartInstance, c10_c_f, c10_dv2, c10_f);
  c10_aux[0] = 1;
  c10_aux[48] = 48;
  for (c10_b_i = 0; c10_b_i < 47; c10_b_i++) {
    c10_aux[c10_b_i + 1] = c10_aux[c10_b_i] + 1;
    c10_aux[c10_b_i + 49] = c10_aux[c10_b_i + 48] - 1;
  }

  for (c10_c_i = 0; c10_c_i < 1900; c10_c_i++) {
    c10_d_i = (real_T)c10_c_i + 1.0;
    c10_oldIdx = (real_T)c10_b_indices[(int32_T)c10_d_i - 1];
    c10_k = c10_c_mod(chartInstance, c10_oldIdx - 1.0);
    c10_b_a = c10_k;
    c10_c = (int32_T)c10_b_a;
    c10_b_indices[(int32_T)c10_d_i - 1] = c10_aux[c10_c];
  }

  c10_st.site = &c10_o_emlrtRSI;
  for (c10_i11 = 0; c10_i11 < 1900; c10_i11++) {
    c10_d_f[c10_i11] = c10_f[c10_i11];
  }

  c10_c_any(chartInstance, &c10_st, c10_d_f, c10_copyCols);
  c10_trueCount = 0;
  for (c10_e_i = 0; c10_e_i < 4; c10_e_i++) {
    if (c10_copyCols[c10_e_i]) {
      c10_trueCount++;
    }
  }

  c10_tmp_size[1] = c10_trueCount;
  c10_partialTrueCount = 0;
  for (c10_f_i = 0; c10_f_i < 4; c10_f_i++) {
    if (c10_copyCols[c10_f_i]) {
      c10_tmp_data[c10_partialTrueCount] = c10_f_i + 1;
      c10_partialTrueCount++;
    }
  }

  c10_weights_size[0] = c10_tmp_size[1];
  c10_weights_size[1] = 475;
  for (c10_i12 = 0; c10_i12 < 475; c10_i12++) {
    c10_loop_ub = c10_tmp_size[1] - 1;
    for (c10_i13 = 0; c10_i13 <= c10_loop_ub; c10_i13++) {
      c10_c_weights_data[c10_i13 + c10_weights_size[0] * c10_i12] =
        c10_f[c10_i12 + 475 * (c10_tmp_data[c10_i13] - 1)];
    }
  }

  c10_b_trueCount = 0;
  for (c10_g_i = 0; c10_g_i < 4; c10_g_i++) {
    if (c10_copyCols[c10_g_i]) {
      c10_b_trueCount++;
    }
  }

  c10_b_tmp_size[1] = c10_b_trueCount;
  c10_b_partialTrueCount = 0;
  for (c10_h_i = 0; c10_h_i < 4; c10_h_i++) {
    if (c10_copyCols[c10_h_i]) {
      c10_b_tmp_data[c10_b_partialTrueCount] = c10_h_i + 1;
      c10_b_partialTrueCount++;
    }
  }

  c10_indices_size[0] = c10_b_tmp_size[1];
  c10_indices_size[1] = 475;
  for (c10_i14 = 0; c10_i14 < 475; c10_i14++) {
    c10_b_loop_ub = c10_b_tmp_size[1] - 1;
    for (c10_i15 = 0; c10_i15 <= c10_b_loop_ub; c10_i15++) {
      c10_indices_data[c10_i15 + c10_indices_size[0] * c10_i14] =
        c10_b_indices[c10_i14 + 475 * (c10_b_tmp_data[c10_i15] - 1)];
    }
  }
}

static void c10_g_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[475], int32_T c10_b[4], int32_T c10_c[1900])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_6;
  int32_T c10_c_a;
  int32_T c10_b_b;
  int32_T c10_b_c;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 475; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c_a = c10_b_a[c10_b_varargin_3];
      c10_b_b = c10_b[c10_varargin_6];
      c10_b_c = c10_c_a + c10_b_b;
      c10_c[c10_c_varargin_1 + 475 * c10_varargin_2] = c10_b_c;
    }
  }
}

static void c10_h_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[475], real_T c10_b[1900], real_T c10_c[1900])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_5;
  int32_T c10_varargin_6;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 475; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_5 = c10_b_ib;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c[c10_c_varargin_1 + 475 * c10_varargin_2] = c10_b_a[c10_b_varargin_3]
        - c10_b[c10_varargin_5 + 475 * c10_varargin_6];
    }
  }
}

static void c10_d_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[1900], real_T c10_b_y[475])
{
  int32_T c10_j;
  int32_T c10_k;
  int32_T c10_b_j;
  int32_T c10_xoffset;
  int32_T c10_c_j;
  int32_T c10_ix;
  (void)chartInstance;
  for (c10_j = 0; c10_j < 475; c10_j++) {
    c10_b_j = c10_j;
    c10_b_y[c10_b_j] = c10_b_x[c10_b_j];
  }

  for (c10_k = 0; c10_k < 3; c10_k++) {
    c10_xoffset = (c10_k + 1) * 475;
    for (c10_c_j = 0; c10_c_j < 475; c10_c_j++) {
      c10_b_j = c10_c_j;
      c10_ix = c10_xoffset + c10_b_j;
      c10_b_y[c10_b_j] += c10_b_x[c10_ix];
    }
  }
}

static void c10_i_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[1900], real_T c10_b[475], real_T c10_c[1900])
{
  int32_T c10_k;
  int32_T c10_ia;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_k;
  int32_T c10_b_ia;
  int32_T c10_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_b_varargin_2;
  int32_T c10_varargin_3;
  int32_T c10_varargin_4;
  int32_T c10_varargin_5;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ia = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_2 = c10_ia + 1;
    for (c10_b_k = 0; c10_b_k < 475; c10_b_k++) {
      c10_b_ia = c10_b_k;
      c10_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_b_varargin_2 = c10_b_varargin_1 - 1;
      c10_varargin_3 = c10_b_ia;
      c10_varargin_4 = c10_varargin_2 - 1;
      c10_varargin_5 = c10_ib;
      c10_c[c10_c_varargin_1 + 475 * c10_b_varargin_2] = c10_b_a[c10_varargin_3
        + 475 * c10_varargin_4] / c10_b[c10_varargin_5];
    }
  }
}

static real_T c10_c_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x)
{
  real_T c10_r;
  real_T c10_c_x;
  real_T c10_d_x;
  real_T c10_e_x;
  real_T c10_f_x;
  boolean_T c10_b;
  real_T c10_g_x;
  boolean_T c10_b_b;
  boolean_T c10_rEQ0;
  (void)chartInstance;
  c10_c_x = c10_b_x;
  c10_d_x = c10_c_x;
  c10_e_x = c10_d_x;
  c10_f_x = c10_e_x;
  c10_b = muDoubleScalarIsNaN(c10_f_x);
  if (c10_b) {
    c10_r = rtNaN;
  } else {
    c10_g_x = c10_e_x;
    c10_b_b = muDoubleScalarIsInf(c10_g_x);
    if (c10_b_b) {
      c10_r = rtNaN;
    } else if (c10_e_x == 0.0) {
      c10_r = 0.0;
    } else {
      c10_r = muDoubleScalarRem(c10_e_x, 96.0);
      c10_rEQ0 = (c10_r == 0.0);
      if (c10_rEQ0) {
        c10_r = 0.0;
      } else {
        if (c10_e_x < 0.0) {
          c10_r += 96.0;
        }
      }
    }
  }

  return c10_r;
}

static void c10_c_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [1900], boolean_T c10_b_y[4])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  emlrtStack c10_c_st;
  int32_T c10_i;
  int32_T c10_i2;
  int32_T c10_iy;
  int32_T c10_b_i;
  int32_T c10_i1;
  int32_T c10_b_a;
  int32_T c10_c_a;
  int32_T c10_d_a;
  int32_T c10_e_a;
  int32_T c10_f_a;
  int32_T c10_b;
  int32_T c10_g_a;
  int32_T c10_b_b;
  boolean_T c10_overflow;
  int32_T c10_ix;
  boolean_T c10_exitg1;
  real_T c10_c_x;
  boolean_T c10_c_b;
  boolean_T c10_d_b;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_p_emlrtRSI;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  c10_c_st.prev = &c10_b_st;
  c10_c_st.tls = c10_b_st.tls;
  for (c10_i = 0; c10_i < 4; c10_i++) {
    c10_b_y[c10_i] = false;
  }

  c10_i2 = 0;
  c10_iy = -1;
  for (c10_b_i = 0; c10_b_i < 4; c10_b_i++) {
    c10_i1 = c10_i2;
    c10_b_a = c10_i2 + 474;
    c10_i2 = c10_b_a;
    c10_c_a = c10_i1 + 1;
    c10_i1 = c10_c_a;
    c10_d_a = c10_i2 + 1;
    c10_i2 = c10_d_a;
    c10_e_a = c10_iy + 1;
    c10_iy = c10_e_a;
    c10_b_st.site = &c10_q_emlrtRSI;
    c10_f_a = c10_i1;
    c10_b = c10_i2;
    c10_g_a = c10_f_a;
    c10_b_b = c10_b;
    if (c10_g_a > c10_b_b) {
      c10_overflow = false;
    } else {
      c10_overflow = (c10_b_b > 2147483646);
    }

    if (c10_overflow) {
      c10_c_st.site = &c10_r_emlrtRSI;
      c10_check_forloop_overflow_error(chartInstance, &c10_c_st);
    }

    c10_ix = c10_i1 - 1;
    c10_exitg1 = false;
    while ((!c10_exitg1) && (c10_ix + 1 <= c10_i2)) {
      if (c10_b_x[c10_ix] == 0.0) {
        c10_c_b = true;
      } else {
        c10_c_x = c10_b_x[c10_ix];
        c10_d_b = muDoubleScalarIsNaN(c10_c_x);
        if (c10_d_b) {
          c10_c_b = true;
        } else {
          c10_c_b = false;
        }
      }

      if (!c10_c_b) {
        c10_b_y[c10_iy] = true;
        c10_exitg1 = true;
      } else {
        c10_ix++;
      }
    }
  }
}

static void c10_c_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[2784], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [27550])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inCInd;
  real_T c10_b_inCInd;
  int32_T c10_c_inCInd;
  int32_T c10_i;
  int32_T c10_outRInd;
  uint8_T c10_inCol[48];
  real_T c10_b_outRInd;
  real_T c10_sumVal1;
  int32_T c10_i1;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i2;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  real_T c10_b_x;
  const mxArray *c10_c_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  int32_T c10_psiz;
  int32_T c10_idx;
  const mxArray *c10_e_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i3;
  int32_T c10_k;
  real_T c10_d1;
  int32_T c10_b_a;
  uint8_T c10_u;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inCInd = 0; c10_inCInd < 58; c10_inCInd++) {
    c10_b_inCInd = (real_T)c10_inCInd + 1.0;
    c10_c_inCInd = (int32_T)c10_b_inCInd - 1;
    for (c10_i = 0; c10_i < 48; c10_i++) {
      c10_inCol[c10_i] = c10_in_[c10_i + 48 * c10_c_inCInd];
    }

    for (c10_outRInd = 0; c10_outRInd < 475; c10_outRInd++) {
      c10_b_outRInd = (real_T)c10_outRInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_x_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_siz[c10_i1] = (real_T)c10_weights_size[c10_i1];
      }

      c10_varargin_2 = c10_b_outRInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i2 = 0; c10_i2 < 2; c10_i2++) {
        c10_b_siz[c10_i2] = (int32_T)c10_siz[c10_i2];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b = true;
      } else {
        c10_b = false;
      }

      if (!c10_b) {
        c10_p = false;
      } else {
        c10_p = true;
      }

      if (!c10_p) {
        c10_b_y = NULL;
        sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_c_y = NULL;
        sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_b_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_b_x <= (real_T)c10_c_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i3 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i3; c10_k++) {
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] * (real_T)
          c10_inCol[c10_indices_data[c10_linearInds] - 1];
        c10_b_a = c10_linearInds + 1;
        c10_linearInds = c10_b_a;
      }

      c10_d1 = muDoubleScalarRound(c10_sumVal1);
      if (c10_d1 < 256.0) {
        if (c10_d1 >= 0.0) {
          c10_u = (uint8_T)c10_d1;
        } else {
          c10_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c10_d1 >= 256.0) {
        c10_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c10_u = 0U;
      }

      c10_out_[((int32_T)c10_b_outRInd + 475 * ((int32_T)c10_b_inCInd - 1)) - 1]
        = c10_u;
    }
  }
}

static void c10_d_contributions
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_c_weights_data[], int32_T c10_weights_size[2],
   int32_T c10_indices_data[], int32_T c10_indices_size[2])
{
  emlrtStack c10_st;
  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_iv[4];
  int32_T c10_iv1[575];
  int32_T c10_b_indices[2300];
  static int32_T c10_iv2[575] = { -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18,
    18, 18, 18, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22,
    22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 30, 30,
    30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 35, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 41, 41,
    41, 41, 41, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 43, 43, 43, 43, 43, 43,
    43, 43, 43, 43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45, 45, 45, 45, 45,
    45, 45, 45, 45, 45, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 47, 47, 47, 47,
    47, 47, 47, 47, 47, 47, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 51, 51,
    51, 51, 51, 51, 51, 51, 51, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 53, 53,
    53, 53, 53, 53, 53, 53, 53, 53, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55,
    55, 55, 55, 55, 55, 55, 55, 55, 55, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    57, 57, 57, 57, 57 };

  int32_T c10_i2;
  int32_T c10_i3;
  real_T c10_dv[575];
  real_T c10_f[2300];
  static real_T c10_b_dv1[575] = { 0.55043478260869561, 0.65130434782608693,
    0.75217391304347825, 0.85304347826086957, 0.95391304347826078,
    1.0547826086956522, 1.1556521739130434, 1.2565217391304349,
    1.3573913043478261, 1.4582608695652173, 1.5591304347826087, 1.66,
    1.7608695652173914, 1.8617391304347826, 1.9626086956521738,
    2.0634782608695654, 2.1643478260869564, 2.2652173913043478,
    2.3660869565217393, 2.4669565217391303, 2.5678260869565217,
    2.6686956521739131, 2.7695652173913041, 2.8704347826086956,
    2.971304347826087, 3.0721739130434784, 3.1730434782608694,
    3.2739130434782608, 3.3747826086956523, 3.4756521739130433,
    3.5765217391304347, 3.6773913043478261, 3.7782608695652176,
    3.8791304347826085, 3.98, 4.0808695652173919, 4.1817391304347824,
    4.2826086956521738, 4.3834782608695653, 4.4843478260869567,
    4.5852173913043481, 4.68608695652174, 4.786956521739131, 4.8878260869565224,
    4.9886956521739139, 5.0895652173913044, 5.1904347826086958,
    5.2913043478260873, 5.3921739130434787, 5.49304347826087, 5.5939130434782616,
    5.694782608695653, 5.7956521739130435, 5.896521739130435, 5.9973913043478264,
    6.0982608695652178, 6.1991304347826093, 6.3000000000000007,
    6.4008695652173921, 6.5017391304347827, 6.6026086956521741,
    6.7034782608695656, 6.804347826086957, 6.9052173913043484, 7.00608695652174,
    7.1069565217391313, 7.2078260869565218, 7.3086956521739133,
    7.4095652173913047, 7.5104347826086961, 7.6113043478260876,
    7.712173913043479, 7.81304347826087, 7.913913043478261, 8.0147826086956524,
    8.1156521739130429, 8.2165217391304353, 8.3173913043478258,
    8.4182608695652181, 8.5191304347826087, 8.620000000000001,
    8.7208695652173915, 8.8217391304347839, 8.9226086956521744,
    9.0234782608695649, 9.1243478260869573, 9.2252173913043478, 9.32608695652174,
    9.42695652173913, 9.527826086956523, 9.6286956521739135, 9.7295652173913041,
    9.8304347826086964, 9.931304347826087, 10.032173913043479, 10.13304347826087,
    10.233913043478262, 10.334782608695653, 10.435652173913043,
    10.536521739130436, 10.637391304347826, 10.738260869565218,
    10.839130434782609, 10.940000000000001, 11.040869565217392,
    11.141739130434782, 11.242608695652175, 11.343478260869565,
    11.444347826086958, 11.545217391304348, 11.64608695652174,
    11.746956521739131, 11.847826086956522, 11.948695652173914,
    12.049565217391304, 12.150434782608697, 12.251304347826087,
    12.35217391304348, 12.45304347826087, 12.553913043478261, 12.654782608695653,
    12.755652173913044, 12.856521739130436, 12.957391304347826,
    13.058260869565219, 13.159130434782609, 13.26, 13.360869565217392,
    13.461739130434783, 13.562608695652175, 13.663478260869566,
    13.764347826086958, 13.865217391304348, 13.966086956521739,
    14.066956521739131, 14.167826086956522, 14.268695652173914,
    14.369565217391305, 14.470434782608697, 14.571304347826088,
    14.672173913043478, 14.77304347826087, 14.873913043478261,
    14.974782608695653, 15.075652173913044, 15.176521739130436,
    15.277391304347827, 15.378260869565217, 15.47913043478261, 15.58,
    15.680869565217392, 15.781739130434783, 15.882608695652175,
    15.983478260869566, 16.084347826086955, 16.185217391304349,
    16.286086956521739, 16.38695652173913, 16.48782608695652, 16.588695652173911,
    16.6895652173913, 16.790434782608695, 16.891304347826086, 16.992173913043477,
    17.093043478260867, 17.193913043478261, 17.294782608695652,
    17.395652173913042, 17.496521739130433, 17.597391304347823,
    17.698260869565217, 17.799130434782608, 17.9, 18.000869565217389,
    18.10173913043478, 18.202608695652174, 18.303478260869564,
    18.404347826086955, 18.505217391304345, 18.606086956521739,
    18.70695652173913, 18.807826086956521, 18.908695652173911, 19.0095652173913,
    19.110434782608696, 19.211304347826086, 19.312173913043477,
    19.413043478260867, 19.513913043478258, 19.614782608695652,
    19.715652173913043, 19.816521739130433, 19.917391304347824,
    20.018260869565218, 20.119130434782608, 20.22, 20.320869565217389,
    20.42173913043478, 20.522608695652174, 20.623478260869565,
    20.724347826086955, 20.825217391304346, 20.926086956521736,
    21.02695652173913, 21.127826086956521, 21.228695652173911,
    21.329565217391302, 21.430434782608696, 21.531304347826087,
    21.632173913043477, 21.733043478260868, 21.833913043478258,
    21.934782608695652, 22.035652173913043, 22.136521739130433,
    22.237391304347824, 22.338260869565215, 22.439130434782609, 22.54,
    22.64086956521739, 22.74173913043478, 22.842608695652174, 22.943478260869565,
    23.044347826086955, 23.145217391304346, 23.246086956521737,
    23.346956521739131, 23.447826086956521, 23.548695652173912,
    23.649565217391302, 23.750434782608693, 23.851304347826087,
    23.952173913043477, 24.053043478260868, 24.153913043478259,
    24.254782608695653, 24.355652173913043, 24.456521739130434,
    24.557391304347824, 24.658260869565215, 24.759130434782609, 24.86,
    24.96086956521739, 25.061739130434781, 25.162608695652171,
    25.263478260869565, 25.364347826086956, 25.465217391304346,
    25.566086956521737, 25.666956521739131, 25.767826086956521,
    25.868695652173912, 25.969565217391303, 26.070434782608693,
    26.171304347826087, 26.272173913043478, 26.373043478260868,
    26.473913043478259, 26.574782608695649, 26.675652173913043,
    26.776521739130434, 26.877391304347825, 26.978260869565215,
    27.079130434782609, 27.18, 27.28086956521739, 27.381739130434781,
    27.482608695652171, 27.583478260869565, 27.684347826086956,
    27.785217391304347, 27.886086956521737, 27.986956521739128,
    28.087826086956522, 28.188695652173912, 28.289565217391303,
    28.390434782608693, 28.491304347826087, 28.592173913043478,
    28.693043478260869, 28.793913043478259, 28.89478260869565,
    28.995652173913044, 29.096521739130434, 29.197391304347825,
    29.298260869565215, 29.399130434782606, 29.5, 29.600869565217391,
    29.701739130434781, 29.802608695652172, 29.903478260869566,
    30.004347826086956, 30.105217391304347, 30.206086956521737,
    30.306956521739128, 30.407826086956522, 30.508695652173913,
    30.609565217391303, 30.710434782608694, 30.811304347826084,
    30.912173913043478, 31.013043478260869, 31.113913043478259,
    31.21478260869565, 31.315652173913044, 31.416521739130435,
    31.517391304347825, 31.618260869565216, 31.719130434782606, 31.82,
    31.920869565217391, 32.021739130434781, 32.122608695652175,
    32.223478260869562, 32.324347826086957, 32.425217391304351,
    32.526086956521738, 32.626956521739132, 32.727826086956519,
    32.828695652173913, 32.9295652173913, 33.030434782608694, 33.131304347826088,
    33.232173913043475, 33.333043478260869, 33.433913043478263,
    33.53478260869565, 33.635652173913044, 33.736521739130431,
    33.837391304347825, 33.938260869565219, 34.039130434782606, 34.14,
    34.240869565217388, 34.341739130434782, 34.442608695652176,
    34.543478260869563, 34.644347826086957, 34.745217391304344,
    34.846086956521738, 34.946956521739132, 35.047826086956519,
    35.148695652173913, 35.2495652173913, 35.350434782608694, 35.451304347826088,
    35.552173913043475, 35.653043478260869, 35.753913043478256,
    35.85478260869565, 35.955652173913045, 36.056521739130432,
    36.157391304347826, 36.25826086956522, 36.359130434782607, 36.46,
    36.560869565217388, 36.661739130434782, 36.762608695652176,
    36.863478260869563, 36.964347826086957, 37.065217391304344,
    37.166086956521738, 37.266956521739132, 37.367826086956519,
    37.468695652173913, 37.5695652173913, 37.670434782608694, 37.771304347826089,
    37.872173913043476, 37.97304347826087, 38.073913043478257,
    38.174782608695651, 38.275652173913045, 38.376521739130432,
    38.477391304347826, 38.578260869565213, 38.679130434782607, 38.78,
    38.880869565217388, 38.981739130434782, 39.082608695652169,
    39.183478260869563, 39.284347826086957, 39.385217391304344,
    39.486086956521739, 39.586956521739133, 39.68782608695652,
    39.788695652173914, 39.8895652173913, 39.990434782608695, 40.091304347826089,
    40.192173913043476, 40.29304347826087, 40.393913043478257,
    40.494782608695651, 40.595652173913045, 40.696521739130432,
    40.797391304347826, 40.898260869565213, 40.999130434782607, 41.1,
    41.200869565217388, 41.301739130434783, 41.40260869565217,
    41.503478260869564, 41.604347826086958, 41.705217391304345,
    41.806086956521739, 41.906956521739126, 42.00782608695652,
    42.108695652173914, 42.2095652173913, 42.310434782608695, 42.411304347826089,
    42.512173913043476, 42.61304347826087, 42.713913043478257,
    42.814782608695651, 42.915652173913045, 43.016521739130432,
    43.117391304347827, 43.218260869565214, 43.319130434782608, 43.42,
    43.520869565217389, 43.621739130434783, 43.72260869565217,
    43.823478260869564, 43.924347826086958, 44.025217391304345,
    44.126086956521739, 44.226956521739126, 44.32782608695652,
    44.428695652173914, 44.5295652173913, 44.630434782608695, 44.731304347826082,
    44.832173913043476, 44.933043478260871, 45.033913043478258,
    45.134782608695652, 45.235652173913046, 45.336521739130433,
    45.437391304347827, 45.538260869565214, 45.639130434782608, 45.74,
    45.840869565217389, 45.941739130434783, 46.04260869565217,
    46.143478260869564, 46.244347826086958, 46.345217391304345,
    46.446086956521739, 46.546956521739126, 46.64782608695652,
    46.748695652173915, 46.8495652173913, 46.950434782608696, 47.051304347826083,
    47.152173913043477, 47.253043478260871, 47.353913043478258,
    47.454782608695652, 47.555652173913039, 47.656521739130433,
    47.757391304347827, 47.858260869565214, 47.959130434782608, 48.06,
    48.160869565217389, 48.261739130434783, 48.36260869565217,
    48.463478260869564, 48.564347826086959, 48.665217391304346,
    48.76608695652174, 48.866956521739127, 48.967826086956521,
    49.068695652173915, 49.1695652173913, 49.270434782608696, 49.371304347826083,
    49.472173913043477, 49.573043478260871, 49.673913043478258,
    49.774782608695652, 49.875652173913039, 49.976521739130433,
    50.077391304347827, 50.178260869565214, 50.279130434782608,
    50.379999999999995, 50.48086956521739, 50.581739130434784,
    50.682608695652171, 50.783478260869565, 50.884347826086959,
    50.985217391304346, 51.08608695652174, 51.186956521739127,
    51.287826086956521, 51.388695652173915, 51.4895652173913, 51.590434782608696,
    51.691304347826083, 51.792173913043477, 51.893043478260871,
    51.993913043478258, 52.094782608695652, 52.195652173913039,
    52.296521739130434, 52.397391304347828, 52.498260869565215,
    52.599130434782609, 52.699999999999996, 52.80086956521739,
    52.901739130434784, 53.002608695652171, 53.103478260869565,
    53.204347826086952, 53.305217391304346, 53.40608695652174,
    53.506956521739127, 53.607826086956521, 53.708695652173915, 53.8095652173913,
    53.9104347826087, 54.011304347826083, 54.112173913043478, 54.213043478260872,
    54.313913043478259, 54.414782608695653, 54.51565217391304,
    54.616521739130434, 54.717391304347828, 54.818260869565215,
    54.919130434782609, 55.019999999999996, 55.12086956521739,
    55.221739130434784, 55.322608695652171, 55.423478260869565,
    55.524347826086952, 55.625217391304346, 55.72608695652174,
    55.826956521739127, 55.927826086956522, 56.028695652173909, 56.1295652173913,
    56.2304347826087, 56.331304347826084, 56.432173913043478, 56.533043478260872,
    56.633913043478259, 56.734782608695653, 56.83565217391304,
    56.936521739130434, 57.037391304347828, 57.138260869565215,
    57.239130434782609, 57.339999999999996, 57.44086956521739,
    57.541739130434784, 57.642608695652171, 57.743478260869566,
    57.844347826086953, 57.945217391304347, 58.046086956521741,
    58.146956521739128, 58.247826086956522, 58.348695652173909, 58.4495652173913
  };

  int32_T c10_i4;
  int32_T c10_i5;
  boolean_T c10_bv[2300];
  int32_T c10_i6;
  boolean_T c10_bv1[2300];
  int32_T c10_i7;
  boolean_T c10_bv2[2300];
  int32_T c10_i8;
  boolean_T c10_bv3[2300];
  int32_T c10_i9;
  real_T c10_b_f[2300];
  real_T c10_dv2[575];
  int32_T c10_i10;
  real_T c10_c_f[2300];
  int32_T c10_aux[116];
  int32_T c10_b_i;
  int32_T c10_c_i;
  real_T c10_d_i;
  int32_T c10_i11;
  real_T c10_oldIdx;
  real_T c10_k;
  real_T c10_d_f[2300];
  boolean_T c10_copyCols[4];
  real_T c10_b_a;
  int32_T c10_trueCount;
  int32_T c10_c;
  int32_T c10_e_i;
  int32_T c10_tmp_size[2];
  int32_T c10_partialTrueCount;
  int32_T c10_f_i;
  int32_T c10_tmp_data[4];
  int32_T c10_i12;
  int32_T c10_b_trueCount;
  int32_T c10_loop_ub;
  int32_T c10_g_i;
  int32_T c10_i13;
  int32_T c10_b_tmp_size[2];
  int32_T c10_b_partialTrueCount;
  int32_T c10_h_i;
  int32_T c10_b_tmp_data[4];
  int32_T c10_i14;
  int32_T c10_b_loop_ub;
  int32_T c10_i15;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  for (c10_i = 0; c10_i < 4; c10_i++) {
    c10_iv[c10_i] = c10_i;
  }

  for (c10_i1 = 0; c10_i1 < 575; c10_i1++) {
    c10_iv1[c10_i1] = c10_iv2[c10_i1];
  }

  c10_j_bsxfun(chartInstance, c10_iv1, c10_iv, c10_b_indices);
  for (c10_i2 = 0; c10_i2 < 2300; c10_i2++) {
    chartInstance->c10_indices[c10_i2] = (real_T)c10_b_indices[c10_i2];
  }

  for (c10_i3 = 0; c10_i3 < 575; c10_i3++) {
    c10_dv[c10_i3] = c10_b_dv1[c10_i3];
  }

  c10_k_bsxfun(chartInstance, c10_dv, chartInstance->c10_indices, c10_f);
  for (c10_i4 = 0; c10_i4 < 2300; c10_i4++) {
    c10_bv[c10_i4] = (0.0 <= c10_f[c10_i4]);
  }

  for (c10_i5 = 0; c10_i5 < 2300; c10_i5++) {
    c10_bv1[c10_i5] = (c10_f[c10_i5] <= 1.0);
  }

  for (c10_i6 = 0; c10_i6 < 2300; c10_i6++) {
    c10_bv2[c10_i6] = (-1.0 <= c10_f[c10_i6]);
  }

  for (c10_i7 = 0; c10_i7 < 2300; c10_i7++) {
    c10_bv3[c10_i7] = (c10_f[c10_i7] < 0.0);
  }

  for (c10_i8 = 0; c10_i8 < 2300; c10_i8++) {
    c10_f[c10_i8] = (c10_f[c10_i8] + 1.0) * (real_T)(c10_bv2[c10_i8] &&
      c10_bv3[c10_i8]) + (1.0 - c10_f[c10_i8]) * (real_T)(c10_bv[c10_i8] &&
      c10_bv1[c10_i8]);
  }

  for (c10_i9 = 0; c10_i9 < 2300; c10_i9++) {
    c10_b_f[c10_i9] = c10_f[c10_i9];
  }

  c10_e_sum(chartInstance, c10_b_f, c10_dv2);
  for (c10_i10 = 0; c10_i10 < 2300; c10_i10++) {
    c10_c_f[c10_i10] = c10_f[c10_i10];
  }

  c10_l_bsxfun(chartInstance, c10_c_f, c10_dv2, c10_f);
  c10_aux[0] = 1;
  c10_aux[58] = 58;
  for (c10_b_i = 0; c10_b_i < 57; c10_b_i++) {
    c10_aux[c10_b_i + 1] = c10_aux[c10_b_i] + 1;
    c10_aux[c10_b_i + 59] = c10_aux[c10_b_i + 58] - 1;
  }

  for (c10_c_i = 0; c10_c_i < 2300; c10_c_i++) {
    c10_d_i = (real_T)c10_c_i + 1.0;
    c10_oldIdx = (real_T)c10_b_indices[(int32_T)c10_d_i - 1];
    c10_k = c10_d_mod(chartInstance, c10_oldIdx - 1.0);
    c10_b_a = c10_k;
    c10_c = (int32_T)c10_b_a;
    c10_b_indices[(int32_T)c10_d_i - 1] = c10_aux[c10_c];
  }

  c10_st.site = &c10_o_emlrtRSI;
  for (c10_i11 = 0; c10_i11 < 2300; c10_i11++) {
    c10_d_f[c10_i11] = c10_f[c10_i11];
  }

  c10_d_any(chartInstance, &c10_st, c10_d_f, c10_copyCols);
  c10_trueCount = 0;
  for (c10_e_i = 0; c10_e_i < 4; c10_e_i++) {
    if (c10_copyCols[c10_e_i]) {
      c10_trueCount++;
    }
  }

  c10_tmp_size[1] = c10_trueCount;
  c10_partialTrueCount = 0;
  for (c10_f_i = 0; c10_f_i < 4; c10_f_i++) {
    if (c10_copyCols[c10_f_i]) {
      c10_tmp_data[c10_partialTrueCount] = c10_f_i + 1;
      c10_partialTrueCount++;
    }
  }

  c10_weights_size[0] = c10_tmp_size[1];
  c10_weights_size[1] = 575;
  for (c10_i12 = 0; c10_i12 < 575; c10_i12++) {
    c10_loop_ub = c10_tmp_size[1] - 1;
    for (c10_i13 = 0; c10_i13 <= c10_loop_ub; c10_i13++) {
      c10_c_weights_data[c10_i13 + c10_weights_size[0] * c10_i12] =
        c10_f[c10_i12 + 575 * (c10_tmp_data[c10_i13] - 1)];
    }
  }

  c10_b_trueCount = 0;
  for (c10_g_i = 0; c10_g_i < 4; c10_g_i++) {
    if (c10_copyCols[c10_g_i]) {
      c10_b_trueCount++;
    }
  }

  c10_b_tmp_size[1] = c10_b_trueCount;
  c10_b_partialTrueCount = 0;
  for (c10_h_i = 0; c10_h_i < 4; c10_h_i++) {
    if (c10_copyCols[c10_h_i]) {
      c10_b_tmp_data[c10_b_partialTrueCount] = c10_h_i + 1;
      c10_b_partialTrueCount++;
    }
  }

  c10_indices_size[0] = c10_b_tmp_size[1];
  c10_indices_size[1] = 575;
  for (c10_i14 = 0; c10_i14 < 575; c10_i14++) {
    c10_b_loop_ub = c10_b_tmp_size[1] - 1;
    for (c10_i15 = 0; c10_i15 <= c10_b_loop_ub; c10_i15++) {
      c10_indices_data[c10_i15 + c10_indices_size[0] * c10_i14] =
        c10_b_indices[c10_i14 + 575 * (c10_b_tmp_data[c10_i15] - 1)];
    }
  }
}

static void c10_j_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c10_b_a[575], int32_T c10_b[4], int32_T c10_c[2300])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_6;
  int32_T c10_c_a;
  int32_T c10_b_b;
  int32_T c10_b_c;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 575; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c_a = c10_b_a[c10_b_varargin_3];
      c10_b_b = c10_b[c10_varargin_6];
      c10_b_c = c10_c_a + c10_b_b;
      c10_c[c10_c_varargin_1 + 575 * c10_varargin_2] = c10_b_c;
    }
  }
}

static void c10_k_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[575], real_T c10_b[2300], real_T c10_c[2300])
{
  int32_T c10_k;
  int32_T c10_ib;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_3;
  int32_T c10_b_k;
  int32_T c10_ia;
  int32_T c10_b_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_varargin_3;
  int32_T c10_varargin_5;
  int32_T c10_varargin_6;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ib = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_3 = c10_ib + 1;
    for (c10_b_k = 0; c10_b_k < 575; c10_b_k++) {
      c10_ia = c10_b_k;
      c10_b_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_varargin_2 = c10_b_varargin_1 - 1;
      c10_b_varargin_3 = c10_ia;
      c10_varargin_5 = c10_b_ib;
      c10_varargin_6 = c10_varargin_3 - 1;
      c10_c[c10_c_varargin_1 + 575 * c10_varargin_2] = c10_b_a[c10_b_varargin_3]
        - c10_b[c10_varargin_5 + 575 * c10_varargin_6];
    }
  }
}

static void c10_e_sum(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[2300], real_T c10_b_y[575])
{
  int32_T c10_j;
  int32_T c10_k;
  int32_T c10_b_j;
  int32_T c10_xoffset;
  int32_T c10_c_j;
  int32_T c10_ix;
  (void)chartInstance;
  for (c10_j = 0; c10_j < 575; c10_j++) {
    c10_b_j = c10_j;
    c10_b_y[c10_b_j] = c10_b_x[c10_b_j];
  }

  for (c10_k = 0; c10_k < 3; c10_k++) {
    c10_xoffset = (c10_k + 1) * 575;
    for (c10_c_j = 0; c10_c_j < 575; c10_c_j++) {
      c10_b_j = c10_c_j;
      c10_ix = c10_xoffset + c10_b_j;
      c10_b_y[c10_b_j] += c10_b_x[c10_ix];
    }
  }
}

static void c10_l_bsxfun(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_a[2300], real_T c10_b[575], real_T c10_c[2300])
{
  int32_T c10_k;
  int32_T c10_ia;
  int32_T c10_ic;
  int32_T c10_b_varargin_1;
  int32_T c10_varargin_2;
  int32_T c10_b_k;
  int32_T c10_b_ia;
  int32_T c10_ib;
  int32_T c10_b_ic;
  int32_T c10_c_varargin_1;
  int32_T c10_b_varargin_2;
  int32_T c10_varargin_3;
  int32_T c10_varargin_4;
  int32_T c10_varargin_5;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 4; c10_k++) {
    c10_ia = c10_k;
    c10_ic = c10_k;
    c10_b_varargin_1 = c10_ic + 1;
    c10_varargin_2 = c10_ia + 1;
    for (c10_b_k = 0; c10_b_k < 575; c10_b_k++) {
      c10_b_ia = c10_b_k;
      c10_ib = c10_b_k;
      c10_b_ic = c10_b_k;
      c10_c_varargin_1 = c10_b_ic;
      c10_b_varargin_2 = c10_b_varargin_1 - 1;
      c10_varargin_3 = c10_b_ia;
      c10_varargin_4 = c10_varargin_2 - 1;
      c10_varargin_5 = c10_ib;
      c10_c[c10_c_varargin_1 + 575 * c10_b_varargin_2] = c10_b_a[c10_varargin_3
        + 575 * c10_varargin_4] / c10_b[c10_varargin_5];
    }
  }
}

static real_T c10_d_mod(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x)
{
  real_T c10_r;
  real_T c10_c_x;
  real_T c10_d_x;
  real_T c10_e_x;
  real_T c10_f_x;
  boolean_T c10_b;
  real_T c10_g_x;
  boolean_T c10_b_b;
  boolean_T c10_rEQ0;
  (void)chartInstance;
  c10_c_x = c10_b_x;
  c10_d_x = c10_c_x;
  c10_e_x = c10_d_x;
  c10_f_x = c10_e_x;
  c10_b = muDoubleScalarIsNaN(c10_f_x);
  if (c10_b) {
    c10_r = rtNaN;
  } else {
    c10_g_x = c10_e_x;
    c10_b_b = muDoubleScalarIsInf(c10_g_x);
    if (c10_b_b) {
      c10_r = rtNaN;
    } else if (c10_e_x == 0.0) {
      c10_r = 0.0;
    } else {
      c10_r = muDoubleScalarRem(c10_e_x, 116.0);
      c10_rEQ0 = (c10_r == 0.0);
      if (c10_rEQ0) {
        c10_r = 0.0;
      } else {
        if (c10_e_x < 0.0) {
          c10_r += 116.0;
        }
      }
    }
  }

  return c10_r;
}

static void c10_d_any(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c10_sp, real_T c10_b_x
                      [2300], boolean_T c10_b_y[4])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  emlrtStack c10_c_st;
  int32_T c10_i;
  int32_T c10_i2;
  int32_T c10_iy;
  int32_T c10_b_i;
  int32_T c10_i1;
  int32_T c10_b_a;
  int32_T c10_c_a;
  int32_T c10_d_a;
  int32_T c10_e_a;
  int32_T c10_f_a;
  int32_T c10_b;
  int32_T c10_g_a;
  int32_T c10_b_b;
  boolean_T c10_overflow;
  int32_T c10_ix;
  boolean_T c10_exitg1;
  real_T c10_c_x;
  boolean_T c10_c_b;
  boolean_T c10_d_b;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_p_emlrtRSI;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  c10_c_st.prev = &c10_b_st;
  c10_c_st.tls = c10_b_st.tls;
  for (c10_i = 0; c10_i < 4; c10_i++) {
    c10_b_y[c10_i] = false;
  }

  c10_i2 = 0;
  c10_iy = -1;
  for (c10_b_i = 0; c10_b_i < 4; c10_b_i++) {
    c10_i1 = c10_i2;
    c10_b_a = c10_i2 + 574;
    c10_i2 = c10_b_a;
    c10_c_a = c10_i1 + 1;
    c10_i1 = c10_c_a;
    c10_d_a = c10_i2 + 1;
    c10_i2 = c10_d_a;
    c10_e_a = c10_iy + 1;
    c10_iy = c10_e_a;
    c10_b_st.site = &c10_q_emlrtRSI;
    c10_f_a = c10_i1;
    c10_b = c10_i2;
    c10_g_a = c10_f_a;
    c10_b_b = c10_b;
    if (c10_g_a > c10_b_b) {
      c10_overflow = false;
    } else {
      c10_overflow = (c10_b_b > 2147483646);
    }

    if (c10_overflow) {
      c10_c_st.site = &c10_r_emlrtRSI;
      c10_check_forloop_overflow_error(chartInstance, &c10_c_st);
    }

    c10_ix = c10_i1 - 1;
    c10_exitg1 = false;
    while ((!c10_exitg1) && (c10_ix + 1 <= c10_i2)) {
      if (c10_b_x[c10_ix] == 0.0) {
        c10_c_b = true;
      } else {
        c10_c_x = c10_b_x[c10_ix];
        c10_d_b = muDoubleScalarIsNaN(c10_c_x);
        if (c10_d_b) {
          c10_c_b = true;
        } else {
          c10_c_b = false;
        }
      }

      if (!c10_c_b) {
        c10_b_y[c10_iy] = true;
        c10_exitg1 = true;
      } else {
        c10_ix++;
      }
    }
  }
}

static void c10_d_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, uint8_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], uint8_T c10_out_
   [273125])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inRInd;
  real_T c10_b_inRInd;
  real_T c10_b_varargin_1;
  real_T c10_c_varargin_1;
  real_T c10_b_x;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  int32_T c10_idx;
  real_T c10_rowStart;
  const mxArray *c10_c_y = NULL;
  int32_T c10_outCInd;
  real_T c10_b_outCInd;
  real_T c10_sumVal1;
  int32_T c10_i;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i1;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  real_T c10_c_x;
  const mxArray *c10_e_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b2;
  boolean_T c10_c_p;
  const mxArray *c10_f_y = NULL;
  int32_T c10_psiz;
  int32_T c10_b_idx;
  const mxArray *c10_g_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i2;
  int32_T c10_k;
  real_T c10_d1;
  int32_T c10_b_a;
  int32_T c10_c;
  int32_T c10_c_a;
  uint8_T c10_u;
  int32_T c10_b_c;
  real_T c10_d_a;
  int32_T c10_b_b;
  int32_T c10_pixelIndex;
  uint8_T c10_pixelValue;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inRInd = 0; c10_inRInd < 475; c10_inRInd++) {
    c10_b_inRInd = (real_T)c10_inRInd + 1.0;
    c10_st.site = &c10_s_emlrtRSI;
    c10_b_varargin_1 = c10_b_inRInd;
    c10_b_st.site = &c10_u_emlrtRSI;
    c10_c_varargin_1 = c10_b_varargin_1;
    c10_b_x = c10_c_varargin_1;
    if (c10_b_x <= 475.0) {
      c10_b = true;
    } else {
      c10_b = false;
    }

    if (!c10_b) {
      c10_p = false;
    } else {
      c10_p = true;
    }

    if (!c10_p) {
      c10_b_y = NULL;
      sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c10_c_y = NULL;
      sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                  sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
    }

    c10_idx = (int32_T)c10_c_varargin_1;
    c10_rowStart = (real_T)c10_idx;
    for (c10_outCInd = 0; c10_outCInd < 575; c10_outCInd++) {
      c10_b_outCInd = (real_T)c10_outCInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_t_emlrtRSI;
      for (c10_i = 0; c10_i < 2; c10_i++) {
        c10_siz[c10_i] = (real_T)c10_weights_size[c10_i];
      }

      c10_varargin_2 = c10_b_outCInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_b_siz[c10_i1] = (int32_T)c10_siz[c10_i1];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_c_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_c_x <= (real_T)c10_c_hi) {
        c10_b2 = true;
      } else {
        c10_b2 = false;
      }

      if (!c10_b2) {
        c10_c_p = false;
      } else {
        c10_c_p = true;
      }

      if (!c10_c_p) {
        c10_f_y = NULL;
        sf_mex_assign(&c10_f_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_g_y = NULL;
        sf_mex_assign(&c10_g_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_f_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_g_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_b_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_b_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i2 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i2; c10_k++) {
        c10_b_a = c10_indices_data[c10_linearInds] - 1;
        c10_c = c10_b_a;
        c10_c_a = c10_c;
        c10_b_c = c10_c_a * 475;
        c10_d_a = c10_rowStart;
        c10_b_b = c10_b_c;
        c10_pixelIndex = ((int32_T)c10_d_a + c10_b_b) - 1;
        c10_pixelValue = c10_in_[c10_pixelIndex];
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] * (real_T)
          c10_pixelValue;
        c10_linearInds++;
      }

      c10_d1 = muDoubleScalarRound(c10_sumVal1);
      if (c10_d1 < 256.0) {
        if (c10_d1 >= 0.0) {
          c10_u = (uint8_T)c10_d1;
        } else {
          c10_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c10_d1 >= 256.0) {
        c10_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c10_u = 0U;
      }

      c10_out_[((int32_T)c10_b_inRInd + 475 * ((int32_T)c10_b_outCInd - 1)) - 1]
        = c10_u;
    }
  }
}

static void c10_imfilter(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_b_varargin_1[273125],
  uint8_T c10_b[273125])
{
  emlrtStack c10_st;
  int32_T c10_i;
  boolean_T c10_tooBig;
  int32_T c10_b_i;
  boolean_T c10_modeFlag;
  boolean_T c10_b_modeFlag;
  boolean_T c10_c_modeFlag;
  int32_T c10_i1;
  int32_T c10_i2;
  int32_T c10_i3;
  boolean_T c10_conn[25];
  int32_T c10_i4;
  real_T c10_padSizeT[2];
  int32_T c10_i5;
  int32_T c10_i6;
  real_T c10_outSizeT[2];
  int32_T c10_i7;
  static real_T c10_kernel[25] = { 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968,
    0.013306209891013651, 0.059634295436180138, 0.098320331348845769,
    0.059634295436180138, 0.013306209891013651, 0.021938231279714643,
    0.098320331348845769, 0.16210282163712664, 0.098320331348845769,
    0.021938231279714643, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.021938231279714643,
    0.013306209891013651, 0.0029690167439504968 };

  real_T c10_connDimsT[2];
  int32_T c10_i8;
  static real_T c10_nonZeroKernel[25] = { 0.0029690167439504968,
    0.013306209891013651, 0.021938231279714643, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.021938231279714643, 0.098320331348845769, 0.16210282163712664,
    0.098320331348845769, 0.021938231279714643, 0.013306209891013651,
    0.059634295436180138, 0.098320331348845769, 0.059634295436180138,
    0.013306209891013651, 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968 };

  real_T c10_startT[2];
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_db_emlrtRSI;
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    chartInstance->c10_varargin_1[c10_i] = c10_b_varargin_1[c10_i];
  }

  c10_padImage(chartInstance, &c10_st, chartInstance->c10_varargin_1,
               chartInstance->c10_a);
  c10_tooBig = true;
  for (c10_b_i = 0; c10_b_i < 2; c10_b_i++) {
    c10_tooBig = false;
  }

  if (!c10_tooBig) {
    c10_modeFlag = true;
  } else {
    c10_modeFlag = false;
  }

  if (c10_modeFlag) {
    c10_b_modeFlag = true;
  } else {
    c10_b_modeFlag = false;
  }

  c10_c_modeFlag = c10_b_modeFlag;
  if (c10_c_modeFlag) {
    for (c10_i2 = 0; c10_i2 < 2; c10_i2++) {
      c10_padSizeT[c10_i2] = 479.0 + 100.0 * (real_T)c10_i2;
    }

    for (c10_i4 = 0; c10_i4 < 2; c10_i4++) {
      c10_outSizeT[c10_i4] = 475.0 + 100.0 * (real_T)c10_i4;
    }

    for (c10_i6 = 0; c10_i6 < 2; c10_i6++) {
      c10_connDimsT[c10_i6] = 5.0;
    }

    ippfilter_uint8(chartInstance->c10_a, c10_b, c10_outSizeT, 2.0, c10_padSizeT,
                    c10_kernel, c10_connDimsT, false);
  } else {
    for (c10_i1 = 0; c10_i1 < 25; c10_i1++) {
      c10_conn[c10_i1] = true;
    }

    for (c10_i3 = 0; c10_i3 < 2; c10_i3++) {
      c10_padSizeT[c10_i3] = 479.0 + 100.0 * (real_T)c10_i3;
    }

    for (c10_i5 = 0; c10_i5 < 2; c10_i5++) {
      c10_outSizeT[c10_i5] = 475.0 + 100.0 * (real_T)c10_i5;
    }

    for (c10_i7 = 0; c10_i7 < 2; c10_i7++) {
      c10_connDimsT[c10_i7] = 5.0;
    }

    for (c10_i8 = 0; c10_i8 < 2; c10_i8++) {
      c10_startT[c10_i8] = 2.0;
    }

    imfilter_uint8(chartInstance->c10_a, c10_b, 2.0, c10_outSizeT, 2.0,
                   c10_padSizeT, c10_nonZeroKernel, 25.0, c10_conn, 2.0,
                   c10_connDimsT, c10_startT, 2.0, true, false);
  }
}

static void c10_padImage(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, uint8_T c10_a_tmp[273125], uint8_T
  c10_b_a[277341])
{
  emlrtStack c10_st;
  int32_T c10_j;
  real_T c10_b_j;
  int32_T c10_i;
  real_T c10_b_i;
  int32_T c10_c_i;
  static int32_T c10_idxA[1158] = { 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
    151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165,
    166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
    181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195,
    196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210,
    211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225,
    226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240,
    241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
    256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270,
    271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285,
    286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300,
    301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315,
    316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330,
    331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345,
    346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360,
    361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375,
    376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390,
    391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405,
    406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420,
    421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435,
    436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450,
    451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465,
    466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 475, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
    28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
    47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
    66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
    85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
    103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
    118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
    133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147,
    148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162,
    163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
    178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192,
    193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222,
    223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237,
    238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252,
    253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267,
    268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282,
    283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297,
    298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312,
    313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327,
    328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342,
    343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357,
    358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372,
    373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387,
    388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402,
    403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417,
    418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432,
    433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447,
    448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462,
    463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477,
    478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492,
    493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507,
    508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522,
    523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537,
    538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552,
    553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567,
    568, 569, 570, 571, 572, 573, 574, 575, 575, 575 };

  (void)chartInstance;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_fb_emlrtRSI;
  for (c10_j = 0; c10_j < 579; c10_j++) {
    c10_b_j = (real_T)c10_j + 1.0;
    for (c10_i = 0; c10_i < 479; c10_i++) {
      c10_b_i = (real_T)c10_i + 1.0;
      c10_c_i = c10_idxA[(int32_T)c10_b_j + 578];
      c10_b_a[((int32_T)c10_b_i + 479 * ((int32_T)c10_b_j - 1)) - 1] =
        c10_a_tmp[(emlrtDynamicBoundsCheckR2012b(c10_idxA[(int32_T)c10_b_i - 1],
        1, 475, &c10_p_emlrtBCI, &c10_st) + 475 * (emlrtDynamicBoundsCheckR2012b
        (c10_c_i, 1, 575, &c10_q_emlrtBCI, &c10_st) - 1)) - 1];
    }
  }
}

static void c10_mean(SFc10_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, uint8_T c10_b_x[273125], real_T c10_b_y[575])
{
  int32_T c10_i;
  int32_T c10_b_i;
  int32_T c10_c_i;
  int32_T c10_xpageoffset;
  int32_T c10_ypageoffset;
  int32_T c10_ix;
  int32_T c10_iy;
  int32_T c10_k;
  int32_T c10_xoffset;
  (void)chartInstance;
  for (c10_i = 0; c10_i < 575; c10_i++) {
    c10_c_i = c10_i;
    c10_xpageoffset = c10_c_i * 475 + 1;
    c10_ypageoffset = c10_c_i + 1;
    c10_ix = c10_xpageoffset - 1;
    c10_iy = c10_ypageoffset - 1;
    c10_b_y[c10_iy] = (real_T)c10_b_x[c10_ix];
    for (c10_k = 0; c10_k < 474; c10_k++) {
      c10_xoffset = (c10_xpageoffset + c10_k) + 1;
      c10_ix = c10_xoffset - 1;
      c10_iy = c10_ypageoffset - 1;
      c10_b_y[c10_iy] += (real_T)c10_b_x[c10_ix];
    }
  }

  for (c10_b_i = 0; c10_b_i < 575; c10_b_i++) {
    c10_b_y[c10_b_i] /= 475.0;
  }
}

static real_T c10_b_mean(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c10_b_x[575])
{
  real_T c10_c_y;
  int32_T c10_k;
  int32_T c10_xoffset;
  int32_T c10_ix;
  (void)chartInstance;
  c10_c_y = c10_b_x[0];
  for (c10_k = 0; c10_k < 574; c10_k++) {
    c10_xoffset = c10_k;
    c10_ix = c10_xoffset;
    c10_c_y += c10_b_x[c10_ix + 1];
  }

  return c10_c_y / 575.0;
}

static void c10_b_power(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, uint8_T c10_b_a[273125], uint8_T c10_b_y[273125])
{
  int32_T c10_k;
  int32_T c10_b_k;
  uint8_T c10_c_a;
  uint8_T c10_c_y;
  uint8_T c10_bu;
  int32_T c10_exitg1;
  uint32_T c10_u;
  uint32_T c10_u1;
  for (c10_k = 0; c10_k < 273125; c10_k++) {
    c10_b_k = c10_k;
    c10_c_a = c10_b_a[c10_b_k];
    c10_c_y = 1U;
    c10_bu = 2U;
    do {
      c10_exitg1 = 0;
      if ((uint8_T)(c10_bu & 1) != 0) {
        c10_u = (uint32_T)c10_c_a * (uint32_T)c10_c_y;
        if (c10_u > 255U) {
          c10_u = 255U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }

        c10_c_y = (uint8_T)c10_u;
      }

      c10_bu = (uint8_T)((uint32_T)c10_bu >> 1);
      if ((real_T)c10_bu == 0.0) {
        c10_exitg1 = 1;
      } else {
        c10_u1 = (uint32_T)c10_c_a * (uint32_T)c10_c_a;
        if (c10_u1 > 255U) {
          c10_u1 = 255U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }

        c10_c_a = (uint8_T)c10_u1;
      }
    } while (c10_exitg1 == 0);

    c10_b_y[c10_b_k] = c10_c_y;
  }
}

static void c10_c_imresize(SFc10_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c10_sp, real_T c10_c_Ain[2784], real_T
  c10_Bout[273125])
{
  emlrtStack c10_st;
  real_T c10_c_weights_data[1900];
  int32_T c10_weights_size[2];
  int32_T c10_indices_data[1900];
  int32_T c10_indices_size[2];
  int32_T c10_i;
  int32_T c10_b_weights_size[2];
  int32_T c10_b_indices_data[2300];
  int32_T c10_b_indices_size[2];
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_st.site = &c10_y_emlrtRSI;
  c10_c_contributions(chartInstance, &c10_st, c10_c_weights_data,
                      c10_weights_size, c10_indices_data, c10_indices_size);
  c10_st.site = &c10_ab_emlrtRSI;
  for (c10_i = 0; c10_i < 2784; c10_i++) {
    chartInstance->c10_Ain[c10_i] = c10_c_Ain[c10_i];
  }

  c10_e_resizeAlongDim(chartInstance, &c10_st, chartInstance->c10_Ain,
                       c10_c_weights_data, c10_weights_size, c10_indices_data,
                       chartInstance->c10_APartialResize);
  c10_st.site = &c10_bb_emlrtRSI;
  c10_d_contributions(chartInstance, &c10_st, chartInstance->c10_weights_data,
                      c10_b_weights_size, c10_b_indices_data, c10_b_indices_size);
  c10_st.site = &c10_cb_emlrtRSI;
  c10_f_resizeAlongDim(chartInstance, &c10_st, chartInstance->c10_APartialResize,
                       chartInstance->c10_weights_data, c10_b_weights_size,
                       c10_b_indices_data, c10_Bout);
}

static void c10_e_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_in_[2784], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], real_T c10_out_
   [27550])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inCInd;
  real_T c10_b_inCInd;
  int32_T c10_c_inCInd;
  int32_T c10_i;
  int32_T c10_outRInd;
  real_T c10_inCol[48];
  real_T c10_b_outRInd;
  real_T c10_sumVal1;
  int32_T c10_i1;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i2;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  real_T c10_b_x;
  const mxArray *c10_c_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  int32_T c10_psiz;
  int32_T c10_idx;
  const mxArray *c10_e_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i3;
  int32_T c10_k;
  int32_T c10_b_a;
  (void)chartInstance;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inCInd = 0; c10_inCInd < 58; c10_inCInd++) {
    c10_b_inCInd = (real_T)c10_inCInd + 1.0;
    c10_c_inCInd = (int32_T)c10_b_inCInd - 1;
    for (c10_i = 0; c10_i < 48; c10_i++) {
      c10_inCol[c10_i] = c10_in_[c10_i + 48 * c10_c_inCInd];
    }

    for (c10_outRInd = 0; c10_outRInd < 475; c10_outRInd++) {
      c10_b_outRInd = (real_T)c10_outRInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_x_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_siz[c10_i1] = (real_T)c10_weights_size[c10_i1];
      }

      c10_varargin_2 = c10_b_outRInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i2 = 0; c10_i2 < 2; c10_i2++) {
        c10_b_siz[c10_i2] = (int32_T)c10_siz[c10_i2];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b = true;
      } else {
        c10_b = false;
      }

      if (!c10_b) {
        c10_p = false;
      } else {
        c10_p = true;
      }

      if (!c10_p) {
        c10_b_y = NULL;
        sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_c_y = NULL;
        sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_b_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_b_x <= (real_T)c10_c_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i3 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i3; c10_k++) {
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] *
          c10_inCol[c10_indices_data[c10_linearInds] - 1];
        c10_b_a = c10_linearInds + 1;
        c10_linearInds = c10_b_a;
      }

      c10_out_[((int32_T)c10_b_outRInd + 475 * ((int32_T)c10_b_inCInd - 1)) - 1]
        = c10_sumVal1;
    }
  }
}

static void c10_f_resizeAlongDim
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, real_T c10_in_[27550], real_T c10_c_weights_data[],
   int32_T c10_weights_size[2], int32_T c10_indices_data[], real_T c10_out_
   [273125])
{
  emlrtStack c10_st;
  emlrtStack c10_b_st;
  int32_T c10_inRInd;
  real_T c10_b_inRInd;
  real_T c10_b_varargin_1;
  real_T c10_c_varargin_1;
  real_T c10_b_x;
  boolean_T c10_b;
  boolean_T c10_p;
  const mxArray *c10_b_y = NULL;
  int32_T c10_idx;
  real_T c10_rowStart;
  const mxArray *c10_c_y = NULL;
  int32_T c10_outCInd;
  real_T c10_b_outCInd;
  real_T c10_sumVal1;
  int32_T c10_i;
  real_T c10_varargin_2;
  real_T c10_siz[2];
  int32_T c10_i1;
  real_T c10_b_varargin_2;
  int32_T c10_b_siz[2];
  int32_T c10_hi;
  int32_T c10_b_hi;
  boolean_T c10_b1;
  boolean_T c10_b_p;
  const mxArray *c10_d_y = NULL;
  real_T c10_c_x;
  const mxArray *c10_e_y = NULL;
  int32_T c10_c_hi;
  boolean_T c10_b2;
  boolean_T c10_c_p;
  const mxArray *c10_f_y = NULL;
  int32_T c10_psiz;
  int32_T c10_b_idx;
  const mxArray *c10_g_y = NULL;
  real_T c10_ndx;
  int32_T c10_linearInds;
  real_T c10_d;
  int32_T c10_i2;
  int32_T c10_k;
  int32_T c10_b_a;
  int32_T c10_c;
  int32_T c10_c_a;
  int32_T c10_b_c;
  real_T c10_d_a;
  int32_T c10_b_b;
  int32_T c10_pixelIndex;
  real_T c10_pixelValue;
  (void)chartInstance;
  c10_st.prev = c10_sp;
  c10_st.tls = c10_sp->tls;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  for (c10_inRInd = 0; c10_inRInd < 475; c10_inRInd++) {
    c10_b_inRInd = (real_T)c10_inRInd + 1.0;
    c10_st.site = &c10_s_emlrtRSI;
    c10_b_varargin_1 = c10_b_inRInd;
    c10_b_st.site = &c10_u_emlrtRSI;
    c10_c_varargin_1 = c10_b_varargin_1;
    c10_b_x = c10_c_varargin_1;
    if (c10_b_x <= 475.0) {
      c10_b = true;
    } else {
      c10_b = false;
    }

    if (!c10_b) {
      c10_p = false;
    } else {
      c10_p = true;
    }

    if (!c10_p) {
      c10_b_y = NULL;
      sf_mex_assign(&c10_b_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c10_c_y = NULL;
      sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_b_y, 14,
                  sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_c_y)));
    }

    c10_idx = (int32_T)c10_c_varargin_1;
    c10_rowStart = (real_T)c10_idx;
    for (c10_outCInd = 0; c10_outCInd < 575; c10_outCInd++) {
      c10_b_outCInd = (real_T)c10_outCInd + 1.0;
      c10_sumVal1 = 0.0;
      c10_st.site = &c10_t_emlrtRSI;
      for (c10_i = 0; c10_i < 2; c10_i++) {
        c10_siz[c10_i] = (real_T)c10_weights_size[c10_i];
      }

      c10_varargin_2 = c10_b_outCInd;
      c10_b_st.site = &c10_u_emlrtRSI;
      for (c10_i1 = 0; c10_i1 < 2; c10_i1++) {
        c10_b_siz[c10_i1] = (int32_T)c10_siz[c10_i1];
      }

      c10_b_varargin_2 = c10_varargin_2;
      c10_hi = c10_b_siz[0];
      c10_b_hi = c10_hi;
      if (1.0 <= (real_T)c10_b_hi) {
        c10_b1 = true;
      } else {
        c10_b1 = false;
      }

      if (!c10_b1) {
        c10_b_p = false;
      } else {
        c10_b_p = true;
      }

      if (!c10_b_p) {
        c10_d_y = NULL;
        sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_e_y = NULL;
        sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_d_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_e_y)));
      }

      c10_hi = c10_b_siz[1];
      c10_c_x = c10_b_varargin_2;
      c10_c_hi = c10_hi;
      if (c10_c_x <= (real_T)c10_c_hi) {
        c10_b2 = true;
      } else {
        c10_b2 = false;
      }

      if (!c10_b2) {
        c10_c_p = false;
      } else {
        c10_c_p = true;
      }

      if (!c10_c_p) {
        c10_f_y = NULL;
        sf_mex_assign(&c10_f_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c10_g_y = NULL;
        sf_mex_assign(&c10_g_y, sf_mex_create("y", c10_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c10_b_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_f_y, 14,
                    sf_mex_call(&c10_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c10_b_st, NULL, "message", 1U, 1U, 14, c10_g_y)));
      }

      c10_psiz = c10_b_siz[0];
      c10_b_idx = c10_psiz * ((int32_T)c10_b_varargin_2 - 1);
      c10_ndx = (real_T)(c10_b_idx + 1);
      c10_linearInds = (int32_T)c10_ndx - 1;
      c10_d = (real_T)c10_weights_size[0];
      c10_i2 = (int32_T)c10_d - 1;
      for (c10_k = 0; c10_k <= c10_i2; c10_k++) {
        c10_b_a = c10_indices_data[c10_linearInds] - 1;
        c10_c = c10_b_a;
        c10_c_a = c10_c;
        c10_b_c = c10_c_a * 475;
        c10_d_a = c10_rowStart;
        c10_b_b = c10_b_c;
        c10_pixelIndex = ((int32_T)c10_d_a + c10_b_b) - 1;
        c10_pixelValue = c10_in_[c10_pixelIndex];
        c10_sumVal1 += c10_c_weights_data[c10_linearInds] * c10_pixelValue;
        c10_linearInds++;
      }

      c10_out_[((int32_T)c10_b_inRInd + 475 * ((int32_T)c10_b_outCInd - 1)) - 1]
        = c10_sumVal1;
    }
  }
}

static void c10_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_b_y, const char_T *c10_identifier, uint8_T c10_c_y[273125])
{
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = (const char *)c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_y), &c10_thisId,
    c10_c_y);
  sf_mex_destroy(&c10_b_y);
}

static void c10_b_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId, uint8_T c10_b_y
   [273125])
{
  int32_T c10_i;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), chartInstance->c10_b_uv, 1, 3,
                0U, 1, 0U, 2, 475, 575);
  for (c10_i = 0; c10_i < 273125; c10_i++) {
    c10_b_y[c10_i] = chartInstance->c10_b_uv[c10_i];
  }

  sf_mex_destroy(&c10_u);
}

static uint8_T c10_c_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_b_is_active_c10_untitled_restored_from_autosave, const char_T
   *c10_identifier)
{
  uint8_T c10_b_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = (const char *)c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_b_y = c10_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c10_b_is_active_c10_untitled_restored_from_autosave), &c10_thisId);
  sf_mex_destroy(&c10_b_is_active_c10_untitled_restored_from_autosave);
  return c10_b_y;
}

static uint8_T c10_d_emlrt_marshallIn
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  uint8_T c10_b_y;
  uint8_T c10_b_u;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_b_u, 1, 3, 0U, 0, 0U, 0);
  c10_b_y = c10_b_u;
  sf_mex_destroy(&c10_u);
  return c10_b_y;
}

static const mxArray *c10_chart_data_browse_helper
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c10_ssIdNumber)
{
  const mxArray *c10_mxData = NULL;
  real_T c10_d;
  c10_mxData = NULL;
  switch (c10_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c10_mxData, sf_mex_create("mxData", *chartInstance->c10_I1, 3,
      0U, 1U, 0U, 2, 475, 575), false);
    break;

   case 9U:
    c10_d = *chartInstance->c10_x;
    sf_mex_assign(&c10_mxData, sf_mex_create("mxData", &c10_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    sf_mex_assign(&c10_mxData, sf_mex_create("mxData", *chartInstance->c10_I2, 3,
      0U, 1U, 0U, 2, 475, 575), false);
    break;

   case 5U:
    sf_mex_assign(&c10_mxData, sf_mex_create("mxData", *chartInstance->c10_y, 3,
      0U, 1U, 0U, 2, 475, 575), false);
    break;
  }

  return c10_mxData;
}

static void c10_b_exp(SFc10_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, real_T c10_b_x[441])
{
  int32_T c10_k;
  int32_T c10_b_k;
  real_T c10_c_x;
  real_T c10_d_x;
  (void)chartInstance;
  for (c10_k = 0; c10_k < 441; c10_k++) {
    c10_b_k = c10_k;
    c10_c_x = c10_b_x[c10_b_k];
    c10_d_x = c10_c_x;
    c10_d_x = muDoubleScalarExp(c10_d_x);
    c10_b_x[c10_b_k] = c10_d_x;
  }
}

static void c10_emxEnsureCapacity_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, c10_emxArray_uint8_T *c10_emxArray, int32_T c10_oldNumel,
   const emlrtRTEInfo *c10_srcLocation)
{
  int32_T c10_newNumel;
  int32_T c10_i;
  int32_T c10_newCapacity;
  void *c10_newData;
  (void)chartInstance;
  if (c10_oldNumel < 0) {
    c10_oldNumel = 0;
  }

  c10_newNumel = 1;
  for (c10_i = 0; c10_i < c10_emxArray->numDimensions; c10_i++) {
    c10_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c10_newNumel, (uint32_T)
      c10_emxArray->size[c10_i], c10_srcLocation, c10_sp);
  }

  if (c10_newNumel > c10_emxArray->allocatedSize) {
    c10_newCapacity = c10_emxArray->allocatedSize;
    if (c10_newCapacity < 16) {
      c10_newCapacity = 16;
    }

    while (c10_newCapacity < c10_newNumel) {
      if (c10_newCapacity > 1073741823) {
        c10_newCapacity = MAX_int32_T;
      } else {
        c10_newCapacity <<= 1;
      }
    }

    c10_newData = emlrtCallocMex((uint32_T)c10_newCapacity, sizeof(uint8_T));
    if (c10_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c10_srcLocation, c10_sp);
    }

    if (c10_emxArray->data != NULL) {
      memcpy(c10_newData, c10_emxArray->data, sizeof(uint8_T) * (uint32_T)
             c10_oldNumel);
      if (c10_emxArray->canFreeData) {
        emlrtFreeMex(c10_emxArray->data);
      }
    }

    c10_emxArray->data = (uint8_T *)c10_newData;
    c10_emxArray->allocatedSize = c10_newCapacity;
    c10_emxArray->canFreeData = true;
  }
}

static void c10_emxInit_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c10_sp, c10_emxArray_uint8_T **c10_pEmxArray, int32_T
   c10_numDimensions, const emlrtRTEInfo *c10_srcLocation)
{
  c10_emxArray_uint8_T *c10_emxArray;
  int32_T c10_i;
  (void)chartInstance;
  *c10_pEmxArray = (c10_emxArray_uint8_T *)emlrtMallocMex(sizeof
    (c10_emxArray_uint8_T));
  if ((void *)*c10_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c10_srcLocation, c10_sp);
  }

  c10_emxArray = *c10_pEmxArray;
  c10_emxArray->data = (uint8_T *)NULL;
  c10_emxArray->numDimensions = c10_numDimensions;
  c10_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c10_numDimensions);
  if ((void *)c10_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c10_srcLocation, c10_sp);
  }

  c10_emxArray->allocatedSize = 0;
  c10_emxArray->canFreeData = true;
  for (c10_i = 0; c10_i < c10_numDimensions; c10_i++) {
    c10_emxArray->size[c10_i] = 0;
  }
}

static void c10_emxFree_uint8_T
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance,
   c10_emxArray_uint8_T **c10_pEmxArray)
{
  (void)chartInstance;
  if (*c10_pEmxArray != (c10_emxArray_uint8_T *)NULL) {
    if (((*c10_pEmxArray)->data != (uint8_T *)NULL) && (*c10_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c10_pEmxArray)->data);
    }

    emlrtFreeMex((*c10_pEmxArray)->size);
    emlrtFreeMex(*c10_pEmxArray);
    *c10_pEmxArray = (c10_emxArray_uint8_T *)NULL;
  }
}

static void init_dsm_address_info
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c10_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c10_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c10_I1 = (uint8_T (*)[273125])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c10_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c10_I2 = (uint8_T (*)[273125])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_y = (uint8_T (*)[273125])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c10_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2353185410U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1399094995U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2766006834U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4078216822U);
}

mxArray *sf_c10_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c10_untitled_restored_from_autosave_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c10_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c10_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366K4H8LPLI5PTC7JLEuNTzY0iC/NK8ksyUlNiS9KLS7JLwIy0oryc+MTS0vyixPLUpH8CwCyk"
    "SFG"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s6N3oKHCuXrMpDCTjeq5uqH";
}

static void sf_opaque_initialize_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray*
  sf_opaque_get_sim_state_c10_untitled_restored_from_autosave(SimStruct* S)
{
  return get_sim_state_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c10_untitled_restored_from_autosave
  (SimStruct* S, const mxArray *st)
{
  set_sim_state_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c10_untitled_restored_from_autosave
      ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c10_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc10_untitled_restored_from_autosave
    ((SFc10_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_untitled_restored_from_autosave(SimStruct
  *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_untitled_restored_from_autosave
      ((SFc10_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc10_untitled_restored_from_autosave
      ((SFc10_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c10_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV81u00AQttOCQAJUJBAXJHoCLpVACMSJljqJGpG0FQk/t7C1J/GS9a67P2l74RW48haIC+L",
    "KE3Dgwgtw5xGYddw0OHZMG1GBhCXHXu83387fzmwct9Fy8LqE97vLjnMWn+fwrjij60w6difu0f",
    "dF51Y6XkUhbqJtIkmknJkXJxE8BSWY0VTwBu+JXBjlPZDAfcTGQuoiNkUjwygf1A33LZ96EVI/b",
    "IfCsGAdZUmwxdkBssVGbyNPlUrwdR0g0KEUph/WGemPNZZ6zwvBHygTzTJBgW6b2KqlWoZpGjOo",
    "7YPf4EoT1Fgd6dbWRIOn9wvNtJaq9iFQRDGjhOdaGxLVhhgdrOFZHODvltFoVBbmh0TqdQjJEFS",
    "TDhJOwSHLSRVO7FBOtJCUsFrEPCs4rds2Q31aIgA2wyGo27oEMogF5bo4/u06WlrjZIdBFXZMv5",
    "itDbvGBv85hT2QhX7reWIIkvRhixcumjiktp9Ea5wl0zBNI3hO5GMf46cgKMxezBzVJhgn6KBEE",
    "QwSIxuqI+kQ3VvIZqKGzcyyLWOiUbBVGSxhqw1hVhTGbHWfe4QxVQjriLgJQ2AJa5VoMhs2Ys3H",
    "KUWDjkAH2/Qu3g2GUwx8CvMED2huuIYZQFJ3NrGw/Ir0jdIi8jB5q83m9PQ0rME1yB7xIa8KSEI",
    "VoM8S9xazBVTZ2CMQtdKJenngUYaUoRzVM7y6J+QAfTKjiByZYCNaCIxUH2OJO+GZwk0zC2ZjWY",
    "bziR9CYAsMZdDCbYPYHJ8oW9oe474bUn1QBeVLGudF1fafO85R/7nwG/3nUC77vD3B4+bwOBPP7",
    "LrnK7/iFzLrVvCL67qJ3NqE3MXMOosZOYtbwvvqwtuPb15ufvn+9cPKzffLn8vWd6fWd5N3K/ep",
    "crx+fSkdXz8sjONEH07ll8VuTOi1mMN/bYJ/KR2rB5v3xJMNz7yUrbjqdV7D7n2zu5HwnSvRt5L",
    "R9/D7sq3QB3FSb5X0G0F6kLBjYkbt1fI/nND3bIk/zqffR9eP1fnkr6xl47hYIr+EbweZvD35+s",
    "tr88mP1n9Vov9KJt4rSR/uEru7oevfvdM1HKsZg6ArAUuSxJeeFFGXGC0Unkky9p40748r55yy3",
    "L+i53+//Hn7fqePLZxQzp2zb56W3Lz2Hbef/234WX3ByeCX/mI75j1n/Wn8N+d456Eb6fjR+C+K",
    "F1IW5JxW0+kmkF7e7CnY9xN5ZqBX",
    ""
  };

  static char newstr [1229] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c10_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c10_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3062825749U));
  ssSetChecksum1(S,(3478018174U));
  ssSetChecksum2(S,(766628837U));
  ssSetChecksum3(S,(3240144678U));
}

static void mdlRTW_c10_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c10_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc10_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc10_untitled_restored_from_autosaveInstanceStruct *)
    utMalloc(sizeof(SFc10_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc10_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c10_untitled_restored_from_autosave;
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
    chartInstance->c10_JITStateAnimation,
    chartInstance->c10_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c10_untitled_restored_from_autosave(chartInstance);
}

void c10_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c10_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
