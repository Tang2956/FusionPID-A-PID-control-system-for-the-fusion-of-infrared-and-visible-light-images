/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c1_untitled_restored_from_autosave.h"
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
static emlrtMCInfo c1_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 59,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 27, /* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 28,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 29,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 30,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 31,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 32,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 33,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 34,/* lineNo */
  "anisodiff2D",                       /* fcnName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\anisodiff2D\\\\anisodiff2D.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 6,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 20,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 21,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 26,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 40,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 54,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 55,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 60,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 67,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 382,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 385,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 389,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 392,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 574,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 457,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 466,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 444,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_gb_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_hb_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_ib_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_jb_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c1_kb_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_lb_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_mb_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_nb_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_ob_emlrtRSI = { 931,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_pb_emlrtRSI = { 1005,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_qb_emlrtRSI = { 1033,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_rb_emlrtRSI = { 1045,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Program Files\\Polyspace\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 492,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 580,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "D:\\Program Files\\Polyspace\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 19, /* lineNo */
  18,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  124,                                 /* iLast */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 19,/* lineNo */
  22,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  124,                                 /* iLast */
  19,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 19,/* lineNo */
  26,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  19,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 19,/* lineNo */
  30,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  19,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 53,/* lineNo */
  18,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { 1,/* iFirst */
  124,                                 /* iLast */
  53,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 53,/* lineNo */
  22,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { 1,/* iFirst */
  124,                                 /* iLast */
  53,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 53,/* lineNo */
  26,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_g_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  53,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 53,/* lineNo */
  30,                                  /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  53,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_i_emlrtBCI = { 1,/* iFirst */
  124,                                 /* iLast */
  21,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_i_emlrtDCI = { 21,/* lineNo */
  9,                                   /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_j_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  21,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_k_emlrtBCI = { 1,/* iFirst */
  279000,                              /* iLast */
  70,                                  /* lineNo */
  1,                                   /* colNo */
  "G",                                 /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_j_emlrtDCI = { 70,/* lineNo */
  1,                                   /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_l_emlrtBCI = { 1,/* iFirst */
  124,                                 /* iLast */
  55,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_k_emlrtDCI = { 55,/* lineNo */
  9,                                   /* colNo */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_m_emlrtBCI = { 1,/* iFirst */
  166,                                 /* iLast */
  55,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "Fusion model4",                     /* fName */
  "#untitled_restored_from_autosave:80",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_n_emlrtBCI = { 1,/* iFirst */
  121,                                 /* iLast */
  5,                                   /* lineNo */
  11,                                  /* colNo */
  "tmp",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_l_emlrtDCI = { 5,/* lineNo */
  11,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_o_emlrtBCI = { 1,/* iFirst */
  121,                                 /* iLast */
  12,                                  /* lineNo */
  24,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_m_emlrtDCI = { 12,/* lineNo */
  24,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_p_emlrtBCI = { 1,/* iFirst */
  121,                                 /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_n_emlrtDCI = { 12,/* lineNo */
  17,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\\\\xe5\x8d\x9a\xe5\xa3\xab\xe7\xa7\x91\xe7\xa0\x94\\\\measurement\xe5\xa4\xa7\xe4\xbf\xae\\\\\xe4\xbb\xa3\xe7\xa0\x81\\\\mean_shift\\\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo c1_sb_emlrtRSI = { 53,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static emlrtRSInfo c1_tb_emlrtRSI = { 19,/* lineNo */
  "Fusion model4",                     /* fcnName */
  "#untitled_restored_from_autosave:80"/* pathName */
};

static const char_T c1_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c1_update_jit_animation_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_st);
static void sf_gateway_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c1_chartstep_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp);
static void initSimStructsc1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c1_mean_shift(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_ser[121], real_T c1_p);
static void c1_anisodiff2D(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, uint8_T c1_im[279000], real_T c1_i_diff_im[279000]);
static void c1_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_c_Ain[279000], uint8_T
  c1_Bout[17515]);
static void c1_contributions(SFc1_untitled_restored_from_autosaveInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T
  c1_weights_size[2], int32_T c1_indices_data[], int32_T c1_indices_size[2]);
static void c1_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, int32_T c1_i_a[155], int32_T c1_b[10],
                      int32_T c1_c[1550]);
static void c1_b_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[155], real_T c1_b[1550], real_T c1_c[1550]);
static void c1_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, real_T c1_b_x[1550], real_T c1_b_y[155]);
static void c1_c_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1550], real_T c1_b[155], real_T c1_c[1550]);
static real_T c1_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x);
static void c1_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1550],
                   boolean_T c1_b_y[10]);
static void c1_check_forloop_overflow_error
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp);
static void c1_resizeAlongDim(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_in_[279000], real_T
  c1_c_weights_data[], int32_T c1_weights_size[2], int32_T c1_indices_data[],
  uint8_T c1_out_[69750]);
static void c1_b_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2]);
static void c1_d_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[113], int32_T c1_b[10], int32_T c1_c[1130]);
static void c1_e_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[113], real_T c1_b[1130], real_T c1_c[1130]);
static void c1_b_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[1130], real_T c1_b_y[113]);
static void c1_f_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1130], real_T c1_b[113], real_T c1_c[1130]);
static real_T c1_b_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x);
static void c1_b_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1130],
                     boolean_T c1_b_y[10]);
static void c1_b_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[17515]);
static void c1_b_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_c_Ain[17515], uint8_T
  c1_Bout[279000]);
static void c1_c_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2]);
static void c1_g_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[450], int32_T c1_b[4], int32_T c1_c[1800]);
static void c1_h_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[450], real_T c1_b[1800], real_T c1_c[1800]);
static void c1_c_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[1800], real_T c1_b_y[450]);
static void c1_i_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1800], real_T c1_b[450], real_T c1_c[1800]);
static real_T c1_c_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x);
static void c1_c_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1800],
                     boolean_T c1_b_y[4]);
static void c1_c_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[17515], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[69750]);
static void c1_d_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2]);
static void c1_j_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[620], int32_T c1_b[4], int32_T c1_c[2480]);
static void c1_k_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[620], real_T c1_b[2480], real_T c1_c[2480]);
static void c1_d_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[2480], real_T c1_b_y[620]);
static void c1_l_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[2480], real_T c1_b[620], real_T c1_c[2480]);
static real_T c1_d_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x);
static void c1_d_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[2480],
                     boolean_T c1_b_y[4]);
static void c1_d_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[279000]);
static void c1_c_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_c_Ain[17515], real_T
  c1_Bout[279000]);
static void c1_e_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_in_[17515], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], real_T c1_out_[69750]);
static void c1_f_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], real_T c1_out_[279000]);
static void c1_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_padImage(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_a_tmp[279000], real_T c1_i_a[281144]);
static void c1_b_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_c_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_d_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_e_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_f_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_g_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_h_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000]);
static void c1_power(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_i_a[279000], real_T c1_b_y[279000]);
static void c1_exp(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, real_T c1_b_x[279000], real_T c1_c_x[279000]);
static void c1_b_power(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[279000], real_T c1_b_y[279000]);
static void c1_mean(SFc1_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, uint8_T c1_b_x[279000], real_T c1_b_y[620]);
static real_T c1_b_mean(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x[620]);
static void c1_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_b_y, const char_T *c1_identifier, uint8_T c1_c_y[279000]);
static void c1_b_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, uint8_T c1_b_y[279000]);
static uint8_T c1_c_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_b_is_active_c1_untitled_restored_from_autosave, const char_T
   *c1_identifier);
static uint8_T c1_d_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static const mxArray *c1_chart_data_browse_helper
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c1_ssIdNumber);
static void c1_b_exp(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[279000]);
static void c1_emxEnsureCapacity_real_T
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray, int32_T c1_oldNumel,
   const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxFree_real_T(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray);
static void init_dsm_address_info
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c1_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_jit_animation_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_createcellmatrix(2, 1), false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_y, 3, 0U, 1U, 0U,
    2, 450, 620), false);
  sf_mex_setcell(c1_b_y, 0, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_b_y, 1, c1_d_y);
  sf_mex_assign(&c1_st, c1_b_y, false);
  return c1_st;
}

static void set_sim_state_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_st)
{
  const mxArray *c1_u;
  int32_T c1_i;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "y",
                      chartInstance->c1_uv);
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    (*chartInstance->c1_y)[c1_i] = chartInstance->c1_uv[c1_i];
  }

  chartInstance->c1_is_active_c1_untitled_restored_from_autosave =
    c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
    "is_active_c1_untitled_restored_from_autosave");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void sf_gateway_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                      (*chartInstance->c1_e_I2)[c1_i]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, *chartInstance->c1_x);
  for (c1_i1 = 0; c1_i1 < 279000; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      (*chartInstance->c1_I1)[c1_i1]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_untitled_restored_from_autosave(chartInstance, &c1_st);
  c1_do_animation_call_c1_untitled_restored_from_autosave(chartInstance);
  for (c1_i2 = 0; c1_i2 < 279000; c1_i2++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U, (real_T)
                      (*chartInstance->c1_y)[c1_i2]);
  }
}

static void mdl_start_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  11U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 2035);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1519,
    -1, 1561);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1567,
    -1, 1578);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1570,
    -1, 1578);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1823,
    -1, 1831);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1936,
    -1, 1949);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 1936,
    -1, 1999);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 1936,
    -1, 2008);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 1950,
    -1, 1999);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 630, -1,
    658);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 869, -1,
    880);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 872,
    -1, 880);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 411, 425, 624);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 429, 443, 616);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1269, 1283,
                     1482);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1287, 1301,
                     1474);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance,
                  "E:/\xb2\xa9\xca\xbf\xbf\xc6\xd1\xd0/measurement\xb4\xf3\xd0\xde/\xb4\xfa\xc2\xeb/mean_shift/mean_shift.m",
                  14U, 0U, 1U, 0U, 2U, 0U, 0U, 0U, 1U, 1U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, "mean_shift",
                     0, -1, 620);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 176, 189, -1,
                    279);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 1U, 416, 436, 490,
                    493);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 152, 164, 291);
  covrtEmlWhileInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 112, 120,
                       493);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 179,
    189, -1, 1U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 1U, 419,
    436, -1, 2U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance,
                  "E:/\xb2\xa9\xca\xbf\xbf\xc6\xd1\xd0/measurement\xb4\xf3\xd0\xde/\xb4\xfa\xc2\xeb/anisodiff2D/anisodiff2D.m",
                  14U, 1U, 1U, 0U, 2U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 14U, 1U, 0U, "anisodiff2D",
                     1, -1, 2272);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 1U, 0U, 1068, 1082,
                    1435, 1453);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 1U, 1U, 1435, 1453, -1,
                    1453);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 14U, 1U, 0U, 525, 544,
                     2272);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 1U, 0U, 1071,
    1082, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void c1_chartstep_c1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp)
{
  emlrtStack c1_st;
  int32_T c1_i;
  real_T c1_b_x;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  real_T c1_c_imgn[708];
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  real_T c1_d_imgn[966];
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  real_T c1_e_imgn[620];
  c1_emxArray_real_T *c1_ser;
  int32_T c1_i34;
  int32_T c1_b_i;
  real_T c1_c_i;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_j;
  int32_T c1_i37;
  real_T c1_b_j;
  int32_T c1_i38;
  real_T c1_d;
  int32_T c1_i39;
  real_T c1_d1;
  real_T c1_d2;
  boolean_T c1_covSaturation;
  boolean_T c1_b;
  int32_T c1_i40;
  real_T c1_d3;
  boolean_T c1_b1;
  boolean_T c1_b_covSaturation;
  boolean_T c1_b2;
  uint32_T c1_q0;
  uint8_T c1_u;
  boolean_T c1_b3;
  int32_T c1_i41;
  uint32_T c1_qY;
  boolean_T c1_c_covSaturation;
  uint8_T c1_u1;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  uint32_T c1_u2;
  real_T c1_d4;
  int32_T c1_i47;
  real_T c1_d5;
  boolean_T c1_b4;
  int32_T c1_i48;
  boolean_T c1_b5;
  int32_T c1_i49;
  boolean_T c1_b6;
  int32_T c1_i50;
  boolean_T c1_b7;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_loop_ub;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  real_T c1_f_imgn[708];
  int32_T c1_b_loop_ub;
  int32_T c1_i69;
  int32_T c1_i70;
  int32_T c1_nx;
  int32_T c1_i71;
  int32_T c1_i72;
  int32_T c1_i73;
  const mxArray *c1_b_y = NULL;
  int32_T c1_i74;
  static char_T c1_b_cv[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  int32_T c1_i75;
  int32_T c1_i76;
  const mxArray *c1_c_y = NULL;
  int32_T c1_i77;
  int32_T c1_i78;
  real_T c1_b_ser[121];
  int32_T c1_i79;
  real_T c1_g_imgn[966];
  int32_T c1_i80;
  int32_T c1_i81;
  int32_T c1_i82;
  int32_T c1_i83;
  int32_T c1_i84;
  int32_T c1_i85;
  int32_T c1_i86;
  real_T c1_h_imgn[620];
  int32_T c1_d_i;
  int32_T c1_i87;
  int32_T c1_i88;
  int32_T c1_c_j;
  int32_T c1_i89;
  int32_T c1_i90;
  int32_T c1_i91;
  real_T c1_d6;
  real_T c1_d7;
  int32_T c1_i92;
  boolean_T c1_b8;
  boolean_T c1_b9;
  int32_T c1_i93;
  real_T c1_d8;
  boolean_T c1_b10;
  boolean_T c1_d_covSaturation;
  boolean_T c1_b11;
  int32_T c1_i94;
  real_T c1_d9;
  boolean_T c1_e_covSaturation;
  int32_T c1_i95;
  int32_T c1_i96;
  uint32_T c1_b_q0;
  uint8_T c1_u3;
  int32_T c1_i97;
  int32_T c1_i98;
  uint32_T c1_b_qY;
  int32_T c1_i99;
  boolean_T c1_f_covSaturation;
  uint8_T c1_u4;
  real_T c1_d10;
  real_T c1_d11;
  boolean_T c1_b12;
  int32_T c1_i100;
  uint32_T c1_u5;
  boolean_T c1_b13;
  boolean_T c1_b14;
  int32_T c1_i101;
  boolean_T c1_b15;
  real_T c1_dv1[620];
  int32_T c1_i102;
  int32_T c1_i103;
  real_T c1_lm;
  int32_T c1_i104;
  int32_T c1_e_i;
  int32_T c1_i105;
  int32_T c1_i106;
  int32_T c1_f_i;
  int32_T c1_i107;
  int32_T c1_c_loop_ub;
  real_T c1_d12;
  int32_T c1_i108;
  real_T c1_d13;
  int32_T c1_i109;
  real_T c1_b_i1;
  boolean_T c1_g_covSaturation;
  int32_T c1_d_loop_ub;
  int32_T c1_b_nx;
  int32_T c1_i110;
  real_T c1_b_i2;
  real_T c1_i_a;
  uint8_T c1_u6;
  const mxArray *c1_d_y = NULL;
  int32_T c1_i111;
  int32_T c1_i112;
  static char_T c1_cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  const mxArray *c1_e_y = NULL;
  real_T c1_c_x;
  real_T c1_d14;
  int32_T c1_i113;
  real_T c1_d_x;
  boolean_T c1_h_covSaturation;
  int32_T c1_i114;
  real_T c1_e_x;
  real_T c1_f_y;
  real_T c1_f_x;
  uint8_T c1_u7;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_g_y;
  real_T c1_j_a;
  int32_T c1_i115;
  int32_T c1_i116;
  real_T c1_d15;
  boolean_T c1_i_covSaturation;
  uint32_T c1_u8;
  boolean_T c1_j_covSaturation;
  uint8_T c1_u9;
  uint32_T c1_u10;
  boolean_T c1_k_covSaturation;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_I[c1_i] = (*chartInstance->c1_I1)[c1_i];
  }

  c1_b_x = *chartInstance->c1_x;
  for (c1_i1 = 0; c1_i1 < 279000; c1_i1++) {
    chartInstance->c1_I2[c1_i1] = (*chartInstance->c1_e_I2)[c1_i1];
  }

  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_st.site = &c1_i_emlrtRSI;
  for (c1_i2 = 0; c1_i2 < 279000; c1_i2++) {
    chartInstance->c1_b_I[c1_i2] = chartInstance->c1_I[c1_i2];
  }

  c1_imresize(chartInstance, &c1_st, chartInstance->c1_b_I, chartInstance->c1_I4);
  for (c1_i3 = 0; c1_i3 < 17515; c1_i3++) {
    chartInstance->c1_img1[c1_i3] = (real_T)chartInstance->c1_I4[c1_i3];
  }

  for (c1_i4 = 0; c1_i4 < 20584; c1_i4++) {
    chartInstance->c1_b_imgn[c1_i4] = 0.0;
  }

  c1_i5 = 0;
  c1_i6 = 0;
  for (c1_i7 = 0; c1_i7 < 155; c1_i7++) {
    for (c1_i9 = 0; c1_i9 < 113; c1_i9++) {
      chartInstance->c1_b_imgn[(c1_i9 + c1_i5) + 625] = chartInstance->
        c1_img1[c1_i9 + c1_i6];
    }

    c1_i5 += 124;
    c1_i6 += 113;
  }

  c1_i8 = 0;
  c1_i10 = 0;
  for (c1_i11 = 0; c1_i11 < 155; c1_i11++) {
    for (c1_i13 = 0; c1_i13 < 5; c1_i13++) {
      chartInstance->c1_b_imgn[(c1_i13 + c1_i8) + 620] = chartInstance->
        c1_img1[c1_i13 + c1_i10];
    }

    c1_i8 += 124;
    c1_i10 += 113;
  }

  c1_i12 = 0;
  c1_i14 = 0;
  for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
    for (c1_i17 = 0; c1_i17 < 118; c1_i17++) {
      c1_c_imgn[c1_i17 + c1_i12] = chartInstance->c1_b_imgn[(c1_i17 + c1_i14) +
        19096];
    }

    c1_i12 += 118;
    c1_i14 += 124;
  }

  c1_i16 = 0;
  c1_i18 = 0;
  for (c1_i19 = 0; c1_i19 < 6; c1_i19++) {
    for (c1_i21 = 0; c1_i21 < 118; c1_i21++) {
      chartInstance->c1_b_imgn[(c1_i21 + c1_i16) + 19840] = c1_c_imgn[c1_i21 +
        c1_i18];
    }

    c1_i16 += 124;
    c1_i18 += 118;
  }

  c1_i20 = 0;
  c1_i22 = 0;
  for (c1_i23 = 0; c1_i23 < 161; c1_i23++) {
    for (c1_i25 = 0; c1_i25 < 6; c1_i25++) {
      c1_d_imgn[c1_i25 + c1_i20] = chartInstance->c1_b_imgn[(c1_i25 + c1_i22) +
        732];
    }

    c1_i20 += 6;
    c1_i22 += 124;
  }

  c1_i24 = 0;
  c1_i26 = 0;
  for (c1_i27 = 0; c1_i27 < 161; c1_i27++) {
    for (c1_i29 = 0; c1_i29 < 6; c1_i29++) {
      chartInstance->c1_b_imgn[(c1_i29 + c1_i24) + 738] = c1_d_imgn[c1_i29 +
        c1_i26];
    }

    c1_i24 += 124;
    c1_i26 += 6;
  }

  c1_i28 = 0;
  for (c1_i30 = 0; c1_i30 < 5; c1_i30++) {
    for (c1_i32 = 0; c1_i32 < 124; c1_i32++) {
      c1_e_imgn[c1_i32 + c1_i28] = chartInstance->c1_b_imgn[(c1_i32 + c1_i28) +
        620];
    }

    c1_i28 += 124;
  }

  c1_i31 = 0;
  for (c1_i33 = 0; c1_i33 < 5; c1_i33++) {
    for (c1_i34 = 0; c1_i34 < 124; c1_i34++) {
      chartInstance->c1_b_imgn[c1_i34 + c1_i31] = c1_e_imgn[c1_i34 + c1_i31];
    }

    c1_i31 += 124;
  }

  c1_emxInit_real_T(chartInstance, c1_sp, &c1_ser, 2, &c1_emlrtRTEI);
  for (c1_b_i = 0; c1_b_i < 113; c1_b_i++) {
    c1_c_i = 6.0 + (real_T)c1_b_i;
    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 1);
    for (c1_j = 0; c1_j < 155; c1_j++) {
      c1_b_j = 6.0 + (real_T)c1_j;
      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 1);
      c1_d = c1_c_i - 5.0;
      c1_d2 = c1_c_i + 5.0;
      c1_b = (c1_d > c1_d2);
      c1_b1 = c1_b;
      c1_b2 = false;
      c1_b3 = (c1_b1 || c1_b2);
      if (c1_b3) {
        c1_i43 = 1;
        c1_i44 = 0;
      } else {
        c1_i42 = (int32_T)emlrtIntegerCheckR2012b(c1_d, &c1_emlrtDCI, c1_sp);
        c1_i43 = emlrtDynamicBoundsCheckR2012b(c1_i42, 1, 124, &c1_emlrtBCI,
          c1_sp);
        c1_i46 = (int32_T)emlrtIntegerCheckR2012b(c1_d2, &c1_b_emlrtDCI, c1_sp);
        c1_i44 = emlrtDynamicBoundsCheckR2012b(c1_i46, 1, 124, &c1_b_emlrtBCI,
          c1_sp);
      }

      c1_d4 = c1_b_j - 5.0;
      c1_d5 = c1_b_j + 5.0;
      c1_b4 = (c1_d4 > c1_d5);
      c1_b5 = c1_b4;
      c1_b6 = false;
      c1_b7 = (c1_b5 || c1_b6);
      if (c1_b7) {
        c1_i54 = 1;
        c1_i56 = 0;
      } else {
        c1_i53 = (int32_T)emlrtIntegerCheckR2012b(c1_d4, &c1_c_emlrtDCI, c1_sp);
        c1_i54 = emlrtDynamicBoundsCheckR2012b(c1_i53, 1, 166, &c1_c_emlrtBCI,
          c1_sp);
        c1_i58 = (int32_T)emlrtIntegerCheckR2012b(c1_d5, &c1_d_emlrtDCI, c1_sp);
        c1_i56 = emlrtDynamicBoundsCheckR2012b(c1_i58, 1, 166, &c1_d_emlrtBCI,
          c1_sp);
      }

      c1_i59 = c1_ser->size[0] * c1_ser->size[1];
      c1_ser->size[0] = (c1_i44 - c1_i43) + 1;
      c1_ser->size[1] = (c1_i56 - c1_i54) + 1;
      c1_st.site = &c1_tb_emlrtRSI;
      c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_ser, c1_i59,
        &c1_emlrtRTEI);
      c1_loop_ub = c1_i56 - c1_i54;
      for (c1_i67 = 0; c1_i67 <= c1_loop_ub; c1_i67++) {
        c1_b_loop_ub = c1_i44 - c1_i43;
        for (c1_i71 = 0; c1_i71 <= c1_b_loop_ub; c1_i71++) {
          c1_ser->data[c1_i71 + c1_ser->size[0] * c1_i67] =
            chartInstance->c1_b_imgn[((c1_i43 + c1_i71) + 124 * ((c1_i54 +
            c1_i67) - 1)) - 1];
        }
      }

      c1_st.site = &c1_j_emlrtRSI;
      c1_nx = c1_ser->size[0] * c1_ser->size[1];
      if (121 != c1_nx) {
        c1_b_y = NULL;
        sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c1_c_y = NULL;
        sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c1_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                    sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
      }

      for (c1_i74 = 0; c1_i74 < 121; c1_i74++) {
        c1_b_ser[c1_i74] = c1_ser->data[c1_i74];
      }

      c1_i78 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_i_emlrtDCI, c1_sp);
      c1_i80 = (int32_T)emlrtIntegerCheckR2012b(c1_b_j, &c1_i_emlrtDCI, c1_sp);
      c1_st.site = &c1_k_emlrtRSI;
      chartInstance->c1_b_imgn[(emlrtDynamicBoundsCheckR2012b(c1_i78, 1, 124,
        &c1_i_emlrtBCI, c1_sp) + 124 * (emlrtDynamicBoundsCheckR2012b(c1_i80, 1,
        166, &c1_j_emlrtBCI, c1_sp) - 1)) - 1] = c1_mean_shift(chartInstance,
        &c1_st, c1_b_ser, 61.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 0);
  c1_i35 = 0;
  c1_i36 = 0;
  for (c1_i37 = 0; c1_i37 < 155; c1_i37++) {
    for (c1_i38 = 0; c1_i38 < 113; c1_i38++) {
      c1_d1 = muDoubleScalarRound(chartInstance->c1_b_imgn[(c1_i38 + c1_i36) +
        625]);
      c1_covSaturation = false;
      if (c1_d1 < 256.0) {
        if (c1_d1 >= 0.0) {
          c1_u = (uint8_T)c1_d1;
        } else {
          c1_covSaturation = true;
          c1_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 630, 28);
        }
      } else if (c1_d1 >= 256.0) {
        c1_covSaturation = true;
        c1_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 630, 28);
      } else {
        c1_u = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 8, 0,
        c1_covSaturation);
      chartInstance->c1_I4[c1_i38 + c1_i35] = c1_u;
    }

    c1_i35 += 113;
    c1_i36 += 124;
  }

  c1_st.site = &c1_l_emlrtRSI;
  c1_b_imresize(chartInstance, &c1_st, chartInstance->c1_I4,
                chartInstance->c1_imgn);
  for (c1_i39 = 0; c1_i39 < 279000; c1_i39++) {
    c1_d3 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c1_imgn[c1_i39]);
    c1_b_covSaturation = false;
    if (c1_d3 < 256.0) {
      if (c1_d3 >= 0.0) {
        c1_u1 = (uint8_T)c1_d3;
      } else {
        c1_b_covSaturation = true;
        c1_u1 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 872, 8);
      }
    } else if (c1_d3 >= 256.0) {
      c1_b_covSaturation = true;
      c1_u1 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 872, 8);
    } else {
      c1_u1 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 10, 0,
      c1_b_covSaturation);
    chartInstance->c1_imgn[c1_i39] = c1_u1;
  }

  for (c1_i40 = 0; c1_i40 < 279000; c1_i40++) {
    c1_q0 = chartInstance->c1_I[c1_i40];
    c1_qY = c1_q0 - (uint32_T)chartInstance->c1_imgn[c1_i40];
    c1_c_covSaturation = false;
    if (c1_qY > c1_q0) {
      c1_c_covSaturation = true;
      c1_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 869, 11);
    }

    c1_u2 = c1_qY;
    if (c1_u2 > 255U) {
      c1_c_covSaturation = true;
      c1_u2 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 869, 11);
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 9, 0,
      c1_c_covSaturation);
    chartInstance->c1_IW1[c1_i40] = (uint8_T)c1_u2;
  }

  c1_st.site = &c1_m_emlrtRSI;
  for (c1_i41 = 0; c1_i41 < 279000; c1_i41++) {
    chartInstance->c1_b_I2[c1_i41] = chartInstance->c1_I2[c1_i41];
  }

  c1_imresize(chartInstance, &c1_st, chartInstance->c1_b_I2,
              chartInstance->c1_I4);
  for (c1_i45 = 0; c1_i45 < 17515; c1_i45++) {
    chartInstance->c1_img1[c1_i45] = (real_T)chartInstance->c1_I4[c1_i45];
  }

  for (c1_i47 = 0; c1_i47 < 20584; c1_i47++) {
    chartInstance->c1_b_imgn[c1_i47] = 0.0;
  }

  c1_i48 = 0;
  c1_i49 = 0;
  for (c1_i50 = 0; c1_i50 < 155; c1_i50++) {
    for (c1_i52 = 0; c1_i52 < 113; c1_i52++) {
      chartInstance->c1_b_imgn[(c1_i52 + c1_i48) + 625] = chartInstance->
        c1_img1[c1_i52 + c1_i49];
    }

    c1_i48 += 124;
    c1_i49 += 113;
  }

  c1_i51 = 0;
  c1_i55 = 0;
  for (c1_i57 = 0; c1_i57 < 155; c1_i57++) {
    for (c1_i61 = 0; c1_i61 < 5; c1_i61++) {
      chartInstance->c1_b_imgn[(c1_i61 + c1_i51) + 620] = chartInstance->
        c1_img1[c1_i61 + c1_i55];
    }

    c1_i51 += 124;
    c1_i55 += 113;
  }

  c1_i60 = 0;
  c1_i62 = 0;
  for (c1_i63 = 0; c1_i63 < 6; c1_i63++) {
    for (c1_i65 = 0; c1_i65 < 118; c1_i65++) {
      c1_f_imgn[c1_i65 + c1_i60] = chartInstance->c1_b_imgn[(c1_i65 + c1_i62) +
        19096];
    }

    c1_i60 += 118;
    c1_i62 += 124;
  }

  c1_i64 = 0;
  c1_i66 = 0;
  for (c1_i68 = 0; c1_i68 < 6; c1_i68++) {
    for (c1_i70 = 0; c1_i70 < 118; c1_i70++) {
      chartInstance->c1_b_imgn[(c1_i70 + c1_i64) + 19840] = c1_f_imgn[c1_i70 +
        c1_i66];
    }

    c1_i64 += 124;
    c1_i66 += 118;
  }

  c1_i69 = 0;
  c1_i72 = 0;
  for (c1_i73 = 0; c1_i73 < 161; c1_i73++) {
    for (c1_i76 = 0; c1_i76 < 6; c1_i76++) {
      c1_g_imgn[c1_i76 + c1_i69] = chartInstance->c1_b_imgn[(c1_i76 + c1_i72) +
        732];
    }

    c1_i69 += 6;
    c1_i72 += 124;
  }

  c1_i75 = 0;
  c1_i77 = 0;
  for (c1_i79 = 0; c1_i79 < 161; c1_i79++) {
    for (c1_i82 = 0; c1_i82 < 6; c1_i82++) {
      chartInstance->c1_b_imgn[(c1_i82 + c1_i75) + 738] = c1_g_imgn[c1_i82 +
        c1_i77];
    }

    c1_i75 += 124;
    c1_i77 += 6;
  }

  c1_i81 = 0;
  for (c1_i83 = 0; c1_i83 < 5; c1_i83++) {
    for (c1_i85 = 0; c1_i85 < 124; c1_i85++) {
      c1_h_imgn[c1_i85 + c1_i81] = chartInstance->c1_b_imgn[(c1_i85 + c1_i81) +
        620];
    }

    c1_i81 += 124;
  }

  c1_i84 = 0;
  for (c1_i86 = 0; c1_i86 < 5; c1_i86++) {
    for (c1_i87 = 0; c1_i87 < 124; c1_i87++) {
      chartInstance->c1_b_imgn[c1_i87 + c1_i84] = c1_h_imgn[c1_i87 + c1_i84];
    }

    c1_i84 += 124;
  }

  for (c1_d_i = 0; c1_d_i < 113; c1_d_i++) {
    c1_c_i = 6.0 + (real_T)c1_d_i;
    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 1);
    for (c1_c_j = 0; c1_c_j < 155; c1_c_j++) {
      c1_b_j = 6.0 + (real_T)c1_c_j;
      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 1);
      c1_d6 = c1_c_i - 5.0;
      c1_d7 = c1_c_i + 5.0;
      c1_b8 = (c1_d6 > c1_d7);
      c1_b9 = c1_b8;
      c1_b10 = false;
      c1_b11 = (c1_b9 || c1_b10);
      if (c1_b11) {
        c1_i96 = 1;
        c1_i97 = 0;
      } else {
        c1_i95 = (int32_T)emlrtIntegerCheckR2012b(c1_d6, &c1_e_emlrtDCI, c1_sp);
        c1_i96 = emlrtDynamicBoundsCheckR2012b(c1_i95, 1, 124, &c1_e_emlrtBCI,
          c1_sp);
        c1_i99 = (int32_T)emlrtIntegerCheckR2012b(c1_d7, &c1_f_emlrtDCI, c1_sp);
        c1_i97 = emlrtDynamicBoundsCheckR2012b(c1_i99, 1, 124, &c1_f_emlrtBCI,
          c1_sp);
      }

      c1_d10 = c1_b_j - 5.0;
      c1_d11 = c1_b_j + 5.0;
      c1_b12 = (c1_d10 > c1_d11);
      c1_b13 = c1_b12;
      c1_b14 = false;
      c1_b15 = (c1_b13 || c1_b14);
      if (c1_b15) {
        c1_i103 = 1;
        c1_i104 = 0;
      } else {
        c1_i102 = (int32_T)emlrtIntegerCheckR2012b(c1_d10, &c1_g_emlrtDCI, c1_sp);
        c1_i103 = emlrtDynamicBoundsCheckR2012b(c1_i102, 1, 166, &c1_g_emlrtBCI,
          c1_sp);
        c1_i105 = (int32_T)emlrtIntegerCheckR2012b(c1_d11, &c1_h_emlrtDCI, c1_sp);
        c1_i104 = emlrtDynamicBoundsCheckR2012b(c1_i105, 1, 166, &c1_h_emlrtBCI,
          c1_sp);
      }

      c1_i106 = c1_ser->size[0] * c1_ser->size[1];
      c1_ser->size[0] = (c1_i97 - c1_i96) + 1;
      c1_ser->size[1] = (c1_i104 - c1_i103) + 1;
      c1_st.site = &c1_sb_emlrtRSI;
      c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_ser, c1_i106,
        &c1_b_emlrtRTEI);
      c1_c_loop_ub = c1_i104 - c1_i103;
      for (c1_i108 = 0; c1_i108 <= c1_c_loop_ub; c1_i108++) {
        c1_d_loop_ub = c1_i97 - c1_i96;
        for (c1_i110 = 0; c1_i110 <= c1_d_loop_ub; c1_i110++) {
          c1_ser->data[c1_i110 + c1_ser->size[0] * c1_i108] =
            chartInstance->c1_b_imgn[((c1_i96 + c1_i110) + 124 * ((c1_i103 +
            c1_i108) - 1)) - 1];
        }
      }

      c1_st.site = &c1_n_emlrtRSI;
      c1_b_nx = c1_ser->size[0] * c1_ser->size[1];
      if (121 != c1_b_nx) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c1_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      for (c1_i112 = 0; c1_i112 < 121; c1_i112++) {
        c1_b_ser[c1_i112] = c1_ser->data[c1_i112];
      }

      c1_i113 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_k_emlrtDCI, c1_sp);
      c1_i114 = (int32_T)emlrtIntegerCheckR2012b(c1_b_j, &c1_k_emlrtDCI, c1_sp);
      c1_st.site = &c1_o_emlrtRSI;
      chartInstance->c1_b_imgn[(emlrtDynamicBoundsCheckR2012b(c1_i113, 1, 124,
        &c1_l_emlrtBCI, c1_sp) + 124 * (emlrtDynamicBoundsCheckR2012b(c1_i114, 1,
        166, &c1_m_emlrtBCI, c1_sp) - 1)) - 1] = c1_mean_shift(chartInstance,
        &c1_st, c1_b_ser, 61.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c1_emxFree_real_T(chartInstance, &c1_ser);
  covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 0);
  c1_i88 = 0;
  c1_i89 = 0;
  for (c1_i90 = 0; c1_i90 < 155; c1_i90++) {
    for (c1_i91 = 0; c1_i91 < 113; c1_i91++) {
      chartInstance->c1_img1[c1_i91 + c1_i88] = chartInstance->c1_b_imgn[(c1_i91
        + c1_i89) + 625];
    }

    c1_i88 += 113;
    c1_i89 += 124;
  }

  c1_st.site = &c1_p_emlrtRSI;
  c1_c_imresize(chartInstance, &c1_st, chartInstance->c1_img1,
                chartInstance->c1_dv);
  for (c1_i92 = 0; c1_i92 < 279000; c1_i92++) {
    c1_d8 = muDoubleScalarRound(chartInstance->c1_dv[c1_i92]);
    c1_d_covSaturation = false;
    if (c1_d8 < 256.0) {
      if (c1_d8 >= 0.0) {
        c1_u3 = (uint8_T)c1_d8;
      } else {
        c1_d_covSaturation = true;
        c1_u3 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1519, 42);
      }
    } else if (c1_d8 >= 256.0) {
      c1_d_covSaturation = true;
      c1_u3 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1519, 42);
    } else {
      c1_u3 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 0, 0,
      c1_d_covSaturation);
    chartInstance->c1_imgn[c1_i92] = c1_u3;
  }

  for (c1_i93 = 0; c1_i93 < 279000; c1_i93++) {
    c1_d9 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c1_imgn[c1_i93]);
    c1_e_covSaturation = false;
    if (c1_d9 < 256.0) {
      if (c1_d9 >= 0.0) {
        c1_u4 = (uint8_T)c1_d9;
      } else {
        c1_e_covSaturation = true;
        c1_u4 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1570, 8);
      }
    } else if (c1_d9 >= 256.0) {
      c1_e_covSaturation = true;
      c1_u4 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1570, 8);
    } else {
      c1_u4 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 2, 0,
      c1_e_covSaturation);
    chartInstance->c1_imgn[c1_i93] = c1_u4;
  }

  for (c1_i94 = 0; c1_i94 < 279000; c1_i94++) {
    c1_b_q0 = chartInstance->c1_I2[c1_i94];
    c1_b_qY = c1_b_q0 - (uint32_T)chartInstance->c1_imgn[c1_i94];
    c1_f_covSaturation = false;
    if (c1_b_qY > c1_b_q0) {
      c1_f_covSaturation = true;
      c1_b_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 1567, 11);
    }

    c1_u5 = c1_b_qY;
    if (c1_u5 > 255U) {
      c1_f_covSaturation = true;
      c1_u5 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1567, 11);
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 1, 0,
      c1_f_covSaturation);
    chartInstance->c1_imgn[c1_i94] = (uint8_T)c1_u5;
  }

  c1_st.site = &c1_q_emlrtRSI;
  for (c1_i98 = 0; c1_i98 < 279000; c1_i98++) {
    chartInstance->c1_c_I2[c1_i98] = chartInstance->c1_I2[c1_i98];
  }

  c1_anisodiff2D(chartInstance, chartInstance->c1_c_I2, chartInstance->c1_G);
  c1_b_power(chartInstance, chartInstance->c1_G, chartInstance->c1_dv);
  for (c1_i100 = 0; c1_i100 < 279000; c1_i100++) {
    chartInstance->c1_G[c1_i100] = chartInstance->c1_dv[c1_i100] /
      4.228250625E+9;
  }

  for (c1_i101 = 0; c1_i101 < 279000; c1_i101++) {
    chartInstance->c1_d_I2[c1_i101] = chartInstance->c1_I2[c1_i101];
  }

  c1_mean(chartInstance, chartInstance->c1_d_I2, c1_dv1);
  c1_lm = 255.0 - c1_b_mean(chartInstance, c1_dv1);
  c1_e_i = 0;
  while (c1_e_i <= 278999) {
    c1_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c1_f_i = 0;
  while (c1_f_i <= 278999) {
    if (chartInstance->c1_G[c1_f_i] < c1_lm) {
      c1_d12 = (real_T)(c1_f_i + 1);
      c1_i109 = (int32_T)emlrtIntegerCheckR2012b(c1_d12, &c1_j_emlrtDCI, c1_sp);
      chartInstance->c1_G[emlrtDynamicBoundsCheckR2012b(c1_i109, 1, 279000,
        &c1_k_emlrtBCI, c1_sp) - 1] = 0.0;
    }

    c1_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  for (c1_i107 = 0; c1_i107 < 279000; c1_i107++) {
    c1_d13 = muDoubleScalarRound(chartInstance->c1_G[c1_i107]);
    c1_g_covSaturation = false;
    if (c1_d13 < 256.0) {
      if (c1_d13 >= 0.0) {
        c1_u6 = (uint8_T)c1_d13;
      } else {
        c1_g_covSaturation = true;
        c1_u6 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1823, 8);
      }
    } else if (c1_d13 >= 256.0) {
      c1_g_covSaturation = true;
      c1_u6 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1823, 8);
    } else {
      c1_u6 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 3, 0,
      c1_g_covSaturation);
    (*chartInstance->c1_y)[c1_i107] = c1_u6;
  }

  c1_mean(chartInstance, chartInstance->c1_I, c1_dv1);
  c1_b_i1 = c1_b_mean(chartInstance, c1_dv1);
  c1_mean(chartInstance, chartInstance->c1_I2, c1_dv1);
  c1_b_i2 = c1_b_mean(chartInstance, c1_dv1);
  c1_i_a = c1_b_x + 0.5;
  for (c1_i111 = 0; c1_i111 < 279000; c1_i111++) {
    c1_d14 = muDoubleScalarRound(c1_i_a * (real_T)chartInstance->c1_IW1[c1_i111]);
    c1_h_covSaturation = false;
    if (c1_d14 < 256.0) {
      if (c1_d14 >= 0.0) {
        c1_u7 = (uint8_T)c1_d14;
      } else {
        c1_h_covSaturation = true;
        c1_u7 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1936, 13);
      }
    } else if (c1_d14 >= 256.0) {
      c1_h_covSaturation = true;
      c1_u7 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1936, 13);
    } else {
      c1_u7 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 4, 0,
      c1_h_covSaturation);
    chartInstance->c1_IW1[c1_i111] = c1_u7;
  }

  c1_c_x = c1_b_i2 - c1_b_i1;
  c1_d_x = c1_c_x;
  c1_e_x = c1_d_x;
  c1_f_y = muDoubleScalarAbs(c1_e_x);
  c1_f_x = c1_b_i1 - c1_b_i2;
  c1_g_x = c1_f_x;
  c1_h_x = c1_g_x;
  c1_g_y = muDoubleScalarAbs(c1_h_x);
  c1_j_a = c1_b_x + 0.5 * ((c1_f_y + (c1_b_i2 - c1_b_i1)) / (2.0 * c1_g_y));
  for (c1_i115 = 0; c1_i115 < 279000; c1_i115++) {
    c1_d15 = muDoubleScalarRound(c1_j_a * (real_T)chartInstance->c1_imgn[c1_i115]);
    c1_i_covSaturation = false;
    if (c1_d15 < 256.0) {
      if (c1_d15 >= 0.0) {
        c1_u9 = (uint8_T)c1_d15;
      } else {
        c1_i_covSaturation = true;
        c1_u9 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1950, 49);
      }
    } else if (c1_d15 >= 256.0) {
      c1_i_covSaturation = true;
      c1_u9 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1950, 49);
    } else {
      c1_u9 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 7, 0,
      c1_i_covSaturation);
    chartInstance->c1_imgn[c1_i115] = c1_u9;
  }

  for (c1_i116 = 0; c1_i116 < 279000; c1_i116++) {
    c1_u8 = (uint32_T)chartInstance->c1_IW1[c1_i116] + (uint32_T)
      chartInstance->c1_imgn[c1_i116];
    c1_j_covSaturation = false;
    if (c1_u8 > 255U) {
      c1_j_covSaturation = true;
      c1_u8 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1936, 63);
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 5, 0,
      c1_j_covSaturation);
    c1_u10 = (uint32_T)(uint8_T)c1_u8 + (uint32_T)(*chartInstance->c1_y)[c1_i116];
    c1_k_covSaturation = false;
    if (c1_u10 > 255U) {
      c1_k_covSaturation = true;
      c1_u10 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1936, 72);
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 6, 0,
      c1_k_covSaturation);
    (*chartInstance->c1_y)[c1_i116] = (uint8_T)c1_u10;
  }
}

static void initSimStructsc1_untitled_restored_from_autosave
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c1_mean_shift(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_ser[121], real_T c1_p)
{
  int32_T c1_i;
  int32_T c1_i1;
  real_T c1_tmp[121];
  real_T c1_pre_w;
  real_T c1_point;
  int32_T c1_exitg1;
  int32_T c1_i2;
  int32_T c1_b_i;
  real_T c1_c_i;
  int32_T c1_k;
  int32_T c1_i3;
  int32_T c1_b_k;
  int32_T c1_i4;
  real_T c1_i_a;
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_K[121];
  real_T c1_b_y;
  int32_T c1_c_k;
  int32_T c1_i7;
  int32_T c1_d_k;
  real_T c1_b_x;
  int32_T c1_i8;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_d_x[121];
  int32_T c1_e_k;
  real_T c1_d_y;
  int32_T c1_xoffset;
  int32_T c1_f_k;
  int32_T c1_ix;
  real_T c1_w;
  int32_T c1_b_xoffset;
  real_T c1_e_x;
  int32_T c1_b_ix;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_e_y;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_f_y;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 14U, 0, 0);
  for (c1_i = 0; c1_i < 121; c1_i++) {
    c1_tmp[c1_i] = c1_ser[c1_i];
  }

  c1_i1 = (int32_T)emlrtIntegerCheckR2012b(c1_p, &c1_l_emlrtDCI, c1_sp);
  c1_pre_w = c1_tmp[emlrtDynamicBoundsCheckR2012b(c1_i1, 1, 121, &c1_n_emlrtBCI,
    c1_sp) - 1];
  c1_point = c1_p;
  do {
    c1_exitg1 = 0;
    covrtEmlWhileEval(chartInstance->c1_covrtInstance, 14U, 0, 0, true);
    for (c1_i2 = 0; c1_i2 < 121; c1_i2++) {
      c1_ser[c1_i2] = c1_tmp[c1_i2] - c1_pre_w;
    }

    for (c1_b_i = 0; c1_b_i < 121; c1_b_i++) {
      c1_c_i = 1.0 + (real_T)c1_b_i;
      covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 0, 1);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 14U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 14U, 0U, 0U, c1_c_i,
                          c1_point, -1, 1U, c1_c_i != c1_point))) {
        c1_i4 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_m_emlrtDCI, c1_sp);
        c1_i5 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_n_emlrtDCI, c1_sp);
        c1_ser[emlrtDynamicBoundsCheckR2012b(c1_i5, 1, 121, &c1_p_emlrtBCI,
          c1_sp) - 1] = c1_ser[emlrtDynamicBoundsCheckR2012b(c1_i4, 1, 121,
          &c1_o_emlrtBCI, c1_sp) - 1] / (c1_c_i - c1_point);
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 0, 0);
    for (c1_k = 0; c1_k < 121; c1_k++) {
      c1_b_k = c1_k;
      c1_i_a = c1_ser[c1_b_k];
      c1_b_y = c1_i_a * c1_i_a;
      c1_K[c1_b_k] = c1_b_y;
    }

    for (c1_i3 = 0; c1_i3 < 121; c1_i3++) {
      c1_ser[c1_i3] = c1_K[c1_i3];
    }

    for (c1_i6 = 0; c1_i6 < 121; c1_i6++) {
      c1_K[c1_i6] = -0.5 * c1_ser[c1_i6];
    }

    for (c1_c_k = 0; c1_c_k < 121; c1_c_k++) {
      c1_d_k = c1_c_k;
      c1_b_x = c1_K[c1_d_k];
      c1_c_x = c1_b_x;
      c1_c_x = muDoubleScalarExp(c1_c_x);
      c1_K[c1_d_k] = c1_c_x;
    }

    for (c1_i7 = 0; c1_i7 < 121; c1_i7++) {
      c1_K[c1_i7] *= 3.9894228040143274;
    }

    for (c1_i8 = 0; c1_i8 < 121; c1_i8++) {
      c1_d_x[c1_i8] = c1_tmp[c1_i8] * c1_K[c1_i8];
    }

    c1_c_y = c1_d_x[0];
    for (c1_e_k = 0; c1_e_k < 120; c1_e_k++) {
      c1_xoffset = c1_e_k;
      c1_ix = c1_xoffset;
      c1_c_y += c1_d_x[c1_ix + 1];
    }

    c1_d_y = c1_K[0];
    for (c1_f_k = 0; c1_f_k < 120; c1_f_k++) {
      c1_b_xoffset = c1_f_k;
      c1_b_ix = c1_b_xoffset;
      c1_d_y += c1_K[c1_b_ix + 1];
    }

    c1_w = c1_c_y / c1_d_y;
    c1_e_x = c1_w - c1_pre_w;
    c1_f_x = c1_e_x;
    c1_g_x = c1_f_x;
    c1_e_y = muDoubleScalarAbs(c1_g_x);
    c1_h_x = c1_w - c1_pre_w;
    c1_i_x = c1_h_x;
    c1_j_x = c1_i_x;
    c1_f_y = muDoubleScalarAbs(c1_j_x);
    if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 14U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 14U, 0U, 1U, c1_e_y,
                        0.01, -1, 2U, c1_f_y < 0.01))) {
      c1_exitg1 = 1;
    } else {
      c1_pre_w = c1_w;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  } while (c1_exitg1 == 0);

  return c1_w;
}

static void c1_anisodiff2D(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, uint8_T c1_im[279000], real_T c1_i_diff_im[279000])
{
  int32_T c1_i;
  int32_T c1_t;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i30;
  int32_T c1_i31;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 14U, 1, 0);
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    c1_i_diff_im[c1_i] = (real_T)c1_im[c1_i];
  }

  for (c1_t = 0; c1_t < 5; c1_t++) {
    covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 1, 0, 1);
    for (c1_i1 = 0; c1_i1 < 279000; c1_i1++) {
      chartInstance->c1_diff_im[c1_i1] = c1_i_diff_im[c1_i1];
    }

    c1_imfilter(chartInstance, chartInstance->c1_diff_im,
                chartInstance->c1_nablaN);
    for (c1_i2 = 0; c1_i2 < 279000; c1_i2++) {
      chartInstance->c1_b_diff_im[c1_i2] = c1_i_diff_im[c1_i2];
    }

    c1_b_imfilter(chartInstance, chartInstance->c1_b_diff_im,
                  chartInstance->c1_nablaS);
    for (c1_i3 = 0; c1_i3 < 279000; c1_i3++) {
      chartInstance->c1_c_diff_im[c1_i3] = c1_i_diff_im[c1_i3];
    }

    c1_c_imfilter(chartInstance, chartInstance->c1_c_diff_im,
                  chartInstance->c1_nablaW);
    for (c1_i4 = 0; c1_i4 < 279000; c1_i4++) {
      chartInstance->c1_d_diff_im[c1_i4] = c1_i_diff_im[c1_i4];
    }

    c1_d_imfilter(chartInstance, chartInstance->c1_d_diff_im,
                  chartInstance->c1_nablaE);
    for (c1_i5 = 0; c1_i5 < 279000; c1_i5++) {
      chartInstance->c1_e_diff_im[c1_i5] = c1_i_diff_im[c1_i5];
    }

    c1_e_imfilter(chartInstance, chartInstance->c1_e_diff_im,
                  chartInstance->c1_nablaNE);
    for (c1_i6 = 0; c1_i6 < 279000; c1_i6++) {
      chartInstance->c1_f_diff_im[c1_i6] = c1_i_diff_im[c1_i6];
    }

    c1_f_imfilter(chartInstance, chartInstance->c1_f_diff_im,
                  chartInstance->c1_nablaSE);
    for (c1_i7 = 0; c1_i7 < 279000; c1_i7++) {
      chartInstance->c1_g_diff_im[c1_i7] = c1_i_diff_im[c1_i7];
    }

    c1_g_imfilter(chartInstance, chartInstance->c1_g_diff_im,
                  chartInstance->c1_nablaSW);
    for (c1_i8 = 0; c1_i8 < 279000; c1_i8++) {
      chartInstance->c1_h_diff_im[c1_i8] = c1_i_diff_im[c1_i8];
    }

    c1_h_imfilter(chartInstance, chartInstance->c1_h_diff_im,
                  chartInstance->c1_nablaNW);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 14U, 1, 0,
                   covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
      14U, 1U, 0U, 1.0, 1.0, -1, 0U, 1));
    for (c1_i9 = 0; c1_i9 < 279000; c1_i9++) {
      chartInstance->c1_b_nablaN[c1_i9] = chartInstance->c1_nablaN[c1_i9] / 30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaN, chartInstance->c1_cN);
    for (c1_i10 = 0; c1_i10 < 279000; c1_i10++) {
      chartInstance->c1_cN[c1_i10] = -chartInstance->c1_cN[c1_i10];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cN);
    for (c1_i11 = 0; c1_i11 < 279000; c1_i11++) {
      chartInstance->c1_b_nablaS[c1_i11] = chartInstance->c1_nablaS[c1_i11] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaS, chartInstance->c1_cS);
    for (c1_i12 = 0; c1_i12 < 279000; c1_i12++) {
      chartInstance->c1_cS[c1_i12] = -chartInstance->c1_cS[c1_i12];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cS);
    for (c1_i13 = 0; c1_i13 < 279000; c1_i13++) {
      chartInstance->c1_b_nablaW[c1_i13] = chartInstance->c1_nablaW[c1_i13] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaW, chartInstance->c1_cW);
    for (c1_i14 = 0; c1_i14 < 279000; c1_i14++) {
      chartInstance->c1_cW[c1_i14] = -chartInstance->c1_cW[c1_i14];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cW);
    for (c1_i15 = 0; c1_i15 < 279000; c1_i15++) {
      chartInstance->c1_b_nablaE[c1_i15] = chartInstance->c1_nablaE[c1_i15] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaE, chartInstance->c1_cE);
    for (c1_i16 = 0; c1_i16 < 279000; c1_i16++) {
      chartInstance->c1_cE[c1_i16] = -chartInstance->c1_cE[c1_i16];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cE);
    for (c1_i17 = 0; c1_i17 < 279000; c1_i17++) {
      chartInstance->c1_b_nablaNE[c1_i17] = chartInstance->c1_nablaNE[c1_i17] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaNE, chartInstance->c1_cNE);
    for (c1_i18 = 0; c1_i18 < 279000; c1_i18++) {
      chartInstance->c1_cNE[c1_i18] = -chartInstance->c1_cNE[c1_i18];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cNE);
    for (c1_i19 = 0; c1_i19 < 279000; c1_i19++) {
      chartInstance->c1_b_nablaSE[c1_i19] = chartInstance->c1_nablaSE[c1_i19] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaSE, chartInstance->c1_cSE);
    for (c1_i20 = 0; c1_i20 < 279000; c1_i20++) {
      chartInstance->c1_cSE[c1_i20] = -chartInstance->c1_cSE[c1_i20];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cSE);
    for (c1_i21 = 0; c1_i21 < 279000; c1_i21++) {
      chartInstance->c1_b_nablaSW[c1_i21] = chartInstance->c1_nablaSW[c1_i21] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaSW, chartInstance->c1_cSW);
    for (c1_i22 = 0; c1_i22 < 279000; c1_i22++) {
      chartInstance->c1_cSW[c1_i22] = -chartInstance->c1_cSW[c1_i22];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cSW);
    for (c1_i23 = 0; c1_i23 < 279000; c1_i23++) {
      chartInstance->c1_b_nablaNW[c1_i23] = chartInstance->c1_nablaNW[c1_i23] /
        30.0;
    }

    c1_power(chartInstance, chartInstance->c1_b_nablaNW, chartInstance->c1_cNW);
    for (c1_i24 = 0; c1_i24 < 279000; c1_i24++) {
      chartInstance->c1_cNW[c1_i24] = -chartInstance->c1_cNW[c1_i24];
    }

    c1_b_exp(chartInstance, chartInstance->c1_cNW);
    for (c1_i25 = 0; c1_i25 < 279000; c1_i25++) {
      chartInstance->c1_cNE[c1_i25] *= 0.49999999999999989;
    }

    for (c1_i26 = 0; c1_i26 < 279000; c1_i26++) {
      chartInstance->c1_cSE[c1_i26] *= 0.49999999999999989;
    }

    for (c1_i27 = 0; c1_i27 < 279000; c1_i27++) {
      chartInstance->c1_cSW[c1_i27] *= 0.49999999999999989;
    }

    for (c1_i28 = 0; c1_i28 < 279000; c1_i28++) {
      chartInstance->c1_cNW[c1_i28] *= 0.49999999999999989;
    }

    for (c1_i29 = 0; c1_i29 < 279000; c1_i29++) {
      chartInstance->c1_cN[c1_i29] = ((((((chartInstance->c1_cN[c1_i29] *
        chartInstance->c1_nablaN[c1_i29] + chartInstance->c1_cS[c1_i29] *
        chartInstance->c1_nablaS[c1_i29]) + chartInstance->c1_cW[c1_i29] *
        chartInstance->c1_nablaW[c1_i29]) + chartInstance->c1_cE[c1_i29] *
        chartInstance->c1_nablaE[c1_i29]) + chartInstance->c1_cNE[c1_i29] *
        chartInstance->c1_nablaNE[c1_i29]) + chartInstance->c1_cSE[c1_i29] *
        chartInstance->c1_nablaSE[c1_i29]) + chartInstance->c1_cSW[c1_i29] *
        chartInstance->c1_nablaSW[c1_i29]) + chartInstance->c1_cNW[c1_i29] *
        chartInstance->c1_nablaNW[c1_i29];
    }

    for (c1_i30 = 0; c1_i30 < 279000; c1_i30++) {
      chartInstance->c1_cN[c1_i30] *= 0.15;
    }

    for (c1_i31 = 0; c1_i31 < 279000; c1_i31++) {
      c1_i_diff_im[c1_i31] += chartInstance->c1_cN[c1_i31];
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 1, 0, 0);
}

const mxArray
  *sf_c1_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  const char * c1_data[6] = {
    "789c6360f4f465646060e06380800e6e08cd0bc4054c0c0c025071260654802ecf88a60ec45f80a49e958185e1673d441f4c1ea4bf1fca4fcecf2b49ad288170"
    "f2127353e13a53f27333f312f34a422a0b52198a528bf373ca5253c032699939a92199b9a9c1c81c3f102fd70d490ace014981d8ce19a9c9d9c1a5b90c4519c5",
    "0817e62073e0e19180e4df5ff508ffb260090f64797400f32f0ca0abe383ca1790691f2cfcb908d80793cf4d4dcc8b2fcec84c2b41b53f8142fbd970da0f9149"
    "c92f4dca4945d8778242fb8c71d82708a5d3a07434832b432c105b31e8334405bf8eb8582952a1cf90cb90ca90c850cc50ca5004648178790c250cea91effcf5",
    "191efb31c255e431c4035565306402cd2b61c02eaa0714251c8efc44fa0b9946f6172f0307381f3dabbb015682cdbe9f04ecfb49867d01fabf1be9691f0c0c94"
    "7d1538ccc3962eb1d92786c33e0134f972b3e4489710e7a2d0a2c810fff0c40c5313bf4c2757843b0208d843c81d0c487c6477d0cbfc041cfa0985233a20a7fc",
    "2427deb809d807934fcccb2cce4fc94c4b337241b13f8142fb5971da0f9129cdcc2bb140b2ef0285f699e2b00f567e66416972cb4f502999095491cf90022e27"
    "d3188c185c18708943ca5062c2935af9fe79c44dba96a3f302264fa0a77d3030dccbd1ca5cdf720377c72c03f3b2dcaae2dc34b354dfb452a7a15f8e020034db",
    "ee40", "" };

  c1_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c1_data[0], 2976U, &c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static void c1_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_c_Ain[279000], uint8_T
  c1_Bout[17515])
{
  emlrtStack c1_st;
  real_T c1_c_weights_data[1550];
  int32_T c1_weights_size[2];
  int32_T c1_indices_data[1550];
  int32_T c1_indices_size[2];
  int32_T c1_i;
  real_T c1_d_weights_data[1130];
  int32_T c1_b_weights_size[2];
  int32_T c1_b_indices_data[1130];
  int32_T c1_b_indices_size[2];
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_r_emlrtRSI;
  c1_contributions(chartInstance, &c1_st, c1_c_weights_data, c1_weights_size,
                   c1_indices_data, c1_indices_size);
  c1_st.site = &c1_s_emlrtRSI;
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_b_Ain[c1_i] = c1_c_Ain[c1_i];
  }

  c1_resizeAlongDim(chartInstance, &c1_st, chartInstance->c1_b_Ain,
                    c1_c_weights_data, c1_weights_size, c1_indices_data,
                    chartInstance->c1_b_APartialResize);
  c1_st.site = &c1_t_emlrtRSI;
  c1_b_contributions(chartInstance, &c1_st, c1_d_weights_data, c1_b_weights_size,
                     c1_b_indices_data, c1_b_indices_size);
  c1_st.site = &c1_u_emlrtRSI;
  c1_b_resizeAlongDim(chartInstance, &c1_st, chartInstance->c1_b_APartialResize,
                      c1_d_weights_data, c1_b_weights_size, c1_b_indices_data,
                      c1_Bout);
}

static void c1_contributions(SFc1_untitled_restored_from_autosaveInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T
  c1_weights_size[2], int32_T c1_indices_data[], int32_T c1_indices_size[2])
{
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_iv[155];
  int32_T c1_iv1[10];
  int32_T c1_b_indices[1550];
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_b_dv[155];
  real_T c1_c_indices[1550];
  real_T c1_b_x[1550];
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  boolean_T c1_bv[1550];
  int32_T c1_i7;
  boolean_T c1_bv1[1550];
  int32_T c1_i8;
  boolean_T c1_bv2[1550];
  int32_T c1_i9;
  boolean_T c1_bv3[1550];
  int32_T c1_i10;
  int32_T c1_i11;
  real_T c1_c_x[1550];
  real_T c1_dv1[155];
  int32_T c1_i12;
  real_T c1_d_x[1550];
  int32_T c1_aux[1240];
  int32_T c1_b_i;
  int32_T c1_c_i;
  real_T c1_d_i;
  int32_T c1_i13;
  real_T c1_oldIdx;
  real_T c1_k;
  real_T c1_e_x[1550];
  boolean_T c1_copyCols[10];
  real_T c1_i_a;
  int32_T c1_trueCount;
  int32_T c1_c;
  int32_T c1_e_i;
  int32_T c1_tmp_size[2];
  int32_T c1_partialTrueCount;
  int32_T c1_f_i;
  int32_T c1_tmp_data[10];
  int32_T c1_i14;
  int32_T c1_b_trueCount;
  int32_T c1_loop_ub;
  int32_T c1_g_i;
  int32_T c1_i15;
  int32_T c1_b_tmp_size[2];
  int32_T c1_b_partialTrueCount;
  int32_T c1_h_i;
  int32_T c1_b_tmp_data[10];
  int32_T c1_i16;
  int32_T c1_b_loop_ub;
  int32_T c1_i17;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 155; c1_i++) {
    c1_iv[c1_i] = -2 + (c1_i << 2);
  }

  for (c1_i1 = 0; c1_i1 < 10; c1_i1++) {
    c1_iv1[c1_i1] = c1_i1;
  }

  c1_bsxfun(chartInstance, c1_iv, c1_iv1, c1_b_indices);
  for (c1_i2 = 0; c1_i2 < 155; c1_i2++) {
    c1_b_dv[c1_i2] = 2.5 + 4.0 * (real_T)c1_i2;
  }

  for (c1_i3 = 0; c1_i3 < 1550; c1_i3++) {
    c1_c_indices[c1_i3] = (real_T)c1_b_indices[c1_i3];
  }

  c1_b_bsxfun(chartInstance, c1_b_dv, c1_c_indices, c1_b_x);
  for (c1_i4 = 0; c1_i4 < 1550; c1_i4++) {
    c1_b_x[c1_i4] *= 0.25;
  }

  for (c1_i5 = 0; c1_i5 < 1550; c1_i5++) {
    c1_bv[c1_i5] = (0.0 <= c1_b_x[c1_i5]);
  }

  for (c1_i6 = 0; c1_i6 < 1550; c1_i6++) {
    c1_bv1[c1_i6] = (c1_b_x[c1_i6] <= 1.0);
  }

  for (c1_i7 = 0; c1_i7 < 1550; c1_i7++) {
    c1_bv2[c1_i7] = (-1.0 <= c1_b_x[c1_i7]);
  }

  for (c1_i8 = 0; c1_i8 < 1550; c1_i8++) {
    c1_bv3[c1_i8] = (c1_b_x[c1_i8] < 0.0);
  }

  for (c1_i9 = 0; c1_i9 < 1550; c1_i9++) {
    c1_b_x[c1_i9] = (c1_b_x[c1_i9] + 1.0) * (real_T)(c1_bv2[c1_i9] &&
      c1_bv3[c1_i9]) + (1.0 - c1_b_x[c1_i9]) * (real_T)(c1_bv[c1_i9] &&
      c1_bv1[c1_i9]);
  }

  for (c1_i10 = 0; c1_i10 < 1550; c1_i10++) {
    c1_b_x[c1_i10] *= 0.25;
  }

  for (c1_i11 = 0; c1_i11 < 1550; c1_i11++) {
    c1_c_x[c1_i11] = c1_b_x[c1_i11];
  }

  c1_sum(chartInstance, c1_c_x, c1_dv1);
  for (c1_i12 = 0; c1_i12 < 1550; c1_i12++) {
    c1_d_x[c1_i12] = c1_b_x[c1_i12];
  }

  c1_c_bsxfun(chartInstance, c1_d_x, c1_dv1, c1_b_x);
  c1_aux[0] = 1;
  c1_aux[620] = 620;
  for (c1_b_i = 0; c1_b_i < 619; c1_b_i++) {
    c1_aux[c1_b_i + 1] = c1_aux[c1_b_i] + 1;
    c1_aux[c1_b_i + 621] = c1_aux[c1_b_i + 620] - 1;
  }

  for (c1_c_i = 0; c1_c_i < 1550; c1_c_i++) {
    c1_d_i = (real_T)c1_c_i + 1.0;
    c1_oldIdx = (real_T)c1_b_indices[(int32_T)c1_d_i - 1];
    c1_k = c1_mod(chartInstance, c1_oldIdx - 1.0);
    c1_i_a = c1_k;
    c1_c = (int32_T)c1_i_a;
    c1_b_indices[(int32_T)c1_d_i - 1] = c1_aux[c1_c];
  }

  c1_st.site = &c1_v_emlrtRSI;
  for (c1_i13 = 0; c1_i13 < 1550; c1_i13++) {
    c1_e_x[c1_i13] = c1_b_x[c1_i13];
  }

  c1_any(chartInstance, &c1_st, c1_e_x, c1_copyCols);
  c1_trueCount = 0;
  for (c1_e_i = 0; c1_e_i < 10; c1_e_i++) {
    if (c1_copyCols[c1_e_i]) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[1] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_f_i = 0; c1_f_i < 10; c1_f_i++) {
    if (c1_copyCols[c1_f_i]) {
      c1_tmp_data[c1_partialTrueCount] = c1_f_i + 1;
      c1_partialTrueCount++;
    }
  }

  c1_weights_size[0] = c1_tmp_size[1];
  c1_weights_size[1] = 155;
  for (c1_i14 = 0; c1_i14 < 155; c1_i14++) {
    c1_loop_ub = c1_tmp_size[1] - 1;
    for (c1_i15 = 0; c1_i15 <= c1_loop_ub; c1_i15++) {
      c1_c_weights_data[c1_i15 + c1_weights_size[0] * c1_i14] = c1_b_x[c1_i14 +
        155 * (c1_tmp_data[c1_i15] - 1)];
    }
  }

  c1_b_trueCount = 0;
  for (c1_g_i = 0; c1_g_i < 10; c1_g_i++) {
    if (c1_copyCols[c1_g_i]) {
      c1_b_trueCount++;
    }
  }

  c1_b_tmp_size[1] = c1_b_trueCount;
  c1_b_partialTrueCount = 0;
  for (c1_h_i = 0; c1_h_i < 10; c1_h_i++) {
    if (c1_copyCols[c1_h_i]) {
      c1_b_tmp_data[c1_b_partialTrueCount] = c1_h_i + 1;
      c1_b_partialTrueCount++;
    }
  }

  c1_indices_size[0] = c1_b_tmp_size[1];
  c1_indices_size[1] = 155;
  for (c1_i16 = 0; c1_i16 < 155; c1_i16++) {
    c1_b_loop_ub = c1_b_tmp_size[1] - 1;
    for (c1_i17 = 0; c1_i17 <= c1_b_loop_ub; c1_i17++) {
      c1_indices_data[c1_i17 + c1_indices_size[0] * c1_i16] =
        c1_b_indices[c1_i16 + 155 * (c1_b_tmp_data[c1_i17] - 1)];
    }
  }
}

static void c1_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, int32_T c1_i_a[155], int32_T c1_b[10],
                      int32_T c1_c[1550])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_6;
  int32_T c1_j_a;
  int32_T c1_b_b;
  int32_T c1_b_c;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 155; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_j_a = c1_i_a[c1_b_varargin_3];
      c1_b_b = c1_b[c1_varargin_6];
      c1_b_c = c1_j_a + c1_b_b;
      c1_c[c1_j_varargin_1 + 155 * c1_varargin_2] = c1_b_c;
    }
  }
}

static void c1_b_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[155], real_T c1_b[1550], real_T c1_c[1550])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 155; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_5 = c1_b_ib;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_c[c1_j_varargin_1 + 155 * c1_varargin_2] = c1_i_a[c1_b_varargin_3] -
        c1_b[c1_varargin_5 + 155 * c1_varargin_6];
    }
  }
}

static void c1_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, real_T c1_b_x[1550], real_T c1_b_y[155])
{
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_b_j;
  int32_T c1_xoffset;
  int32_T c1_c_j;
  int32_T c1_ix;
  (void)chartInstance;
  for (c1_j = 0; c1_j < 155; c1_j++) {
    c1_b_j = c1_j;
    c1_b_y[c1_b_j] = c1_b_x[c1_b_j];
  }

  for (c1_k = 0; c1_k < 9; c1_k++) {
    c1_xoffset = (c1_k + 1) * 155;
    for (c1_c_j = 0; c1_c_j < 155; c1_c_j++) {
      c1_b_j = c1_c_j;
      c1_ix = c1_xoffset + c1_b_j;
      c1_b_y[c1_b_j] += c1_b_x[c1_ix];
    }
  }
}

static void c1_c_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1550], real_T c1_b[155], real_T c1_c[1550])
{
  int32_T c1_k;
  int32_T c1_ia;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_k;
  int32_T c1_b_ia;
  int32_T c1_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_b_varargin_2;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ia = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_2 = c1_ia + 1;
    for (c1_b_k = 0; c1_b_k < 155; c1_b_k++) {
      c1_b_ia = c1_b_k;
      c1_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_b_varargin_2 = c1_i_varargin_1 - 1;
      c1_varargin_3 = c1_b_ia;
      c1_varargin_4 = c1_varargin_2 - 1;
      c1_varargin_5 = c1_ib;
      c1_c[c1_j_varargin_1 + 155 * c1_b_varargin_2] = c1_i_a[c1_varargin_3 + 155
        * c1_varargin_4] / c1_b[c1_varargin_5];
    }
  }
}

static real_T c1_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x)
{
  real_T c1_r;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  boolean_T c1_b;
  real_T c1_g_x;
  boolean_T c1_b_b;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_c_x = c1_b_x;
  c1_d_x = c1_c_x;
  c1_e_x = c1_d_x;
  c1_f_x = c1_e_x;
  c1_b = muDoubleScalarIsNaN(c1_f_x);
  if (c1_b) {
    c1_r = rtNaN;
  } else {
    c1_g_x = c1_e_x;
    c1_b_b = muDoubleScalarIsInf(c1_g_x);
    if (c1_b_b) {
      c1_r = rtNaN;
    } else if (c1_e_x == 0.0) {
      c1_r = 0.0;
    } else {
      c1_r = muDoubleScalarRem(c1_e_x, 1240.0);
      c1_rEQ0 = (c1_r == 0.0);
      if (c1_rEQ0) {
        c1_r = 0.0;
      } else {
        if (c1_e_x < 0.0) {
          c1_r += 1240.0;
        }
      }
    }
  }

  return c1_r;
}

static void c1_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1550],
                   boolean_T c1_b_y[10])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_iy;
  int32_T c1_b_i;
  int32_T c1_i1;
  int32_T c1_i_a;
  int32_T c1_j_a;
  int32_T c1_k_a;
  int32_T c1_l_a;
  int32_T c1_m_a;
  int32_T c1_b;
  int32_T c1_n_a;
  int32_T c1_b_b;
  boolean_T c1_overflow;
  int32_T c1_ix;
  boolean_T c1_exitg1;
  real_T c1_c_x;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_w_emlrtRSI;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_b_y[c1_i] = false;
  }

  c1_i2 = 0;
  c1_iy = -1;
  for (c1_b_i = 0; c1_b_i < 10; c1_b_i++) {
    c1_i1 = c1_i2;
    c1_i_a = c1_i2 + 154;
    c1_i2 = c1_i_a;
    c1_j_a = c1_i1 + 1;
    c1_i1 = c1_j_a;
    c1_k_a = c1_i2 + 1;
    c1_i2 = c1_k_a;
    c1_l_a = c1_iy + 1;
    c1_iy = c1_l_a;
    c1_b_st.site = &c1_x_emlrtRSI;
    c1_m_a = c1_i1;
    c1_b = c1_i2;
    c1_n_a = c1_m_a;
    c1_b_b = c1_b;
    if (c1_n_a > c1_b_b) {
      c1_overflow = false;
    } else {
      c1_overflow = (c1_b_b > 2147483646);
    }

    if (c1_overflow) {
      c1_c_st.site = &c1_y_emlrtRSI;
      c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
    }

    c1_ix = c1_i1 - 1;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_ix + 1 <= c1_i2)) {
      if (c1_b_x[c1_ix] == 0.0) {
        c1_c_b = true;
      } else {
        c1_c_x = c1_b_x[c1_ix];
        c1_d_b = muDoubleScalarIsNaN(c1_c_x);
        if (c1_d_b) {
          c1_c_b = true;
        } else {
          c1_c_b = false;
        }
      }

      if (!c1_c_b) {
        c1_b_y[c1_iy] = true;
        c1_exitg1 = true;
      } else {
        c1_ix++;
      }
    }
  }
}

static void c1_check_forloop_overflow_error
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp)
{
  const mxArray *c1_b_y = NULL;
  static char_T c1_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  static char_T c1_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14, sf_mex_call
              (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
    "message", 1U, 2U, 14, c1_c_y, 14, c1_d_y)));
}

static void c1_resizeAlongDim(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_in_[279000], real_T
  c1_c_weights_data[], int32_T c1_weights_size[2], int32_T c1_indices_data[],
  uint8_T c1_out_[69750])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inRInd;
  real_T c1_b_inRInd;
  real_T c1_i_varargin_1;
  real_T c1_j_varargin_1;
  real_T c1_b_x;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  int32_T c1_idx;
  real_T c1_rowStart;
  const mxArray *c1_c_y = NULL;
  int32_T c1_outCInd;
  real_T c1_b_outCInd;
  real_T c1_sumVal1;
  int32_T c1_i;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i1;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  real_T c1_c_x;
  const mxArray *c1_e_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b2;
  boolean_T c1_c_p;
  const mxArray *c1_f_y = NULL;
  int32_T c1_psiz;
  int32_T c1_b_idx;
  const mxArray *c1_g_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i2;
  int32_T c1_k;
  real_T c1_d1;
  int32_T c1_i_a;
  int32_T c1_c;
  int32_T c1_j_a;
  uint8_T c1_u;
  int32_T c1_b_c;
  real_T c1_k_a;
  int32_T c1_b_b;
  int32_T c1_pixelIndex;
  uint8_T c1_pixelValue;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inRInd = 0; c1_inRInd < 450; c1_inRInd++) {
    c1_b_inRInd = (real_T)c1_inRInd + 1.0;
    c1_st.site = &c1_ab_emlrtRSI;
    c1_i_varargin_1 = c1_b_inRInd;
    c1_b_st.site = &c1_cb_emlrtRSI;
    c1_j_varargin_1 = c1_i_varargin_1;
    c1_b_x = c1_j_varargin_1;
    if (c1_b_x <= 450.0) {
      c1_b = true;
    } else {
      c1_b = false;
    }

    if (!c1_b) {
      c1_p = false;
    } else {
      c1_p = true;
    }

    if (!c1_p) {
      c1_b_y = NULL;
      sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c1_c_y = NULL;
      sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
    }

    c1_idx = (int32_T)c1_j_varargin_1;
    c1_rowStart = (real_T)c1_idx;
    for (c1_outCInd = 0; c1_outCInd < 155; c1_outCInd++) {
      c1_b_outCInd = (real_T)c1_outCInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_bb_emlrtRSI;
      for (c1_i = 0; c1_i < 2; c1_i++) {
        c1_siz[c1_i] = (real_T)c1_weights_size[c1_i];
      }

      c1_varargin_2 = c1_b_outCInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_b_siz[c1_i1] = (int32_T)c1_siz[c1_i1];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_c_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_c_x <= (real_T)c1_c_hi) {
        c1_b2 = true;
      } else {
        c1_b2 = false;
      }

      if (!c1_b2) {
        c1_c_p = false;
      } else {
        c1_c_p = true;
      }

      if (!c1_c_p) {
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_b_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_b_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i2 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i2; c1_k++) {
        c1_i_a = c1_indices_data[c1_linearInds] - 1;
        c1_c = c1_i_a;
        c1_j_a = c1_c;
        c1_b_c = c1_j_a * 450;
        c1_k_a = c1_rowStart;
        c1_b_b = c1_b_c;
        c1_pixelIndex = ((int32_T)c1_k_a + c1_b_b) - 1;
        c1_pixelValue = c1_in_[c1_pixelIndex];
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] * (real_T)c1_pixelValue;
        c1_linearInds++;
      }

      c1_d1 = muDoubleScalarRound(c1_sumVal1);
      if (c1_d1 < 256.0) {
        if (c1_d1 >= 0.0) {
          c1_u = (uint8_T)c1_d1;
        } else {
          c1_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c1_d1 >= 256.0) {
        c1_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c1_u = 0U;
      }

      c1_out_[((int32_T)c1_b_inRInd + 450 * ((int32_T)c1_b_outCInd - 1)) - 1] =
        c1_u;
    }
  }
}

static void c1_b_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2])
{
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_iv[10];
  int32_T c1_iv1[113];
  int32_T c1_b_indices[1130];
  static int32_T c1_iv2[113] = { -2, 2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42,
    46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 113,
    117, 121, 125, 129, 133, 137, 141, 145, 149, 153, 157, 161, 165, 169, 173,
    177, 181, 185, 189, 193, 197, 201, 205, 209, 213, 217, 221, 225, 229, 233,
    237, 241, 245, 249, 253, 257, 261, 265, 269, 273, 277, 281, 285, 289, 293,
    297, 301, 305, 309, 313, 317, 321, 325, 329, 333, 337, 340, 344, 348, 352,
    356, 360, 364, 368, 372, 376, 380, 384, 388, 392, 396, 400, 404, 408, 412,
    416, 420, 424, 428, 432, 436, 440, 444 };

  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_c_indices[1130];
  real_T c1_b_dv[113];
  real_T c1_b_x[1130];
  static real_T c1_dv1[113] = { 2.4911504424778759, 6.4734513274336285,
    10.455752212389381, 14.438053097345133, 18.420353982300885,
    22.402654867256636, 26.384955752212388, 30.36725663716814,
    34.349557522123895, 38.33185840707965, 42.3141592920354, 46.296460176991154,
    50.2787610619469, 54.261061946902657, 58.243362831858406, 62.225663716814161,
    66.207964601769916, 70.190265486725664, 74.172566371681413,
    78.154867256637175, 82.137168141592923, 86.119469026548671,
    90.101769911504419, 94.084070796460182, 98.06637168141593,
    102.04867256637168, 106.03097345132743, 110.01327433628319,
    113.99557522123894, 117.97787610619469, 121.96017699115045,
    125.9424778761062, 129.92477876106196, 133.90707964601771,
    137.88938053097345, 141.8716814159292, 145.85398230088495, 149.8362831858407,
    153.81858407079645, 157.80088495575222, 161.78318584070797,
    165.76548672566372, 169.74778761061947, 173.73008849557522,
    177.71238938053096, 181.69469026548671, 185.67699115044246,
    189.65929203539824, 193.641592920354, 197.62389380530973, 201.60619469026548,
    205.58849557522123, 209.57079646017698, 213.55309734513273,
    217.5353982300885, 221.51769911504425, 225.5, 229.48230088495575,
    233.4646017699115, 237.44690265486724, 241.429203539823, 245.41150442477877,
    249.39380530973452, 253.37610619469027, 257.358407079646, 261.34070796460179,
    265.32300884955754, 269.30530973451329, 273.28761061946904,
    277.26991150442478, 281.25221238938053, 285.23451327433628, 289.216814159292,
    293.19911504424778, 297.18141592920352, 301.16371681415927, 305.146017699115,
    309.12831858407077, 313.11061946902652, 317.09292035398232,
    321.07522123893807, 325.05752212389382, 329.03982300884957,
    333.02212389380531, 337.00442477876106, 340.98672566371681,
    344.96902654867256, 348.95132743362831, 352.93362831858406,
    356.9159292035398, 360.89823008849555, 364.8805309734513, 368.86283185840705,
    372.8451327433628, 376.8274336283186, 380.80973451327435, 384.7920353982301,
    388.77433628318585, 392.75663716814159, 396.73893805309734,
    400.72123893805309, 404.70353982300884, 408.68584070796459,
    412.66814159292034, 416.65044247787608, 420.63274336283183,
    424.61504424778758, 428.59734513274333, 432.57964601769908,
    436.56194690265488, 440.54424778761063, 444.52654867256638,
    448.50884955752213 };

  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  boolean_T c1_bv[1130];
  int32_T c1_i7;
  boolean_T c1_bv1[1130];
  int32_T c1_i8;
  boolean_T c1_bv2[1130];
  int32_T c1_i9;
  boolean_T c1_bv3[1130];
  int32_T c1_i10;
  int32_T c1_i11;
  real_T c1_c_x[1130];
  real_T c1_dv2[113];
  int32_T c1_i12;
  real_T c1_d_x[1130];
  int32_T c1_aux[900];
  int32_T c1_b_i;
  int32_T c1_c_i;
  real_T c1_d_i;
  int32_T c1_i13;
  real_T c1_oldIdx;
  real_T c1_k;
  real_T c1_e_x[1130];
  boolean_T c1_copyCols[10];
  real_T c1_i_a;
  int32_T c1_trueCount;
  int32_T c1_c;
  int32_T c1_e_i;
  int32_T c1_tmp_size[2];
  int32_T c1_partialTrueCount;
  int32_T c1_f_i;
  int32_T c1_tmp_data[10];
  int32_T c1_i14;
  int32_T c1_b_trueCount;
  int32_T c1_loop_ub;
  int32_T c1_g_i;
  int32_T c1_i15;
  int32_T c1_b_tmp_size[2];
  int32_T c1_b_partialTrueCount;
  int32_T c1_h_i;
  int32_T c1_b_tmp_data[10];
  int32_T c1_i16;
  int32_T c1_b_loop_ub;
  int32_T c1_i17;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_iv[c1_i] = c1_i;
  }

  for (c1_i1 = 0; c1_i1 < 113; c1_i1++) {
    c1_iv1[c1_i1] = c1_iv2[c1_i1];
  }

  c1_d_bsxfun(chartInstance, c1_iv1, c1_iv, c1_b_indices);
  for (c1_i2 = 0; c1_i2 < 1130; c1_i2++) {
    c1_c_indices[c1_i2] = (real_T)c1_b_indices[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 113; c1_i3++) {
    c1_b_dv[c1_i3] = c1_dv1[c1_i3];
  }

  c1_e_bsxfun(chartInstance, c1_b_dv, c1_c_indices, c1_b_x);
  for (c1_i4 = 0; c1_i4 < 1130; c1_i4++) {
    c1_b_x[c1_i4] *= 0.25111111111111112;
  }

  for (c1_i5 = 0; c1_i5 < 1130; c1_i5++) {
    c1_bv[c1_i5] = (0.0 <= c1_b_x[c1_i5]);
  }

  for (c1_i6 = 0; c1_i6 < 1130; c1_i6++) {
    c1_bv1[c1_i6] = (c1_b_x[c1_i6] <= 1.0);
  }

  for (c1_i7 = 0; c1_i7 < 1130; c1_i7++) {
    c1_bv2[c1_i7] = (-1.0 <= c1_b_x[c1_i7]);
  }

  for (c1_i8 = 0; c1_i8 < 1130; c1_i8++) {
    c1_bv3[c1_i8] = (c1_b_x[c1_i8] < 0.0);
  }

  for (c1_i9 = 0; c1_i9 < 1130; c1_i9++) {
    c1_b_x[c1_i9] = (c1_b_x[c1_i9] + 1.0) * (real_T)(c1_bv2[c1_i9] &&
      c1_bv3[c1_i9]) + (1.0 - c1_b_x[c1_i9]) * (real_T)(c1_bv[c1_i9] &&
      c1_bv1[c1_i9]);
  }

  for (c1_i10 = 0; c1_i10 < 1130; c1_i10++) {
    c1_b_x[c1_i10] *= 0.25111111111111112;
  }

  for (c1_i11 = 0; c1_i11 < 1130; c1_i11++) {
    c1_c_x[c1_i11] = c1_b_x[c1_i11];
  }

  c1_b_sum(chartInstance, c1_c_x, c1_dv2);
  for (c1_i12 = 0; c1_i12 < 1130; c1_i12++) {
    c1_d_x[c1_i12] = c1_b_x[c1_i12];
  }

  c1_f_bsxfun(chartInstance, c1_d_x, c1_dv2, c1_b_x);
  c1_aux[0] = 1;
  c1_aux[450] = 450;
  for (c1_b_i = 0; c1_b_i < 449; c1_b_i++) {
    c1_aux[c1_b_i + 1] = c1_aux[c1_b_i] + 1;
    c1_aux[c1_b_i + 451] = c1_aux[c1_b_i + 450] - 1;
  }

  for (c1_c_i = 0; c1_c_i < 1130; c1_c_i++) {
    c1_d_i = (real_T)c1_c_i + 1.0;
    c1_oldIdx = (real_T)c1_b_indices[(int32_T)c1_d_i - 1];
    c1_k = c1_b_mod(chartInstance, c1_oldIdx - 1.0);
    c1_i_a = c1_k;
    c1_c = (int32_T)c1_i_a;
    c1_b_indices[(int32_T)c1_d_i - 1] = c1_aux[c1_c];
  }

  c1_st.site = &c1_v_emlrtRSI;
  for (c1_i13 = 0; c1_i13 < 1130; c1_i13++) {
    c1_e_x[c1_i13] = c1_b_x[c1_i13];
  }

  c1_b_any(chartInstance, &c1_st, c1_e_x, c1_copyCols);
  c1_trueCount = 0;
  for (c1_e_i = 0; c1_e_i < 10; c1_e_i++) {
    if (c1_copyCols[c1_e_i]) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[1] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_f_i = 0; c1_f_i < 10; c1_f_i++) {
    if (c1_copyCols[c1_f_i]) {
      c1_tmp_data[c1_partialTrueCount] = c1_f_i + 1;
      c1_partialTrueCount++;
    }
  }

  c1_weights_size[0] = c1_tmp_size[1];
  c1_weights_size[1] = 113;
  for (c1_i14 = 0; c1_i14 < 113; c1_i14++) {
    c1_loop_ub = c1_tmp_size[1] - 1;
    for (c1_i15 = 0; c1_i15 <= c1_loop_ub; c1_i15++) {
      c1_c_weights_data[c1_i15 + c1_weights_size[0] * c1_i14] = c1_b_x[c1_i14 +
        113 * (c1_tmp_data[c1_i15] - 1)];
    }
  }

  c1_b_trueCount = 0;
  for (c1_g_i = 0; c1_g_i < 10; c1_g_i++) {
    if (c1_copyCols[c1_g_i]) {
      c1_b_trueCount++;
    }
  }

  c1_b_tmp_size[1] = c1_b_trueCount;
  c1_b_partialTrueCount = 0;
  for (c1_h_i = 0; c1_h_i < 10; c1_h_i++) {
    if (c1_copyCols[c1_h_i]) {
      c1_b_tmp_data[c1_b_partialTrueCount] = c1_h_i + 1;
      c1_b_partialTrueCount++;
    }
  }

  c1_indices_size[0] = c1_b_tmp_size[1];
  c1_indices_size[1] = 113;
  for (c1_i16 = 0; c1_i16 < 113; c1_i16++) {
    c1_b_loop_ub = c1_b_tmp_size[1] - 1;
    for (c1_i17 = 0; c1_i17 <= c1_b_loop_ub; c1_i17++) {
      c1_indices_data[c1_i17 + c1_indices_size[0] * c1_i16] =
        c1_b_indices[c1_i16 + 113 * (c1_b_tmp_data[c1_i17] - 1)];
    }
  }
}

static void c1_d_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[113], int32_T c1_b[10], int32_T c1_c[1130])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_6;
  int32_T c1_j_a;
  int32_T c1_b_b;
  int32_T c1_b_c;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 113; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_j_a = c1_i_a[c1_b_varargin_3];
      c1_b_b = c1_b[c1_varargin_6];
      c1_b_c = c1_j_a + c1_b_b;
      c1_c[c1_j_varargin_1 + 113 * c1_varargin_2] = c1_b_c;
    }
  }
}

static void c1_e_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[113], real_T c1_b[1130], real_T c1_c[1130])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 113; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_5 = c1_b_ib;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_c[c1_j_varargin_1 + 113 * c1_varargin_2] = c1_i_a[c1_b_varargin_3] -
        c1_b[c1_varargin_5 + 113 * c1_varargin_6];
    }
  }
}

static void c1_b_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[1130], real_T c1_b_y[113])
{
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_b_j;
  int32_T c1_xoffset;
  int32_T c1_c_j;
  int32_T c1_ix;
  (void)chartInstance;
  for (c1_j = 0; c1_j < 113; c1_j++) {
    c1_b_j = c1_j;
    c1_b_y[c1_b_j] = c1_b_x[c1_b_j];
  }

  for (c1_k = 0; c1_k < 9; c1_k++) {
    c1_xoffset = (c1_k + 1) * 113;
    for (c1_c_j = 0; c1_c_j < 113; c1_c_j++) {
      c1_b_j = c1_c_j;
      c1_ix = c1_xoffset + c1_b_j;
      c1_b_y[c1_b_j] += c1_b_x[c1_ix];
    }
  }
}

static void c1_f_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1130], real_T c1_b[113], real_T c1_c[1130])
{
  int32_T c1_k;
  int32_T c1_ia;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_k;
  int32_T c1_b_ia;
  int32_T c1_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_b_varargin_2;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 10; c1_k++) {
    c1_ia = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_2 = c1_ia + 1;
    for (c1_b_k = 0; c1_b_k < 113; c1_b_k++) {
      c1_b_ia = c1_b_k;
      c1_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_b_varargin_2 = c1_i_varargin_1 - 1;
      c1_varargin_3 = c1_b_ia;
      c1_varargin_4 = c1_varargin_2 - 1;
      c1_varargin_5 = c1_ib;
      c1_c[c1_j_varargin_1 + 113 * c1_b_varargin_2] = c1_i_a[c1_varargin_3 + 113
        * c1_varargin_4] / c1_b[c1_varargin_5];
    }
  }
}

static real_T c1_b_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x)
{
  real_T c1_r;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  boolean_T c1_b;
  real_T c1_g_x;
  boolean_T c1_b_b;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_c_x = c1_b_x;
  c1_d_x = c1_c_x;
  c1_e_x = c1_d_x;
  c1_f_x = c1_e_x;
  c1_b = muDoubleScalarIsNaN(c1_f_x);
  if (c1_b) {
    c1_r = rtNaN;
  } else {
    c1_g_x = c1_e_x;
    c1_b_b = muDoubleScalarIsInf(c1_g_x);
    if (c1_b_b) {
      c1_r = rtNaN;
    } else if (c1_e_x == 0.0) {
      c1_r = 0.0;
    } else {
      c1_r = muDoubleScalarRem(c1_e_x, 900.0);
      c1_rEQ0 = (c1_r == 0.0);
      if (c1_rEQ0) {
        c1_r = 0.0;
      } else {
        if (c1_e_x < 0.0) {
          c1_r += 900.0;
        }
      }
    }
  }

  return c1_r;
}

static void c1_b_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1130],
                     boolean_T c1_b_y[10])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_iy;
  int32_T c1_b_i;
  int32_T c1_i1;
  int32_T c1_i_a;
  int32_T c1_j_a;
  int32_T c1_k_a;
  int32_T c1_l_a;
  int32_T c1_m_a;
  int32_T c1_b;
  int32_T c1_n_a;
  int32_T c1_b_b;
  boolean_T c1_overflow;
  int32_T c1_ix;
  boolean_T c1_exitg1;
  real_T c1_c_x;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_w_emlrtRSI;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_b_y[c1_i] = false;
  }

  c1_i2 = 0;
  c1_iy = -1;
  for (c1_b_i = 0; c1_b_i < 10; c1_b_i++) {
    c1_i1 = c1_i2;
    c1_i_a = c1_i2 + 112;
    c1_i2 = c1_i_a;
    c1_j_a = c1_i1 + 1;
    c1_i1 = c1_j_a;
    c1_k_a = c1_i2 + 1;
    c1_i2 = c1_k_a;
    c1_l_a = c1_iy + 1;
    c1_iy = c1_l_a;
    c1_b_st.site = &c1_x_emlrtRSI;
    c1_m_a = c1_i1;
    c1_b = c1_i2;
    c1_n_a = c1_m_a;
    c1_b_b = c1_b;
    if (c1_n_a > c1_b_b) {
      c1_overflow = false;
    } else {
      c1_overflow = (c1_b_b > 2147483646);
    }

    if (c1_overflow) {
      c1_c_st.site = &c1_y_emlrtRSI;
      c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
    }

    c1_ix = c1_i1 - 1;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_ix + 1 <= c1_i2)) {
      if (c1_b_x[c1_ix] == 0.0) {
        c1_c_b = true;
      } else {
        c1_c_x = c1_b_x[c1_ix];
        c1_d_b = muDoubleScalarIsNaN(c1_c_x);
        if (c1_d_b) {
          c1_c_b = true;
        } else {
          c1_c_b = false;
        }
      }

      if (!c1_c_b) {
        c1_b_y[c1_iy] = true;
        c1_exitg1 = true;
      } else {
        c1_ix++;
      }
    }
  }
}

static void c1_b_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[17515])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inCInd;
  real_T c1_b_inCInd;
  int32_T c1_c_inCInd;
  int32_T c1_i;
  int32_T c1_outRInd;
  uint8_T c1_inCol[450];
  real_T c1_b_outRInd;
  real_T c1_sumVal1;
  int32_T c1_i1;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i2;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_x;
  const mxArray *c1_c_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  int32_T c1_psiz;
  int32_T c1_idx;
  const mxArray *c1_e_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i3;
  int32_T c1_k;
  real_T c1_d1;
  int32_T c1_i_a;
  uint8_T c1_u;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inCInd = 0; c1_inCInd < 155; c1_inCInd++) {
    c1_b_inCInd = (real_T)c1_inCInd + 1.0;
    c1_c_inCInd = (int32_T)c1_b_inCInd - 1;
    for (c1_i = 0; c1_i < 450; c1_i++) {
      c1_inCol[c1_i] = c1_in_[c1_i + 450 * c1_c_inCInd];
    }

    for (c1_outRInd = 0; c1_outRInd < 113; c1_outRInd++) {
      c1_b_outRInd = (real_T)c1_outRInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_fb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_siz[c1_i1] = (real_T)c1_weights_size[c1_i1];
      }

      c1_varargin_2 = c1_b_outRInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
        c1_b_siz[c1_i2] = (int32_T)c1_siz[c1_i2];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b = true;
      } else {
        c1_b = false;
      }

      if (!c1_b) {
        c1_p = false;
      } else {
        c1_p = true;
      }

      if (!c1_p) {
        c1_b_y = NULL;
        sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_c_y = NULL;
        sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_b_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_b_x <= (real_T)c1_c_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i3 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i3; c1_k++) {
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] * (real_T)
          c1_inCol[c1_indices_data[c1_linearInds] - 1];
        c1_i_a = c1_linearInds + 1;
        c1_linearInds = c1_i_a;
      }

      c1_d1 = muDoubleScalarRound(c1_sumVal1);
      if (c1_d1 < 256.0) {
        if (c1_d1 >= 0.0) {
          c1_u = (uint8_T)c1_d1;
        } else {
          c1_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c1_d1 >= 256.0) {
        c1_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c1_u = 0U;
      }

      c1_out_[((int32_T)c1_b_outRInd + 113 * ((int32_T)c1_b_inCInd - 1)) - 1] =
        c1_u;
    }
  }
}

static void c1_b_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_c_Ain[17515], uint8_T
  c1_Bout[279000])
{
  emlrtStack c1_st;
  real_T c1_c_weights_data[1800];
  int32_T c1_weights_size[2];
  int32_T c1_indices_data[1800];
  int32_T c1_indices_size[2];
  int32_T c1_i;
  uint8_T c1_d_Ain[17515];
  int32_T c1_b_weights_size[2];
  int32_T c1_b_indices_data[2480];
  int32_T c1_b_indices_size[2];
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_gb_emlrtRSI;
  c1_c_contributions(chartInstance, &c1_st, c1_c_weights_data, c1_weights_size,
                     c1_indices_data, c1_indices_size);
  c1_st.site = &c1_hb_emlrtRSI;
  for (c1_i = 0; c1_i < 17515; c1_i++) {
    c1_d_Ain[c1_i] = c1_c_Ain[c1_i];
  }

  c1_c_resizeAlongDim(chartInstance, &c1_st, c1_d_Ain, c1_c_weights_data,
                      c1_weights_size, c1_indices_data,
                      chartInstance->c1_c_APartialResize);
  c1_st.site = &c1_ib_emlrtRSI;
  c1_d_contributions(chartInstance, &c1_st, chartInstance->c1_b_weights_data,
                     c1_b_weights_size, c1_b_indices_data, c1_b_indices_size);
  c1_st.site = &c1_jb_emlrtRSI;
  c1_d_resizeAlongDim(chartInstance, &c1_st, chartInstance->c1_c_APartialResize,
                      chartInstance->c1_b_weights_data, c1_b_weights_size,
                      c1_b_indices_data, c1_Bout);
}

static void c1_c_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2])
{
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_iv[4];
  int32_T c1_iv1[450];
  int32_T c1_b_indices[1800];
  static int32_T c1_iv2[450] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3,
    3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9,
    9, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14,
    14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19,
    19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23,
    24, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 28, 28, 28, 28,
    29, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32, 33, 33, 33,
    33, 34, 34, 34, 34, 35, 35, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37, 38, 38,
    38, 38, 39, 39, 39, 39, 40, 40, 40, 40, 41, 41, 41, 41, 42, 42, 42, 42, 43,
    43, 43, 43, 44, 44, 44, 44, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47, 47,
    48, 48, 48, 48, 49, 49, 49, 49, 50, 50, 50, 50, 51, 51, 51, 51, 52, 52, 52,
    52, 53, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 57, 57,
    57, 57, 58, 58, 58, 58, 59, 59, 59, 59, 60, 60, 60, 60, 61, 61, 61, 61, 62,
    62, 62, 62, 63, 63, 63, 63, 64, 64, 64, 64, 65, 65, 65, 65, 66, 66, 66, 66,
    67, 67, 67, 67, 68, 68, 68, 68, 69, 69, 69, 69, 70, 70, 70, 70, 71, 71, 71,
    71, 72, 72, 72, 72, 73, 73, 73, 73, 74, 74, 74, 74, 75, 75, 75, 75, 76, 76,
    76, 76, 77, 77, 77, 77, 78, 78, 78, 78, 79, 79, 79, 79, 80, 80, 80, 80, 81,
    81, 81, 81, 82, 82, 82, 82, 83, 83, 83, 83, 84, 84, 84, 85, 85, 85, 85, 86,
    86, 86, 86, 87, 87, 87, 87, 88, 88, 88, 88, 89, 89, 89, 89, 90, 90, 90, 90,
    91, 91, 91, 91, 92, 92, 92, 92, 93, 93, 93, 93, 94, 94, 94, 94, 95, 95, 95,
    95, 96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 98, 99, 99, 99, 99, 100, 100,
    100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103, 104,
    104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107,
    108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111,
    111, 112, 112 };

  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_c_indices[1800];
  real_T c1_b_dv[450];
  real_T c1_b_f[1800];
  static real_T c1_dv1[450] = { 0.62555555555555564, 0.87666666666666671,
    1.1277777777777778, 1.3788888888888891, 1.63, 1.8811111111111112,
    2.1322222222222225, 2.3833333333333333, 2.6344444444444446,
    2.8855555555555554, 3.1366666666666667, 3.3877777777777776,
    3.6388888888888888, 3.89, 4.141111111111111, 4.3922222222222222,
    4.6433333333333335, 4.8944444444444448, 5.1455555555555552,
    5.3966666666666665, 5.6477777777777778, 5.8988888888888891, 6.15,
    6.4011111111111108, 6.652222222222222, 6.9033333333333333,
    7.1544444444444446, 7.4055555555555559, 7.6566666666666663,
    7.9077777777777776, 8.1588888888888889, 8.41, 8.6611111111111114,
    8.9122222222222227, 9.163333333333334, 9.4144444444444453,
    9.6655555555555548, 9.9166666666666661, 10.167777777777777,
    10.418888888888889, 10.67, 10.921111111111111, 11.172222222222222,
    11.423333333333334, 11.674444444444445, 11.925555555555556,
    12.176666666666666, 12.427777777777777, 12.678888888888888, 12.93,
    13.181111111111111, 13.432222222222222, 13.683333333333334,
    13.934444444444445, 14.185555555555556, 14.436666666666667,
    14.687777777777777, 14.938888888888888, 15.19, 15.441111111111111,
    15.692222222222222, 15.943333333333333, 16.194444444444446,
    16.445555555555558, 16.696666666666669, 16.94777777777778,
    17.198888888888892, 17.450000000000003, 17.701111111111114,
    17.952222222222225, 18.203333333333337, 18.454444444444448,
    18.705555555555556, 18.956666666666667, 19.207777777777778,
    19.45888888888889, 19.71, 19.961111111111112, 20.212222222222223,
    20.463333333333335, 20.714444444444446, 20.965555555555557,
    21.216666666666669, 21.46777777777778, 21.718888888888891,
    21.970000000000002, 22.221111111111114, 22.472222222222225,
    22.723333333333336, 22.974444444444448, 23.225555555555559,
    23.47666666666667, 23.727777777777778, 23.978888888888889, 24.23,
    24.481111111111112, 24.732222222222223, 24.983333333333334,
    25.234444444444446, 25.485555555555557, 25.736666666666668,
    25.987777777777779, 26.238888888888891, 26.490000000000002,
    26.741111111111113, 26.992222222222225, 27.243333333333336,
    27.494444444444447, 27.745555555555558, 27.99666666666667,
    28.247777777777781, 28.498888888888892, 28.750000000000004,
    29.001111111111111, 29.252222222222223, 29.503333333333334,
    29.754444444444445, 30.005555555555556, 30.256666666666668,
    30.507777777777779, 30.75888888888889, 31.01, 31.261111111111113,
    31.512222222222224, 31.763333333333335, 32.014444444444443,
    32.265555555555558, 32.516666666666666, 32.767777777777773,
    33.018888888888888, 33.269999999999996, 33.521111111111111,
    33.772222222222219, 34.023333333333333, 34.274444444444441,
    34.525555555555556, 34.776666666666664, 35.027777777777779,
    35.278888888888886, 35.53, 35.781111111111109, 36.032222222222224,
    36.283333333333331, 36.534444444444446, 36.785555555555554,
    37.036666666666662, 37.287777777777777, 37.538888888888884, 37.79,
    38.041111111111107, 38.292222222222222, 38.543333333333329,
    38.794444444444444, 39.045555555555552, 39.296666666666667,
    39.547777777777775, 39.798888888888889, 40.05, 40.301111111111112,
    40.55222222222222, 40.803333333333335, 41.054444444444442,
    41.305555555555557, 41.556666666666665, 41.80777777777778,
    42.058888888888887, 42.309999999999995, 42.56111111111111,
    42.812222222222218, 43.063333333333333, 43.31444444444444,
    43.565555555555555, 43.816666666666663, 44.067777777777778,
    44.318888888888885, 44.57, 44.821111111111108, 45.072222222222223,
    45.323333333333331, 45.574444444444445, 45.825555555555553,
    46.076666666666668, 46.327777777777776, 46.578888888888891, 46.83,
    47.081111111111106, 47.332222222222221, 47.583333333333329,
    47.834444444444443, 48.085555555555551, 48.336666666666666,
    48.587777777777774, 48.838888888888889, 49.089999999999996,
    49.341111111111111, 49.592222222222219, 49.843333333333334,
    50.094444444444441, 50.345555555555556, 50.596666666666664,
    50.847777777777779, 51.098888888888887, 51.35, 51.601111111111109,
    51.852222222222224, 52.103333333333332, 52.354444444444439,
    52.605555555555554, 52.856666666666662, 53.107777777777777,
    53.358888888888885, 53.61, 53.861111111111107, 54.112222222222222,
    54.36333333333333, 54.614444444444445, 54.865555555555552,
    55.116666666666667, 55.367777777777775, 55.61888888888889, 55.87,
    56.121111111111112, 56.37222222222222, 56.623333333333335,
    56.874444444444443, 57.125555555555557, 57.376666666666665,
    57.627777777777773, 57.878888888888888, 58.129999999999995,
    58.38111111111111, 58.632222222222218, 58.883333333333333,
    59.134444444444441, 59.385555555555555, 59.636666666666663,
    59.887777777777778, 60.138888888888886, 60.39, 60.641111111111108,
    60.892222222222223, 61.143333333333331, 61.394444444444446,
    61.645555555555553, 61.896666666666668, 62.147777777777776,
    62.398888888888891, 62.65, 62.901111111111106, 63.152222222222221,
    63.403333333333329, 63.654444444444444, 63.905555555555551,
    64.156666666666666, 64.407777777777781, 64.6588888888889, 64.910000000000011,
    65.161111111111111, 65.412222222222226, 65.663333333333341,
    65.914444444444456, 66.165555555555557, 66.416666666666671,
    66.667777777777786, 66.9188888888889, 67.17, 67.421111111111117,
    67.672222222222231, 67.923333333333332, 68.174444444444447,
    68.425555555555562, 68.676666666666677, 68.927777777777777,
    69.178888888888892, 69.43, 69.681111111111122, 69.932222222222222,
    70.183333333333337, 70.434444444444452, 70.685555555555567,
    70.936666666666667, 71.187777777777782, 71.4388888888889, 71.690000000000012,
    71.941111111111113, 72.192222222222227, 72.443333333333342,
    72.694444444444457, 72.945555555555558, 73.196666666666673,
    73.447777777777787, 73.698888888888888, 73.95, 74.201111111111118,
    74.452222222222233, 74.703333333333333, 74.954444444444448,
    75.205555555555563, 75.456666666666678, 75.707777777777778, 75.9588888888889,
    76.210000000000008, 76.461111111111123, 76.712222222222223,
    76.963333333333338, 77.214444444444453, 77.465555555555568,
    77.716666666666669, 77.967777777777783, 78.2188888888889, 78.47,
    78.721111111111114, 78.972222222222229, 79.223333333333343,
    79.474444444444444, 79.725555555555559, 79.976666666666674,
    80.227777777777789, 80.478888888888889, 80.73, 80.981111111111119,
    81.232222222222234, 81.483333333333334, 81.734444444444449,
    81.985555555555564, 82.236666666666679, 82.487777777777779, 82.7388888888889,
    82.990000000000009, 83.241111111111124, 83.492222222222225,
    83.743333333333339, 83.994444444444454, 84.245555555555555,
    84.49666666666667, 84.747777777777785, 84.9988888888889, 85.25,
    85.501111111111115, 85.75222222222223, 86.003333333333345,
    86.254444444444445, 86.50555555555556, 86.756666666666675, 87.00777777777779,
    87.25888888888889, 87.51, 87.76111111111112, 88.012222222222235,
    88.263333333333335, 88.51444444444445, 88.765555555555565,
    89.016666666666666, 89.267777777777781, 89.5188888888889, 89.77000000000001,
    90.021111111111111, 90.272222222222226, 90.523333333333341,
    90.774444444444455, 91.025555555555556, 91.276666666666671,
    91.527777777777786, 91.7788888888889, 92.03, 92.281111111111116,
    92.532222222222231, 92.783333333333346, 93.034444444444446,
    93.285555555555561, 93.536666666666676, 93.787777777777777,
    94.038888888888891, 94.29, 94.541111111111121, 94.792222222222222,
    95.043333333333337, 95.294444444444451, 95.545555555555566,
    95.796666666666667, 96.047777777777782, 96.2988888888889, 96.550000000000011,
    96.801111111111112, 97.052222222222227, 97.303333333333342,
    97.554444444444457, 97.805555555555557, 98.056666666666672,
    98.307777777777787, 98.5588888888889, 98.81, 99.061111111111117,
    99.312222222222232, 99.563333333333333, 99.814444444444447,
    100.06555555555556, 100.31666666666668, 100.56777777777778,
    100.81888888888889, 101.07000000000001, 101.32111111111112,
    101.57222222222222, 101.82333333333334, 102.07444444444445,
    102.32555555555557, 102.57666666666667, 102.82777777777778,
    103.0788888888889, 103.33000000000001, 103.58111111111111,
    103.83222222222223, 104.08333333333334, 104.33444444444444,
    104.58555555555556, 104.83666666666667, 105.08777777777779,
    105.33888888888889, 105.59, 105.84111111111112, 106.09222222222223,
    106.34333333333333, 106.59444444444445, 106.84555555555556,
    107.09666666666668, 107.34777777777778, 107.59888888888889,
    107.85000000000001, 108.10111111111112, 108.35222222222222,
    108.60333333333334, 108.85444444444445, 109.10555555555557,
    109.35666666666667, 109.60777777777778, 109.8588888888889, 110.11,
    110.36111111111111, 110.61222222222223, 110.86333333333334,
    111.11444444444444, 111.36555555555556, 111.61666666666667,
    111.86777777777779, 112.11888888888889, 112.37, 112.62111111111112,
    112.87222222222223, 113.12333333333333, 113.37444444444445 };

  int32_T c1_i4;
  int32_T c1_i5;
  boolean_T c1_bv[1800];
  int32_T c1_i6;
  boolean_T c1_bv1[1800];
  int32_T c1_i7;
  boolean_T c1_bv2[1800];
  int32_T c1_i8;
  boolean_T c1_bv3[1800];
  int32_T c1_i9;
  real_T c1_c_f[1800];
  real_T c1_dv2[450];
  int32_T c1_i10;
  real_T c1_d_f[1800];
  int32_T c1_aux[226];
  int32_T c1_b_i;
  int32_T c1_c_i;
  real_T c1_d_i;
  int32_T c1_i11;
  real_T c1_oldIdx;
  real_T c1_k;
  real_T c1_e_f[1800];
  boolean_T c1_copyCols[4];
  real_T c1_i_a;
  int32_T c1_trueCount;
  int32_T c1_c;
  int32_T c1_e_i;
  int32_T c1_tmp_size[2];
  int32_T c1_partialTrueCount;
  int32_T c1_f_i;
  int32_T c1_tmp_data[4];
  int32_T c1_i12;
  int32_T c1_b_trueCount;
  int32_T c1_loop_ub;
  int32_T c1_g_i;
  int32_T c1_i13;
  int32_T c1_b_tmp_size[2];
  int32_T c1_b_partialTrueCount;
  int32_T c1_h_i;
  int32_T c1_b_tmp_data[4];
  int32_T c1_i14;
  int32_T c1_b_loop_ub;
  int32_T c1_i15;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 4; c1_i++) {
    c1_iv[c1_i] = c1_i;
  }

  for (c1_i1 = 0; c1_i1 < 450; c1_i1++) {
    c1_iv1[c1_i1] = c1_iv2[c1_i1];
  }

  c1_g_bsxfun(chartInstance, c1_iv1, c1_iv, c1_b_indices);
  for (c1_i2 = 0; c1_i2 < 1800; c1_i2++) {
    c1_c_indices[c1_i2] = (real_T)c1_b_indices[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 450; c1_i3++) {
    c1_b_dv[c1_i3] = c1_dv1[c1_i3];
  }

  c1_h_bsxfun(chartInstance, c1_b_dv, c1_c_indices, c1_b_f);
  for (c1_i4 = 0; c1_i4 < 1800; c1_i4++) {
    c1_bv[c1_i4] = (0.0 <= c1_b_f[c1_i4]);
  }

  for (c1_i5 = 0; c1_i5 < 1800; c1_i5++) {
    c1_bv1[c1_i5] = (c1_b_f[c1_i5] <= 1.0);
  }

  for (c1_i6 = 0; c1_i6 < 1800; c1_i6++) {
    c1_bv2[c1_i6] = (-1.0 <= c1_b_f[c1_i6]);
  }

  for (c1_i7 = 0; c1_i7 < 1800; c1_i7++) {
    c1_bv3[c1_i7] = (c1_b_f[c1_i7] < 0.0);
  }

  for (c1_i8 = 0; c1_i8 < 1800; c1_i8++) {
    c1_b_f[c1_i8] = (c1_b_f[c1_i8] + 1.0) * (real_T)(c1_bv2[c1_i8] &&
      c1_bv3[c1_i8]) + (1.0 - c1_b_f[c1_i8]) * (real_T)(c1_bv[c1_i8] &&
      c1_bv1[c1_i8]);
  }

  for (c1_i9 = 0; c1_i9 < 1800; c1_i9++) {
    c1_c_f[c1_i9] = c1_b_f[c1_i9];
  }

  c1_c_sum(chartInstance, c1_c_f, c1_dv2);
  for (c1_i10 = 0; c1_i10 < 1800; c1_i10++) {
    c1_d_f[c1_i10] = c1_b_f[c1_i10];
  }

  c1_i_bsxfun(chartInstance, c1_d_f, c1_dv2, c1_b_f);
  c1_aux[0] = 1;
  c1_aux[113] = 113;
  for (c1_b_i = 0; c1_b_i < 112; c1_b_i++) {
    c1_aux[c1_b_i + 1] = c1_aux[c1_b_i] + 1;
    c1_aux[c1_b_i + 114] = c1_aux[c1_b_i + 113] - 1;
  }

  for (c1_c_i = 0; c1_c_i < 1800; c1_c_i++) {
    c1_d_i = (real_T)c1_c_i + 1.0;
    c1_oldIdx = (real_T)c1_b_indices[(int32_T)c1_d_i - 1];
    c1_k = c1_c_mod(chartInstance, c1_oldIdx - 1.0);
    c1_i_a = c1_k;
    c1_c = (int32_T)c1_i_a;
    c1_b_indices[(int32_T)c1_d_i - 1] = c1_aux[c1_c];
  }

  c1_st.site = &c1_v_emlrtRSI;
  for (c1_i11 = 0; c1_i11 < 1800; c1_i11++) {
    c1_e_f[c1_i11] = c1_b_f[c1_i11];
  }

  c1_c_any(chartInstance, &c1_st, c1_e_f, c1_copyCols);
  c1_trueCount = 0;
  for (c1_e_i = 0; c1_e_i < 4; c1_e_i++) {
    if (c1_copyCols[c1_e_i]) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[1] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_f_i = 0; c1_f_i < 4; c1_f_i++) {
    if (c1_copyCols[c1_f_i]) {
      c1_tmp_data[c1_partialTrueCount] = c1_f_i + 1;
      c1_partialTrueCount++;
    }
  }

  c1_weights_size[0] = c1_tmp_size[1];
  c1_weights_size[1] = 450;
  for (c1_i12 = 0; c1_i12 < 450; c1_i12++) {
    c1_loop_ub = c1_tmp_size[1] - 1;
    for (c1_i13 = 0; c1_i13 <= c1_loop_ub; c1_i13++) {
      c1_c_weights_data[c1_i13 + c1_weights_size[0] * c1_i12] = c1_b_f[c1_i12 +
        450 * (c1_tmp_data[c1_i13] - 1)];
    }
  }

  c1_b_trueCount = 0;
  for (c1_g_i = 0; c1_g_i < 4; c1_g_i++) {
    if (c1_copyCols[c1_g_i]) {
      c1_b_trueCount++;
    }
  }

  c1_b_tmp_size[1] = c1_b_trueCount;
  c1_b_partialTrueCount = 0;
  for (c1_h_i = 0; c1_h_i < 4; c1_h_i++) {
    if (c1_copyCols[c1_h_i]) {
      c1_b_tmp_data[c1_b_partialTrueCount] = c1_h_i + 1;
      c1_b_partialTrueCount++;
    }
  }

  c1_indices_size[0] = c1_b_tmp_size[1];
  c1_indices_size[1] = 450;
  for (c1_i14 = 0; c1_i14 < 450; c1_i14++) {
    c1_b_loop_ub = c1_b_tmp_size[1] - 1;
    for (c1_i15 = 0; c1_i15 <= c1_b_loop_ub; c1_i15++) {
      c1_indices_data[c1_i15 + c1_indices_size[0] * c1_i14] =
        c1_b_indices[c1_i14 + 450 * (c1_b_tmp_data[c1_i15] - 1)];
    }
  }
}

static void c1_g_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[450], int32_T c1_b[4], int32_T c1_c[1800])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_6;
  int32_T c1_j_a;
  int32_T c1_b_b;
  int32_T c1_b_c;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 450; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_j_a = c1_i_a[c1_b_varargin_3];
      c1_b_b = c1_b[c1_varargin_6];
      c1_b_c = c1_j_a + c1_b_b;
      c1_c[c1_j_varargin_1 + 450 * c1_varargin_2] = c1_b_c;
    }
  }
}

static void c1_h_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[450], real_T c1_b[1800], real_T c1_c[1800])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 450; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_5 = c1_b_ib;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_c[c1_j_varargin_1 + 450 * c1_varargin_2] = c1_i_a[c1_b_varargin_3] -
        c1_b[c1_varargin_5 + 450 * c1_varargin_6];
    }
  }
}

static void c1_c_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[1800], real_T c1_b_y[450])
{
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_b_j;
  int32_T c1_xoffset;
  int32_T c1_c_j;
  int32_T c1_ix;
  (void)chartInstance;
  for (c1_j = 0; c1_j < 450; c1_j++) {
    c1_b_j = c1_j;
    c1_b_y[c1_b_j] = c1_b_x[c1_b_j];
  }

  for (c1_k = 0; c1_k < 3; c1_k++) {
    c1_xoffset = (c1_k + 1) * 450;
    for (c1_c_j = 0; c1_c_j < 450; c1_c_j++) {
      c1_b_j = c1_c_j;
      c1_ix = c1_xoffset + c1_b_j;
      c1_b_y[c1_b_j] += c1_b_x[c1_ix];
    }
  }
}

static void c1_i_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[1800], real_T c1_b[450], real_T c1_c[1800])
{
  int32_T c1_k;
  int32_T c1_ia;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_k;
  int32_T c1_b_ia;
  int32_T c1_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_b_varargin_2;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ia = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_2 = c1_ia + 1;
    for (c1_b_k = 0; c1_b_k < 450; c1_b_k++) {
      c1_b_ia = c1_b_k;
      c1_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_b_varargin_2 = c1_i_varargin_1 - 1;
      c1_varargin_3 = c1_b_ia;
      c1_varargin_4 = c1_varargin_2 - 1;
      c1_varargin_5 = c1_ib;
      c1_c[c1_j_varargin_1 + 450 * c1_b_varargin_2] = c1_i_a[c1_varargin_3 + 450
        * c1_varargin_4] / c1_b[c1_varargin_5];
    }
  }
}

static real_T c1_c_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x)
{
  real_T c1_r;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  boolean_T c1_b;
  real_T c1_g_x;
  boolean_T c1_b_b;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_c_x = c1_b_x;
  c1_d_x = c1_c_x;
  c1_e_x = c1_d_x;
  c1_f_x = c1_e_x;
  c1_b = muDoubleScalarIsNaN(c1_f_x);
  if (c1_b) {
    c1_r = rtNaN;
  } else {
    c1_g_x = c1_e_x;
    c1_b_b = muDoubleScalarIsInf(c1_g_x);
    if (c1_b_b) {
      c1_r = rtNaN;
    } else if (c1_e_x == 0.0) {
      c1_r = 0.0;
    } else {
      c1_r = muDoubleScalarRem(c1_e_x, 226.0);
      c1_rEQ0 = (c1_r == 0.0);
      if (c1_rEQ0) {
        c1_r = 0.0;
      } else {
        if (c1_e_x < 0.0) {
          c1_r += 226.0;
        }
      }
    }
  }

  return c1_r;
}

static void c1_c_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[1800],
                     boolean_T c1_b_y[4])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_iy;
  int32_T c1_b_i;
  int32_T c1_i1;
  int32_T c1_i_a;
  int32_T c1_j_a;
  int32_T c1_k_a;
  int32_T c1_l_a;
  int32_T c1_m_a;
  int32_T c1_b;
  int32_T c1_n_a;
  int32_T c1_b_b;
  boolean_T c1_overflow;
  int32_T c1_ix;
  boolean_T c1_exitg1;
  real_T c1_c_x;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_w_emlrtRSI;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 4; c1_i++) {
    c1_b_y[c1_i] = false;
  }

  c1_i2 = 0;
  c1_iy = -1;
  for (c1_b_i = 0; c1_b_i < 4; c1_b_i++) {
    c1_i1 = c1_i2;
    c1_i_a = c1_i2 + 449;
    c1_i2 = c1_i_a;
    c1_j_a = c1_i1 + 1;
    c1_i1 = c1_j_a;
    c1_k_a = c1_i2 + 1;
    c1_i2 = c1_k_a;
    c1_l_a = c1_iy + 1;
    c1_iy = c1_l_a;
    c1_b_st.site = &c1_x_emlrtRSI;
    c1_m_a = c1_i1;
    c1_b = c1_i2;
    c1_n_a = c1_m_a;
    c1_b_b = c1_b;
    if (c1_n_a > c1_b_b) {
      c1_overflow = false;
    } else {
      c1_overflow = (c1_b_b > 2147483646);
    }

    if (c1_overflow) {
      c1_c_st.site = &c1_y_emlrtRSI;
      c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
    }

    c1_ix = c1_i1 - 1;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_ix + 1 <= c1_i2)) {
      if (c1_b_x[c1_ix] == 0.0) {
        c1_c_b = true;
      } else {
        c1_c_x = c1_b_x[c1_ix];
        c1_d_b = muDoubleScalarIsNaN(c1_c_x);
        if (c1_d_b) {
          c1_c_b = true;
        } else {
          c1_c_b = false;
        }
      }

      if (!c1_c_b) {
        c1_b_y[c1_iy] = true;
        c1_exitg1 = true;
      } else {
        c1_ix++;
      }
    }
  }
}

static void c1_c_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[17515], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[69750])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inCInd;
  real_T c1_b_inCInd;
  int32_T c1_c_inCInd;
  int32_T c1_i;
  int32_T c1_outRInd;
  uint8_T c1_inCol[113];
  real_T c1_b_outRInd;
  real_T c1_sumVal1;
  int32_T c1_i1;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i2;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_x;
  const mxArray *c1_c_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  int32_T c1_psiz;
  int32_T c1_idx;
  const mxArray *c1_e_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i3;
  int32_T c1_k;
  real_T c1_d1;
  int32_T c1_i_a;
  uint8_T c1_u;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inCInd = 0; c1_inCInd < 155; c1_inCInd++) {
    c1_b_inCInd = (real_T)c1_inCInd + 1.0;
    c1_c_inCInd = (int32_T)c1_b_inCInd - 1;
    for (c1_i = 0; c1_i < 113; c1_i++) {
      c1_inCol[c1_i] = c1_in_[c1_i + 113 * c1_c_inCInd];
    }

    for (c1_outRInd = 0; c1_outRInd < 450; c1_outRInd++) {
      c1_b_outRInd = (real_T)c1_outRInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_fb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_siz[c1_i1] = (real_T)c1_weights_size[c1_i1];
      }

      c1_varargin_2 = c1_b_outRInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
        c1_b_siz[c1_i2] = (int32_T)c1_siz[c1_i2];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b = true;
      } else {
        c1_b = false;
      }

      if (!c1_b) {
        c1_p = false;
      } else {
        c1_p = true;
      }

      if (!c1_p) {
        c1_b_y = NULL;
        sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_c_y = NULL;
        sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_b_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_b_x <= (real_T)c1_c_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i3 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i3; c1_k++) {
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] * (real_T)
          c1_inCol[c1_indices_data[c1_linearInds] - 1];
        c1_i_a = c1_linearInds + 1;
        c1_linearInds = c1_i_a;
      }

      c1_d1 = muDoubleScalarRound(c1_sumVal1);
      if (c1_d1 < 256.0) {
        if (c1_d1 >= 0.0) {
          c1_u = (uint8_T)c1_d1;
        } else {
          c1_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c1_d1 >= 256.0) {
        c1_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c1_u = 0U;
      }

      c1_out_[((int32_T)c1_b_outRInd + 450 * ((int32_T)c1_b_inCInd - 1)) - 1] =
        c1_u;
    }
  }
}

static void c1_d_contributions
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_c_weights_data[], int32_T c1_weights_size[2],
   int32_T c1_indices_data[], int32_T c1_indices_size[2])
{
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_iv[4];
  int32_T c1_iv1[620];
  int32_T c1_b_indices[2480];
  static int32_T c1_iv2[620] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3,
    3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9,
    9, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14,
    14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19,
    19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23,
    24, 24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28,
    28, 29, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32, 33, 33,
    33, 33, 34, 34, 34, 34, 35, 35, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37, 38,
    38, 38, 38, 39, 39, 39, 39, 40, 40, 40, 40, 41, 41, 41, 41, 42, 42, 42, 42,
    43, 43, 43, 43, 44, 44, 44, 44, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47,
    47, 48, 48, 48, 48, 49, 49, 49, 49, 50, 50, 50, 50, 51, 51, 51, 51, 52, 52,
    52, 52, 53, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 57,
    57, 57, 57, 58, 58, 58, 58, 59, 59, 59, 59, 60, 60, 60, 60, 61, 61, 61, 61,
    62, 62, 62, 62, 63, 63, 63, 63, 64, 64, 64, 64, 65, 65, 65, 65, 66, 66, 66,
    66, 67, 67, 67, 67, 68, 68, 68, 68, 69, 69, 69, 69, 70, 70, 70, 70, 71, 71,
    71, 71, 72, 72, 72, 72, 73, 73, 73, 73, 74, 74, 74, 74, 75, 75, 75, 75, 76,
    76, 76, 76, 77, 77, 77, 77, 78, 78, 78, 78, 79, 79, 79, 79, 80, 80, 80, 80,
    81, 81, 81, 81, 82, 82, 82, 82, 83, 83, 83, 83, 84, 84, 84, 84, 85, 85, 85,
    85, 86, 86, 86, 86, 87, 87, 87, 87, 88, 88, 88, 88, 89, 89, 89, 89, 90, 90,
    90, 90, 91, 91, 91, 91, 92, 92, 92, 92, 93, 93, 93, 93, 94, 94, 94, 94, 95,
    95, 95, 95, 96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 98, 99, 99, 99, 99,
    100, 100, 100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103,
    103, 104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107,
    107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111,
    111, 111, 111, 112, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114,
    115, 115, 115, 115, 116, 116, 116, 116, 117, 117, 117, 117, 118, 118, 118,
    118, 119, 119, 119, 119, 120, 120, 120, 120, 121, 121, 121, 121, 122, 122,
    122, 122, 123, 123, 123, 123, 124, 124, 124, 124, 125, 125, 125, 125, 126,
    126, 126, 126, 127, 127, 127, 127, 128, 128, 128, 128, 129, 129, 129, 129,
    130, 130, 130, 130, 131, 131, 131, 131, 132, 132, 132, 132, 133, 133, 133,
    133, 134, 134, 134, 134, 135, 135, 135, 135, 136, 136, 136, 136, 137, 137,
    137, 137, 138, 138, 138, 138, 139, 139, 139, 139, 140, 140, 140, 140, 141,
    141, 141, 141, 142, 142, 142, 142, 143, 143, 143, 143, 144, 144, 144, 144,
    145, 145, 145, 145, 146, 146, 146, 146, 147, 147, 147, 147, 148, 148, 148,
    148, 149, 149, 149, 149, 150, 150, 150, 150, 151, 151, 151, 151, 152, 152,
    152, 152, 153, 153, 153, 153, 154, 154 };

  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_b_dv[620];
  int32_T c1_i4;
  int32_T c1_i5;
  boolean_T c1_bv[2480];
  int32_T c1_i6;
  boolean_T c1_bv1[2480];
  int32_T c1_i7;
  boolean_T c1_bv2[2480];
  int32_T c1_i8;
  boolean_T c1_bv3[2480];
  int32_T c1_i9;
  real_T c1_b_f[2480];
  real_T c1_dv1[620];
  int32_T c1_i10;
  real_T c1_c_f[2480];
  int32_T c1_aux[310];
  int32_T c1_b_i;
  int32_T c1_c_i;
  real_T c1_d_i;
  int32_T c1_i11;
  real_T c1_oldIdx;
  real_T c1_k;
  real_T c1_d_f[2480];
  boolean_T c1_copyCols[4];
  real_T c1_i_a;
  int32_T c1_trueCount;
  int32_T c1_c;
  int32_T c1_e_i;
  int32_T c1_tmp_size[2];
  int32_T c1_partialTrueCount;
  int32_T c1_f_i;
  int32_T c1_tmp_data[4];
  int32_T c1_i12;
  int32_T c1_b_trueCount;
  int32_T c1_loop_ub;
  int32_T c1_g_i;
  int32_T c1_i13;
  int32_T c1_b_tmp_size[2];
  int32_T c1_b_partialTrueCount;
  int32_T c1_h_i;
  int32_T c1_b_tmp_data[4];
  int32_T c1_i14;
  int32_T c1_b_loop_ub;
  int32_T c1_i15;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 4; c1_i++) {
    c1_iv[c1_i] = c1_i;
  }

  for (c1_i1 = 0; c1_i1 < 620; c1_i1++) {
    c1_iv1[c1_i1] = c1_iv2[c1_i1];
  }

  c1_j_bsxfun(chartInstance, c1_iv1, c1_iv, c1_b_indices);
  for (c1_i2 = 0; c1_i2 < 620; c1_i2++) {
    c1_b_dv[c1_i2] = 0.625 + 0.25 * (real_T)c1_i2;
  }

  for (c1_i3 = 0; c1_i3 < 2480; c1_i3++) {
    chartInstance->c1_indices[c1_i3] = (real_T)c1_b_indices[c1_i3];
  }

  c1_k_bsxfun(chartInstance, c1_b_dv, chartInstance->c1_indices,
              chartInstance->c1_f);
  for (c1_i4 = 0; c1_i4 < 2480; c1_i4++) {
    c1_bv[c1_i4] = (0.0 <= chartInstance->c1_f[c1_i4]);
  }

  for (c1_i5 = 0; c1_i5 < 2480; c1_i5++) {
    c1_bv1[c1_i5] = (chartInstance->c1_f[c1_i5] <= 1.0);
  }

  for (c1_i6 = 0; c1_i6 < 2480; c1_i6++) {
    c1_bv2[c1_i6] = (-1.0 <= chartInstance->c1_f[c1_i6]);
  }

  for (c1_i7 = 0; c1_i7 < 2480; c1_i7++) {
    c1_bv3[c1_i7] = (chartInstance->c1_f[c1_i7] < 0.0);
  }

  for (c1_i8 = 0; c1_i8 < 2480; c1_i8++) {
    chartInstance->c1_f[c1_i8] = (chartInstance->c1_f[c1_i8] + 1.0) * (real_T)
      (c1_bv2[c1_i8] && c1_bv3[c1_i8]) + (1.0 - chartInstance->c1_f[c1_i8]) *
      (real_T)(c1_bv[c1_i8] && c1_bv1[c1_i8]);
  }

  for (c1_i9 = 0; c1_i9 < 2480; c1_i9++) {
    c1_b_f[c1_i9] = chartInstance->c1_f[c1_i9];
  }

  c1_d_sum(chartInstance, c1_b_f, c1_dv1);
  for (c1_i10 = 0; c1_i10 < 2480; c1_i10++) {
    c1_c_f[c1_i10] = chartInstance->c1_f[c1_i10];
  }

  c1_l_bsxfun(chartInstance, c1_c_f, c1_dv1, chartInstance->c1_f);
  c1_aux[0] = 1;
  c1_aux[155] = 155;
  for (c1_b_i = 0; c1_b_i < 154; c1_b_i++) {
    c1_aux[c1_b_i + 1] = c1_aux[c1_b_i] + 1;
    c1_aux[c1_b_i + 156] = c1_aux[c1_b_i + 155] - 1;
  }

  for (c1_c_i = 0; c1_c_i < 2480; c1_c_i++) {
    c1_d_i = (real_T)c1_c_i + 1.0;
    c1_oldIdx = (real_T)c1_b_indices[(int32_T)c1_d_i - 1];
    c1_k = c1_d_mod(chartInstance, c1_oldIdx - 1.0);
    c1_i_a = c1_k;
    c1_c = (int32_T)c1_i_a;
    c1_b_indices[(int32_T)c1_d_i - 1] = c1_aux[c1_c];
  }

  c1_st.site = &c1_v_emlrtRSI;
  for (c1_i11 = 0; c1_i11 < 2480; c1_i11++) {
    c1_d_f[c1_i11] = chartInstance->c1_f[c1_i11];
  }

  c1_d_any(chartInstance, &c1_st, c1_d_f, c1_copyCols);
  c1_trueCount = 0;
  for (c1_e_i = 0; c1_e_i < 4; c1_e_i++) {
    if (c1_copyCols[c1_e_i]) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[1] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_f_i = 0; c1_f_i < 4; c1_f_i++) {
    if (c1_copyCols[c1_f_i]) {
      c1_tmp_data[c1_partialTrueCount] = c1_f_i + 1;
      c1_partialTrueCount++;
    }
  }

  c1_weights_size[0] = c1_tmp_size[1];
  c1_weights_size[1] = 620;
  for (c1_i12 = 0; c1_i12 < 620; c1_i12++) {
    c1_loop_ub = c1_tmp_size[1] - 1;
    for (c1_i13 = 0; c1_i13 <= c1_loop_ub; c1_i13++) {
      c1_c_weights_data[c1_i13 + c1_weights_size[0] * c1_i12] =
        chartInstance->c1_f[c1_i12 + 620 * (c1_tmp_data[c1_i13] - 1)];
    }
  }

  c1_b_trueCount = 0;
  for (c1_g_i = 0; c1_g_i < 4; c1_g_i++) {
    if (c1_copyCols[c1_g_i]) {
      c1_b_trueCount++;
    }
  }

  c1_b_tmp_size[1] = c1_b_trueCount;
  c1_b_partialTrueCount = 0;
  for (c1_h_i = 0; c1_h_i < 4; c1_h_i++) {
    if (c1_copyCols[c1_h_i]) {
      c1_b_tmp_data[c1_b_partialTrueCount] = c1_h_i + 1;
      c1_b_partialTrueCount++;
    }
  }

  c1_indices_size[0] = c1_b_tmp_size[1];
  c1_indices_size[1] = 620;
  for (c1_i14 = 0; c1_i14 < 620; c1_i14++) {
    c1_b_loop_ub = c1_b_tmp_size[1] - 1;
    for (c1_i15 = 0; c1_i15 <= c1_b_loop_ub; c1_i15++) {
      c1_indices_data[c1_i15 + c1_indices_size[0] * c1_i14] =
        c1_b_indices[c1_i14 + 620 * (c1_b_tmp_data[c1_i15] - 1)];
    }
  }
}

static void c1_j_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, int32_T c1_i_a[620], int32_T c1_b[4], int32_T c1_c[2480])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_6;
  int32_T c1_j_a;
  int32_T c1_b_b;
  int32_T c1_b_c;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 620; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_j_a = c1_i_a[c1_b_varargin_3];
      c1_b_b = c1_b[c1_varargin_6];
      c1_b_c = c1_j_a + c1_b_b;
      c1_c[c1_j_varargin_1 + 620 * c1_varargin_2] = c1_b_c;
    }
  }
}

static void c1_k_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[620], real_T c1_b[2480], real_T c1_c[2480])
{
  int32_T c1_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_3;
  int32_T c1_b_k;
  int32_T c1_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_b_k = 0; c1_b_k < 620; c1_b_k++) {
      c1_ia = c1_b_k;
      c1_b_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_varargin_2 = c1_i_varargin_1 - 1;
      c1_b_varargin_3 = c1_ia;
      c1_varargin_5 = c1_b_ib;
      c1_varargin_6 = c1_varargin_3 - 1;
      c1_c[c1_j_varargin_1 + 620 * c1_varargin_2] = c1_i_a[c1_b_varargin_3] -
        c1_b[c1_varargin_5 + 620 * c1_varargin_6];
    }
  }
}

static void c1_d_sum(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[2480], real_T c1_b_y[620])
{
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_b_j;
  int32_T c1_xoffset;
  int32_T c1_c_j;
  int32_T c1_ix;
  (void)chartInstance;
  for (c1_j = 0; c1_j < 620; c1_j++) {
    c1_b_j = c1_j;
    c1_b_y[c1_b_j] = c1_b_x[c1_b_j];
  }

  for (c1_k = 0; c1_k < 3; c1_k++) {
    c1_xoffset = (c1_k + 1) * 620;
    for (c1_c_j = 0; c1_c_j < 620; c1_c_j++) {
      c1_b_j = c1_c_j;
      c1_ix = c1_xoffset + c1_b_j;
      c1_b_y[c1_b_j] += c1_b_x[c1_ix];
    }
  }
}

static void c1_l_bsxfun(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[2480], real_T c1_b[620], real_T c1_c[2480])
{
  int32_T c1_k;
  int32_T c1_ia;
  int32_T c1_ic;
  int32_T c1_i_varargin_1;
  int32_T c1_varargin_2;
  int32_T c1_b_k;
  int32_T c1_b_ia;
  int32_T c1_ib;
  int32_T c1_b_ic;
  int32_T c1_j_varargin_1;
  int32_T c1_b_varargin_2;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 4; c1_k++) {
    c1_ia = c1_k;
    c1_ic = c1_k;
    c1_i_varargin_1 = c1_ic + 1;
    c1_varargin_2 = c1_ia + 1;
    for (c1_b_k = 0; c1_b_k < 620; c1_b_k++) {
      c1_b_ia = c1_b_k;
      c1_ib = c1_b_k;
      c1_b_ic = c1_b_k;
      c1_j_varargin_1 = c1_b_ic;
      c1_b_varargin_2 = c1_i_varargin_1 - 1;
      c1_varargin_3 = c1_b_ia;
      c1_varargin_4 = c1_varargin_2 - 1;
      c1_varargin_5 = c1_ib;
      c1_c[c1_j_varargin_1 + 620 * c1_b_varargin_2] = c1_i_a[c1_varargin_3 + 620
        * c1_varargin_4] / c1_b[c1_varargin_5];
    }
  }
}

static real_T c1_d_mod(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x)
{
  real_T c1_r;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  boolean_T c1_b;
  real_T c1_g_x;
  boolean_T c1_b_b;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_c_x = c1_b_x;
  c1_d_x = c1_c_x;
  c1_e_x = c1_d_x;
  c1_f_x = c1_e_x;
  c1_b = muDoubleScalarIsNaN(c1_f_x);
  if (c1_b) {
    c1_r = rtNaN;
  } else {
    c1_g_x = c1_e_x;
    c1_b_b = muDoubleScalarIsInf(c1_g_x);
    if (c1_b_b) {
      c1_r = rtNaN;
    } else if (c1_e_x == 0.0) {
      c1_r = 0.0;
    } else {
      c1_r = muDoubleScalarRem(c1_e_x, 310.0);
      c1_rEQ0 = (c1_r == 0.0);
      if (c1_rEQ0) {
        c1_r = 0.0;
      } else {
        if (c1_e_x < 0.0) {
          c1_r += 310.0;
        }
      }
    }
  }

  return c1_r;
}

static void c1_d_any(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c1_sp, real_T c1_b_x[2480],
                     boolean_T c1_b_y[4])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_iy;
  int32_T c1_b_i;
  int32_T c1_i1;
  int32_T c1_i_a;
  int32_T c1_j_a;
  int32_T c1_k_a;
  int32_T c1_l_a;
  int32_T c1_m_a;
  int32_T c1_b;
  int32_T c1_n_a;
  int32_T c1_b_b;
  boolean_T c1_overflow;
  int32_T c1_ix;
  boolean_T c1_exitg1;
  real_T c1_c_x;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_w_emlrtRSI;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 4; c1_i++) {
    c1_b_y[c1_i] = false;
  }

  c1_i2 = 0;
  c1_iy = -1;
  for (c1_b_i = 0; c1_b_i < 4; c1_b_i++) {
    c1_i1 = c1_i2;
    c1_i_a = c1_i2 + 619;
    c1_i2 = c1_i_a;
    c1_j_a = c1_i1 + 1;
    c1_i1 = c1_j_a;
    c1_k_a = c1_i2 + 1;
    c1_i2 = c1_k_a;
    c1_l_a = c1_iy + 1;
    c1_iy = c1_l_a;
    c1_b_st.site = &c1_x_emlrtRSI;
    c1_m_a = c1_i1;
    c1_b = c1_i2;
    c1_n_a = c1_m_a;
    c1_b_b = c1_b;
    if (c1_n_a > c1_b_b) {
      c1_overflow = false;
    } else {
      c1_overflow = (c1_b_b > 2147483646);
    }

    if (c1_overflow) {
      c1_c_st.site = &c1_y_emlrtRSI;
      c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
    }

    c1_ix = c1_i1 - 1;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_ix + 1 <= c1_i2)) {
      if (c1_b_x[c1_ix] == 0.0) {
        c1_c_b = true;
      } else {
        c1_c_x = c1_b_x[c1_ix];
        c1_d_b = muDoubleScalarIsNaN(c1_c_x);
        if (c1_d_b) {
          c1_c_b = true;
        } else {
          c1_c_b = false;
        }
      }

      if (!c1_c_b) {
        c1_b_y[c1_iy] = true;
        c1_exitg1 = true;
      } else {
        c1_ix++;
      }
    }
  }
}

static void c1_d_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, uint8_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], uint8_T c1_out_[279000])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inRInd;
  real_T c1_b_inRInd;
  real_T c1_i_varargin_1;
  real_T c1_j_varargin_1;
  real_T c1_b_x;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  int32_T c1_idx;
  real_T c1_rowStart;
  const mxArray *c1_c_y = NULL;
  int32_T c1_outCInd;
  real_T c1_b_outCInd;
  real_T c1_sumVal1;
  int32_T c1_i;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i1;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  real_T c1_c_x;
  const mxArray *c1_e_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b2;
  boolean_T c1_c_p;
  const mxArray *c1_f_y = NULL;
  int32_T c1_psiz;
  int32_T c1_b_idx;
  const mxArray *c1_g_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i2;
  int32_T c1_k;
  real_T c1_d1;
  int32_T c1_i_a;
  int32_T c1_c;
  int32_T c1_j_a;
  uint8_T c1_u;
  int32_T c1_b_c;
  real_T c1_k_a;
  int32_T c1_b_b;
  int32_T c1_pixelIndex;
  uint8_T c1_pixelValue;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inRInd = 0; c1_inRInd < 450; c1_inRInd++) {
    c1_b_inRInd = (real_T)c1_inRInd + 1.0;
    c1_st.site = &c1_ab_emlrtRSI;
    c1_i_varargin_1 = c1_b_inRInd;
    c1_b_st.site = &c1_cb_emlrtRSI;
    c1_j_varargin_1 = c1_i_varargin_1;
    c1_b_x = c1_j_varargin_1;
    if (c1_b_x <= 450.0) {
      c1_b = true;
    } else {
      c1_b = false;
    }

    if (!c1_b) {
      c1_p = false;
    } else {
      c1_p = true;
    }

    if (!c1_p) {
      c1_b_y = NULL;
      sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c1_c_y = NULL;
      sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
    }

    c1_idx = (int32_T)c1_j_varargin_1;
    c1_rowStart = (real_T)c1_idx;
    for (c1_outCInd = 0; c1_outCInd < 620; c1_outCInd++) {
      c1_b_outCInd = (real_T)c1_outCInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_bb_emlrtRSI;
      for (c1_i = 0; c1_i < 2; c1_i++) {
        c1_siz[c1_i] = (real_T)c1_weights_size[c1_i];
      }

      c1_varargin_2 = c1_b_outCInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_b_siz[c1_i1] = (int32_T)c1_siz[c1_i1];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_c_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_c_x <= (real_T)c1_c_hi) {
        c1_b2 = true;
      } else {
        c1_b2 = false;
      }

      if (!c1_b2) {
        c1_c_p = false;
      } else {
        c1_c_p = true;
      }

      if (!c1_c_p) {
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_b_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_b_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i2 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i2; c1_k++) {
        c1_i_a = c1_indices_data[c1_linearInds] - 1;
        c1_c = c1_i_a;
        c1_j_a = c1_c;
        c1_b_c = c1_j_a * 450;
        c1_k_a = c1_rowStart;
        c1_b_b = c1_b_c;
        c1_pixelIndex = ((int32_T)c1_k_a + c1_b_b) - 1;
        c1_pixelValue = c1_in_[c1_pixelIndex];
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] * (real_T)c1_pixelValue;
        c1_linearInds++;
      }

      c1_d1 = muDoubleScalarRound(c1_sumVal1);
      if (c1_d1 < 256.0) {
        if (c1_d1 >= 0.0) {
          c1_u = (uint8_T)c1_d1;
        } else {
          c1_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c1_d1 >= 256.0) {
        c1_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c1_u = 0U;
      }

      c1_out_[((int32_T)c1_b_inRInd + 450 * ((int32_T)c1_b_outCInd - 1)) - 1] =
        c1_u;
    }
  }
}

static void c1_c_imresize(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_c_Ain[17515], real_T
  c1_Bout[279000])
{
  emlrtStack c1_st;
  real_T c1_c_weights_data[1800];
  int32_T c1_weights_size[2];
  int32_T c1_indices_data[1800];
  int32_T c1_indices_size[2];
  int32_T c1_i;
  int32_T c1_b_weights_size[2];
  int32_T c1_b_indices_data[2480];
  int32_T c1_b_indices_size[2];
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_gb_emlrtRSI;
  c1_c_contributions(chartInstance, &c1_st, c1_c_weights_data, c1_weights_size,
                     c1_indices_data, c1_indices_size);
  c1_st.site = &c1_hb_emlrtRSI;
  for (c1_i = 0; c1_i < 17515; c1_i++) {
    chartInstance->c1_Ain[c1_i] = c1_c_Ain[c1_i];
  }

  c1_e_resizeAlongDim(chartInstance, &c1_st, chartInstance->c1_Ain,
                      c1_c_weights_data, c1_weights_size, c1_indices_data,
                      chartInstance->c1_APartialResize);
  c1_st.site = &c1_ib_emlrtRSI;
  c1_d_contributions(chartInstance, &c1_st, chartInstance->c1_weights_data,
                     c1_b_weights_size, c1_b_indices_data, c1_b_indices_size);
  c1_st.site = &c1_jb_emlrtRSI;
  c1_f_resizeAlongDim(chartInstance, &c1_st, chartInstance->c1_APartialResize,
                      chartInstance->c1_weights_data, c1_b_weights_size,
                      c1_b_indices_data, c1_Bout);
}

static void c1_e_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_in_[17515], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], real_T c1_out_[69750])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inCInd;
  real_T c1_b_inCInd;
  int32_T c1_c_inCInd;
  int32_T c1_i;
  int32_T c1_outRInd;
  real_T c1_inCol[113];
  real_T c1_b_outRInd;
  real_T c1_sumVal1;
  int32_T c1_i1;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i2;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_x;
  const mxArray *c1_c_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  int32_T c1_psiz;
  int32_T c1_idx;
  const mxArray *c1_e_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i3;
  int32_T c1_k;
  int32_T c1_i_a;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inCInd = 0; c1_inCInd < 155; c1_inCInd++) {
    c1_b_inCInd = (real_T)c1_inCInd + 1.0;
    c1_c_inCInd = (int32_T)c1_b_inCInd - 1;
    for (c1_i = 0; c1_i < 113; c1_i++) {
      c1_inCol[c1_i] = c1_in_[c1_i + 113 * c1_c_inCInd];
    }

    for (c1_outRInd = 0; c1_outRInd < 450; c1_outRInd++) {
      c1_b_outRInd = (real_T)c1_outRInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_fb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_siz[c1_i1] = (real_T)c1_weights_size[c1_i1];
      }

      c1_varargin_2 = c1_b_outRInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
        c1_b_siz[c1_i2] = (int32_T)c1_siz[c1_i2];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b = true;
      } else {
        c1_b = false;
      }

      if (!c1_b) {
        c1_p = false;
      } else {
        c1_p = true;
      }

      if (!c1_p) {
        c1_b_y = NULL;
        sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_c_y = NULL;
        sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_b_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_b_x <= (real_T)c1_c_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i3 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i3; c1_k++) {
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] *
          c1_inCol[c1_indices_data[c1_linearInds] - 1];
        c1_i_a = c1_linearInds + 1;
        c1_linearInds = c1_i_a;
      }

      c1_out_[((int32_T)c1_b_outRInd + 450 * ((int32_T)c1_b_inCInd - 1)) - 1] =
        c1_sumVal1;
    }
  }
}

static void c1_f_resizeAlongDim
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, real_T c1_in_[69750], real_T c1_c_weights_data[], int32_T
   c1_weights_size[2], int32_T c1_indices_data[], real_T c1_out_[279000])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  int32_T c1_inRInd;
  real_T c1_b_inRInd;
  real_T c1_i_varargin_1;
  real_T c1_j_varargin_1;
  real_T c1_b_x;
  boolean_T c1_b;
  boolean_T c1_p;
  const mxArray *c1_b_y = NULL;
  int32_T c1_idx;
  real_T c1_rowStart;
  const mxArray *c1_c_y = NULL;
  int32_T c1_outCInd;
  real_T c1_b_outCInd;
  real_T c1_sumVal1;
  int32_T c1_i;
  real_T c1_varargin_2;
  real_T c1_siz[2];
  int32_T c1_i1;
  real_T c1_b_varargin_2;
  int32_T c1_b_siz[2];
  int32_T c1_hi;
  int32_T c1_b_hi;
  boolean_T c1_b1;
  boolean_T c1_b_p;
  const mxArray *c1_d_y = NULL;
  real_T c1_c_x;
  const mxArray *c1_e_y = NULL;
  int32_T c1_c_hi;
  boolean_T c1_b2;
  boolean_T c1_c_p;
  const mxArray *c1_f_y = NULL;
  int32_T c1_psiz;
  int32_T c1_b_idx;
  const mxArray *c1_g_y = NULL;
  real_T c1_ndx;
  int32_T c1_linearInds;
  real_T c1_d;
  int32_T c1_i2;
  int32_T c1_k;
  int32_T c1_i_a;
  int32_T c1_c;
  int32_T c1_j_a;
  int32_T c1_b_c;
  real_T c1_k_a;
  int32_T c1_b_b;
  int32_T c1_pixelIndex;
  real_T c1_pixelValue;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_inRInd = 0; c1_inRInd < 450; c1_inRInd++) {
    c1_b_inRInd = (real_T)c1_inRInd + 1.0;
    c1_st.site = &c1_ab_emlrtRSI;
    c1_i_varargin_1 = c1_b_inRInd;
    c1_b_st.site = &c1_cb_emlrtRSI;
    c1_j_varargin_1 = c1_i_varargin_1;
    c1_b_x = c1_j_varargin_1;
    if (c1_b_x <= 450.0) {
      c1_b = true;
    } else {
      c1_b = false;
    }

    if (!c1_b) {
      c1_p = false;
    } else {
      c1_p = true;
    }

    if (!c1_p) {
      c1_b_y = NULL;
      sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c1_c_y = NULL;
      sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
    }

    c1_idx = (int32_T)c1_j_varargin_1;
    c1_rowStart = (real_T)c1_idx;
    for (c1_outCInd = 0; c1_outCInd < 620; c1_outCInd++) {
      c1_b_outCInd = (real_T)c1_outCInd + 1.0;
      c1_sumVal1 = 0.0;
      c1_st.site = &c1_bb_emlrtRSI;
      for (c1_i = 0; c1_i < 2; c1_i++) {
        c1_siz[c1_i] = (real_T)c1_weights_size[c1_i];
      }

      c1_varargin_2 = c1_b_outCInd;
      c1_b_st.site = &c1_cb_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_b_siz[c1_i1] = (int32_T)c1_siz[c1_i1];
      }

      c1_b_varargin_2 = c1_varargin_2;
      c1_hi = c1_b_siz[0];
      c1_b_hi = c1_hi;
      if (1.0 <= (real_T)c1_b_hi) {
        c1_b1 = true;
      } else {
        c1_b1 = false;
      }

      if (!c1_b1) {
        c1_b_p = false;
      } else {
        c1_b_p = true;
      }

      if (!c1_b_p) {
        c1_d_y = NULL;
        sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
      }

      c1_hi = c1_b_siz[1];
      c1_c_x = c1_b_varargin_2;
      c1_c_hi = c1_hi;
      if (c1_c_x <= (real_T)c1_c_hi) {
        c1_b2 = true;
      } else {
        c1_b2 = false;
      }

      if (!c1_b2) {
        c1_c_p = false;
      } else {
        c1_c_p = true;
      }

      if (!c1_c_p) {
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
      }

      c1_psiz = c1_b_siz[0];
      c1_b_idx = c1_psiz * ((int32_T)c1_b_varargin_2 - 1);
      c1_ndx = (real_T)(c1_b_idx + 1);
      c1_linearInds = (int32_T)c1_ndx - 1;
      c1_d = (real_T)c1_weights_size[0];
      c1_i2 = (int32_T)c1_d - 1;
      for (c1_k = 0; c1_k <= c1_i2; c1_k++) {
        c1_i_a = c1_indices_data[c1_linearInds] - 1;
        c1_c = c1_i_a;
        c1_j_a = c1_c;
        c1_b_c = c1_j_a * 450;
        c1_k_a = c1_rowStart;
        c1_b_b = c1_b_c;
        c1_pixelIndex = ((int32_T)c1_k_a + c1_b_b) - 1;
        c1_pixelValue = c1_in_[c1_pixelIndex];
        c1_sumVal1 += c1_c_weights_data[c1_linearInds] * c1_pixelValue;
        c1_linearInds++;
      }

      c1_out_[((int32_T)c1_b_inRInd + 450 * ((int32_T)c1_b_outCInd - 1)) - 1] =
        c1_sumVal1;
    }
  }
}

static void c1_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, false, true, true, false, false,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_h_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_h_varargin_1,
              chartInstance->c1_h_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_h_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = 1.0 + -2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_h_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_padImage(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_a_tmp[279000], real_T c1_i_a[281144])
{
  int32_T c1_i;
  int32_T c1_b_i;
  real_T c1_c_i;
  int32_T c1_j;
  int32_T c1_b_j;
  real_T c1_c_j;
  real_T c1_j_a;
  int32_T c1_d_j;
  int32_T c1_c;
  real_T c1_k_a;
  int32_T c1_b_c;
  int32_T c1_d_i;
  real_T c1_l_a;
  int32_T c1_c_c;
  real_T c1_m_a;
  int32_T c1_d_c;
  (void)chartInstance;
  for (c1_i = 0; c1_i < 452; c1_i++) {
    c1_c_i = (real_T)c1_i + 1.0;
    c1_i_a[(int32_T)c1_c_i - 1] = 0.0;
  }

  for (c1_b_i = 0; c1_b_i < 452; c1_b_i++) {
    c1_c_i = (real_T)c1_b_i + 1.0;
    c1_i_a[(int32_T)c1_c_i + 280691] = 0.0;
  }

  for (c1_j = 0; c1_j < 620; c1_j++) {
    c1_c_j = (real_T)c1_j + 1.0;
    c1_j_a = c1_c_j;
    c1_c = (int32_T)c1_j_a;
    c1_i_a[452 * c1_c] = 0.0;
  }

  for (c1_b_j = 0; c1_b_j < 620; c1_b_j++) {
    c1_c_j = (real_T)c1_b_j + 1.0;
    c1_k_a = c1_c_j;
    c1_b_c = (int32_T)c1_k_a;
    c1_i_a[451 + 452 * c1_b_c] = 0.0;
  }

  for (c1_d_j = 0; c1_d_j < 620; c1_d_j++) {
    c1_c_j = (real_T)c1_d_j + 1.0;
    for (c1_d_i = 0; c1_d_i < 450; c1_d_i++) {
      c1_c_i = (real_T)c1_d_i + 1.0;
      c1_l_a = c1_c_i;
      c1_c_c = (int32_T)c1_l_a;
      c1_m_a = c1_c_j;
      c1_d_c = (int32_T)c1_m_a;
      c1_i_a[c1_c_c + 452 * c1_d_c] = c1_a_tmp[((int32_T)c1_c_i + 450 *
        ((int32_T)c1_c_j - 1)) - 1];
    }
  }
}

static void c1_b_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 0.0, 0.0, -1.0, 1.0, 0.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, false, false, true, true, false,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_g_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_g_varargin_1,
              chartInstance->c1_g_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_g_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = -1.0 + 2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_g_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_c_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, true, false, false, true, false, false,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_f_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_f_varargin_1,
              chartInstance->c1_f_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_f_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = 1.0 + -2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_f_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_d_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, false, false, true, false, false,
    true, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_e_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_e_varargin_1,
              chartInstance->c1_e_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_e_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = -1.0 + 2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_e_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_e_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, false, false, true, false, true,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_d_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_d_varargin_1,
              chartInstance->c1_d_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_d_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = -1.0 + 2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_d_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_f_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, false, false, true, false, false,
    false, true };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_c_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_c_varargin_1,
              chartInstance->c1_c_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_c_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = -1.0 + 2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_c_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_g_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { false, false, true, false, true, false, false,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_b_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_b_varargin_1,
              chartInstance->c1_b_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_b_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = 1.0 + -2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_b_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_h_imfilter(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_varargin_1[279000], real_T c1_b[279000])
{
  int32_T c1_i;
  boolean_T c1_tooBig;
  int32_T c1_b_i;
  boolean_T c1_modeFlag;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  real_T c1_kernelSizeT[2];
  int32_T c1_i4;
  real_T c1_padSizeT[2];
  int32_T c1_i5;
  int32_T c1_i6;
  real_T c1_outSizeT[2];
  int32_T c1_i7;
  static real_T c1_kernel[9] = { 1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c1_i8;
  real_T c1_connDimsT[2];
  static boolean_T c1_conn[9] = { true, false, false, false, true, false, false,
    false, false };

  real_T c1_startT[2];
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    chartInstance->c1_varargin_1[c1_i] = c1_i_varargin_1[c1_i];
  }

  c1_padImage(chartInstance, chartInstance->c1_varargin_1, chartInstance->c1_a);
  c1_tooBig = true;
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 452.0 + 170.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 450.0 + 170.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_kernelSizeT[c1_i6] = 3.0;
    }

    ippfilter_real64(chartInstance->c1_a, c1_b, c1_outSizeT, 2.0, c1_padSizeT,
                     c1_kernel, c1_kernelSizeT, true);
  } else {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_kernelSizeT[c1_i1] = 1.0 + -2.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 452.0 + 170.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 450.0 + 170.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 3.0;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_startT[c1_i8] = 1.0;
    }

    imfilter_real64(chartInstance->c1_a, c1_b, 2.0, c1_outSizeT, 2.0,
                    c1_padSizeT, c1_kernelSizeT, 2.0, c1_conn, 2.0, c1_connDimsT,
                    c1_startT, 2.0, true, true);
  }
}

static void c1_power(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_i_a[279000], real_T c1_b_y[279000])
{
  int32_T c1_k;
  int32_T c1_b_k;
  real_T c1_j_a;
  real_T c1_c_y;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 279000; c1_k++) {
    c1_b_k = c1_k;
    c1_j_a = c1_i_a[c1_b_k];
    c1_c_y = c1_j_a * c1_j_a;
    c1_b_y[c1_b_k] = c1_c_y;
  }
}

static void c1_exp(SFc1_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, real_T c1_b_x[279000], real_T c1_c_x[279000])
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    c1_c_x[c1_i] = c1_b_x[c1_i];
  }

  c1_b_exp(chartInstance, c1_c_x);
}

static void c1_b_power(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_i_a[279000], real_T c1_b_y[279000])
{
  int32_T c1_k;
  int32_T c1_b_k;
  real_T c1_j_a;
  real_T c1_c_y;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 279000; c1_k++) {
    c1_b_k = c1_k;
    c1_j_a = c1_i_a[c1_b_k];
    c1_c_y = muDoubleScalarPower(c1_j_a, 5.0);
    c1_b_y[c1_b_k] = c1_c_y;
  }
}

static void c1_mean(SFc1_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, uint8_T c1_b_x[279000], real_T c1_b_y[620])
{
  int32_T c1_i;
  int32_T c1_b_i;
  int32_T c1_c_i;
  int32_T c1_xpageoffset;
  int32_T c1_ypageoffset;
  int32_T c1_ix;
  int32_T c1_iy;
  int32_T c1_k;
  int32_T c1_xoffset;
  (void)chartInstance;
  for (c1_i = 0; c1_i < 620; c1_i++) {
    c1_c_i = c1_i;
    c1_xpageoffset = c1_c_i * 450 + 1;
    c1_ypageoffset = c1_c_i + 1;
    c1_ix = c1_xpageoffset - 1;
    c1_iy = c1_ypageoffset - 1;
    c1_b_y[c1_iy] = (real_T)c1_b_x[c1_ix];
    for (c1_k = 0; c1_k < 449; c1_k++) {
      c1_xoffset = (c1_xpageoffset + c1_k) + 1;
      c1_ix = c1_xoffset - 1;
      c1_iy = c1_ypageoffset - 1;
      c1_b_y[c1_iy] += (real_T)c1_b_x[c1_ix];
    }
  }

  for (c1_b_i = 0; c1_b_i < 620; c1_b_i++) {
    c1_b_y[c1_b_i] /= 450.0;
  }
}

static real_T c1_b_mean(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c1_b_x[620])
{
  real_T c1_c_y;
  int32_T c1_k;
  int32_T c1_xoffset;
  int32_T c1_ix;
  (void)chartInstance;
  c1_c_y = c1_b_x[0];
  for (c1_k = 0; c1_k < 619; c1_k++) {
    c1_xoffset = c1_k;
    c1_ix = c1_xoffset;
    c1_c_y += c1_b_x[c1_ix + 1];
  }

  return c1_c_y / 620.0;
}

static void c1_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_b_y, const char_T *c1_identifier, uint8_T c1_c_y[279000])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_y), &c1_thisId, c1_c_y);
  sf_mex_destroy(&c1_b_y);
}

static void c1_b_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, uint8_T c1_b_y[279000])
{
  int32_T c1_i;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), chartInstance->c1_b_uv, 1, 3, 0U,
                1, 0U, 2, 450, 620);
  for (c1_i = 0; c1_i < 279000; c1_i++) {
    c1_b_y[c1_i] = chartInstance->c1_b_uv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static uint8_T c1_c_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_b_is_active_c1_untitled_restored_from_autosave, const char_T
   *c1_identifier)
{
  uint8_T c1_b_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_untitled_restored_from_autosave), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_untitled_restored_from_autosave);
  return c1_b_y;
}

static uint8_T c1_d_emlrt_marshallIn
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_y;
  uint8_T c1_b_u;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_b_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static const mxArray *c1_chart_data_browse_helper
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c1_ssIdNumber)
{
  const mxArray *c1_mxData = NULL;
  real_T c1_d;
  c1_mxData = NULL;
  switch (c1_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", *chartInstance->c1_I1, 3,
      0U, 1U, 0U, 2, 450, 620), false);
    break;

   case 9U:
    c1_d = *chartInstance->c1_x;
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", *chartInstance->c1_e_I2, 3,
      0U, 1U, 0U, 2, 450, 620), false);
    break;

   case 5U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", *chartInstance->c1_y, 3,
      0U, 1U, 0U, 2, 450, 620), false);
    break;
  }

  return c1_mxData;
}

static void c1_b_exp(SFc1_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, real_T c1_b_x[279000])
{
  int32_T c1_k;
  int32_T c1_b_k;
  real_T c1_c_x;
  real_T c1_d_x;
  (void)chartInstance;
  for (c1_k = 0; c1_k < 279000; c1_k++) {
    c1_b_k = c1_k;
    c1_c_x = c1_b_x[c1_b_k];
    c1_d_x = c1_c_x;
    c1_d_x = muDoubleScalarExp(c1_d_x);
    c1_b_x[c1_b_k] = c1_d_x;
  }
}

static void c1_emxEnsureCapacity_real_T
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray, int32_T c1_oldNumel,
   const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_newNumel;
  int32_T c1_i;
  int32_T c1_newCapacity;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c1_newNumel, (uint32_T)
      c1_emxArray->size[c1_i], c1_srcLocation, c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (real_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxInit_real_T(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_real_T *)emlrtMallocMex(sizeof(c1_emxArray_real_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (real_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxFree_real_T(SFc1_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_real_T *)NULL) {
    if (((*c1_pEmxArray)->data != (real_T *)NULL) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_real_T *)NULL;
  }
}

static void init_dsm_address_info
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_I1 = (uint8_T (*)[279000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c1_e_I2 = (uint8_T (*)[279000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_y = (uint8_T (*)[279000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1267325870U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3773515878U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3377766724U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2705473089U);
}

mxArray *sf_c1_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_untitled_restored_from_autosave_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNTzaML80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC3M"
    "iEU"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sJ3QmmbjMkDqrOtPbi5bmZC";
}

static void sf_opaque_initialize_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_untitled_restored_from_autosave
      ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_untitled_restored_from_autosave
    ((SFc1_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_untitled_restored_from_autosave
      ((SFc1_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc1_untitled_restored_from_autosave
      ((SFc1_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV09rE0EU341VKqhUELwICgoqKCgieLK1mwQjia2mVvASJ7sv2TGzM+v8SduTd0W8+gG8ePL",
    "qR/Fj+BF8s9mmcbObbRtaKriw2Z2d3/vN+zfvTRy30XLwuoD314uOcwafi3hXnNF1Oh27E/fo+4",
    "JzMx0voxA30TqRJFLOzIuTCF6CEsxoKniD90QujPIeSOA+YmMhdRGbopFhlA/qhvuWT70OqR+2Q",
    "2FYsIqyJFjjbAfZYqPXkadKJfi6DhDoUArTD+uM9McaS73lheAPlIlmmaBAt01s1VItwzSNGdS2",
    "wW9wpQlqrPZ0a2uiwdPbhWZaS1V7FyiimFHCc60NiWpDjA7W8CoO8HfNaDQqC/NDIvUqhGQIqkk",
    "HCafgkOWkCie6lBMtJCWsFjHPCk7rts5Qn5YIgM1wCOq2KoEMYkG5Lo5/u46W1jjpMqhC1/SL2d",
    "rw3tjgb1LYAlnot54nhiBJH9Z44aKJQ2rbSbTGWTIN0zSCTSKf+Bg/BUFh9mLmqDbBOMEGShTBI",
    "DGyoTYkHaJ7C9lM1LCZWbZlTDQKtiqDJWy1IcyKwpit7nOPMKYKYRsibsIQWMJaJZrMho1Y83FK",
    "0WBDoINtehfvBsMpBj6FeYIHNDdcwwwgqTvPsbD8jfSN0iLyMHmrzeb09DSswTXIHvEhrwpIQhW",
    "gzxL3FrMFVNnYIxC10ol6eeBRhpShHNUzvLol5AB9MqOI7JlgI1oIjFQfY4k74ZXCTTMLZmNZhv",
    "OJH0JgCwxl0MJtg9gcnyhb2p7gvhtSvVMF5Usa50XV9p97zl7/ObeP/rMrl33emuBxc3iciWd23",
    "bOVv/GnMutW8IvruoncyoTc+cw6Cxk5i1vC++7H1e9fPt++/uHHJ/fG8rffZeu7U+u7ybuV+1k5",
    "WL++kI6v7BbGcaIPp/LLYp9O6LWQw395gn8pHatnD15EUfdda1B9L9f0epc+7EZvvIRvsUTfSkb",
    "f3e/XbIXeiZN6q6TfCNKDhB0TM2qvlv/RhL5nSvxxNv0+un4vzyd/aSUbx4US+SV828nk7eHXv7",
    "Yyn/xo/bcl+t/JxPtO0oc7xO5u6Pj3O4ZjMWMQdCRgRZL40pMi6hCjhcIjSXafHjbvDyrnHLPcv",
    "6Lnf78cvX376WOnDinnztk3j0tuXvsO2s9PGn5WX3Ay+KUTbMe856yjxv9yDnYeupqOH4//ongh",
    "ZUHOaTWdbgLp5c0eg31/AH4Ln6A=",
    ""
  };

  static char newstr [1229] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c1_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2839710253U));
  ssSetChecksum1(S,(589925775U));
  ssSetChecksum2(S,(25931647U));
  ssSetChecksum3(S,(4037295908U));
}

static void mdlRTW_c1_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc1_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc1_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc1_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_untitled_restored_from_autosave;
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
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_untitled_restored_from_autosave(chartInstance);
}

void c1_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
