/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c9_untitled_restored_from_autosave.h"
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
static emlrtMCInfo c9_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c9_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c9_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c9_d_emlrtMCI = { 105,/* lineNo */
  5,                                   /* colNo */
  "svd",                               /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pName */
};

static emlrtMCInfo c9_e_emlrtMCI = { 45,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

static emlrtMCInfo c9_f_emlrtMCI = { 48,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

static emlrtMCInfo c9_g_emlrtMCI = { 269,/* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtMCInfo c9_h_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRSInfo c9_emlrtRSI = { 4,  /* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_b_emlrtRSI = { 6,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_c_emlrtRSI = { 15,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_d_emlrtRSI = { 16,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_e_emlrtRSI = { 18,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_f_emlrtRSI = { 21,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_g_emlrtRSI = { 23,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_h_emlrtRSI = { 30,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_i_emlrtRSI = { 31,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_j_emlrtRSI = { 33,/* lineNo */
  "Fusion model2",                     /* fcnName */
  "#untitled_restored_from_autosave:75"/* pathName */
};

static emlrtRSInfo c9_k_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_l_emlrtRSI = { 931,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_m_emlrtRSI = { 1005,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_n_emlrtRSI = { 1033,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_o_emlrtRSI = { 1045,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_p_emlrtRSI = { 70,/* lineNo */
  "power",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c9_q_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c9_r_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c9_s_emlrtRSI = { 23,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c9_t_emlrtRSI = { 645,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c9_u_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c9_v_emlrtRSI = { 849,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c9_w_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c9_x_emlrtRSI = { 55,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_y_emlrtRSI = { 64,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_ab_emlrtRSI = { 67,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_bb_emlrtRSI = { 68,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_cb_emlrtRSI = { 84,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_db_emlrtRSI = { 88,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_eb_emlrtRSI = { 691,/* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_fb_emlrtRSI = { 25,/* lineNo */
  "svd",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c9_gb_emlrtRSI = { 33,/* lineNo */
  "svd",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c9_hb_emlrtRSI = { 53,/* lineNo */
  "svd",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c9_ib_emlrtRSI = { 83,/* lineNo */
  "svd",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c9_jb_emlrtRSI = { 75,/* lineNo */
  "svd",                               /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c9_kb_emlrtRSI = { 209,/* lineNo */
  "xgesdd",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesdd.m"/* pathName */
};

static emlrtRSInfo c9_lb_emlrtRSI = { 31,/* lineNo */
  "xgesvd",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c9_mb_emlrtRSI = { 196,/* lineNo */
  "xgesvd",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c9_nb_emlrtRSI = { 89,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_ob_emlrtRSI = { 97,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_pb_emlrtRSI = { 105,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_qb_emlrtRSI = { 129,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_rb_emlrtRSI = { 132,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_sb_emlrtRSI = { 135,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_tb_emlrtRSI = { 137,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_ub_emlrtRSI = { 141,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_vb_emlrtRSI = { 147,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_wb_emlrtRSI = { 181,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_xb_emlrtRSI = { 187,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_yb_emlrtRSI = { 190,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_ac_emlrtRSI = { 212,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_bc_emlrtRSI = { 218,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_cc_emlrtRSI = { 282,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_dc_emlrtRSI = { 299,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c9_ec_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c9_fc_emlrtRSI = { 47,/* lineNo */
  "xaxpy",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c9_gc_emlrtRSI = { 61,/* lineNo */
  "xaxpy",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c9_hc_emlrtRSI = { 32,/* lineNo */
  "xaxpy",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c9_ic_emlrtRSI = { 21,/* lineNo */
  "xrotg",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c9_jc_emlrtRSI = { 28,/* lineNo */
  "xrotg",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c9_kc_emlrtRSI = { 32,/* lineNo */
  "xrotg",                             /* fcnName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRTEInfo c9_emlrtRTEI = { 145,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "D:\\MATLAB2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c9_b_emlrtRTEI = { 84,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c9_c_emlrtRTEI = { 908,/* lineNo */
  21,                                  /* colNo */
  "imfilter",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c9_d_emlrtRTEI = { 88,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "D:\\MATLAB2020a\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static const boolean_T c9_bv[7225] = { true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true };

static const boolean_T c9_bv1[7225] = { false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false };

static const char_T c9_cv[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c9_cv1[19] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
  'b', 'e', 'r', ' ', '1', ',', ' ', 'I', 'M', ',' };

static const char_T c9_cv2[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
  'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

static const char_T c9_cv3[12] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
  'm', 'e', 'm' };

static const char_T c9_cv4[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
  'g', 'e', 's', 'd', 'd' };

static const char_T c9_cv5[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r',
  'g', 'e', 'n', 'c', 'e' };

static const boolean_T c9_bv2[4489] = { true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, true,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true };

static const boolean_T c9_bv3[4489] = { false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false };

/* Function Declarations */
static void initialize_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void initialize_params_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void enable_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void disable_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c9_update_jit_animation_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c9_do_animation_call_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void ext_mode_exec_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void set_sim_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_st);
static void sf_gateway_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_start_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_terminate_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c9_chartstep_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp);
static void initSimStructsc9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static real_T c9_imfilter(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1);
static real_T c9_imerode(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A);
static void c9_validateattributes
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp, real_T c9_a);
static void c9_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[22500]);
static void c9_b_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[22500], real_T c9_b[89401]);
static real_T c9_imdilate(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A);
static void c9_b_validateattributes
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp, real_T c9_a);
static void c9_c_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[22500]);
static void c9_d_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[22500], real_T c9_b[89401]);
static boolean_T c9_any(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance);
static void c9_flip(SFc9_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, boolean_T c9_b_x[7225], boolean_T c9_c_x
                    [7225]);
static real_T c9_b_imfilter(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1);
static boolean_T c9_anyNonFinite
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void c9_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, const emlrtStack *c9_sp, real_T c9_U[2500],
                   real_T c9_S[2500], real_T c9_V[2500]);
static void c9_b_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c9_sp, real_T c9_U[2500],
                     real_T c9_s[50], real_T c9_V[2500]);
static boolean_T c9_infocheck(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, int32_T c9_info);
static real_T c9_sqrt(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c9_sp, real_T c9_b_x);
static void c9_c_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c9_sp, real_T c9_A[2500],
                     real_T c9_U[2500], real_T c9_s[50], real_T c9_V[2500]);
static void c9_diag(SFc9_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c9_v[2500], real_T c9_d[50]);
static void c9_padImage(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_a_tmp, real_T c9_a[2601]);
static real_T c9_b_imerode(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A);
static void c9_e_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[14400]);
static void c9_f_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[14400], real_T c9_b[57121]);
static real_T c9_b_imdilate(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A);
static void c9_g_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[14400]);
static void c9_h_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[14400], real_T c9_b[57121]);
static const mxArray *c9_emlrt_marshallOut
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   char_T c9_u[30]);
static uint8_T c9_emlrt_marshallIn
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_b_y, const char_T *c9_identifier);
static uint8_T c9_b_emlrt_marshallIn
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static const mxArray *c9_chart_data_browse_helper
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c9_ssIdNumber);
static void c9_b_flip(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, boolean_T c9_b_x[7225]);
static void c9_b_sqrt(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c9_sp, real_T *c9_b_x);
static void init_dsm_address_info
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c9_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c9_st.tls = chartInstance->c9_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c9_st, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c9_is_active_c9_untitled_restored_from_autosave = 0U;
}

static void initialize_params_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c9_update_jit_animation_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c9_do_animation_call_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  const mxArray *c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  c9_st = NULL;
  c9_st = NULL;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_createcellmatrix(2, 1), false);
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", chartInstance->c9_y, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c9_b_y, 0, c9_c_y);
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y",
    &chartInstance->c9_is_active_c9_untitled_restored_from_autosave, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c9_b_y, 1, c9_d_y);
  sf_mex_assign(&c9_st, c9_b_y, false);
  return c9_st;
}

static void set_sim_state_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_st)
{
  const mxArray *c9_u;
  chartInstance->c9_doneDoubleBufferReInit = true;
  c9_u = sf_mex_dup(c9_st);
  *chartInstance->c9_y = c9_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 0)), "y");
  chartInstance->c9_is_active_c9_untitled_restored_from_autosave =
    c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 1)),
                        "is_active_c9_untitled_restored_from_autosave");
  sf_mex_destroy(&c9_u);
  sf_mex_destroy(&c9_st);
}

static void sf_gateway_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  emlrtStack c9_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c9_st.tls = chartInstance->c9_fEmlrtCtx;
  chartInstance->c9_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 2U, *chartInstance->c9_I2);
  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 1U, *chartInstance->c9_x);
  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 0U, *chartInstance->c9_I1);
  chartInstance->c9_sfEvent = CALL_EVENT;
  c9_chartstep_c9_untitled_restored_from_autosave(chartInstance, &c9_st);
  c9_do_animation_call_c9_untitled_restored_from_autosave(chartInstance);
  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 3U, (real_T)
                    *chartInstance->c9_y);
}

static void mdl_start_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  static const uint32_T c9_decisionTxtStartIdx = 0U;
  static const uint32_T c9_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c9_chart_data_browse_helper);
  chartInstance->c9_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c9_RuntimeVar,
    &chartInstance->c9_IsDebuggerActive,
    &chartInstance->c9_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c9_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c9_covrtInstance, 1U, 0U, 1U,
    38U);
  covrtChartInitFcn(chartInstance->c9_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c9_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c9_decisionTxtStartIdx, &c9_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c9_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c9_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  6U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1670);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U, 398, -1,
    410);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 1U, 742, -1,
    755);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 2U, 766, -1,
    775);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 3U, 766, -1,
    786);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 4U, 766, -1,
    820);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 5U, 776, -1,
    786);
}

static void mdl_cleanup_runtime_resources_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c9_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c9_covrtInstance);
}

static void c9_chartstep_c9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp)
{
  emlrtStack c9_st;
  real_T c9_b_I1;
  real_T c9_b_x;
  real_T c9_b_I2;
  real_T c9_IW;
  real_T c9_d;
  boolean_T c9_covSaturation;
  uint8_T c9_u;
  uint8_T c9_b_IW;
  real_T c9_G;
  real_T c9_varargin_1;
  real_T c9_c_x;
  real_T c9_d_x;
  real_T c9_e_x;
  real_T c9_f_x;
  real_T c9_g_x;
  real_T c9_maxval;
  real_T c9_b_varargin_1;
  real_T c9_h_x;
  real_T c9_i_x;
  real_T c9_j_x;
  real_T c9_k_x;
  real_T c9_l_x;
  real_T c9_b_maxval;
  real_T c9_m_x;
  real_T c9_n_x;
  real_T c9_o_x;
  real_T c9_b_y;
  real_T c9_p_x;
  real_T c9_q_x;
  real_T c9_r_x;
  real_T c9_c_y;
  real_T c9_lm;
  real_T c9_a;
  real_T c9_b_a;
  real_T c9_s_x;
  real_T c9_c_a;
  real_T c9_sm;
  real_T c9_c_varargin_1;
  real_T c9_t_x;
  real_T c9_u_x;
  real_T c9_v_x;
  real_T c9_w_x;
  real_T c9_x_x;
  real_T c9_s;
  real_T c9_sa;
  real_T c9_I222;
  real_T c9_IW1;
  real_T c9_d1;
  boolean_T c9_b_covSaturation;
  uint8_T c9_u1;
  uint8_T c9_b_IW1;
  real_T c9_d_a;
  uint8_T c9_b;
  real_T c9_d2;
  boolean_T c9_c_covSaturation;
  uint8_T c9_u2;
  uint8_T c9_d_y;
  real_T c9_e_a;
  uint8_T c9_b_b;
  real_T c9_d3;
  boolean_T c9_d_covSaturation;
  uint8_T c9_u3;
  uint8_T c9_e_y;
  real_T c9_y_x;
  real_T c9_ab_x;
  real_T c9_bb_x;
  real_T c9_f_y;
  uint32_T c9_u4;
  boolean_T c9_e_covSaturation;
  real_T c9_d4;
  boolean_T c9_f_covSaturation;
  uint8_T c9_u5;
  uint8_T c9_g_y;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_I1 = *chartInstance->c9_I1;
  c9_b_x = *chartInstance->c9_x;
  c9_b_I2 = *chartInstance->c9_I2;
  covrtEmlFcnEval(chartInstance->c9_covrtInstance, 4U, 0, 0);
  c9_st.site = &c9_emlrtRSI;
  c9_imfilter(chartInstance, c9_b_I2);
  c9_st.site = &c9_b_emlrtRSI;
  c9_st.site = &c9_c_emlrtRSI;
  c9_IW = c9_imerode(chartInstance, &c9_st, c9_b_I2);
  c9_st.site = &c9_d_emlrtRSI;
  c9_IW = c9_imdilate(chartInstance, &c9_st, c9_IW);
  c9_st.site = &c9_e_emlrtRSI;
  c9_IW = c9_b_imfilter(chartInstance, &c9_st, c9_IW);
  c9_d = muDoubleScalarRound(c9_b_I2 - c9_IW);
  c9_covSaturation = false;
  if (c9_d < 256.0) {
    if (c9_d >= 0.0) {
      c9_u = (uint8_T)c9_d;
    } else {
      c9_covSaturation = true;
      c9_u = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 398, 12);
    }
  } else if (c9_d >= 256.0) {
    c9_covSaturation = true;
    c9_u = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 398, 12);
  } else {
    c9_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 0, 0,
    c9_covSaturation);
  c9_b_IW = c9_u;
  c9_st.site = &c9_f_emlrtRSI;
  c9_G = c9_imfilter(chartInstance, c9_b_I2);
  c9_varargin_1 = c9_G;
  c9_c_x = c9_varargin_1;
  c9_d_x = c9_c_x;
  c9_e_x = c9_d_x;
  c9_f_x = c9_e_x;
  c9_g_x = c9_f_x;
  c9_maxval = c9_g_x;
  c9_b_varargin_1 = c9_maxval;
  c9_h_x = c9_b_varargin_1;
  c9_i_x = c9_h_x;
  c9_j_x = c9_i_x;
  c9_k_x = c9_j_x;
  c9_l_x = c9_k_x;
  c9_b_maxval = c9_l_x;
  c9_m_x = c9_b_I2;
  c9_n_x = c9_m_x;
  c9_o_x = c9_n_x;
  c9_b_y = c9_o_x;
  c9_p_x = c9_b_y;
  c9_q_x = c9_p_x;
  c9_r_x = c9_q_x;
  c9_c_y = c9_r_x;
  c9_lm = c9_b_maxval - 0.3 * c9_c_y;
  c9_st.site = &c9_g_emlrtRSI;
  c9_a = c9_G - c9_lm;
  c9_b_a = c9_a;
  c9_s_x = c9_b_a;
  c9_c_a = c9_s_x;
  c9_sm = c9_c_a * c9_c_a;
  c9_c_varargin_1 = c9_sm;
  c9_t_x = c9_c_varargin_1;
  c9_u_x = c9_t_x;
  c9_v_x = c9_u_x;
  c9_w_x = c9_v_x;
  c9_x_x = c9_w_x;
  c9_s = c9_x_x;
  c9_sa = c9_sm / c9_s;
  c9_I222 = c9_b_I2 * c9_sa;
  c9_st.site = &c9_h_emlrtRSI;
  c9_IW1 = c9_b_imerode(chartInstance, &c9_st, c9_b_I1);
  c9_st.site = &c9_i_emlrtRSI;
  c9_IW1 = c9_b_imdilate(chartInstance, &c9_st, c9_IW1);
  c9_st.site = &c9_j_emlrtRSI;
  c9_IW1 = c9_b_imfilter(chartInstance, &c9_st, c9_IW1);
  c9_d1 = muDoubleScalarRound(c9_b_I1 - c9_IW1);
  c9_b_covSaturation = false;
  if (c9_d1 < 256.0) {
    if (c9_d1 >= 0.0) {
      c9_u1 = (uint8_T)c9_d1;
    } else {
      c9_b_covSaturation = true;
      c9_u1 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 742, 13);
    }
  } else if (c9_d1 >= 256.0) {
    c9_b_covSaturation = true;
    c9_u1 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 742, 13);
  } else {
    c9_u1 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 1, 0,
    c9_b_covSaturation);
  c9_b_IW1 = c9_u1;
  c9_d_a = c9_b_x;
  c9_b = c9_b_IW1;
  c9_d2 = muDoubleScalarRound(c9_d_a * (real_T)c9_b);
  c9_c_covSaturation = false;
  if (c9_d2 < 256.0) {
    if (c9_d2 >= 0.0) {
      c9_u2 = (uint8_T)c9_d2;
    } else {
      c9_c_covSaturation = true;
      c9_u2 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 766, 9);
    }
  } else if (c9_d2 >= 256.0) {
    c9_c_covSaturation = true;
    c9_u2 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 766, 9);
  } else {
    c9_u2 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 2, 0,
    c9_c_covSaturation);
  c9_d_y = c9_u2;
  c9_e_a = 0.5 * c9_b_x;
  c9_b_b = c9_b_IW;
  c9_d3 = muDoubleScalarRound(c9_e_a * (real_T)c9_b_b);
  c9_d_covSaturation = false;
  if (c9_d3 < 256.0) {
    if (c9_d3 >= 0.0) {
      c9_u3 = (uint8_T)c9_d3;
    } else {
      c9_d_covSaturation = true;
      c9_u3 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 776, 10);
    }
  } else if (c9_d3 >= 256.0) {
    c9_d_covSaturation = true;
    c9_u3 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 776, 10);
  } else {
    c9_u3 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 5, 0,
    c9_d_covSaturation);
  c9_e_y = c9_u3;
  c9_y_x = c9_b_x - 0.93;
  c9_ab_x = c9_y_x;
  c9_bb_x = c9_ab_x;
  c9_f_y = muDoubleScalarAbs(c9_bb_x);
  c9_u4 = (uint32_T)c9_d_y + (uint32_T)c9_e_y;
  c9_e_covSaturation = false;
  if (c9_u4 > 255U) {
    c9_e_covSaturation = true;
    c9_u4 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 766, 20);
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 3, 0,
    c9_e_covSaturation);
  c9_d4 = muDoubleScalarRound((real_T)(uint8_T)c9_u4 + (0.93 - c9_b_x) / c9_f_y *
    0.5 * c9_b_x * c9_I222);
  c9_f_covSaturation = false;
  if (c9_d4 < 256.0) {
    if (c9_d4 >= 0.0) {
      c9_u5 = (uint8_T)c9_d4;
    } else {
      c9_f_covSaturation = true;
      c9_u5 = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 766, 54);
    }
  } else if (c9_d4 >= 256.0) {
    c9_f_covSaturation = true;
    c9_u5 = MAX_uint8_T;
    sf_data_saturate_error(chartInstance->S, 1U, 766, 54);
  } else {
    c9_u5 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 4, 0,
    c9_f_covSaturation);
  c9_g_y = c9_u5;
  *chartInstance->c9_y = c9_g_y;
}

static void initSimStructsc9_untitled_restored_from_autosave
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray
  *sf_c9_untitled_restored_from_autosave_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  sf_mex_assign(&c9_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c9_nameCaptureInfo;
}

static real_T c9_imfilter(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1)
{
  real_T c9_b;
  real_T c9_a_tmp;
  real_T c9_b_varargin_1;
  int32_T c9_j;
  boolean_T c9_tooBig;
  real_T c9_b_j;
  int32_T c9_i;
  int32_T c9_b_i;
  real_T c9_c_i;
  boolean_T c9_modeFlag;
  real_T c9_a[25];
  boolean_T c9_b_modeFlag;
  boolean_T c9_c_modeFlag;
  int32_T c9_d_i;
  int32_T c9_i1;
  int32_T c9_i2;
  boolean_T c9_conn[25];
  int32_T c9_i3;
  real_T c9_padSizeT[2];
  int32_T c9_i4;
  int32_T c9_i5;
  real_T c9_outSizeT[2];
  int32_T c9_i6;
  static real_T c9_kernel[25] = { 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968,
    0.013306209891013651, 0.059634295436180138, 0.098320331348845769,
    0.059634295436180138, 0.013306209891013651, 0.021938231279714643,
    0.098320331348845769, 0.16210282163712664, 0.098320331348845769,
    0.021938231279714643, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.021938231279714643,
    0.013306209891013651, 0.0029690167439504968 };

  real_T c9_connDimsT[2];
  int32_T c9_i7;
  static real_T c9_nonZeroKernel[25] = { 0.0029690167439504968,
    0.013306209891013651, 0.021938231279714643, 0.013306209891013651,
    0.0029690167439504968, 0.013306209891013651, 0.059634295436180138,
    0.098320331348845769, 0.059634295436180138, 0.013306209891013651,
    0.021938231279714643, 0.098320331348845769, 0.16210282163712664,
    0.098320331348845769, 0.021938231279714643, 0.013306209891013651,
    0.059634295436180138, 0.098320331348845769, 0.059634295436180138,
    0.013306209891013651, 0.0029690167439504968, 0.013306209891013651,
    0.021938231279714643, 0.013306209891013651, 0.0029690167439504968 };

  real_T c9_startT[2];
  (void)chartInstance;
  c9_a_tmp = c9_varargin_1;
  c9_b_varargin_1 = c9_a_tmp;
  for (c9_j = 0; c9_j < 5; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_b_i = 0; c9_b_i < 5; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      c9_a[((int32_T)c9_c_i + 5 * ((int32_T)c9_b_j - 1)) - 1] = c9_b_varargin_1;
    }
  }

  c9_tooBig = true;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_tooBig = false;
  }

  if (!c9_tooBig) {
    c9_modeFlag = true;
  } else {
    c9_modeFlag = false;
  }

  if (c9_modeFlag) {
    c9_b_modeFlag = true;
  } else {
    c9_b_modeFlag = false;
  }

  c9_c_modeFlag = c9_b_modeFlag;
  if (c9_c_modeFlag) {
    for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
      c9_padSizeT[c9_i1] = 5.0;
    }

    for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
      c9_outSizeT[c9_i3] = 1.0;
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_connDimsT[c9_i5] = 5.0;
    }

    ippfilter_real64(c9_a, &c9_b, c9_outSizeT, 2.0, c9_padSizeT, c9_kernel,
                     c9_connDimsT, false);
  } else {
    for (c9_d_i = 0; c9_d_i < 25; c9_d_i++) {
      c9_conn[c9_d_i] = true;
    }

    for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
      c9_padSizeT[c9_i2] = 5.0;
    }

    for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
      c9_outSizeT[c9_i4] = 1.0;
    }

    for (c9_i6 = 0; c9_i6 < 2; c9_i6++) {
      c9_connDimsT[c9_i6] = 5.0;
    }

    for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
      c9_startT[c9_i7] = 2.0;
    }

    imfilter_real64(c9_a, &c9_b, 2.0, c9_outSizeT, 2.0, c9_padSizeT,
                    c9_nonZeroKernel, 25.0, c9_conn, 2.0, c9_connDimsT,
                    c9_startT, 2.0, true, false);
  }

  return c9_b;
}

static real_T c9_imerode(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A)
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  real_T c9_varargin_1;
  real_T c9_b_A;
  real_T c9_Apadpre[22500];
  int32_T c9_i;
  int32_T c9_i1;
  boolean_T c9_nhood[119];
  int32_T c9_i2;
  real_T c9_asizeT[2];
  real_T c9_nsizeT[2];
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  boolean_T c9_b_nhood[13];
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i20;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_q_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_varargin_1 = c9_A;
  c9_b_st.site = &c9_r_emlrtRSI;
  c9_b_A = c9_varargin_1;
  c9_c_st.site = &c9_s_emlrtRSI;
  c9_validateattributes(chartInstance, &c9_c_st, c9_b_A);
  c9_padarray(chartInstance, c9_b_A, c9_Apadpre);
  c9_b_padarray(chartInstance, c9_Apadpre, chartInstance->c9_b_Apad);
  for (c9_i = 0; c9_i < 119; c9_i++) {
    c9_nhood[c9_i] = true;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_asizeT[c9_i1] = 299.0;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_nsizeT[c9_i2] = 119.0 + -118.0 * (real_T)c9_i2;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  for (c9_i3 = 0; c9_i3 < 89401; c9_i3++) {
    chartInstance->c9_b_Apad[c9_i3] = chartInstance->c9_b_B[c9_i3];
  }

  for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
    c9_asizeT[c9_i4] = 299.0;
  }

  for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
    c9_nsizeT[c9_i5] = 85.0;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_bv,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  for (c9_i6 = 0; c9_i6 < 89401; c9_i6++) {
    chartInstance->c9_b_Apad[c9_i6] = chartInstance->c9_b_B[c9_i6];
  }

  for (c9_i7 = 0; c9_i7 < 119; c9_i7++) {
    c9_nhood[c9_i7] = true;
  }

  for (c9_i8 = 0; c9_i8 < 2; c9_i8++) {
    c9_asizeT[c9_i8] = 299.0;
  }

  for (c9_i9 = 0; c9_i9 < 2; c9_i9++) {
    c9_nsizeT[c9_i9] = 1.0 + 118.0 * (real_T)c9_i9;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  for (c9_i10 = 0; c9_i10 < 89401; c9_i10++) {
    chartInstance->c9_b_Apad[c9_i10] = chartInstance->c9_b_B[c9_i10];
  }

  for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
    c9_asizeT[c9_i11] = 299.0;
  }

  for (c9_i12 = 0; c9_i12 < 2; c9_i12++) {
    c9_nsizeT[c9_i12] = 85.0;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_bv1,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  for (c9_i13 = 0; c9_i13 < 89401; c9_i13++) {
    chartInstance->c9_b_Apad[c9_i13] = chartInstance->c9_b_B[c9_i13];
  }

  for (c9_i14 = 0; c9_i14 < 13; c9_i14++) {
    c9_b_nhood[c9_i14] = true;
  }

  for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
    c9_asizeT[c9_i15] = 299.0;
  }

  for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
    c9_nsizeT[c9_i16] = 1.0 + 12.0 * (real_T)c9_i16;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_b_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  for (c9_i17 = 0; c9_i17 < 89401; c9_i17++) {
    chartInstance->c9_b_Apad[c9_i17] = chartInstance->c9_b_B[c9_i17];
  }

  for (c9_i18 = 0; c9_i18 < 13; c9_i18++) {
    c9_b_nhood[c9_i18] = true;
  }

  for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
    c9_asizeT[c9_i19] = 299.0;
  }

  for (c9_i20 = 0; c9_i20 < 2; c9_i20++) {
    c9_nsizeT[c9_i20] = 13.0 + -12.0 * (real_T)c9_i20;
  }

  erode_flat_real64_tbb(chartInstance->c9_b_Apad, c9_asizeT, 2.0, c9_b_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_b_B);
  return chartInstance->c9_b_B[44700];
}

static void c9_validateattributes
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp, real_T c9_a)
{
  emlrtStack c9_st;
  real_T c9_b_a;
  real_T c9_c_a;
  boolean_T c9_p;
  real_T c9_b_x;
  real_T c9_c_x;
  boolean_T c9_b;
  boolean_T c9_b_p;
  boolean_T c9_b_b;
  const mxArray *c9_b_y = NULL;
  static char_T c9_b_cv[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'e',
    'r', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
    'n', 'N', 'a', 'N' };

  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  (void)chartInstance;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_u_emlrtRSI;
  c9_b_a = c9_a;
  c9_c_a = c9_b_a;
  c9_p = true;
  c9_b_x = c9_c_a;
  c9_c_x = c9_b_x;
  c9_b = muDoubleScalarIsNaN(c9_c_x);
  c9_b_p = !c9_b;
  if (!c9_b_p) {
    c9_p = false;
  }

  if (c9_p) {
    c9_b_b = true;
  } else {
    c9_b_b = false;
  }

  if (!c9_b_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c9_st, &c9_c_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }
}

static void c9_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[22500])
{
  real_T c9_a;
  int32_T c9_j;
  int32_T c9_i;
  real_T c9_b_j;
  int32_T c9_b_i;
  real_T c9_c_i;
  (void)chartInstance;
  c9_a = c9_varargin_1;
  for (c9_j = 0; c9_j < 149; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_b_i = 0; c9_b_i < 150; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      c9_b[((int32_T)c9_c_i + 150 * ((int32_T)c9_b_j - 1)) - 1] = rtInf;
    }
  }

  for (c9_i = 0; c9_i < 149; c9_i++) {
    c9_c_i = (real_T)c9_i + 1.0;
    c9_b[(int32_T)c9_c_i + 22349] = rtInf;
  }

  c9_b[22499] = c9_a;
}

static void c9_b_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[22500], real_T c9_b[89401])
{
  int32_T c9_j;
  int32_T c9_b_j;
  int32_T c9_i;
  int32_T c9_c_j;
  real_T c9_d_j;
  real_T c9_b_i;
  int32_T c9_c_i;
  int32_T c9_d_i;
  (void)chartInstance;
  for (c9_j = 0; c9_j < 149; c9_j++) {
    for (c9_i = 0; c9_i < 299; c9_i++) {
      c9_b_i = (real_T)c9_i + 1.0;
      c9_b[((int32_T)c9_b_i + 299 * (c9_j + 150)) - 1] = rtInf;
    }
  }

  for (c9_b_j = 0; c9_b_j < 150; c9_b_j++) {
    c9_d_j = (real_T)c9_b_j + 1.0;
    for (c9_c_i = 0; c9_c_i < 149; c9_c_i++) {
      c9_b[(c9_c_i + 299 * ((int32_T)c9_d_j - 1)) + 150] = rtInf;
    }
  }

  for (c9_c_j = 0; c9_c_j < 150; c9_c_j++) {
    c9_d_j = (real_T)c9_c_j + 1.0;
    for (c9_d_i = 0; c9_d_i < 150; c9_d_i++) {
      c9_b_i = (real_T)c9_d_i + 1.0;
      c9_b[((int32_T)c9_b_i + 299 * ((int32_T)c9_d_j - 1)) - 1] = c9_varargin_1
        [((int32_T)c9_b_i + 150 * ((int32_T)c9_d_j - 1)) - 1];
    }
  }
}

static real_T c9_imdilate(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A)
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  real_T c9_varargin_1;
  real_T c9_b_A;
  real_T c9_Apadpre[22500];
  int32_T c9_i;
  int32_T c9_i1;
  boolean_T c9_nhood[119];
  int32_T c9_i2;
  real_T c9_asizeT[2];
  real_T c9_nsizeT[2];
  int32_T c9_i3;
  boolean_T c9_b_nhood[7225];
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  boolean_T c9_c_nhood[13];
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_w_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_varargin_1 = c9_A;
  c9_b_st.site = &c9_r_emlrtRSI;
  c9_b_A = c9_varargin_1;
  c9_c_st.site = &c9_s_emlrtRSI;
  c9_b_validateattributes(chartInstance, &c9_c_st, c9_b_A);
  c9_c_padarray(chartInstance, c9_b_A, c9_Apadpre);
  c9_d_padarray(chartInstance, c9_Apadpre, chartInstance->c9_Apad);
  for (c9_i = 0; c9_i < 119; c9_i++) {
    c9_nhood[c9_i] = true;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_asizeT[c9_i1] = 299.0;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_nsizeT[c9_i2] = 119.0 + -118.0 * (real_T)c9_i2;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  for (c9_i3 = 0; c9_i3 < 7225; c9_i3++) {
    c9_b_nhood[c9_i3] = c9_bv[c9_i3];
  }

  if (c9_any(chartInstance)) {
    for (c9_i4 = 0; c9_i4 < 7225; c9_i4++) {
      c9_b_nhood[c9_i4] = c9_bv1[c9_i4];
    }

    c9_b_flip(chartInstance, c9_b_nhood);
  }

  for (c9_i5 = 0; c9_i5 < 89401; c9_i5++) {
    chartInstance->c9_Apad[c9_i5] = chartInstance->c9_B[c9_i5];
  }

  for (c9_i6 = 0; c9_i6 < 2; c9_i6++) {
    c9_asizeT[c9_i6] = 299.0;
  }

  for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
    c9_nsizeT[c9_i7] = 85.0;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_b_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  for (c9_i8 = 0; c9_i8 < 89401; c9_i8++) {
    chartInstance->c9_Apad[c9_i8] = chartInstance->c9_B[c9_i8];
  }

  for (c9_i9 = 0; c9_i9 < 119; c9_i9++) {
    c9_nhood[c9_i9] = true;
  }

  for (c9_i10 = 0; c9_i10 < 2; c9_i10++) {
    c9_asizeT[c9_i10] = 299.0;
  }

  for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
    c9_nsizeT[c9_i11] = 1.0 + 118.0 * (real_T)c9_i11;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  for (c9_i12 = 0; c9_i12 < 7225; c9_i12++) {
    c9_b_nhood[c9_i12] = c9_bv1[c9_i12];
  }

  if (c9_any(chartInstance)) {
    for (c9_i13 = 0; c9_i13 < 7225; c9_i13++) {
      c9_b_nhood[c9_i13] = c9_bv[c9_i13];
    }

    c9_b_flip(chartInstance, c9_b_nhood);
  }

  for (c9_i14 = 0; c9_i14 < 89401; c9_i14++) {
    chartInstance->c9_Apad[c9_i14] = chartInstance->c9_B[c9_i14];
  }

  for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
    c9_asizeT[c9_i15] = 299.0;
  }

  for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
    c9_nsizeT[c9_i16] = 85.0;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_b_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  for (c9_i17 = 0; c9_i17 < 89401; c9_i17++) {
    chartInstance->c9_Apad[c9_i17] = chartInstance->c9_B[c9_i17];
  }

  for (c9_i18 = 0; c9_i18 < 13; c9_i18++) {
    c9_c_nhood[c9_i18] = true;
  }

  for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
    c9_asizeT[c9_i19] = 299.0;
  }

  for (c9_i20 = 0; c9_i20 < 2; c9_i20++) {
    c9_nsizeT[c9_i20] = 1.0 + 12.0 * (real_T)c9_i20;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_c_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  for (c9_i21 = 0; c9_i21 < 89401; c9_i21++) {
    chartInstance->c9_Apad[c9_i21] = chartInstance->c9_B[c9_i21];
  }

  for (c9_i22 = 0; c9_i22 < 13; c9_i22++) {
    c9_c_nhood[c9_i22] = true;
  }

  for (c9_i23 = 0; c9_i23 < 2; c9_i23++) {
    c9_asizeT[c9_i23] = 299.0;
  }

  for (c9_i24 = 0; c9_i24 < 2; c9_i24++) {
    c9_nsizeT[c9_i24] = 13.0 + -12.0 * (real_T)c9_i24;
  }

  dilate_flat_real64_tbb(chartInstance->c9_Apad, c9_asizeT, 2.0, c9_c_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_B);
  return chartInstance->c9_B[44700];
}

static void c9_b_validateattributes
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   emlrtStack *c9_sp, real_T c9_a)
{
  emlrtStack c9_st;
  real_T c9_b_a;
  real_T c9_c_a;
  boolean_T c9_p;
  real_T c9_b_x;
  real_T c9_c_x;
  boolean_T c9_b;
  boolean_T c9_b_p;
  boolean_T c9_b_b;
  const mxArray *c9_b_y = NULL;
  static char_T c9_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'd',
    'i', 'l', 'a', 't', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
    'o', 'n', 'N', 'a', 'N' };

  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  (void)chartInstance;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_u_emlrtRSI;
  c9_b_a = c9_a;
  c9_c_a = c9_b_a;
  c9_p = true;
  c9_b_x = c9_c_a;
  c9_c_x = c9_b_x;
  c9_b = muDoubleScalarIsNaN(c9_c_x);
  c9_b_p = !c9_b;
  if (!c9_b_p) {
    c9_p = false;
  }

  if (c9_p) {
    c9_b_b = true;
  } else {
    c9_b_b = false;
  }

  if (!c9_b_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c9_st, &c9_c_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }
}

static void c9_c_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[22500])
{
  real_T c9_a;
  int32_T c9_j;
  int32_T c9_i;
  real_T c9_b_j;
  int32_T c9_b_i;
  real_T c9_c_i;
  (void)chartInstance;
  c9_a = c9_varargin_1;
  for (c9_j = 0; c9_j < 149; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_b_i = 0; c9_b_i < 150; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      c9_b[((int32_T)c9_c_i + 150 * ((int32_T)c9_b_j - 1)) - 1] = rtMinusInf;
    }
  }

  for (c9_i = 0; c9_i < 149; c9_i++) {
    c9_c_i = (real_T)c9_i + 1.0;
    c9_b[(int32_T)c9_c_i + 22349] = rtMinusInf;
  }

  c9_b[22499] = c9_a;
}

static void c9_d_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[22500], real_T c9_b[89401])
{
  int32_T c9_j;
  int32_T c9_b_j;
  int32_T c9_i;
  int32_T c9_c_j;
  real_T c9_d_j;
  real_T c9_b_i;
  int32_T c9_c_i;
  int32_T c9_d_i;
  (void)chartInstance;
  for (c9_j = 0; c9_j < 149; c9_j++) {
    for (c9_i = 0; c9_i < 299; c9_i++) {
      c9_b_i = (real_T)c9_i + 1.0;
      c9_b[((int32_T)c9_b_i + 299 * (c9_j + 150)) - 1] = rtMinusInf;
    }
  }

  for (c9_b_j = 0; c9_b_j < 150; c9_b_j++) {
    c9_d_j = (real_T)c9_b_j + 1.0;
    for (c9_c_i = 0; c9_c_i < 149; c9_c_i++) {
      c9_b[(c9_c_i + 299 * ((int32_T)c9_d_j - 1)) + 150] = rtMinusInf;
    }
  }

  for (c9_c_j = 0; c9_c_j < 150; c9_c_j++) {
    c9_d_j = (real_T)c9_c_j + 1.0;
    for (c9_d_i = 0; c9_d_i < 150; c9_d_i++) {
      c9_b_i = (real_T)c9_d_i + 1.0;
      c9_b[((int32_T)c9_b_i + 299 * ((int32_T)c9_d_j - 1)) - 1] = c9_varargin_1
        [((int32_T)c9_b_i + 150 * ((int32_T)c9_d_j - 1)) - 1];
    }
  }
}

static boolean_T c9_any(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
  return false;
}

static void c9_flip(SFc9_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, boolean_T c9_b_x[7225], boolean_T c9_c_x
                    [7225])
{
  int32_T c9_i;
  for (c9_i = 0; c9_i < 7225; c9_i++) {
    c9_c_x[c9_i] = c9_b_x[c9_i];
  }

  c9_b_flip(chartInstance, c9_c_x);
}

static real_T c9_b_imfilter(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1)
{
  real_T c9_b;
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  real_T c9_unusedU0[2500];
  real_T c9_s[2500];
  real_T c9_unusedU1[2500];
  real_T c9_b_s[50];
  int32_T c9_i;
  real_T c9_b_x;
  real_T c9_x_data[50];
  real_T c9_c_x;
  boolean_T c9_b_b;
  boolean_T c9_p;
  int32_T c9_idx;
  int32_T c9_k;
  boolean_T c9_exitg1;
  int32_T c9_first;
  real_T c9_maxval;
  real_T c9_ex;
  real_T c9_d_x;
  int32_T c9_i1;
  real_T c9_tol;
  real_T c9_e_x;
  int32_T c9_b_k;
  int32_T c9_i2;
  boolean_T c9_c_b;
  boolean_T c9_b_p;
  int32_T c9_nz;
  boolean_T c9_f_x[50];
  int32_T c9_c_k;
  real_T c9_rank;
  int32_T c9_xoffset;
  int32_T c9_ix;
  boolean_T c9_separable;
  int32_T c9_d_b;
  real_T c9_a[2601];
  boolean_T c9_tooBig;
  int32_T c9_b_i;
  int32_T c9_i3;
  boolean_T c9_modeFlag;
  real_T c9_e_b;
  real_T c9_hcol[50];
  boolean_T c9_b_modeFlag;
  int32_T c9_i4;
  boolean_T c9_c_modeFlag;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  real_T c9_f_b;
  real_T c9_hrow[50];
  int32_T c9_i8;
  int32_T c9_i9;
  real_T c9_b_y;
  int32_T c9_i10;
  boolean_T c9_conn[2500];
  int32_T c9_i11;
  real_T c9_padSizeT[2];
  real_T c9_c_y;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  real_T c9_outSizeT[2];
  int32_T c9_i15;
  real_T c9_connDimsT[2];
  int32_T c9_trueCount;
  int32_T c9_c_i;
  int32_T c9_i16;
  real_T c9_startT[2];
  int32_T c9_tmp_size[1];
  int32_T c9_partialTrueCount;
  int32_T c9_d_i;
  int32_T c9_nonzero_h_size[1];
  int32_T c9_loop_ub;
  int32_T c9_tmp_data[50];
  int32_T c9_i17;
  int32_T c9_i18;
  real_T c9_nonzero_h_data[50];
  boolean_T c9_densityFlag;
  boolean_T c9_b_tooBig;
  int32_T c9_e_i;
  boolean_T c9_d_modeFlag;
  boolean_T c9_e_modeFlag;
  boolean_T c9_f_modeFlag;
  real_T c9_numKernElem;
  int32_T c9_i19;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  real_T c9_g_b[51];
  int32_T c9_i25;
  int32_T c9_b_trueCount;
  int32_T c9_f_i;
  int32_T c9_b_tmp_size[1];
  int32_T c9_b_partialTrueCount;
  int32_T c9_g_i;
  int32_T c9_b_loop_ub;
  int32_T c9_b_tmp_data[50];
  int32_T c9_i26;
  int32_T c9_i27;
  boolean_T c9_b_densityFlag;
  boolean_T c9_c_tooBig;
  int32_T c9_h_i;
  boolean_T c9_g_modeFlag;
  boolean_T c9_h_modeFlag;
  boolean_T c9_i_modeFlag;
  real_T c9_b_numKernElem;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_x_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_b_st.site = &c9_eb_emlrtRSI;
  c9_svd(chartInstance, &c9_b_st, c9_unusedU0, c9_s, c9_unusedU1);
  c9_diag(chartInstance, c9_s, c9_b_s);
  for (c9_i = 0; c9_i < 50; c9_i++) {
    c9_x_data[c9_i] = c9_b_s[c9_i];
  }

  c9_b_x = c9_x_data[0];
  c9_c_x = c9_b_x;
  c9_b_b = muDoubleScalarIsNaN(c9_c_x);
  c9_p = !c9_b_b;
  if (c9_p) {
    c9_idx = 1;
  } else {
    c9_idx = 0;
    c9_k = 2;
    c9_exitg1 = false;
    while ((!c9_exitg1) && (c9_k < 51)) {
      c9_d_x = c9_x_data[c9_k - 1];
      c9_e_x = c9_d_x;
      c9_c_b = muDoubleScalarIsNaN(c9_e_x);
      c9_b_p = !c9_c_b;
      if (c9_b_p) {
        c9_idx = c9_k;
        c9_exitg1 = true;
      } else {
        c9_k++;
      }
    }
  }

  if (c9_idx == 0) {
    c9_maxval = c9_x_data[0];
  } else {
    c9_first = c9_idx - 1;
    c9_ex = c9_x_data[c9_first];
    c9_i1 = c9_first;
    for (c9_b_k = c9_i1 + 1; c9_b_k + 1 < 51; c9_b_k++) {
      if (c9_ex < c9_x_data[c9_b_k]) {
        c9_ex = c9_x_data[c9_b_k];
      }
    }

    c9_maxval = c9_ex;
  }

  c9_tol = 50.0 * c9_maxval * 2.2204460492503131E-16;
  for (c9_i2 = 0; c9_i2 < 50; c9_i2++) {
    c9_f_x[c9_i2] = (c9_b_s[c9_i2] > c9_tol);
  }

  c9_nz = (int32_T)c9_f_x[0];
  for (c9_c_k = 0; c9_c_k < 49; c9_c_k++) {
    c9_xoffset = c9_c_k;
    c9_ix = c9_xoffset;
    c9_d_b = (int32_T)c9_f_x[c9_ix + 1];
    c9_nz += (c9_d_b != 0);
  }

  c9_rank = (real_T)c9_nz;
  if (c9_rank == 1.0) {
    c9_separable = true;
  } else {
    c9_separable = false;
  }

  if (c9_separable) {
    c9_padImage(chartInstance, c9_varargin_1, c9_a);
    c9_st.site = &c9_y_emlrtRSI;
    c9_svd(chartInstance, &c9_st, c9_unusedU0, c9_s, c9_unusedU1);
    c9_diag(chartInstance, c9_s, c9_b_s);
    for (c9_i3 = 0; c9_i3 < 50; c9_i3++) {
      c9_hcol[c9_i3] = c9_unusedU0[c9_i3];
    }

    c9_e_b = c9_b_s[0];
    c9_st.site = &c9_ab_emlrtRSI;
    c9_b_sqrt(chartInstance, &c9_st, &c9_e_b);
    for (c9_i4 = 0; c9_i4 < 50; c9_i4++) {
      c9_hcol[c9_i4] *= c9_e_b;
    }

    for (c9_i5 = 0; c9_i5 < 50; c9_i5++) {
      c9_hrow[c9_i5] = c9_unusedU1[c9_i5];
    }

    c9_f_b = c9_b_s[0];
    c9_st.site = &c9_bb_emlrtRSI;
    c9_b_sqrt(chartInstance, &c9_st, &c9_f_b);
    c9_b_y = c9_f_b;
    c9_c_y = c9_b_y;
    for (c9_i12 = 0; c9_i12 < 50; c9_i12++) {
      c9_hrow[c9_i12] *= c9_c_y;
    }

    c9_st.site = &c9_cb_emlrtRSI;
    c9_trueCount = 0;
    for (c9_c_i = 0; c9_c_i < 50; c9_c_i++) {
      if (c9_hrow[c9_c_i] != 0.0) {
        c9_trueCount++;
      }
    }

    c9_tmp_size[0] = c9_trueCount;
    c9_partialTrueCount = 0;
    for (c9_d_i = 0; c9_d_i < 50; c9_d_i++) {
      if (c9_hrow[c9_d_i] != 0.0) {
        c9_tmp_data[c9_partialTrueCount] = c9_d_i + 1;
        c9_partialTrueCount++;
      }
    }

    c9_nonzero_h_size[0] = c9_tmp_size[0];
    c9_loop_ub = c9_tmp_size[0] - 1;
    for (c9_i17 = 0; c9_i17 <= c9_loop_ub; c9_i17++) {
      c9_nonzero_h_data[c9_i17] = c9_hrow[c9_tmp_data[c9_i17] - 1];
    }

    for (c9_i18 = 0; c9_i18 < 50; c9_i18++) {
      c9_f_x[c9_i18] = (c9_hrow[c9_i18] != 0.0);
    }

    c9_densityFlag = false;
    if ((real_T)c9_nonzero_h_size[0] / 50.0 > 0.05) {
      c9_densityFlag = true;
    }

    c9_b_tooBig = true;
    for (c9_e_i = 0; c9_e_i < 2; c9_e_i++) {
      c9_b_tooBig = false;
    }

    if (c9_densityFlag && (!c9_b_tooBig)) {
      c9_d_modeFlag = true;
    } else {
      c9_d_modeFlag = false;
    }

    if (c9_d_modeFlag) {
      c9_e_modeFlag = true;
    } else {
      c9_e_modeFlag = false;
    }

    c9_f_modeFlag = c9_e_modeFlag;
    if (c9_f_modeFlag) {
      for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
        c9_padSizeT[c9_i19] = 51.0;
      }

      for (c9_i21 = 0; c9_i21 < 2; c9_i21++) {
        c9_outSizeT[c9_i21] = 51.0 + -50.0 * (real_T)c9_i21;
      }

      for (c9_i23 = 0; c9_i23 < 2; c9_i23++) {
        c9_connDimsT[c9_i23] = 1.0 + 49.0 * (real_T)c9_i23;
      }

      ippfilter_real64(c9_a, c9_g_b, c9_outSizeT, 2.0, c9_padSizeT, c9_hrow,
                       c9_connDimsT, false);
    } else {
      c9_numKernElem = (real_T)c9_nonzero_h_size[0];
      for (c9_i20 = 0; c9_i20 < 2; c9_i20++) {
        c9_padSizeT[c9_i20] = 51.0;
      }

      for (c9_i22 = 0; c9_i22 < 2; c9_i22++) {
        c9_outSizeT[c9_i22] = 51.0 + -50.0 * (real_T)c9_i22;
      }

      for (c9_i24 = 0; c9_i24 < 2; c9_i24++) {
        c9_connDimsT[c9_i24] = 1.0 + 49.0 * (real_T)c9_i24;
      }

      for (c9_i25 = 0; c9_i25 < 2; c9_i25++) {
        c9_startT[c9_i25] = 25.0 * (real_T)c9_i25;
      }

      imfilter_real64(c9_a, c9_g_b, 2.0, c9_outSizeT, 2.0, c9_padSizeT,
                      &c9_nonzero_h_data[0], c9_numKernElem, c9_f_x, 2.0,
                      c9_connDimsT, c9_startT, 2.0, true, false);
    }

    c9_st.site = &c9_db_emlrtRSI;
    c9_b_trueCount = 0;
    for (c9_f_i = 0; c9_f_i < 50; c9_f_i++) {
      if (c9_hcol[c9_f_i] != 0.0) {
        c9_b_trueCount++;
      }
    }

    c9_b_tmp_size[0] = c9_b_trueCount;
    c9_b_partialTrueCount = 0;
    for (c9_g_i = 0; c9_g_i < 50; c9_g_i++) {
      if (c9_hcol[c9_g_i] != 0.0) {
        c9_b_tmp_data[c9_b_partialTrueCount] = c9_g_i + 1;
        c9_b_partialTrueCount++;
      }
    }

    c9_nonzero_h_size[0] = c9_b_tmp_size[0];
    c9_b_loop_ub = c9_b_tmp_size[0] - 1;
    for (c9_i26 = 0; c9_i26 <= c9_b_loop_ub; c9_i26++) {
      c9_nonzero_h_data[c9_i26] = c9_hcol[c9_b_tmp_data[c9_i26] - 1];
    }

    for (c9_i27 = 0; c9_i27 < 50; c9_i27++) {
      c9_f_x[c9_i27] = (c9_hcol[c9_i27] != 0.0);
    }

    c9_b_densityFlag = false;
    if ((real_T)c9_nonzero_h_size[0] / 50.0 > 0.05) {
      c9_b_densityFlag = true;
    }

    c9_c_tooBig = true;
    for (c9_h_i = 0; c9_h_i < 2; c9_h_i++) {
      c9_c_tooBig = false;
    }

    if (c9_b_densityFlag && (!c9_c_tooBig)) {
      c9_g_modeFlag = true;
    } else {
      c9_g_modeFlag = false;
    }

    if (c9_g_modeFlag) {
      c9_h_modeFlag = true;
    } else {
      c9_h_modeFlag = false;
    }

    c9_i_modeFlag = c9_h_modeFlag;
    if (c9_i_modeFlag) {
      for (c9_i28 = 0; c9_i28 < 2; c9_i28++) {
        c9_padSizeT[c9_i28] = 51.0 + -50.0 * (real_T)c9_i28;
      }

      for (c9_i30 = 0; c9_i30 < 2; c9_i30++) {
        c9_outSizeT[c9_i30] = 1.0;
      }

      for (c9_i32 = 0; c9_i32 < 2; c9_i32++) {
        c9_connDimsT[c9_i32] = 50.0 + -49.0 * (real_T)c9_i32;
      }

      ippfilter_real64(c9_g_b, &c9_b, c9_outSizeT, 2.0, c9_padSizeT, c9_hcol,
                       c9_connDimsT, false);
    } else {
      c9_b_numKernElem = (real_T)c9_nonzero_h_size[0];
      for (c9_i29 = 0; c9_i29 < 2; c9_i29++) {
        c9_padSizeT[c9_i29] = 51.0 + -50.0 * (real_T)c9_i29;
      }

      for (c9_i31 = 0; c9_i31 < 2; c9_i31++) {
        c9_outSizeT[c9_i31] = 1.0;
      }

      for (c9_i33 = 0; c9_i33 < 2; c9_i33++) {
        c9_connDimsT[c9_i33] = 50.0 + -49.0 * (real_T)c9_i33;
      }

      for (c9_i34 = 0; c9_i34 < 2; c9_i34++) {
        c9_startT[c9_i34] = 25.0 + -25.0 * (real_T)c9_i34;
      }

      imfilter_real64(c9_g_b, &c9_b, 2.0, c9_outSizeT, 2.0, c9_padSizeT,
                      &c9_nonzero_h_data[0], c9_b_numKernElem, c9_f_x, 2.0,
                      c9_connDimsT, c9_startT, 2.0, true, false);
    }
  } else {
    c9_padImage(chartInstance, c9_varargin_1, c9_a);
    c9_st.site = &c9_k_emlrtRSI;
    c9_tooBig = true;
    for (c9_b_i = 0; c9_b_i < 2; c9_b_i++) {
      c9_tooBig = false;
    }

    if (!c9_tooBig) {
      c9_modeFlag = true;
    } else {
      c9_modeFlag = false;
    }

    if (c9_modeFlag) {
      c9_b_modeFlag = true;
    } else {
      c9_b_modeFlag = false;
    }

    c9_c_modeFlag = c9_b_modeFlag;
    if (c9_c_modeFlag) {
      for (c9_i7 = 0; c9_i7 < 2500; c9_i7++) {
        c9_unusedU0[c9_i7] = 0.0004;
      }

      for (c9_i9 = 0; c9_i9 < 2; c9_i9++) {
        c9_padSizeT[c9_i9] = 51.0;
      }

      for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
        c9_outSizeT[c9_i11] = 1.0;
      }

      for (c9_i14 = 0; c9_i14 < 2; c9_i14++) {
        c9_connDimsT[c9_i14] = 50.0;
      }

      ippfilter_real64(c9_a, &c9_b, c9_outSizeT, 2.0, c9_padSizeT, c9_unusedU0,
                       c9_connDimsT, false);
    } else {
      for (c9_i6 = 0; c9_i6 < 2500; c9_i6++) {
        c9_unusedU0[c9_i6] = 0.0004;
      }

      for (c9_i8 = 0; c9_i8 < 2500; c9_i8++) {
        c9_conn[c9_i8] = true;
      }

      for (c9_i10 = 0; c9_i10 < 2; c9_i10++) {
        c9_padSizeT[c9_i10] = 51.0;
      }

      for (c9_i13 = 0; c9_i13 < 2; c9_i13++) {
        c9_outSizeT[c9_i13] = 1.0;
      }

      for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
        c9_connDimsT[c9_i15] = 50.0;
      }

      for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
        c9_startT[c9_i16] = 25.0;
      }

      imfilter_real64(c9_a, &c9_b, 2.0, c9_outSizeT, 2.0, c9_padSizeT,
                      c9_unusedU0, 2500.0, c9_conn, 2.0, c9_connDimsT, c9_startT,
                      2.0, true, false);
    }
  }

  return c9_b;
}

static boolean_T c9_anyNonFinite
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  boolean_T c9_b_p;
  int32_T c9_k;
  boolean_T c9_c_p;
  (void)chartInstance;
  c9_b_p = true;
  for (c9_k = 0; c9_k < 2500; c9_k++) {
    if (c9_b_p) {
      c9_c_p = true;
    } else {
      c9_c_p = false;
    }

    c9_b_p = c9_c_p;
  }

  return !c9_b_p;
}

static void c9_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                   *chartInstance, const emlrtStack *c9_sp, real_T c9_U[2500],
                   real_T c9_S[2500], real_T c9_V[2500])
{
  emlrtStack c9_st;
  boolean_T c9_allFiniteA;
  int32_T c9_i;
  real_T c9_s[50];
  real_T c9_dv[2500];
  real_T c9_U1[2500];
  real_T c9_V1[2500];
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_k;
  int32_T c9_i3;
  int32_T c9_b_k;
  int32_T c9_i4;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_allFiniteA = !c9_anyNonFinite(chartInstance);
  if (c9_allFiniteA) {
    c9_st.site = &c9_fb_emlrtRSI;
    c9_b_svd(chartInstance, &c9_st, c9_U, c9_s, c9_V);
  } else {
    for (c9_i = 0; c9_i < 2500; c9_i++) {
      c9_dv[c9_i] = 0.0;
    }

    c9_st.site = &c9_gb_emlrtRSI;
    c9_c_svd(chartInstance, &c9_st, c9_dv, c9_U1, c9_s, c9_V1);
    for (c9_i2 = 0; c9_i2 < 2500; c9_i2++) {
      c9_U[c9_i2] = rtNaN;
    }

    for (c9_i3 = 0; c9_i3 < 50; c9_i3++) {
      c9_s[c9_i3] = rtNaN;
    }

    for (c9_i4 = 0; c9_i4 < 2500; c9_i4++) {
      c9_V[c9_i4] = rtNaN;
    }
  }

  for (c9_i1 = 0; c9_i1 < 2500; c9_i1++) {
    c9_S[c9_i1] = 0.0;
  }

  c9_k = 0;
  for (c9_b_k = 0; c9_b_k < 50; c9_b_k++) {
    c9_S[c9_k] = c9_s[c9_b_k];
    c9_k += 51;
  }
}

static void c9_b_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c9_sp, real_T c9_U[2500],
                     real_T c9_s[50], real_T c9_V[2500])
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  int32_T c9_i;
  ptrdiff_t c9_m_t;
  real_T c9_A[2500];
  ptrdiff_t c9_n_t;
  ptrdiff_t c9_lda_t;
  ptrdiff_t c9_ldu_t;
  ptrdiff_t c9_ldv_t;
  ptrdiff_t c9_info_t;
  real_T c9_Vt[2500];
  int32_T c9_info;
  int32_T c9_b_info;
  int32_T c9_c_info;
  boolean_T c9_p;
  int32_T c9_d_info;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  int32_T c9_i1;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  int32_T c9_i2;
  int32_T c9_i3;
  const mxArray *c9_f_y = NULL;
  int32_T c9_i4;
  int32_T c9_i5;
  ptrdiff_t c9_b_m_t;
  const mxArray *c9_g_y = NULL;
  ptrdiff_t c9_b_n_t;
  ptrdiff_t c9_b_lda_t;
  ptrdiff_t c9_b_ldu_t;
  ptrdiff_t c9_b_ldv_t;
  ptrdiff_t c9_b_info_t;
  real_T c9_superb[49];
  int32_T c9_e_info;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_f_info;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_st.site = &c9_hb_emlrtRSI;
  c9_b_st.site = &c9_jb_emlrtRSI;
  for (c9_i = 0; c9_i < 2500; c9_i++) {
    c9_A[c9_i] = 0.0004;
  }

  c9_m_t = (ptrdiff_t)50;
  c9_n_t = (ptrdiff_t)50;
  c9_lda_t = (ptrdiff_t)50;
  c9_ldu_t = (ptrdiff_t)50;
  c9_ldv_t = (ptrdiff_t)50;
  c9_info_t = LAPACKE_dgesdd(102, 'A', c9_m_t, c9_n_t, &c9_A[0], c9_lda_t,
    &c9_s[0], &c9_U[0], c9_ldu_t, &c9_Vt[0], c9_ldv_t);
  c9_info = (int32_T)c9_info_t;
  c9_c_st.site = &c9_kb_emlrtRSI;
  c9_b_info = c9_info;
  c9_c_info = c9_b_info;
  c9_p = (c9_c_info < 0);
  if (c9_p) {
    if (c9_b_info == -1010) {
      c9_c_y = NULL;
      sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      c9_e_y = NULL;
      sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      sf_mex_call(&c9_c_st, &c9_e_emlrtMCI, "error", 0U, 2U, 14, c9_c_y, 14,
                  sf_mex_call(&c9_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c9_c_st, NULL, "message", 1U, 1U, 14, c9_e_y)));
    } else {
      c9_b_y = NULL;
      sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_d_y = NULL;
      sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_f_y = NULL;
      sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_cv4, 10, 0U, 1U, 0U, 2, 1, 14),
                    false);
      c9_g_y = NULL;
      sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_b_info, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(&c9_c_st, &c9_f_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                  sf_mex_call(&c9_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c9_c_st, NULL, "message", 1U, 3U, 14, c9_d_y, 14, c9_f_y,
                    14, c9_g_y)));
    }
  }

  c9_d_info = c9_info;
  if (c9_info > 0) {
    c9_b_st.site = &c9_ib_emlrtRSI;
    c9_c_st.site = &c9_lb_emlrtRSI;
    for (c9_i3 = 0; c9_i3 < 2500; c9_i3++) {
      c9_A[c9_i3] = 0.0004;
    }

    c9_b_m_t = (ptrdiff_t)50;
    c9_b_n_t = (ptrdiff_t)50;
    c9_b_lda_t = (ptrdiff_t)50;
    c9_b_ldu_t = (ptrdiff_t)50;
    c9_b_ldv_t = (ptrdiff_t)50;
    c9_b_info_t = LAPACKE_dgesvd(102, 'A', 'A', c9_b_m_t, c9_b_n_t, &c9_A[0],
      c9_b_lda_t, &c9_s[0], &c9_U[0], c9_b_ldu_t, &c9_Vt[0], c9_b_ldv_t,
      &c9_superb[0]);
    c9_e_info = (int32_T)c9_b_info_t;
    c9_i6 = 0;
    for (c9_i7 = 0; c9_i7 < 50; c9_i7++) {
      c9_i8 = 0;
      for (c9_i9 = 0; c9_i9 < 50; c9_i9++) {
        c9_V[c9_i9 + c9_i6] = c9_Vt[c9_i8 + c9_i7];
        c9_i8 += 50;
      }

      c9_i6 += 50;
    }

    c9_d_st.site = &c9_mb_emlrtRSI;
    c9_infocheck(chartInstance, &c9_d_st, c9_e_info);
    c9_f_info = c9_e_info;
    c9_d_info = c9_f_info;
  } else {
    c9_i1 = 0;
    for (c9_i2 = 0; c9_i2 < 50; c9_i2++) {
      c9_i4 = 0;
      for (c9_i5 = 0; c9_i5 < 50; c9_i5++) {
        c9_V[c9_i5 + c9_i1] = c9_Vt[c9_i4 + c9_i2];
        c9_i4 += 50;
      }

      c9_i1 += 50;
    }
  }

  if (c9_d_info > 0) {
    sf_mex_call(&c9_st, &c9_d_emlrtMCI, "error", 0U, 2U, 14,
                c9_emlrt_marshallOut(chartInstance, c9_cv5), 14, sf_mex_call
                (&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c9_st, NULL,
      "message", 1U, 1U, 14, c9_emlrt_marshallOut(chartInstance, c9_cv5))));
  }
}

static boolean_T c9_infocheck(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, int32_T c9_info)
{
  boolean_T c9_p;
  int32_T c9_b_info;
  boolean_T c9_b_p;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  static char_T c9_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 's', 'v', 'd' };

  const mxArray *c9_g_y = NULL;
  (void)chartInstance;
  c9_b_info = c9_info;
  c9_b_p = (c9_b_info < 0);
  if (c9_b_p) {
    if (c9_info == -1010) {
      c9_c_y = NULL;
      sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      c9_e_y = NULL;
      sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      sf_mex_call(c9_sp, &c9_e_emlrtMCI, "error", 0U, 2U, 14, c9_c_y, 14,
                  sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c9_sp, NULL, "message", 1U, 1U, 14, c9_e_y)));
    } else {
      c9_b_y = NULL;
      sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_d_y = NULL;
      sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_f_y = NULL;
      sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1,
        14), false);
      c9_g_y = NULL;
      sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_info, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(c9_sp, &c9_f_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                  sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c9_sp, NULL, "message", 1U, 3U, 14, c9_d_y, 14, c9_f_y, 14, c9_g_y)));
    }
  } else {
    c9_p = false;
  }

  return c9_p;
}

static real_T c9_sqrt(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c9_sp, real_T c9_b_x)
{
  real_T c9_c_x;
  c9_c_x = c9_b_x;
  c9_b_sqrt(chartInstance, c9_sp, &c9_c_x);
  return c9_c_x;
}

static void c9_c_svd(SFc9_untitled_restored_from_autosaveInstanceStruct
                     *chartInstance, const emlrtStack *c9_sp, real_T c9_A[2500],
                     real_T c9_U[2500], real_T c9_s[50], real_T c9_V[2500])
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  int32_T c9_i;
  ptrdiff_t c9_m_t;
  real_T c9_b_A[2500];
  ptrdiff_t c9_n_t;
  ptrdiff_t c9_lda_t;
  ptrdiff_t c9_ldu_t;
  ptrdiff_t c9_ldv_t;
  ptrdiff_t c9_info_t;
  real_T c9_Vt[2500];
  int32_T c9_info;
  int32_T c9_b_info;
  int32_T c9_c_info;
  boolean_T c9_p;
  int32_T c9_d_info;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  int32_T c9_i1;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  int32_T c9_i2;
  int32_T c9_i3;
  const mxArray *c9_f_y = NULL;
  int32_T c9_i4;
  int32_T c9_i5;
  ptrdiff_t c9_b_m_t;
  const mxArray *c9_g_y = NULL;
  ptrdiff_t c9_b_n_t;
  ptrdiff_t c9_b_lda_t;
  ptrdiff_t c9_b_ldu_t;
  ptrdiff_t c9_b_ldv_t;
  ptrdiff_t c9_b_info_t;
  real_T c9_superb[49];
  int32_T c9_e_info;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_f_info;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_st.site = &c9_hb_emlrtRSI;
  c9_b_st.site = &c9_jb_emlrtRSI;
  for (c9_i = 0; c9_i < 2500; c9_i++) {
    c9_b_A[c9_i] = c9_A[c9_i];
  }

  c9_m_t = (ptrdiff_t)50;
  c9_n_t = (ptrdiff_t)50;
  c9_lda_t = (ptrdiff_t)50;
  c9_ldu_t = (ptrdiff_t)50;
  c9_ldv_t = (ptrdiff_t)50;
  c9_info_t = LAPACKE_dgesdd(102, 'A', c9_m_t, c9_n_t, &c9_b_A[0], c9_lda_t,
    &c9_s[0], &c9_U[0], c9_ldu_t, &c9_Vt[0], c9_ldv_t);
  c9_info = (int32_T)c9_info_t;
  c9_c_st.site = &c9_kb_emlrtRSI;
  c9_b_info = c9_info;
  c9_c_info = c9_b_info;
  c9_p = (c9_c_info < 0);
  if (c9_p) {
    if (c9_b_info == -1010) {
      c9_c_y = NULL;
      sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      c9_e_y = NULL;
      sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      sf_mex_call(&c9_c_st, &c9_e_emlrtMCI, "error", 0U, 2U, 14, c9_c_y, 14,
                  sf_mex_call(&c9_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c9_c_st, NULL, "message", 1U, 1U, 14, c9_e_y)));
    } else {
      c9_b_y = NULL;
      sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_d_y = NULL;
      sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c9_f_y = NULL;
      sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_cv4, 10, 0U, 1U, 0U, 2, 1, 14),
                    false);
      c9_g_y = NULL;
      sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_b_info, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(&c9_c_st, &c9_f_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                  sf_mex_call(&c9_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c9_c_st, NULL, "message", 1U, 3U, 14, c9_d_y, 14, c9_f_y,
                    14, c9_g_y)));
    }
  }

  c9_d_info = c9_info;
  if (c9_info > 0) {
    c9_b_st.site = &c9_ib_emlrtRSI;
    c9_c_st.site = &c9_lb_emlrtRSI;
    for (c9_i3 = 0; c9_i3 < 2500; c9_i3++) {
      c9_b_A[c9_i3] = c9_A[c9_i3];
    }

    c9_b_m_t = (ptrdiff_t)50;
    c9_b_n_t = (ptrdiff_t)50;
    c9_b_lda_t = (ptrdiff_t)50;
    c9_b_ldu_t = (ptrdiff_t)50;
    c9_b_ldv_t = (ptrdiff_t)50;
    c9_b_info_t = LAPACKE_dgesvd(102, 'A', 'A', c9_b_m_t, c9_b_n_t, &c9_b_A[0],
      c9_b_lda_t, &c9_s[0], &c9_U[0], c9_b_ldu_t, &c9_Vt[0], c9_b_ldv_t,
      &c9_superb[0]);
    c9_e_info = (int32_T)c9_b_info_t;
    c9_i6 = 0;
    for (c9_i7 = 0; c9_i7 < 50; c9_i7++) {
      c9_i8 = 0;
      for (c9_i9 = 0; c9_i9 < 50; c9_i9++) {
        c9_V[c9_i9 + c9_i6] = c9_Vt[c9_i8 + c9_i7];
        c9_i8 += 50;
      }

      c9_i6 += 50;
    }

    c9_d_st.site = &c9_mb_emlrtRSI;
    c9_infocheck(chartInstance, &c9_d_st, c9_e_info);
    c9_f_info = c9_e_info;
    c9_d_info = c9_f_info;
  } else {
    c9_i1 = 0;
    for (c9_i2 = 0; c9_i2 < 50; c9_i2++) {
      c9_i4 = 0;
      for (c9_i5 = 0; c9_i5 < 50; c9_i5++) {
        c9_V[c9_i5 + c9_i1] = c9_Vt[c9_i4 + c9_i2];
        c9_i4 += 50;
      }

      c9_i1 += 50;
    }
  }

  if (c9_d_info > 0) {
    sf_mex_call(&c9_st, &c9_d_emlrtMCI, "error", 0U, 2U, 14,
                c9_emlrt_marshallOut(chartInstance, c9_cv5), 14, sf_mex_call
                (&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c9_st, NULL,
      "message", 1U, 1U, 14, c9_emlrt_marshallOut(chartInstance, c9_cv5))));
  }
}

static void c9_diag(SFc9_untitled_restored_from_autosaveInstanceStruct
                    *chartInstance, real_T c9_v[2500], real_T c9_d[50])
{
  int32_T c9_k;
  int32_T c9_b_k;
  (void)chartInstance;
  c9_k = 0;
  for (c9_b_k = 0; c9_b_k < 50; c9_b_k++) {
    c9_d[c9_b_k] = c9_v[c9_k];
    c9_k += 51;
  }
}

static void c9_padImage(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_a_tmp, real_T c9_a[2601])
{
  real_T c9_varargin_1;
  real_T c9_b_a;
  int32_T c9_j;
  int32_T c9_b_j;
  real_T c9_c_j;
  int32_T c9_i;
  int32_T c9_b_i;
  int32_T c9_c_i;
  real_T c9_d_i;
  int32_T c9_e_i;
  (void)chartInstance;
  c9_varargin_1 = c9_a_tmp;
  c9_b_a = c9_varargin_1;
  for (c9_j = 0; c9_j < 25; c9_j++) {
    c9_c_j = (real_T)c9_j + 1.0;
    for (c9_i = 0; c9_i < 51; c9_i++) {
      c9_d_i = (real_T)c9_i + 1.0;
      c9_a[((int32_T)c9_d_i + 51 * ((int32_T)c9_c_j - 1)) - 1] = 0.0;
    }
  }

  for (c9_b_j = 0; c9_b_j < 25; c9_b_j++) {
    for (c9_c_i = 0; c9_c_i < 51; c9_c_i++) {
      c9_d_i = (real_T)c9_c_i + 1.0;
      c9_a[((int32_T)c9_d_i + 51 * (c9_b_j + 26)) - 1] = 0.0;
    }
  }

  for (c9_b_i = 0; c9_b_i < 25; c9_b_i++) {
    c9_d_i = (real_T)c9_b_i + 1.0;
    c9_a[(int32_T)c9_d_i + 1274] = 0.0;
  }

  for (c9_e_i = 0; c9_e_i < 25; c9_e_i++) {
    c9_a[c9_e_i + 1301] = 0.0;
  }

  c9_a[1300] = c9_b_a;
}

static real_T c9_b_imerode(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A)
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  real_T c9_varargin_1;
  real_T c9_b_A;
  real_T c9_Apadpre[14400];
  int32_T c9_i;
  int32_T c9_i1;
  boolean_T c9_nhood[95];
  int32_T c9_i2;
  real_T c9_asizeT[2];
  real_T c9_nsizeT[2];
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  boolean_T c9_b_nhood[13];
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i20;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_q_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_varargin_1 = c9_A;
  c9_b_st.site = &c9_r_emlrtRSI;
  c9_b_A = c9_varargin_1;
  c9_c_st.site = &c9_s_emlrtRSI;
  c9_validateattributes(chartInstance, &c9_c_st, c9_b_A);
  c9_e_padarray(chartInstance, c9_b_A, c9_Apadpre);
  c9_f_padarray(chartInstance, c9_Apadpre, chartInstance->c9_d_Apad);
  for (c9_i = 0; c9_i < 95; c9_i++) {
    c9_nhood[c9_i] = true;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_asizeT[c9_i1] = 239.0;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_nsizeT[c9_i2] = 95.0 + -94.0 * (real_T)c9_i2;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  for (c9_i3 = 0; c9_i3 < 57121; c9_i3++) {
    chartInstance->c9_d_Apad[c9_i3] = chartInstance->c9_d_B[c9_i3];
  }

  for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
    c9_asizeT[c9_i4] = 239.0;
  }

  for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
    c9_nsizeT[c9_i5] = 67.0;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_bv2,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  for (c9_i6 = 0; c9_i6 < 57121; c9_i6++) {
    chartInstance->c9_d_Apad[c9_i6] = chartInstance->c9_d_B[c9_i6];
  }

  for (c9_i7 = 0; c9_i7 < 95; c9_i7++) {
    c9_nhood[c9_i7] = true;
  }

  for (c9_i8 = 0; c9_i8 < 2; c9_i8++) {
    c9_asizeT[c9_i8] = 239.0;
  }

  for (c9_i9 = 0; c9_i9 < 2; c9_i9++) {
    c9_nsizeT[c9_i9] = 1.0 + 94.0 * (real_T)c9_i9;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  for (c9_i10 = 0; c9_i10 < 57121; c9_i10++) {
    chartInstance->c9_d_Apad[c9_i10] = chartInstance->c9_d_B[c9_i10];
  }

  for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
    c9_asizeT[c9_i11] = 239.0;
  }

  for (c9_i12 = 0; c9_i12 < 2; c9_i12++) {
    c9_nsizeT[c9_i12] = 67.0;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_bv3,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  for (c9_i13 = 0; c9_i13 < 57121; c9_i13++) {
    chartInstance->c9_d_Apad[c9_i13] = chartInstance->c9_d_B[c9_i13];
  }

  for (c9_i14 = 0; c9_i14 < 13; c9_i14++) {
    c9_b_nhood[c9_i14] = true;
  }

  for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
    c9_asizeT[c9_i15] = 239.0;
  }

  for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
    c9_nsizeT[c9_i16] = 1.0 + 12.0 * (real_T)c9_i16;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_b_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  for (c9_i17 = 0; c9_i17 < 57121; c9_i17++) {
    chartInstance->c9_d_Apad[c9_i17] = chartInstance->c9_d_B[c9_i17];
  }

  for (c9_i18 = 0; c9_i18 < 13; c9_i18++) {
    c9_b_nhood[c9_i18] = true;
  }

  for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
    c9_asizeT[c9_i19] = 239.0;
  }

  for (c9_i20 = 0; c9_i20 < 2; c9_i20++) {
    c9_nsizeT[c9_i20] = 13.0 + -12.0 * (real_T)c9_i20;
  }

  erode_flat_real64_tbb(chartInstance->c9_d_Apad, c9_asizeT, 2.0, c9_b_nhood,
                        c9_nsizeT, 2.0, chartInstance->c9_d_B);
  return chartInstance->c9_d_B[28560];
}

static void c9_e_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[14400])
{
  real_T c9_a;
  int32_T c9_j;
  int32_T c9_i;
  real_T c9_b_j;
  int32_T c9_b_i;
  real_T c9_c_i;
  (void)chartInstance;
  c9_a = c9_varargin_1;
  for (c9_j = 0; c9_j < 119; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_b_i = 0; c9_b_i < 120; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      c9_b[((int32_T)c9_c_i + 120 * ((int32_T)c9_b_j - 1)) - 1] = rtInf;
    }
  }

  for (c9_i = 0; c9_i < 119; c9_i++) {
    c9_c_i = (real_T)c9_i + 1.0;
    c9_b[(int32_T)c9_c_i + 14279] = rtInf;
  }

  c9_b[14399] = c9_a;
}

static void c9_f_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[14400], real_T c9_b[57121])
{
  int32_T c9_j;
  int32_T c9_b_j;
  int32_T c9_i;
  int32_T c9_c_j;
  real_T c9_d_j;
  real_T c9_b_i;
  int32_T c9_c_i;
  int32_T c9_d_i;
  (void)chartInstance;
  for (c9_j = 0; c9_j < 119; c9_j++) {
    for (c9_i = 0; c9_i < 239; c9_i++) {
      c9_b_i = (real_T)c9_i + 1.0;
      c9_b[((int32_T)c9_b_i + 239 * (c9_j + 120)) - 1] = rtInf;
    }
  }

  for (c9_b_j = 0; c9_b_j < 120; c9_b_j++) {
    c9_d_j = (real_T)c9_b_j + 1.0;
    for (c9_c_i = 0; c9_c_i < 119; c9_c_i++) {
      c9_b[(c9_c_i + 239 * ((int32_T)c9_d_j - 1)) + 120] = rtInf;
    }
  }

  for (c9_c_j = 0; c9_c_j < 120; c9_c_j++) {
    c9_d_j = (real_T)c9_c_j + 1.0;
    for (c9_d_i = 0; c9_d_i < 120; c9_d_i++) {
      c9_b_i = (real_T)c9_d_i + 1.0;
      c9_b[((int32_T)c9_b_i + 239 * ((int32_T)c9_d_j - 1)) - 1] = c9_varargin_1
        [((int32_T)c9_b_i + 120 * ((int32_T)c9_d_j - 1)) - 1];
    }
  }
}

static real_T c9_b_imdilate(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_A)
{
  emlrtStack c9_st;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  real_T c9_varargin_1;
  real_T c9_b_A;
  real_T c9_Apadpre[14400];
  int32_T c9_i;
  int32_T c9_i1;
  boolean_T c9_nhood[95];
  int32_T c9_i2;
  real_T c9_asizeT[2];
  real_T c9_nsizeT[2];
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  boolean_T c9_b_nhood[13];
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i20;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_w_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_varargin_1 = c9_A;
  c9_b_st.site = &c9_r_emlrtRSI;
  c9_b_A = c9_varargin_1;
  c9_c_st.site = &c9_s_emlrtRSI;
  c9_b_validateattributes(chartInstance, &c9_c_st, c9_b_A);
  c9_g_padarray(chartInstance, c9_b_A, c9_Apadpre);
  c9_h_padarray(chartInstance, c9_Apadpre, chartInstance->c9_c_Apad);
  for (c9_i = 0; c9_i < 95; c9_i++) {
    c9_nhood[c9_i] = true;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_asizeT[c9_i1] = 239.0;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_nsizeT[c9_i2] = 95.0 + -94.0 * (real_T)c9_i2;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  for (c9_i3 = 0; c9_i3 < 57121; c9_i3++) {
    chartInstance->c9_c_Apad[c9_i3] = chartInstance->c9_c_B[c9_i3];
  }

  for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
    c9_asizeT[c9_i4] = 239.0;
  }

  for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
    c9_nsizeT[c9_i5] = 67.0;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_bv2,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  for (c9_i6 = 0; c9_i6 < 57121; c9_i6++) {
    chartInstance->c9_c_Apad[c9_i6] = chartInstance->c9_c_B[c9_i6];
  }

  for (c9_i7 = 0; c9_i7 < 95; c9_i7++) {
    c9_nhood[c9_i7] = true;
  }

  for (c9_i8 = 0; c9_i8 < 2; c9_i8++) {
    c9_asizeT[c9_i8] = 239.0;
  }

  for (c9_i9 = 0; c9_i9 < 2; c9_i9++) {
    c9_nsizeT[c9_i9] = 1.0 + 94.0 * (real_T)c9_i9;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  for (c9_i10 = 0; c9_i10 < 57121; c9_i10++) {
    chartInstance->c9_c_Apad[c9_i10] = chartInstance->c9_c_B[c9_i10];
  }

  for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
    c9_asizeT[c9_i11] = 239.0;
  }

  for (c9_i12 = 0; c9_i12 < 2; c9_i12++) {
    c9_nsizeT[c9_i12] = 67.0;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_bv3,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  for (c9_i13 = 0; c9_i13 < 57121; c9_i13++) {
    chartInstance->c9_c_Apad[c9_i13] = chartInstance->c9_c_B[c9_i13];
  }

  for (c9_i14 = 0; c9_i14 < 13; c9_i14++) {
    c9_b_nhood[c9_i14] = true;
  }

  for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
    c9_asizeT[c9_i15] = 239.0;
  }

  for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
    c9_nsizeT[c9_i16] = 1.0 + 12.0 * (real_T)c9_i16;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_b_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  for (c9_i17 = 0; c9_i17 < 57121; c9_i17++) {
    chartInstance->c9_c_Apad[c9_i17] = chartInstance->c9_c_B[c9_i17];
  }

  for (c9_i18 = 0; c9_i18 < 13; c9_i18++) {
    c9_b_nhood[c9_i18] = true;
  }

  for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
    c9_asizeT[c9_i19] = 239.0;
  }

  for (c9_i20 = 0; c9_i20 < 2; c9_i20++) {
    c9_nsizeT[c9_i20] = 13.0 + -12.0 * (real_T)c9_i20;
  }

  dilate_flat_real64_tbb(chartInstance->c9_c_Apad, c9_asizeT, 2.0, c9_b_nhood,
    c9_nsizeT, 2.0, chartInstance->c9_c_B);
  return chartInstance->c9_c_B[28560];
}

static void c9_g_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1, real_T c9_b[14400])
{
  real_T c9_a;
  int32_T c9_j;
  int32_T c9_i;
  real_T c9_b_j;
  int32_T c9_b_i;
  real_T c9_c_i;
  (void)chartInstance;
  c9_a = c9_varargin_1;
  for (c9_j = 0; c9_j < 119; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_b_i = 0; c9_b_i < 120; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      c9_b[((int32_T)c9_c_i + 120 * ((int32_T)c9_b_j - 1)) - 1] = rtMinusInf;
    }
  }

  for (c9_i = 0; c9_i < 119; c9_i++) {
    c9_c_i = (real_T)c9_i + 1.0;
    c9_b[(int32_T)c9_c_i + 14279] = rtMinusInf;
  }

  c9_b[14399] = c9_a;
}

static void c9_h_padarray(SFc9_untitled_restored_from_autosaveInstanceStruct
  *chartInstance, real_T c9_varargin_1[14400], real_T c9_b[57121])
{
  int32_T c9_j;
  int32_T c9_b_j;
  int32_T c9_i;
  int32_T c9_c_j;
  real_T c9_d_j;
  real_T c9_b_i;
  int32_T c9_c_i;
  int32_T c9_d_i;
  (void)chartInstance;
  for (c9_j = 0; c9_j < 119; c9_j++) {
    for (c9_i = 0; c9_i < 239; c9_i++) {
      c9_b_i = (real_T)c9_i + 1.0;
      c9_b[((int32_T)c9_b_i + 239 * (c9_j + 120)) - 1] = rtMinusInf;
    }
  }

  for (c9_b_j = 0; c9_b_j < 120; c9_b_j++) {
    c9_d_j = (real_T)c9_b_j + 1.0;
    for (c9_c_i = 0; c9_c_i < 119; c9_c_i++) {
      c9_b[(c9_c_i + 239 * ((int32_T)c9_d_j - 1)) + 120] = rtMinusInf;
    }
  }

  for (c9_c_j = 0; c9_c_j < 120; c9_c_j++) {
    c9_d_j = (real_T)c9_c_j + 1.0;
    for (c9_d_i = 0; c9_d_i < 120; c9_d_i++) {
      c9_b_i = (real_T)c9_d_i + 1.0;
      c9_b[((int32_T)c9_b_i + 239 * ((int32_T)c9_d_j - 1)) - 1] = c9_varargin_1
        [((int32_T)c9_b_i + 120 * ((int32_T)c9_d_j - 1)) - 1];
    }
  }
}

static const mxArray *c9_emlrt_marshallOut
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   char_T c9_u[30])
{
  const mxArray *c9_b_y = NULL;
  (void)chartInstance;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_u, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  return c9_b_y;
}

static uint8_T c9_emlrt_marshallIn
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_b_y, const char_T *c9_identifier)
{
  uint8_T c9_c_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = (const char *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_c_y = c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_y), &c9_thisId);
  sf_mex_destroy(&c9_b_y);
  return c9_c_y;
}

static uint8_T c9_b_emlrt_marshallIn
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, const
   mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_b_y;
  uint8_T c9_b_u;
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b_u, 1, 3, 0U, 0, 0U, 0);
  c9_b_y = c9_b_u;
  sf_mex_destroy(&c9_u);
  return c9_b_y;
}

static const mxArray *c9_chart_data_browse_helper
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance, int32_T
   c9_ssIdNumber)
{
  const mxArray *c9_mxData = NULL;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d2;
  uint8_T c9_u;
  c9_mxData = NULL;
  switch (c9_ssIdNumber) {
   case 4U:
    c9_d = *chartInstance->c9_I1;
    sf_mex_assign(&c9_mxData, sf_mex_create("mxData", &c9_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c9_d1 = *chartInstance->c9_x;
    sf_mex_assign(&c9_mxData, sf_mex_create("mxData", &c9_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c9_d2 = *chartInstance->c9_I2;
    sf_mex_assign(&c9_mxData, sf_mex_create("mxData", &c9_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c9_u = *chartInstance->c9_y;
    sf_mex_assign(&c9_mxData, sf_mex_create("mxData", &c9_u, 3, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c9_mxData;
}

static void c9_b_flip(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, boolean_T c9_b_x[7225])
{
  int32_T c9_i;
  int32_T c9_k;
  int32_T c9_b_k;
  boolean_T c9_tmp;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 85; c9_i++) {
    for (c9_k = 0; c9_k < 42; c9_k++) {
      c9_b_k = c9_k;
      c9_tmp = c9_b_x[c9_i + c9_b_k * 85];
      c9_b_x[c9_i + c9_b_k * 85] = c9_b_x[c9_i + (84 - c9_b_k) * 85];
      c9_b_x[c9_i + (84 - c9_b_k) * 85] = c9_tmp;
    }
  }
}

static void c9_b_sqrt(SFc9_untitled_restored_from_autosaveInstanceStruct
                      *chartInstance, const emlrtStack *c9_sp, real_T *c9_b_x)
{
  real_T c9_c_x;
  boolean_T c9_p;
  boolean_T c9_b_p;
  const mxArray *c9_b_y = NULL;
  static char_T c9_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  static char_T c9_b_cv1[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c9_c_x = *c9_b_x;
  if (c9_c_x < 0.0) {
    c9_p = true;
  } else {
    c9_p = false;
  }

  c9_b_p = c9_p;
  if (c9_b_p) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c9_sp, &c9_h_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }

  *c9_b_x = muDoubleScalarSqrt(*c9_b_x);
}

static void init_dsm_address_info
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance)
{
  chartInstance->c9_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c9_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c9_I1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c9_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c9_I2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
  chartInstance->c9_y = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c9_untitled_restored_from_autosave_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2262893934U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3129793860U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3540042928U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2174396688U);
}

mxArray *sf_c9_untitled_restored_from_autosave_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.Morphop_flat_tbb_Buildable"));
  mxSetCell(mxcell3p, 3, mxCreateString("coder.internal.lapack.LAPACKApi"));
  mxSetCell(mxcell3p, 4, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c9_untitled_restored_from_autosave_jit_fallback_info(void)
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

mxArray *sf_c9_untitled_restored_from_autosave_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c9_untitled_restored_from_autosave
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+AyT9LAT0CwBZldBwgYUP+fYrOFCmH2J/Ag"
    "H366C4H8LPLI5PTC7JLEuNT7aML80rySzJSU2JL0otLskvAjLSivJz4xNLS/KLE8tSGZD8CwC4m"
    "iEc"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_untitled_restored_from_autosave_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sJ1Fdpi3Or8UP0r3uWlygaC";
}

static void sf_opaque_initialize_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  initialize_params_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
  initialize_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  enable_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  disable_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  sf_gateway_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c9_untitled_restored_from_autosave
  (SimStruct* S)
{
  return get_sim_state_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c9_untitled_restored_from_autosave(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void
  sf_opaque_cleanup_runtime_resources_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_untitled_restored_from_autosaveInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_restored_from_autosave_optimization_info();
    }

    mdl_cleanup_runtime_resources_c9_untitled_restored_from_autosave
      ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_start_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c9_untitled_restored_from_autosave(void
  *chartInstanceVar)
{
  mdl_terminate_c9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_untitled_restored_from_autosave
    ((SFc9_untitled_restored_from_autosaveInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_untitled_restored_from_autosave(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_untitled_restored_from_autosave
      ((SFc9_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
    initSimStructsc9_untitled_restored_from_autosave
      ((SFc9_untitled_restored_from_autosaveInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c9_untitled_restored_from_autosave_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV8tu00AUtUNbtRKgViCxQYIdLFi0YlM29OEkIiilFeljGab2TTzKeMbMI23+giUfADs+gB9",
    "BYsOeJVt23HHcNDh2TBtRFQlLjj2ec8/c19w7cdzGjoPXbbzfrzjOAj4X8a44w2s+Hbtj9/D7nP",
    "MoHW+gEDfRHpEkUs7Ui5MIXoMSzGgqeIN3RC6M8g5I4D5iYyF1EZuikWGU9+qG+5ZPHYXUD1uhM",
    "CzYRlkS7HI2QLbY6D3kqVIJvq4DBDqUwnTDOiPdkcZSn3gh+D1lomkmKNAtE1u11I5hmsYMaqfg",
    "N7jSBDVW57q1NNHg6dNCM62lqnUGFFHMKOG51oZEtSBGB2s4iAP83TUajcrC/JBIvQ0h6YNq0l7",
    "CKThkOanCiWPKiRaSElaLmGcFJ3XbY6jPjgiATXEI6rYtgfRiQbkujn+rjpbWODlmUIVj0y1ma8",
    "FbY4N/SOEEZKHfOp7ogyRd2OWFiyYOqZ0m0RplySRM0wgOidzyMX4KgsLsxcxRLYJxgn2UKIJBY",
    "mRD7UvaR/cWspmoYTOzbMuYaBhsVQZL2Gp9mBaFEVvd5x5hTBXC9kXchD6whLVKNJkOG7Lm45Si",
    "wb5AB9v0Lt4NhlMMfArzBA9obrj6GUBSd15hYfkd6RulReRh8labzcnpSViDa5Ad4kNeFZCEKkC",
    "fJe4tZguosrFHIGqlE/XywMMMKUM5qmN49UTIHvpkShE5N8FGtBAYqS7GEnfCgcJNMw1mY1mG84",
    "kfQmALDGWwg9sGsTk+Uba0beG+61M9qILyJY3zomr7z6pz3n9u/kH/OZPLPh+P8bg5PM7YM7vuU",
    "uV3/I3MuhX84rpuIrc5Jncrs85cRs7ilvH++Gj++yey+e3L2h3y7ueHlbL13Yn13eTdyn2uXKxf",
    "307H988K4yjR+xP5ZbEvxvSay+G/N8a/nI7Vy7V6ENOnu3L9YG9VPjVHbNAlXsK3WKJvJaPv2fe",
    "HtkIP4qTeKuk3gvQgYcfEDNur5V8f03ehxB9L6ffh9WNjNvm7m9k4zpXIL+PbIJO3l1//4eZs8s",
    "P135To/yQT7ydJH24Tu7uh7T9rG47FjEHQloAVSeJLR4qoTYwWCo8k2X162by/qJxzxXL/ip7//",
    "fL37fuTPnbjknLujH3zquRmte+i/fy64af1BSeDX77Gdsx6zvrb+K/Oxc5DD9Lx89FfFC+kLMg5",
    "rabTTSCdvNkrsO8Xfw+gFg==",
    ""
  };

  static char newstr [1225] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c9_untitled_restored_from_autosave(SimStruct *S)
{
  const char* newstr =
    sf_c9_untitled_restored_from_autosave_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3892651941U));
  ssSetChecksum1(S,(3711984044U));
  ssSetChecksum2(S,(1628647893U));
  ssSetChecksum3(S,(296024464U));
}

static void mdlRTW_c9_untitled_restored_from_autosave(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c9_untitled_restored_from_autosave
  (SimStruct *S)
{
  SFc9_untitled_restored_from_autosaveInstanceStruct *chartInstance;
  chartInstance = (SFc9_untitled_restored_from_autosaveInstanceStruct *)utMalloc
    (sizeof(SFc9_untitled_restored_from_autosaveInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc9_untitled_restored_from_autosaveInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_untitled_restored_from_autosave;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_untitled_restored_from_autosave;
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
    chartInstance->c9_JITStateAnimation,
    chartInstance->c9_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c9_untitled_restored_from_autosave(chartInstance);
}

void c9_untitled_restored_from_autosave_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c9_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_untitled_restored_from_autosave(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_untitled_restored_from_autosave(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_untitled_restored_from_autosave_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
