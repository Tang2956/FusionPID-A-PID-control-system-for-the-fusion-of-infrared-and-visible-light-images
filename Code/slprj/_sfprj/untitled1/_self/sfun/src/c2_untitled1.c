/* Include files */

#include "untitled1_sfun.h"
#include "c2_untitled1.h"
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

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 59,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 112,/* lineNo */
  5,                                   /* colNo */
  "svd",                               /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pName */
};

static emlrtMCInfo c2_g_emlrtMCI = { 44,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

static emlrtMCInfo c2_h_emlrtMCI = { 47,/* lineNo */
  13,                                  /* colNo */
  "infocheck",                         /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pName */
};

static emlrtMCInfo c2_i_emlrtMCI = { 269,/* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 6,  /* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 19,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 20,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 25,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 27,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 28,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 30,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 37,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 50,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 51,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 56,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 58,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 59,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 61,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 382,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 385,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 389,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 392,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 573,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 433,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 464,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 473,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 451,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 22,/* lineNo */
  "morphop",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 401,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 448,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 486,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 701,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 689,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 55,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 64,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 67,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 68,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 84,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 88,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 683,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 25,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 33,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 53,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 90,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 82,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 209,/* lineNo */
  "xgesdd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesdd.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 31,/* lineNo */
  "xgesvd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 197,/* lineNo */
  "xgesvd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 282,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 299,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 428,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 23,/* lineNo */
  "xnrm2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 38,/* lineNo */
  "xnrm2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 21,/* lineNo */
  "scaleVectorByRecip",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scaleVectorByRecip.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 23,/* lineNo */
  "scaleVectorByRecip",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scaleVectorByRecip.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 31,/* lineNo */
  "xscal",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 18,/* lineNo */
  "xscal",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 47,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 53,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 32,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 65,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 21,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 23,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 32,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 32,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 923,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 997,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 1025,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 1037,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1"                       /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 49,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1"                       /* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 491,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 578,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 175,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 84,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 900,/* lineNo */
  21,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 88,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtDCInfo c2_emlrtDCI = { 18, /* lineNo */
  18,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  134,                                 /* iLast */
  18,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 18,/* lineNo */
  22,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { 1,/* iFirst */
  134,                                 /* iLast */
  18,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 18,/* lineNo */
  26,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  18,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 18,/* lineNo */
  30,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  18,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 49,/* lineNo */
  18,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { 1,/* iFirst */
  134,                                 /* iLast */
  49,                                  /* lineNo */
  18,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 49,/* lineNo */
  22,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { 1,/* iFirst */
  134,                                 /* iLast */
  49,                                  /* lineNo */
  22,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 49,/* lineNo */
  26,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  49,                                  /* lineNo */
  26,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 49,/* lineNo */
  30,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  49,                                  /* lineNo */
  30,                                  /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { 1,/* iFirst */
  134,                                 /* iLast */
  20,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 20,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  20,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { 1,/* iFirst */
  134,                                 /* iLast */
  51,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 51,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { 1,/* iFirst */
  176,                                 /* iLast */
  51,                                  /* lineNo */
  9,                                   /* colNo */
  "imgn",                              /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { 1,/* iFirst */
  279000,                              /* iLast */
  65,                                  /* lineNo */
  1,                                   /* colNo */
  "G",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 65,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  5,                                   /* lineNo */
  11,                                  /* colNo */
  "tmp",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 5,/* lineNo */
  11,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  24,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_m_emlrtDCI = { 12,/* lineNo */
  24,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_n_emlrtDCI = { 12,/* lineNo */
  17,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static const char_T c2_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

static const boolean_T c2_bv[7225] = { true, false, false, false, false, false,
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

static const boolean_T c2_bv1[7225] = { false, false, false, false, false, false,
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

static const char_T c2_cv1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
  'E', 'r', 'r', 'o', 'r' };

static const char_T c2_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
  'L', 'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r',
  'g', 'e', 'n', 'c', 'e' };

static const char_T c2_cv3[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
  'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

static const char_T c2_cv4[12] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
  'm', 'e', 'm' };

static const boolean_T c2_bv2[3249] = { true, false, false, false, false, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
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
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
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
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
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
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
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
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
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
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
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
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
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
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
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
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
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
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
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
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true };

static const boolean_T c2_bv3[3249] = { false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, true, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, true, false,
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
  true, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, true, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, true, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, true, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, true, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, true, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, true, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, true, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false, false, false,
  false, false, false, false, false, false, false, false, false };

/* Function Declarations */
static void initialize_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void initialize_params_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void enable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void disable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void c2_do_animation_call_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void set_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance, const mxArray *c2_st);
static void sf_gateway_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_start_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_terminate_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void initSimStructsc2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static real_T c2_mean_shift(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_ser[441], real_T c2_p);
static real_T c2_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_b_x[279000], int32_T c2_col);
static real_T c2_b_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_b_x[620]);
static void c2_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_c_Ain[279000], uint8_T c2_Bout[17515]);
static void c2_contributions(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_check_forloop_overflow_error(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[279000], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[69750]);
static int32_T c2_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_e_varargin_1);
static int32_T c2_b_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2);
static void c2_b_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_b_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, uint8_T c2_in_[69750], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[17515]);
static real_T c2_c_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_b_x[441]);
static void c2_b_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_Ain[17515], real_T c2_Bout[279000]);
static void c2_c_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_c_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_in_[17515], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[69750]);
static void c2_d_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_d_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_in_[69750], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[279000]);
static void c2_imerode(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000]);
static boolean_T c2_useIPP(SFc2_untitled1InstanceStruct *chartInstance,
  boolean_T c2_nhood[7225]);
static void c2_imdilate(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000]);
static void c2_padarray(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_e_varargin_1[279000], uint8_T c2_e_b[460631]);
static void c2_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[279000], uint8_T c2_e_b[279000]);
static void c2_svd(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_U[625], real_T c2_S[6250], real_T c2_V
                   [62500]);
static void c2_b_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[625], real_T c2_b_s[25],
                     real_T c2_V[62500]);
static boolean_T c2_infocheck(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_info);
static void c2_ceval_xgesvd(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[6250], real_T c2_U[625], real_T c2_S[25],
  real_T c2_V[62500], int32_T *c2_info);
static boolean_T c2_b_infocheck(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_info);
static void c2_c_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_c_A[6250], real_T c2_U[625],
                     real_T c2_b_s[25], real_T c2_V[62500]);
static void c2_padImage(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_a_tmp[279000], uint8_T c2_f_a[412380]);
static void c2_b_imerode(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000]);
static void c2_b_imdilate(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000]);
static void c2_b_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[279000], uint8_T c2_e_b[279000]);
static void c2_d_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[900], real_T c2_S[900],
                     real_T c2_V[900]);
static void c2_e_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[900], real_T c2_b_s[30],
                     real_T c2_V[900]);
static void c2_b_ceval_xgesvd(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[900], real_T c2_U[900], real_T c2_S[30],
  real_T c2_V[900], int32_T *c2_info);
static void c2_b_padImage(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_a_tmp[279000], uint8_T c2_f_a[312000]);
static void c2_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[279000]);
static void c2_b_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y
  [279000]);
static uint8_T c2_c_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled1, const char_T *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_chart_data_browse_helper(SFc2_untitled1InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static void c2_emxEnsureCapacity_real_T(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_real_T(SFc2_untitled1InstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray);
static void init_dsm_address_info(SFc2_untitled1InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_untitled1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c2_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_untitled1 = 0U;
}

static void initialize_params_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_st;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(2, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_y, 3, 0U, 1U, 0U,
    2, 450, 620), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_untitled1, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)), "y",
                      chartInstance->c2_uv);
  for (c2_i = 0; c2_i < 279000; c2_i++) {
    (*chartInstance->c2_y)[c2_i] = chartInstance->c2_uv[c2_i];
  }

  chartInstance->c2_is_active_c2_untitled1 = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)), "is_active_c2_untitled1");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  static char_T c2_b_cv[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  c2_emxArray_real_T *c2_ser;
  emlrtStack c2_b_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  real_T c2_f_imgn[1826];
  real_T c2_i_imgn[1826];
  real_T c2_e_imgn[1353];
  real_T c2_h_imgn[1353];
  real_T c2_g_imgn[1340];
  real_T c2_j_imgn[1340];
  real_T c2_c_y[620];
  real_T c2_b_ser[441];
  real_T c2_b_i1;
  real_T c2_b_i2;
  real_T c2_b_j;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_i;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d10;
  real_T c2_d11;
  real_T c2_d12;
  real_T c2_d13;
  real_T c2_d14;
  real_T c2_d15;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d8;
  real_T c2_d9;
  real_T c2_d_x;
  real_T c2_d_y;
  real_T c2_e_x;
  real_T c2_f_a;
  real_T c2_f_b;
  real_T c2_f_x;
  real_T c2_g_b;
  real_T c2_g_x;
  real_T c2_g_y;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_y;
  real_T c2_l_y;
  real_T c2_lm;
  real_T c2_m_y;
  int32_T c2_b_col;
  int32_T c2_b_i;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_nx;
  int32_T c2_c_col;
  int32_T c2_c_j;
  int32_T c2_c_loop_ub;
  int32_T c2_col;
  int32_T c2_d_col;
  int32_T c2_d_i;
  int32_T c2_d_loop_ub;
  int32_T c2_e_col;
  int32_T c2_e_i;
  int32_T c2_f_col;
  int32_T c2_f_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i100;
  int32_T c2_i101;
  int32_T c2_i102;
  int32_T c2_i103;
  int32_T c2_i104;
  int32_T c2_i105;
  int32_T c2_i106;
  int32_T c2_i107;
  int32_T c2_i108;
  int32_T c2_i109;
  int32_T c2_i11;
  int32_T c2_i110;
  int32_T c2_i111;
  int32_T c2_i112;
  int32_T c2_i113;
  int32_T c2_i114;
  int32_T c2_i115;
  int32_T c2_i116;
  int32_T c2_i117;
  int32_T c2_i118;
  int32_T c2_i119;
  int32_T c2_i12;
  int32_T c2_i120;
  int32_T c2_i121;
  int32_T c2_i122;
  int32_T c2_i123;
  int32_T c2_i124;
  int32_T c2_i125;
  int32_T c2_i126;
  int32_T c2_i127;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i7;
  int32_T c2_i70;
  int32_T c2_i71;
  int32_T c2_i72;
  int32_T c2_i73;
  int32_T c2_i74;
  int32_T c2_i75;
  int32_T c2_i76;
  int32_T c2_i77;
  int32_T c2_i78;
  int32_T c2_i79;
  int32_T c2_i8;
  int32_T c2_i80;
  int32_T c2_i81;
  int32_T c2_i82;
  int32_T c2_i83;
  int32_T c2_i84;
  int32_T c2_i85;
  int32_T c2_i86;
  int32_T c2_i87;
  int32_T c2_i88;
  int32_T c2_i89;
  int32_T c2_i9;
  int32_T c2_i90;
  int32_T c2_i91;
  int32_T c2_i92;
  int32_T c2_i93;
  int32_T c2_i94;
  int32_T c2_i95;
  int32_T c2_i96;
  int32_T c2_i97;
  int32_T c2_i98;
  int32_T c2_i99;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_loop_ub;
  int32_T c2_nx;
  uint32_T c2_b_q0;
  uint32_T c2_b_qY;
  uint32_T c2_q0;
  uint32_T c2_qY;
  uint32_T c2_u10;
  uint32_T c2_u2;
  uint32_T c2_u5;
  uint32_T c2_u8;
  uint8_T c2_d_I[17515];
  uint8_T c2_u;
  uint8_T c2_u1;
  uint8_T c2_u3;
  uint8_T c2_u4;
  uint8_T c2_u6;
  uint8_T c2_u7;
  uint8_T c2_u9;
  boolean_T c2_b1;
  boolean_T c2_b10;
  boolean_T c2_b11;
  boolean_T c2_b12;
  boolean_T c2_b13;
  boolean_T c2_b14;
  boolean_T c2_b15;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b8;
  boolean_T c2_b9;
  boolean_T c2_b_covSaturation;
  boolean_T c2_c_covSaturation;
  boolean_T c2_covSaturation;
  boolean_T c2_d_covSaturation;
  boolean_T c2_e_b;
  boolean_T c2_e_covSaturation;
  boolean_T c2_f_covSaturation;
  boolean_T c2_g_covSaturation;
  boolean_T c2_h_covSaturation;
  boolean_T c2_i_covSaturation;
  boolean_T c2_j_covSaturation;
  boolean_T c2_k_covSaturation;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 279000; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, (real_T)
                      (*chartInstance->c2_d_I2)[c2_i]);
  }

  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_x);
  for (c2_i1 = 0; c2_i1 < 279000; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_I1)[c2_i1]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  for (c2_i2 = 0; c2_i2 < 279000; c2_i2++) {
    chartInstance->c2_I[c2_i2] = (*chartInstance->c2_I1)[c2_i2];
  }

  c2_b_x = *chartInstance->c2_x;
  for (c2_i3 = 0; c2_i3 < 279000; c2_i3++) {
    chartInstance->c2_I2[c2_i3] = (*chartInstance->c2_d_I2)[c2_i3];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  for (c2_col = 0; c2_col < 620; c2_col++) {
    c2_b_col = c2_col;
    for (c2_i5 = 0; c2_i5 < 279000; c2_i5++) {
      chartInstance->c2_b_I[c2_i5] = chartInstance->c2_I[c2_i5];
    }

    c2_c_y[c2_b_col] = c2_sumColumnB(chartInstance, chartInstance->c2_b_I,
      c2_b_col + 1);
  }

  for (c2_i4 = 0; c2_i4 < 620; c2_i4++) {
    c2_c_y[c2_i4] /= 450.0;
  }

  c2_b_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_b_i1 = c2_b_y / 620.0;
  for (c2_c_col = 0; c2_c_col < 620; c2_c_col++) {
    c2_d_col = c2_c_col;
    for (c2_i7 = 0; c2_i7 < 279000; c2_i7++) {
      chartInstance->c2_b_I2[c2_i7] = chartInstance->c2_I2[c2_i7];
    }

    c2_c_y[c2_d_col] = c2_sumColumnB(chartInstance, chartInstance->c2_b_I2,
      c2_d_col + 1);
  }

  for (c2_i6 = 0; c2_i6 < 620; c2_i6++) {
    c2_c_y[c2_i6] /= 450.0;
  }

  c2_d_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_b_i2 = c2_d_y / 620.0;
  c2_b_st.site = &c2_emlrtRSI;
  for (c2_i8 = 0; c2_i8 < 279000; c2_i8++) {
    chartInstance->c2_c_I[c2_i8] = chartInstance->c2_I[c2_i8];
  }

  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_c_I, c2_d_I);
  for (c2_i9 = 0; c2_i9 < 17515; c2_i9++) {
    chartInstance->c2_img[c2_i9] = (real_T)c2_d_I[c2_i9];
  }

  for (c2_i10 = 0; c2_i10 < 23584; c2_i10++) {
    chartInstance->c2_d_imgn[c2_i10] = 0.0;
  }

  c2_i11 = 0;
  c2_i12 = 0;
  for (c2_i13 = 0; c2_i13 < 155; c2_i13++) {
    for (c2_i15 = 0; c2_i15 < 113; c2_i15++) {
      chartInstance->c2_d_imgn[(c2_i15 + c2_i11) + 1350] = chartInstance->
        c2_img[c2_i15 + c2_i12];
    }

    c2_i11 += 134;
    c2_i12 += 113;
  }

  c2_i14 = 0;
  c2_i16 = 0;
  for (c2_i17 = 0; c2_i17 < 155; c2_i17++) {
    for (c2_i19 = 0; c2_i19 < 10; c2_i19++) {
      chartInstance->c2_d_imgn[(c2_i19 + c2_i14) + 1340] = chartInstance->
        c2_img[c2_i19 + c2_i16];
    }

    c2_i14 += 134;
    c2_i16 += 113;
  }

  c2_i18 = 0;
  c2_i20 = 0;
  for (c2_i21 = 0; c2_i21 < 11; c2_i21++) {
    for (c2_i23 = 0; c2_i23 < 123; c2_i23++) {
      c2_e_imgn[c2_i23 + c2_i18] = chartInstance->c2_d_imgn[(c2_i23 + c2_i20) +
        20636];
    }

    c2_i18 += 123;
    c2_i20 += 134;
  }

  c2_i22 = 0;
  c2_i24 = 0;
  for (c2_i25 = 0; c2_i25 < 11; c2_i25++) {
    for (c2_i27 = 0; c2_i27 < 123; c2_i27++) {
      chartInstance->c2_d_imgn[(c2_i27 + c2_i22) + 22110] = c2_e_imgn[c2_i27 +
        c2_i24];
    }

    c2_i22 += 134;
    c2_i24 += 123;
  }

  c2_i26 = 0;
  c2_i28 = 0;
  for (c2_i29 = 0; c2_i29 < 166; c2_i29++) {
    for (c2_i31 = 0; c2_i31 < 11; c2_i31++) {
      c2_f_imgn[c2_i31 + c2_i26] = chartInstance->c2_d_imgn[(c2_i31 + c2_i28) +
        1452];
    }

    c2_i26 += 11;
    c2_i28 += 134;
  }

  c2_i30 = 0;
  c2_i32 = 0;
  for (c2_i33 = 0; c2_i33 < 166; c2_i33++) {
    for (c2_i35 = 0; c2_i35 < 11; c2_i35++) {
      chartInstance->c2_d_imgn[(c2_i35 + c2_i30) + 1463] = c2_f_imgn[c2_i35 +
        c2_i32];
    }

    c2_i30 += 134;
    c2_i32 += 11;
  }

  c2_i34 = 0;
  for (c2_i36 = 0; c2_i36 < 10; c2_i36++) {
    for (c2_i38 = 0; c2_i38 < 134; c2_i38++) {
      c2_g_imgn[c2_i38 + c2_i34] = chartInstance->c2_d_imgn[(c2_i38 + c2_i34) +
        1340];
    }

    c2_i34 += 134;
  }

  c2_i37 = 0;
  for (c2_i39 = 0; c2_i39 < 10; c2_i39++) {
    for (c2_i40 = 0; c2_i40 < 134; c2_i40++) {
      chartInstance->c2_d_imgn[c2_i40 + c2_i37] = c2_g_imgn[c2_i40 + c2_i37];
    }

    c2_i37 += 134;
  }

  c2_emxInit_real_T(chartInstance, &c2_st, &c2_ser, 2, &c2_emlrtRTEI);
  for (c2_b_i = 0; c2_b_i < 113; c2_b_i++) {
    c2_c_i = 11.0 + (real_T)c2_b_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 1);
    for (c2_j = 0; c2_j < 155; c2_j++) {
      c2_b_j = 11.0 + (real_T)c2_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 1);
      c2_d = c2_c_i - 10.0;
      c2_d1 = c2_c_i + 10.0;
      c2_e_b = (c2_d > c2_d1);
      c2_b1 = c2_e_b;
      c2_b2 = false;
      c2_b3 = (c2_b1 || c2_b2);
      if (c2_b3) {
        c2_i47 = 1;
        c2_i48 = 0;
      } else {
        if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
          emlrtIntegerCheckR2012b(c2_d, &c2_emlrtDCI, &c2_st);
        }

        c2_i49 = (int32_T)c2_d;
        if ((c2_i49 < 1) || (c2_i49 > 134)) {
          emlrtDynamicBoundsCheckR2012b(c2_i49, 1, 134, &c2_emlrtBCI, &c2_st);
        }

        c2_i47 = c2_i49;
        if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
          emlrtIntegerCheckR2012b(c2_d1, &c2_b_emlrtDCI, &c2_st);
        }

        c2_i53 = (int32_T)c2_d1;
        if ((c2_i53 < 1) || (c2_i53 > 134)) {
          emlrtDynamicBoundsCheckR2012b(c2_i53, 1, 134, &c2_b_emlrtBCI, &c2_st);
        }

        c2_i48 = c2_i53;
      }

      c2_d3 = c2_b_j - 10.0;
      c2_d4 = c2_b_j + 10.0;
      c2_b4 = (c2_d3 > c2_d4);
      c2_b5 = c2_b4;
      c2_b6 = false;
      c2_b7 = (c2_b5 || c2_b6);
      if (c2_b7) {
        c2_i54 = 1;
        c2_i55 = 0;
      } else {
        if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
          emlrtIntegerCheckR2012b(c2_d3, &c2_c_emlrtDCI, &c2_st);
        }

        c2_i57 = (int32_T)c2_d3;
        if ((c2_i57 < 1) || (c2_i57 > 176)) {
          emlrtDynamicBoundsCheckR2012b(c2_i57, 1, 176, &c2_c_emlrtBCI, &c2_st);
        }

        c2_i54 = c2_i57;
        if (c2_d4 != (real_T)(int32_T)muDoubleScalarFloor(c2_d4)) {
          emlrtIntegerCheckR2012b(c2_d4, &c2_d_emlrtDCI, &c2_st);
        }

        c2_i63 = (int32_T)c2_d4;
        if ((c2_i63 < 1) || (c2_i63 > 176)) {
          emlrtDynamicBoundsCheckR2012b(c2_i63, 1, 176, &c2_d_emlrtBCI, &c2_st);
        }

        c2_i55 = c2_i63;
      }

      c2_i58 = c2_ser->size[0] * c2_ser->size[1];
      c2_ser->size[0] = (c2_i48 - c2_i47) + 1;
      c2_ser->size[1] = (c2_i55 - c2_i54) + 1;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_ser, c2_i58,
        &c2_emlrtRTEI);
      c2_loop_ub = c2_i55 - c2_i54;
      for (c2_i64 = 0; c2_i64 <= c2_loop_ub; c2_i64++) {
        c2_b_loop_ub = c2_i48 - c2_i47;
        for (c2_i68 = 0; c2_i68 <= c2_b_loop_ub; c2_i68++) {
          c2_ser->data[c2_i68 + c2_ser->size[0] * c2_i64] =
            chartInstance->c2_d_imgn[((c2_i47 + c2_i68) + 134 * ((c2_i54 +
            c2_i64) - 1)) - 1];
        }
      }

      c2_b_st.site = &c2_b_emlrtRSI;
      c2_nx = c2_ser->size[0] * c2_ser->size[1];
      if (441 != c2_nx) {
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c2_b_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
      }

      for (c2_i72 = 0; c2_i72 < 441; c2_i72++) {
        c2_b_ser[c2_i72] = c2_ser->data[c2_i72];
      }

      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_i_emlrtDCI, &c2_st);
      }

      c2_i77 = (int32_T)c2_c_i;
      if ((c2_i77 < 1) || (c2_i77 > 134)) {
        emlrtDynamicBoundsCheckR2012b(c2_i77, 1, 134, &c2_i_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_i_emlrtDCI, &c2_st);
      }

      c2_i83 = (int32_T)c2_b_j;
      if ((c2_i83 < 1) || (c2_i83 > 176)) {
        emlrtDynamicBoundsCheckR2012b(c2_i83, 1, 176, &c2_j_emlrtBCI, &c2_st);
      }

      c2_b_st.site = &c2_c_emlrtRSI;
      chartInstance->c2_d_imgn[(c2_i77 + 134 * (c2_i83 - 1)) - 1] =
        c2_mean_shift(chartInstance, &c2_b_st, c2_b_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 0);
  c2_i41 = 0;
  c2_i42 = 0;
  for (c2_i43 = 0; c2_i43 < 155; c2_i43++) {
    for (c2_i44 = 0; c2_i44 < 113; c2_i44++) {
      chartInstance->c2_img[c2_i44 + c2_i41] = chartInstance->c2_d_imgn[(c2_i44
        + c2_i42) + 1350];
    }

    c2_i41 += 113;
    c2_i42 += 134;
  }

  c2_b_st.site = &c2_d_emlrtRSI;
  c2_b_imresize(chartInstance, &c2_b_st, chartInstance->c2_img,
                chartInstance->c2_b_a);
  for (c2_i45 = 0; c2_i45 < 279000; c2_i45++) {
    c2_d2 = muDoubleScalarRound(chartInstance->c2_b_a[c2_i45]);
    c2_covSaturation = false;
    if (c2_d2 < 256.0) {
      if (c2_d2 >= 0.0) {
        c2_u = (uint8_T)c2_d2;
      } else {
        c2_covSaturation = true;
        c2_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 666, 42);
      }
    } else if (c2_d2 >= 256.0) {
      c2_covSaturation = true;
      c2_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 666, 42);
    } else {
      c2_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 8, 0,
      c2_covSaturation);
    chartInstance->c2_b_imgn[c2_i45] = c2_u;
  }

  c2_b_st.site = &c2_e_emlrtRSI;
  for (c2_i46 = 0; c2_i46 < 279000; c2_i46++) {
    chartInstance->c2_imgn[c2_i46] = chartInstance->c2_b_imgn[c2_i46];
  }

  c2_imerode(chartInstance, chartInstance->c2_imgn, chartInstance->c2_b_imgn);
  c2_b_st.site = &c2_f_emlrtRSI;
  c2_imdilate(chartInstance, chartInstance->c2_b_imgn, chartInstance->c2_A1);
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_imfilter(chartInstance, &c2_b_st, chartInstance->c2_A1,
              chartInstance->c2_b_imgn);
  for (c2_i50 = 0; c2_i50 < 279000; c2_i50++) {
    c2_d5 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c2_b_imgn[c2_i50]);
    c2_b_covSaturation = false;
    if (c2_d5 < 256.0) {
      if (c2_d5 >= 0.0) {
        c2_u1 = (uint8_T)c2_d5;
      } else {
        c2_b_covSaturation = true;
        c2_u1 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 858, 8);
      }
    } else if (c2_d5 >= 256.0) {
      c2_b_covSaturation = true;
      c2_u1 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 858, 8);
    } else {
      c2_u1 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 10, 0,
      c2_b_covSaturation);
    chartInstance->c2_b_imgn[c2_i50] = c2_u1;
  }

  for (c2_i51 = 0; c2_i51 < 279000; c2_i51++) {
    c2_q0 = chartInstance->c2_I[c2_i51];
    c2_qY = c2_q0 - (uint32_T)chartInstance->c2_b_imgn[c2_i51];
    c2_c_covSaturation = false;
    if (c2_qY > c2_q0) {
      c2_c_covSaturation = true;
      c2_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 854, 12);
    }

    c2_u2 = c2_qY;
    if (c2_u2 > 255U) {
      c2_c_covSaturation = true;
      c2_u2 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 854, 12);
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 9, 0,
      c2_c_covSaturation);
    chartInstance->c2_A1[c2_i51] = (uint8_T)c2_u2;
  }

  for (c2_i52 = 0; c2_i52 < 279000; c2_i52++) {
    chartInstance->c2_I[c2_i52] = chartInstance->c2_I2[c2_i52];
  }

  c2_b_st.site = &c2_h_emlrtRSI;
  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_I, c2_d_I);
  for (c2_i56 = 0; c2_i56 < 17515; c2_i56++) {
    chartInstance->c2_img[c2_i56] = (real_T)c2_d_I[c2_i56];
  }

  for (c2_i59 = 0; c2_i59 < 23584; c2_i59++) {
    chartInstance->c2_d_imgn[c2_i59] = 0.0;
  }

  c2_i60 = 0;
  c2_i61 = 0;
  for (c2_i62 = 0; c2_i62 < 155; c2_i62++) {
    for (c2_i66 = 0; c2_i66 < 113; c2_i66++) {
      chartInstance->c2_d_imgn[(c2_i66 + c2_i60) + 1350] = chartInstance->
        c2_img[c2_i66 + c2_i61];
    }

    c2_i60 += 134;
    c2_i61 += 113;
  }

  c2_i65 = 0;
  c2_i67 = 0;
  for (c2_i69 = 0; c2_i69 < 155; c2_i69++) {
    for (c2_i71 = 0; c2_i71 < 10; c2_i71++) {
      chartInstance->c2_d_imgn[(c2_i71 + c2_i65) + 1340] = chartInstance->
        c2_img[c2_i71 + c2_i67];
    }

    c2_i65 += 134;
    c2_i67 += 113;
  }

  c2_i70 = 0;
  c2_i73 = 0;
  for (c2_i74 = 0; c2_i74 < 11; c2_i74++) {
    for (c2_i76 = 0; c2_i76 < 123; c2_i76++) {
      c2_h_imgn[c2_i76 + c2_i70] = chartInstance->c2_d_imgn[(c2_i76 + c2_i73) +
        20636];
    }

    c2_i70 += 123;
    c2_i73 += 134;
  }

  c2_i75 = 0;
  c2_i78 = 0;
  for (c2_i79 = 0; c2_i79 < 11; c2_i79++) {
    for (c2_i81 = 0; c2_i81 < 123; c2_i81++) {
      chartInstance->c2_d_imgn[(c2_i81 + c2_i75) + 22110] = c2_h_imgn[c2_i81 +
        c2_i78];
    }

    c2_i75 += 134;
    c2_i78 += 123;
  }

  c2_i80 = 0;
  c2_i82 = 0;
  for (c2_i84 = 0; c2_i84 < 166; c2_i84++) {
    for (c2_i86 = 0; c2_i86 < 11; c2_i86++) {
      c2_i_imgn[c2_i86 + c2_i80] = chartInstance->c2_d_imgn[(c2_i86 + c2_i82) +
        1452];
    }

    c2_i80 += 11;
    c2_i82 += 134;
  }

  c2_i85 = 0;
  c2_i87 = 0;
  for (c2_i88 = 0; c2_i88 < 166; c2_i88++) {
    for (c2_i90 = 0; c2_i90 < 11; c2_i90++) {
      chartInstance->c2_d_imgn[(c2_i90 + c2_i85) + 1463] = c2_i_imgn[c2_i90 +
        c2_i87];
    }

    c2_i85 += 134;
    c2_i87 += 11;
  }

  c2_i89 = 0;
  for (c2_i91 = 0; c2_i91 < 10; c2_i91++) {
    for (c2_i93 = 0; c2_i93 < 134; c2_i93++) {
      c2_j_imgn[c2_i93 + c2_i89] = chartInstance->c2_d_imgn[(c2_i93 + c2_i89) +
        1340];
    }

    c2_i89 += 134;
  }

  c2_i92 = 0;
  for (c2_i94 = 0; c2_i94 < 10; c2_i94++) {
    for (c2_i95 = 0; c2_i95 < 134; c2_i95++) {
      chartInstance->c2_d_imgn[c2_i95 + c2_i92] = c2_j_imgn[c2_i95 + c2_i92];
    }

    c2_i92 += 134;
  }

  for (c2_d_i = 0; c2_d_i < 113; c2_d_i++) {
    c2_c_i = 11.0 + (real_T)c2_d_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 1);
    for (c2_c_j = 0; c2_c_j < 155; c2_c_j++) {
      c2_b_j = 11.0 + (real_T)c2_c_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 3, 1);
      c2_d6 = c2_c_i - 10.0;
      c2_d7 = c2_c_i + 10.0;
      c2_b8 = (c2_d6 > c2_d7);
      c2_b9 = c2_b8;
      c2_b10 = false;
      c2_b11 = (c2_b9 || c2_b10);
      if (c2_b11) {
        c2_i102 = 1;
        c2_i103 = 0;
      } else {
        if (c2_d6 != (real_T)(int32_T)muDoubleScalarFloor(c2_d6)) {
          emlrtIntegerCheckR2012b(c2_d6, &c2_e_emlrtDCI, &c2_st);
        }

        c2_i104 = (int32_T)c2_d6;
        if ((c2_i104 < 1) || (c2_i104 > 134)) {
          emlrtDynamicBoundsCheckR2012b(c2_i104, 1, 134, &c2_e_emlrtBCI, &c2_st);
        }

        c2_i102 = c2_i104;
        if (c2_d7 != (real_T)(int32_T)muDoubleScalarFloor(c2_d7)) {
          emlrtIntegerCheckR2012b(c2_d7, &c2_f_emlrtDCI, &c2_st);
        }

        c2_i107 = (int32_T)c2_d7;
        if ((c2_i107 < 1) || (c2_i107 > 134)) {
          emlrtDynamicBoundsCheckR2012b(c2_i107, 1, 134, &c2_f_emlrtBCI, &c2_st);
        }

        c2_i103 = c2_i107;
      }

      c2_d9 = c2_b_j - 10.0;
      c2_d10 = c2_b_j + 10.0;
      c2_b12 = (c2_d9 > c2_d10);
      c2_b13 = c2_b12;
      c2_b14 = false;
      c2_b15 = (c2_b13 || c2_b14);
      if (c2_b15) {
        c2_i109 = 1;
        c2_i110 = 0;
      } else {
        if (c2_d9 != (real_T)(int32_T)muDoubleScalarFloor(c2_d9)) {
          emlrtIntegerCheckR2012b(c2_d9, &c2_g_emlrtDCI, &c2_st);
        }

        c2_i111 = (int32_T)c2_d9;
        if ((c2_i111 < 1) || (c2_i111 > 176)) {
          emlrtDynamicBoundsCheckR2012b(c2_i111, 1, 176, &c2_g_emlrtBCI, &c2_st);
        }

        c2_i109 = c2_i111;
        if (c2_d10 != (real_T)(int32_T)muDoubleScalarFloor(c2_d10)) {
          emlrtIntegerCheckR2012b(c2_d10, &c2_h_emlrtDCI, &c2_st);
        }

        c2_i116 = (int32_T)c2_d10;
        if ((c2_i116 < 1) || (c2_i116 > 176)) {
          emlrtDynamicBoundsCheckR2012b(c2_i116, 1, 176, &c2_h_emlrtBCI, &c2_st);
        }

        c2_i110 = c2_i116;
      }

      c2_i113 = c2_ser->size[0] * c2_ser->size[1];
      c2_ser->size[0] = (c2_i103 - c2_i102) + 1;
      c2_ser->size[1] = (c2_i110 - c2_i109) + 1;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_st, c2_ser, c2_i113,
        &c2_b_emlrtRTEI);
      c2_c_loop_ub = c2_i110 - c2_i109;
      for (c2_i117 = 0; c2_i117 <= c2_c_loop_ub; c2_i117++) {
        c2_d_loop_ub = c2_i103 - c2_i102;
        for (c2_i118 = 0; c2_i118 <= c2_d_loop_ub; c2_i118++) {
          c2_ser->data[c2_i118 + c2_ser->size[0] * c2_i117] =
            chartInstance->c2_d_imgn[((c2_i102 + c2_i118) + 134 * ((c2_i109 +
            c2_i117) - 1)) - 1];
        }
      }

      c2_b_st.site = &c2_i_emlrtRSI;
      c2_b_nx = c2_ser->size[0] * c2_ser->size[1];
      if (441 != c2_b_nx) {
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c2_b_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                    sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_k_y)));
      }

      for (c2_i119 = 0; c2_i119 < 441; c2_i119++) {
        c2_b_ser[c2_i119] = c2_ser->data[c2_i119];
      }

      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_j_emlrtDCI, &c2_st);
      }

      c2_i121 = (int32_T)c2_c_i;
      if ((c2_i121 < 1) || (c2_i121 > 134)) {
        emlrtDynamicBoundsCheckR2012b(c2_i121, 1, 134, &c2_k_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_j_emlrtDCI, &c2_st);
      }

      c2_i124 = (int32_T)c2_b_j;
      if ((c2_i124 < 1) || (c2_i124 > 176)) {
        emlrtDynamicBoundsCheckR2012b(c2_i124, 1, 176, &c2_l_emlrtBCI, &c2_st);
      }

      c2_b_st.site = &c2_j_emlrtRSI;
      chartInstance->c2_d_imgn[(c2_i121 + 134 * (c2_i124 - 1)) - 1] =
        c2_mean_shift(chartInstance, &c2_b_st, c2_b_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_emxFree_real_T(chartInstance, &c2_ser);
  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 0);
  c2_i96 = 0;
  c2_i97 = 0;
  for (c2_i98 = 0; c2_i98 < 155; c2_i98++) {
    for (c2_i99 = 0; c2_i99 < 113; c2_i99++) {
      chartInstance->c2_img[c2_i99 + c2_i96] = chartInstance->c2_d_imgn[(c2_i99
        + c2_i97) + 1350];
    }

    c2_i96 += 113;
    c2_i97 += 134;
  }

  c2_b_st.site = &c2_k_emlrtRSI;
  c2_b_imresize(chartInstance, &c2_b_st, chartInstance->c2_img,
                chartInstance->c2_b_a);
  for (c2_i100 = 0; c2_i100 < 279000; c2_i100++) {
    c2_d8 = muDoubleScalarRound(chartInstance->c2_b_a[c2_i100]);
    c2_d_covSaturation = false;
    if (c2_d8 < 256.0) {
      if (c2_d8 >= 0.0) {
        c2_u3 = (uint8_T)c2_d8;
      } else {
        c2_d_covSaturation = true;
        c2_u3 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1494, 42);
      }
    } else if (c2_d8 >= 256.0) {
      c2_d_covSaturation = true;
      c2_u3 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1494, 42);
    } else {
      c2_u3 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
      c2_d_covSaturation);
    chartInstance->c2_b_imgn[c2_i100] = c2_u3;
  }

  c2_b_st.site = &c2_l_emlrtRSI;
  for (c2_i101 = 0; c2_i101 < 279000; c2_i101++) {
    chartInstance->c2_c_imgn[c2_i101] = chartInstance->c2_b_imgn[c2_i101];
  }

  c2_b_imerode(chartInstance, chartInstance->c2_c_imgn, chartInstance->c2_b_imgn);
  c2_b_st.site = &c2_m_emlrtRSI;
  c2_b_imdilate(chartInstance, chartInstance->c2_b_imgn, chartInstance->c2_I);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_b_imfilter(chartInstance, &c2_b_st, chartInstance->c2_I,
                chartInstance->c2_b_imgn);
  for (c2_i105 = 0; c2_i105 < 279000; c2_i105++) {
    c2_d11 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c2_b_imgn[c2_i105]);
    c2_e_covSaturation = false;
    if (c2_d11 < 256.0) {
      if (c2_d11 >= 0.0) {
        c2_u4 = (uint8_T)c2_d11;
      } else {
        c2_e_covSaturation = true;
        c2_u4 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1682, 6);
      }
    } else if (c2_d11 >= 256.0) {
      c2_e_covSaturation = true;
      c2_u4 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1682, 6);
    } else {
      c2_u4 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 2, 0,
      c2_e_covSaturation);
    chartInstance->c2_b_imgn[c2_i105] = c2_u4;
  }

  for (c2_i106 = 0; c2_i106 < 279000; c2_i106++) {
    c2_b_q0 = chartInstance->c2_I2[c2_i106];
    c2_b_qY = c2_b_q0 - (uint32_T)chartInstance->c2_b_imgn[c2_i106];
    c2_f_covSaturation = false;
    if (c2_b_qY > c2_b_q0) {
      c2_f_covSaturation = true;
      c2_b_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 1679, 9);
    }

    c2_u5 = c2_b_qY;
    if (c2_u5 > 255U) {
      c2_f_covSaturation = true;
      c2_u5 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1679, 9);
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 1, 0,
      c2_f_covSaturation);
    chartInstance->c2_I[c2_i106] = (uint8_T)c2_u5;
  }

  for (c2_i108 = 0; c2_i108 < 279000; c2_i108++) {
    chartInstance->c2_b_a[c2_i108] = (real_T)chartInstance->c2_I2[c2_i108];
  }

  for (c2_k = 0; c2_k < 279000; c2_k++) {
    c2_b_k = c2_k;
    c2_f_a = chartInstance->c2_b_a[c2_b_k];
    c2_g_y = muDoubleScalarPower(c2_f_a, 5.0);
    chartInstance->c2_G[c2_b_k] = c2_g_y;
  }

  for (c2_i112 = 0; c2_i112 < 279000; c2_i112++) {
    chartInstance->c2_G[c2_i112] /= 4.228250625E+9;
  }

  for (c2_e_col = 0; c2_e_col < 620; c2_e_col++) {
    c2_f_col = c2_e_col;
    for (c2_i115 = 0; c2_i115 < 279000; c2_i115++) {
      chartInstance->c2_c_I2[c2_i115] = chartInstance->c2_I2[c2_i115];
    }

    c2_c_y[c2_f_col] = c2_sumColumnB(chartInstance, chartInstance->c2_c_I2,
      c2_f_col + 1);
  }

  for (c2_i114 = 0; c2_i114 < 620; c2_i114++) {
    c2_c_y[c2_i114] /= 450.0;
  }

  c2_h_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_i_y = c2_h_y / 620.0;
  c2_lm = 255.0 - c2_i_y;
  c2_e_i = 0;
  while (c2_e_i <= 278999) {
    c2_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_f_i = 0;
  while (c2_f_i <= 278999) {
    if (chartInstance->c2_G[c2_f_i] < c2_lm) {
      c2_d12 = (real_T)(c2_f_i + 1);
      if (c2_d12 != (real_T)(int32_T)muDoubleScalarFloor(c2_d12)) {
        emlrtIntegerCheckR2012b(c2_d12, &c2_k_emlrtDCI, &c2_st);
      }

      c2_i123 = (int32_T)muDoubleScalarFloor(c2_d12);
      if ((c2_i123 < 1) || (c2_i123 > 279000)) {
        emlrtDynamicBoundsCheckR2012b(c2_i123, 1, 279000, &c2_m_emlrtBCI, &c2_st);
      }

      chartInstance->c2_G[c2_i123 - 1] = 0.0;
    }

    c2_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  for (c2_i120 = 0; c2_i120 < 279000; c2_i120++) {
    c2_d13 = muDoubleScalarRound(chartInstance->c2_G[c2_i120]);
    c2_g_covSaturation = false;
    if (c2_d13 < 256.0) {
      if (c2_d13 >= 0.0) {
        c2_u6 = (uint8_T)c2_d13;
      } else {
        c2_g_covSaturation = true;
        c2_u6 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1784, 8);
      }
    } else if (c2_d13 >= 256.0) {
      c2_g_covSaturation = true;
      c2_u6 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1784, 8);
    } else {
      c2_u6 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 3, 0,
      c2_g_covSaturation);
    (*chartInstance->c2_y)[c2_i120] = c2_u6;
  }

  c2_f_b = c2_b_x + 0.5;
  for (c2_i122 = 0; c2_i122 < 279000; c2_i122++) {
    c2_d14 = muDoubleScalarRound((real_T)chartInstance->c2_A1[c2_i122] * c2_f_b);
    c2_h_covSaturation = false;
    if (c2_d14 < 256.0) {
      if (c2_d14 >= 0.0) {
        c2_u7 = (uint8_T)c2_d14;
      } else {
        c2_h_covSaturation = true;
        c2_u7 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1817, 10);
      }
    } else if (c2_d14 >= 256.0) {
      c2_h_covSaturation = true;
      c2_u7 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1817, 10);
    } else {
      c2_u7 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 5, 0,
      c2_h_covSaturation);
    chartInstance->c2_A1[c2_i122] = c2_u7;
  }

  c2_c_x = c2_b_i2 - c2_b_i1;
  c2_d_x = c2_c_x;
  c2_e_x = c2_d_x;
  c2_l_y = muDoubleScalarAbs(c2_e_x);
  c2_f_x = c2_b_i1 - c2_b_i2;
  c2_g_x = c2_f_x;
  c2_h_x = c2_g_x;
  c2_m_y = muDoubleScalarAbs(c2_h_x);
  c2_g_b = c2_b_x + 0.5 * ((c2_l_y + (c2_b_i2 - c2_b_i1)) / (2.0 * c2_m_y));
  for (c2_i125 = 0; c2_i125 < 279000; c2_i125++) {
    c2_d15 = muDoubleScalarRound((real_T)chartInstance->c2_I[c2_i125] * c2_g_b);
    c2_i_covSaturation = false;
    if (c2_d15 < 256.0) {
      if (c2_d15 >= 0.0) {
        c2_u9 = (uint8_T)c2_d15;
      } else {
        c2_i_covSaturation = true;
        c2_u9 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1828, 48);
      }
    } else if (c2_d15 >= 256.0) {
      c2_i_covSaturation = true;
      c2_u9 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1828, 48);
    } else {
      c2_u9 = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 7, 0,
      c2_i_covSaturation);
    chartInstance->c2_I[c2_i125] = c2_u9;
  }

  for (c2_i126 = 0; c2_i126 < 279000; c2_i126++) {
    c2_u8 = (uint32_T)chartInstance->c2_A1[c2_i126] + (uint32_T)
      chartInstance->c2_I[c2_i126];
    c2_j_covSaturation = false;
    if (c2_u8 > 255U) {
      c2_j_covSaturation = true;
      c2_u8 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1817, 59);
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 6, 0,
      c2_j_covSaturation);
    c2_u10 = (uint32_T)(uint8_T)c2_u8 + (uint32_T)(*chartInstance->c2_y)[c2_i126];
    c2_k_covSaturation = false;
    if (c2_u10 > 255U) {
      c2_k_covSaturation = true;
      c2_u10 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 1811, 71);
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 4, 0,
      c2_k_covSaturation);
    (*chartInstance->c2_y)[c2_i126] = (uint8_T)c2_u10;
  }

  c2_do_animation_call_c2_untitled1(chartInstance);
  for (c2_i127 = 0; c2_i127 < 279000; c2_i127++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                      (*chartInstance->c2_y)[c2_i127]);
  }
}

static void mdl_start_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  11U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 1, -1, 5063);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1494,
    -1, 1536);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1679,
    -1, 1688);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1682,
    -1, 1688);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1784,
    -1, 1792);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 1811,
    -1, 1882);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 1817,
    -1, 1827);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 1817,
    -1, 1876);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 1828,
    -1, 1876);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 666, -1,
    708);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 854, -1,
    866);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 858,
    -1, 866);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 417, 430, 630);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 435, 448, 622);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1246, 1259,
                     1459);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1264, 1277,
                     1451);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "E:/VIF/pid/MATLAB code/mean_shift/mean_shift.m", 14U, 0U, 1U,
                  0U, 2U, 0U, 0U, 0U, 1U, 1U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, "mean_shift",
                     0, -1, 620);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 176, 189, -1,
                    279);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 416, 436, 492,
                    493);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 152, 163, 291);
  covrtEmlWhileInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 112, 119,
                       493);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 179,
    189, -1, 1U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 419,
    436, -1, 2U);
}

static void mdl_cleanup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void initSimStructsc2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static real_T c2_mean_shift(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_ser[441], real_T c2_p)
{
  real_T c2_K[441];
  real_T c2_b_x[441];
  real_T c2_tmp[441];
  real_T c2_b_y;
  real_T c2_c_i;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_d_x;
  real_T c2_d_y;
  real_T c2_e_x;
  real_T c2_e_y;
  real_T c2_f_a;
  real_T c2_f_x;
  real_T c2_f_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_point;
  real_T c2_pre_w;
  real_T c2_w;
  int32_T c2_b_i;
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_k;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 0, 0);
  for (c2_i = 0; c2_i < 441; c2_i++) {
    c2_tmp[c2_i] = c2_ser[c2_i];
  }

  if (c2_p != (real_T)(int32_T)muDoubleScalarFloor(c2_p)) {
    emlrtIntegerCheckR2012b(c2_p, &c2_l_emlrtDCI, (void *)c2_sp);
  }

  c2_i1 = (int32_T)c2_p;
  if ((c2_i1 < 1) || (c2_i1 > 441)) {
    emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 441, &c2_n_emlrtBCI, (void *)c2_sp);
  }

  c2_pre_w = c2_tmp[c2_i1 - 1];
  c2_point = c2_p;
  do {
    c2_exitg1 = 0;
    covrtEmlWhileEval(chartInstance->c2_covrtInstance, 14U, 0, 0, true);
    for (c2_i2 = 0; c2_i2 < 441; c2_i2++) {
      c2_ser[c2_i2] = c2_tmp[c2_i2] - c2_pre_w;
    }

    for (c2_b_i = 0; c2_b_i < 441; c2_b_i++) {
      c2_c_i = 1.0 + (real_T)c2_b_i;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 0, 1);
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 14U, 0U, 0U, c2_c_i,
                          c2_point, -1, 1U, c2_c_i != c2_point))) {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_m_emlrtDCI, (void *)c2_sp);
        }

        c2_i5 = (int32_T)c2_c_i;
        if ((c2_i5 < 1) || (c2_i5 > 441)) {
          emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 441, &c2_o_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_n_emlrtDCI, (void *)c2_sp);
        }

        c2_i7 = (int32_T)c2_c_i;
        if ((c2_i7 < 1) || (c2_i7 > 441)) {
          emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 441, &c2_p_emlrtBCI, (void *)
            c2_sp);
        }

        c2_ser[c2_i7 - 1] = c2_ser[c2_i5 - 1] / (c2_c_i - c2_point);
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 0, 0);
    for (c2_i3 = 0; c2_i3 < 441; c2_i3++) {
      c2_b_x[c2_i3] = c2_ser[c2_i3];
    }

    for (c2_k = 0; c2_k < 441; c2_k++) {
      c2_b_k = c2_k;
      c2_f_a = c2_b_x[c2_b_k];
      c2_b_y = c2_f_a * c2_f_a;
      c2_ser[c2_b_k] = c2_b_y;
    }

    for (c2_i4 = 0; c2_i4 < 441; c2_i4++) {
      c2_K[c2_i4] = -0.5 * c2_ser[c2_i4];
    }

    for (c2_c_k = 0; c2_c_k < 441; c2_c_k++) {
      c2_d_k = c2_c_k;
      c2_c_x = c2_K[c2_d_k];
      c2_d_x = c2_c_x;
      c2_d_x = muDoubleScalarExp(c2_d_x);
      c2_K[c2_d_k] = c2_d_x;
    }

    for (c2_i6 = 0; c2_i6 < 441; c2_i6++) {
      c2_K[c2_i6] *= 3.9894228040143274;
    }

    for (c2_i8 = 0; c2_i8 < 441; c2_i8++) {
      c2_b_x[c2_i8] = c2_tmp[c2_i8] * c2_K[c2_i8];
    }

    c2_c_y = c2_c_sumColumnB(chartInstance, c2_b_x);
    c2_d_y = c2_c_sumColumnB(chartInstance, c2_K);
    c2_w = c2_c_y / c2_d_y;
    c2_e_x = c2_w - c2_pre_w;
    c2_f_x = c2_e_x;
    c2_g_x = c2_f_x;
    c2_e_y = muDoubleScalarAbs(c2_g_x);
    c2_h_x = c2_w - c2_pre_w;
    c2_i_x = c2_h_x;
    c2_j_x = c2_i_x;
    c2_f_y = muDoubleScalarAbs(c2_j_x);
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c2_covrtInstance, 14U, 0U, 1U, c2_e_y,
                        0.01, -1, 2U, c2_f_y < 0.01))) {
      c2_exitg1 = 1;
    } else {
      c2_pre_w = c2_w;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  } while (c2_exitg1 == 0);

  return c2_w;
}

const mxArray *sf_c2_untitled1_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char_T *c2_data[4] = {
    "789c6360f4f465646060e0638000013608cd0bc4c2203e549c890115a0cb3362a18591d4b332b0c0f521abeb87d2c9f97925a91525104e5e626e2a5c674a7e6e"
    "665e625e494865412a43516a717e4e596a0a58262d332735243337351899e307e2e5ba2149c139202910db392335393bb83497a128a318e1c21c640e3c3c1290",
    "fccb80e45f1602e1810ed0c303a44e0108d1ed2b20d33e58787211b00f269f9b9a98175f9c919956826a7f0285f6b3e1b41f2293925f9a94938ab06f0685f619"
    "e2b40f553eda35d6d52a26ccd32da6203325c6d731c4c7d14921393f2535061112484cbd5ca83e42e1c24fa43b71e50b5e060e864540c167753718e9695f80fe",
    "ef467ada070303655f050efb884d676238ec1340932f374b8e7409712e0a2d8a0cf10f4fcc3035f1cb747245b82300873b909c8cd71d0c487c6477d0da7c0029"
    "2b56e7", "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c2_data[0], 1576U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static real_T c2_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_b_x[279000], int32_T c2_col)
{
  real_T c2_b_y;
  int32_T c2_b_col;
  int32_T c2_b_k;
  int32_T c2_i0;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_col = c2_col - 1;
  c2_i0 = c2_b_col * 450;
  c2_b_y = (real_T)c2_b_x[c2_i0];
  for (c2_k = 0; c2_k < 449; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += (real_T)c2_b_x[(c2_i0 + c2_b_k) + 1];
  }

  return c2_b_y;
}

static real_T c2_b_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_b_x[620])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_b_x[0];
  for (c2_k = 0; c2_k < 619; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_b_x[c2_b_k + 1];
  }

  return c2_b_y;
}

static void c2_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_c_Ain[279000], uint8_T c2_Bout[17515])
{
  emlrtStack c2_st;
  real_T c2_b_weights_data[1550];
  real_T c2_c_weights_data[1130];
  int32_T c2_indices_data[1550];
  int32_T c2_b_indices_data[1130];
  int32_T c2_b_indices_size[2];
  int32_T c2_b_weights_size[2];
  int32_T c2_indices_size[2];
  int32_T c2_weights_size[2];
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_o_emlrtRSI;
  c2_contributions(chartInstance, &c2_st, c2_b_weights_data, c2_weights_size,
                   c2_indices_data, c2_indices_size);
  c2_st.site = &c2_p_emlrtRSI;
  for (c2_i = 0; c2_i < 279000; c2_i++) {
    chartInstance->c2_b_Ain[c2_i] = c2_c_Ain[c2_i];
  }

  c2_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_b_Ain,
                    c2_b_weights_data, c2_weights_size, c2_indices_data,
                    chartInstance->c2_b_APartialResize);
  c2_st.site = &c2_q_emlrtRSI;
  c2_b_contributions(chartInstance, &c2_st, c2_c_weights_data, c2_b_weights_size,
                     c2_b_indices_data, c2_b_indices_size);
  c2_st.site = &c2_r_emlrtRSI;
  c2_b_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_b_APartialResize,
                      c2_c_weights_data, c2_b_weights_size, c2_b_indices_data,
                      c2_Bout);
}

static void c2_contributions(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_b_x[1550];
  real_T c2_e_b[1550];
  real_T c2_b_y[155];
  real_T c2_c_x;
  real_T c2_d_i;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_a;
  real_T c2_g_x;
  real_T c2_h_k;
  real_T c2_h_x;
  real_T c2_j_a;
  real_T c2_oldIdx;
  int32_T c2_indices[1550];
  int32_T c2_aux[1240];
  int32_T c2_b_tmp_data[10];
  int32_T c2_tmp_data[10];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_i;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_a;
  int32_T c2_i_b;
  int32_T c2_i_i;
  int32_T c2_i_varargin_1;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_b;
  int32_T c2_j_varargin_1;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_l_a;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_n_a;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_b_bv[1550];
  boolean_T c2_b_bv1[1550];
  boolean_T c2_b_bv2[1550];
  boolean_T c2_b_bv3[1550];
  boolean_T c2_copyCols[10];
  boolean_T c2_exitg1;
  boolean_T c2_g_b;
  boolean_T c2_h_b;
  boolean_T c2_k_b;
  boolean_T c2_l_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 10; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_e_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_c_k = 0; c2_c_k < 155; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = -2 + (c2_c_varargin_3 << 2);
      c2_f_b = c2_varargin_6;
      c2_c = c2_f_a + c2_f_b;
      c2_indices[c2_g_varargin_1 + 155 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1550; c2_i++) {
    c2_e_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 10; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 155; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_b_x[c2_h_varargin_1 + 155 * c2_b_varargin_2] = (2.5 + 4.0 * (real_T)
        c2_d_varargin_3) - c2_e_b[c2_varargin_5 + 155 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 1550; c2_i1++) {
    c2_b_x[c2_i1] *= 0.25;
  }

  for (c2_i2 = 0; c2_i2 < 1550; c2_i2++) {
    c2_b_bv[c2_i2] = (0.0 <= c2_b_x[c2_i2]);
  }

  for (c2_i3 = 0; c2_i3 < 1550; c2_i3++) {
    c2_b_bv1[c2_i3] = (c2_b_x[c2_i3] <= 1.0);
  }

  for (c2_i4 = 0; c2_i4 < 1550; c2_i4++) {
    c2_b_bv2[c2_i4] = (-1.0 <= c2_b_x[c2_i4]);
  }

  for (c2_i5 = 0; c2_i5 < 1550; c2_i5++) {
    c2_b_bv3[c2_i5] = (c2_b_x[c2_i5] < 0.0);
  }

  for (c2_i6 = 0; c2_i6 < 1550; c2_i6++) {
    c2_b_x[c2_i6] = (c2_b_x[c2_i6] + 1.0) * (real_T)(c2_b_bv2[c2_i6] &&
      c2_b_bv3[c2_i6]) + (1.0 - c2_b_x[c2_i6]) * (real_T)(c2_b_bv[c2_i6] &&
      c2_b_bv1[c2_i6]);
  }

  for (c2_i7 = 0; c2_i7 < 1550; c2_i7++) {
    c2_b_x[c2_i7] *= 0.25;
  }

  for (c2_xj = 0; c2_xj < 155; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_b_x[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 9; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 155;
    for (c2_c_xj = 0; c2_c_xj < 155; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_b_x[c2_ix];
    }
  }

  for (c2_i8 = 0; c2_i8 < 1550; c2_i8++) {
    c2_e_b[c2_i8] = c2_b_x[c2_i8];
  }

  for (c2_f_k = 0; c2_f_k < 10; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 155; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_b_x[c2_j_varargin_1 + 155 * c2_d_varargin_2] = c2_e_b[c2_e_varargin_3 +
        155 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[620] = 620;
  for (c2_b_i = 0; c2_b_i < 619; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 621] = c2_aux[c2_b_i + 620] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1550; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_c_x = c2_oldIdx - 1.0;
    c2_g_a = c2_c_x;
    c2_d_x = c2_g_a;
    c2_e_x = c2_d_x;
    c2_f_x = c2_e_x;
    c2_g_b = muDoubleScalarIsNaN(c2_f_x);
    if (c2_g_b) {
      c2_h_k = rtNaN;
    } else {
      c2_g_x = c2_e_x;
      c2_h_b = muDoubleScalarIsInf(c2_g_x);
      if (c2_h_b) {
        c2_h_k = rtNaN;
      } else if (c2_e_x == 0.0) {
        c2_h_k = 0.0;
      } else {
        c2_h_k = muDoubleScalarRem(c2_e_x, 1240.0);
        c2_rEQ0 = (c2_h_k == 0.0);
        if (c2_rEQ0) {
          c2_h_k = 0.0;
        } else if (c2_e_x < 0.0) {
          c2_h_k += 1240.0;
        }
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_s_emlrtRSI;
  c2_b_st.site = &c2_t_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 10; c2_i9++) {
    c2_copyCols[c2_i9] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 10; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 154;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_u_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_i_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_j_b = c2_i_b;
    if (c2_n_a > c2_j_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_j_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_b_x[c2_b_ix] == 0.0) {
        c2_k_b = true;
      } else {
        c2_h_x = c2_b_x[c2_b_ix];
        c2_l_b = muDoubleScalarIsNaN(c2_h_x);
        if (c2_l_b) {
          c2_k_b = true;
        } else {
          c2_k_b = false;
        }
      }

      if (!c2_k_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 10; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 10; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 155;
  for (c2_i10 = 0; c2_i10 < 155; c2_i10++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_weights_data[c2_i11 + c2_weights_size[0] * c2_i10] = c2_b_x[c2_i10 +
        155 * (c2_tmp_data[c2_i11] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 10; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 10; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 155;
  for (c2_i12 = 0; c2_i12 < 155; c2_i12++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i13 = 0; c2_i13 <= c2_b_loop_ub; c2_i13++) {
      c2_indices_data[c2_i13 + c2_indices_size[0] * c2_i12] = c2_indices[c2_i12
        + 155 * (c2_b_tmp_data[c2_i13] - 1)];
    }
  }
}

static void c2_check_forloop_overflow_error(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call
              (c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c2_sp, NULL,
    "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
}

static void c2_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[279000], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[69750])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_siz[2];
  real_T c2_b_inRInd;
  real_T c2_b_outCInd;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_e_varargin_1;
  real_T c2_h_a;
  real_T c2_ndx;
  real_T c2_rowStart;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_b_c;
  int32_T c2_c;
  int32_T c2_e_b;
  int32_T c2_f_a;
  int32_T c2_g_a;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_inRInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outCInd;
  int32_T c2_pixelIndex;
  uint8_T c2_pixelValue;
  uint8_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inRInd = 0; c2_inRInd < 450; c2_inRInd++) {
    c2_b_inRInd = (real_T)c2_inRInd + 1.0;
    c2_b_st.site = &c2_x_emlrtRSI;
    c2_e_varargin_1 = c2_b_inRInd;
    c2_c_st.site = &c2_ab_emlrtRSI;
    c2_rowStart = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st,
      c2_e_varargin_1);
    for (c2_outCInd = 0; c2_outCInd < 155; c2_outCInd++) {
      c2_b_outCInd = (real_T)c2_outCInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_y_emlrtRSI;
      for (c2_i = 0; c2_i < 2; c2_i++) {
        c2_siz[c2_i] = (real_T)c2_weights_size[c2_i];
      }

      c2_varargin_2 = c2_b_outCInd;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_b_siz[c2_i1] = (int32_T)c2_siz[c2_i1];
      }

      c2_c_st.site = &c2_ab_emlrtRSI;
      c2_ndx = (real_T)c2_b_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i2 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i2; c2_k++) {
        c2_f_a = c2_indices_data[c2_linearInds] - 1;
        c2_c = c2_f_a;
        c2_g_a = c2_c;
        c2_b_c = c2_g_a * 450;
        c2_h_a = c2_rowStart;
        c2_e_b = c2_b_c;
        c2_pixelIndex = ((int32_T)c2_h_a + c2_e_b) - 1;
        c2_pixelValue = c2_in_[c2_pixelIndex];
        c2_sumVal1 += c2_b_weights_data[c2_linearInds] * (real_T)c2_pixelValue;
        c2_linearInds++;
      }

      c2_d1 = muDoubleScalarRound(c2_sumVal1);
      if (c2_d1 < 256.0) {
        if (c2_d1 >= 0.0) {
          c2_u = (uint8_T)c2_d1;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d1 >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_out_[((int32_T)c2_b_inRInd + 450 * ((int32_T)c2_b_outCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static int32_T c2_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_e_varargin_1)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_b_x;
  boolean_T c2_e_b;
  boolean_T c2_p;
  (void)chartInstance;
  c2_b_x = c2_e_varargin_1;
  if (c2_b_x <= 450.0) {
    c2_e_b = true;
  } else {
    c2_e_b = false;
  }

  if (!c2_e_b) {
    c2_p = false;
  } else {
    c2_p = true;
  }

  if (!c2_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c2_sp, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  return (int32_T)c2_e_varargin_1;
}

static int32_T c2_b_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_b_x;
  int32_T c2_b_hi;
  int32_T c2_c_hi;
  int32_T c2_hi;
  int32_T c2_psiz;
  boolean_T c2_b1;
  boolean_T c2_b_p;
  boolean_T c2_e_b;
  boolean_T c2_p;
  (void)chartInstance;
  c2_hi = c2_siz[0];
  c2_b_hi = c2_hi;
  if (1.0 <= (real_T)c2_b_hi) {
    c2_e_b = true;
  } else {
    c2_e_b = false;
  }

  if (!c2_e_b) {
    c2_p = false;
  } else {
    c2_p = true;
  }

  if (!c2_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c2_sp, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_hi = c2_siz[1];
  c2_b_x = c2_varargin_2;
  c2_c_hi = c2_hi;
  if (c2_b_x <= (real_T)c2_c_hi) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_b_p = false;
  } else {
    c2_b_p = true;
  }

  if (!c2_b_p) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c2_sp, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_psiz = c2_siz[0];
  return 1 + c2_psiz * ((int32_T)c2_varargin_2 - 1);
}

static void c2_b_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  static real_T c2_b_dv[113] = { 2.4911504424778759, 6.4734513274336285,
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

  static int32_T c2_iv[113] = { -2, 2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46,
    50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 113, 117,
    121, 125, 129, 133, 137, 141, 145, 149, 153, 157, 161, 165, 169, 173, 177,
    181, 185, 189, 193, 197, 201, 205, 209, 213, 217, 221, 225, 229, 233, 237,
    241, 245, 249, 253, 257, 261, 265, 269, 273, 277, 281, 285, 289, 293, 297,
    301, 305, 309, 313, 317, 321, 325, 329, 333, 337, 340, 344, 348, 352, 356,
    360, 364, 368, 372, 376, 380, 384, 388, 392, 396, 400, 404, 408, 412, 416,
    420, 424, 428, 432, 436, 440, 444 };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_b_x[1130];
  real_T c2_e_b[1130];
  real_T c2_b_y[113];
  real_T c2_c_x;
  real_T c2_d_i;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_a;
  real_T c2_g_x;
  real_T c2_h_k;
  real_T c2_h_x;
  real_T c2_j_a;
  real_T c2_oldIdx;
  int32_T c2_indices[1130];
  int32_T c2_aux[900];
  int32_T c2_b_tmp_data[10];
  int32_T c2_tmp_data[10];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_i;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_a;
  int32_T c2_i_b;
  int32_T c2_i_i;
  int32_T c2_i_varargin_1;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_b;
  int32_T c2_j_varargin_1;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_l_a;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_n_a;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_b_bv[1130];
  boolean_T c2_b_bv1[1130];
  boolean_T c2_b_bv2[1130];
  boolean_T c2_b_bv3[1130];
  boolean_T c2_copyCols[10];
  boolean_T c2_exitg1;
  boolean_T c2_g_b;
  boolean_T c2_h_b;
  boolean_T c2_k_b;
  boolean_T c2_l_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 10; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_e_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_c_k = 0; c2_c_k < 113; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = c2_iv[c2_c_varargin_3];
      c2_f_b = c2_varargin_6;
      c2_c = c2_f_a + c2_f_b;
      c2_indices[c2_g_varargin_1 + 113 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1130; c2_i++) {
    c2_e_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 10; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 113; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_b_x[c2_h_varargin_1 + 113 * c2_b_varargin_2] = c2_b_dv[c2_d_varargin_3]
        - c2_e_b[c2_varargin_5 + 113 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 1130; c2_i1++) {
    c2_b_x[c2_i1] *= 0.25111111111111112;
  }

  for (c2_i2 = 0; c2_i2 < 1130; c2_i2++) {
    c2_b_bv[c2_i2] = (0.0 <= c2_b_x[c2_i2]);
  }

  for (c2_i3 = 0; c2_i3 < 1130; c2_i3++) {
    c2_b_bv1[c2_i3] = (c2_b_x[c2_i3] <= 1.0);
  }

  for (c2_i4 = 0; c2_i4 < 1130; c2_i4++) {
    c2_b_bv2[c2_i4] = (-1.0 <= c2_b_x[c2_i4]);
  }

  for (c2_i5 = 0; c2_i5 < 1130; c2_i5++) {
    c2_b_bv3[c2_i5] = (c2_b_x[c2_i5] < 0.0);
  }

  for (c2_i6 = 0; c2_i6 < 1130; c2_i6++) {
    c2_b_x[c2_i6] = (c2_b_x[c2_i6] + 1.0) * (real_T)(c2_b_bv2[c2_i6] &&
      c2_b_bv3[c2_i6]) + (1.0 - c2_b_x[c2_i6]) * (real_T)(c2_b_bv[c2_i6] &&
      c2_b_bv1[c2_i6]);
  }

  for (c2_i7 = 0; c2_i7 < 1130; c2_i7++) {
    c2_b_x[c2_i7] *= 0.25111111111111112;
  }

  for (c2_xj = 0; c2_xj < 113; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_b_x[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 9; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 113;
    for (c2_c_xj = 0; c2_c_xj < 113; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_b_x[c2_ix];
    }
  }

  for (c2_i8 = 0; c2_i8 < 1130; c2_i8++) {
    c2_e_b[c2_i8] = c2_b_x[c2_i8];
  }

  for (c2_f_k = 0; c2_f_k < 10; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 113; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_b_x[c2_j_varargin_1 + 113 * c2_d_varargin_2] = c2_e_b[c2_e_varargin_3 +
        113 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[450] = 450;
  for (c2_b_i = 0; c2_b_i < 449; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 451] = c2_aux[c2_b_i + 450] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1130; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_c_x = c2_oldIdx - 1.0;
    c2_g_a = c2_c_x;
    c2_d_x = c2_g_a;
    c2_e_x = c2_d_x;
    c2_f_x = c2_e_x;
    c2_g_b = muDoubleScalarIsNaN(c2_f_x);
    if (c2_g_b) {
      c2_h_k = rtNaN;
    } else {
      c2_g_x = c2_e_x;
      c2_h_b = muDoubleScalarIsInf(c2_g_x);
      if (c2_h_b) {
        c2_h_k = rtNaN;
      } else if (c2_e_x == 0.0) {
        c2_h_k = 0.0;
      } else {
        c2_h_k = muDoubleScalarRem(c2_e_x, 900.0);
        c2_rEQ0 = (c2_h_k == 0.0);
        if (c2_rEQ0) {
          c2_h_k = 0.0;
        } else if (c2_e_x < 0.0) {
          c2_h_k += 900.0;
        }
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_s_emlrtRSI;
  c2_b_st.site = &c2_t_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 10; c2_i9++) {
    c2_copyCols[c2_i9] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 10; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 112;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_u_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_i_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_j_b = c2_i_b;
    if (c2_n_a > c2_j_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_j_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_b_x[c2_b_ix] == 0.0) {
        c2_k_b = true;
      } else {
        c2_h_x = c2_b_x[c2_b_ix];
        c2_l_b = muDoubleScalarIsNaN(c2_h_x);
        if (c2_l_b) {
          c2_k_b = true;
        } else {
          c2_k_b = false;
        }
      }

      if (!c2_k_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 10; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 10; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 113;
  for (c2_i10 = 0; c2_i10 < 113; c2_i10++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_weights_data[c2_i11 + c2_weights_size[0] * c2_i10] = c2_b_x[c2_i10 +
        113 * (c2_tmp_data[c2_i11] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 10; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 10; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 113;
  for (c2_i12 = 0; c2_i12 < 113; c2_i12++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i13 = 0; c2_i13 <= c2_b_loop_ub; c2_i13++) {
      c2_indices_data[c2_i13 + c2_indices_size[0] * c2_i12] = c2_indices[c2_i12
        + 113 * (c2_b_tmp_data[c2_i13] - 1)];
    }
  }
}

static void c2_b_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, uint8_T c2_in_[69750], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[17515])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_siz[2];
  real_T c2_b_inCInd;
  real_T c2_b_outRInd;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_ndx;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_c_inCInd;
  int32_T c2_f_a;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_inCInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outRInd;
  uint8_T c2_inCol[450];
  uint8_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inCInd = 0; c2_inCInd < 155; c2_inCInd++) {
    c2_b_inCInd = (real_T)c2_inCInd + 1.0;
    c2_c_inCInd = (int32_T)c2_b_inCInd - 1;
    for (c2_i = 0; c2_i < 450; c2_i++) {
      c2_inCol[c2_i] = c2_in_[c2_i + 450 * c2_c_inCInd];
    }

    for (c2_outRInd = 0; c2_outRInd < 113; c2_outRInd++) {
      c2_b_outRInd = (real_T)c2_outRInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_db_emlrtRSI;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_siz[c2_i1] = (real_T)c2_weights_size[c2_i1];
      }

      c2_varargin_2 = c2_b_outRInd;
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_b_siz[c2_i2] = (int32_T)c2_siz[c2_i2];
      }

      c2_c_st.site = &c2_ab_emlrtRSI;
      c2_ndx = (real_T)c2_b_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i3 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i3; c2_k++) {
        c2_sumVal1 += c2_b_weights_data[c2_linearInds] * (real_T)
          c2_inCol[c2_indices_data[c2_linearInds] - 1];
        c2_f_a = c2_linearInds + 1;
        c2_linearInds = c2_f_a;
      }

      c2_d1 = muDoubleScalarRound(c2_sumVal1);
      if (c2_d1 < 256.0) {
        if (c2_d1 >= 0.0) {
          c2_u = (uint8_T)c2_d1;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d1 >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_out_[((int32_T)c2_b_outRInd + 113 * ((int32_T)c2_b_inCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static real_T c2_c_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_b_x[441])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_b_x[0];
  for (c2_k = 0; c2_k < 440; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_b_x[c2_b_k + 1];
  }

  return c2_b_y;
}

static void c2_b_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_Ain[17515], real_T c2_Bout[279000])
{
  emlrtStack c2_st;
  real_T c2_b_weights_data[1800];
  int32_T c2_b_indices_data[2480];
  int32_T c2_indices_data[1800];
  int32_T c2_b_indices_size[2];
  int32_T c2_b_weights_size[2];
  int32_T c2_indices_size[2];
  int32_T c2_weights_size[2];
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_eb_emlrtRSI;
  c2_c_contributions(chartInstance, &c2_st, c2_b_weights_data, c2_weights_size,
                     c2_indices_data, c2_indices_size);
  c2_st.site = &c2_fb_emlrtRSI;
  for (c2_i = 0; c2_i < 17515; c2_i++) {
    chartInstance->c2_Ain[c2_i] = c2_c_Ain[c2_i];
  }

  c2_c_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_Ain,
                      c2_b_weights_data, c2_weights_size, c2_indices_data,
                      chartInstance->c2_APartialResize);
  c2_st.site = &c2_gb_emlrtRSI;
  c2_d_contributions(chartInstance, &c2_st, chartInstance->c2_weights_data,
                     c2_b_weights_size, c2_b_indices_data, c2_b_indices_size);
  c2_st.site = &c2_hb_emlrtRSI;
  c2_d_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_APartialResize,
                      chartInstance->c2_weights_data, c2_b_weights_size,
                      c2_b_indices_data, c2_Bout);
}

static void c2_c_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  static real_T c2_b_dv[450] = { 0.62555555555555564, 0.87666666666666671,
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

  static int32_T c2_iv[450] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3,
    3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9,
    10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14,
    14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19,
    19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23, 24,
    24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 28, 28, 28, 28, 29,
    29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32, 33, 33, 33, 33,
    34, 34, 34, 34, 35, 35, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37, 38, 38, 38,
    38, 39, 39, 39, 39, 40, 40, 40, 40, 41, 41, 41, 41, 42, 42, 42, 42, 43, 43,
    43, 43, 44, 44, 44, 44, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47, 47, 48,
    48, 48, 48, 49, 49, 49, 49, 50, 50, 50, 50, 51, 51, 51, 51, 52, 52, 52, 52,
    53, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 57, 57, 57,
    57, 58, 58, 58, 58, 59, 59, 59, 59, 60, 60, 60, 60, 61, 61, 61, 61, 62, 62,
    62, 62, 63, 63, 63, 63, 64, 64, 64, 64, 65, 65, 65, 65, 66, 66, 66, 66, 67,
    67, 67, 67, 68, 68, 68, 68, 69, 69, 69, 69, 70, 70, 70, 70, 71, 71, 71, 71,
    72, 72, 72, 72, 73, 73, 73, 73, 74, 74, 74, 74, 75, 75, 75, 75, 76, 76, 76,
    76, 77, 77, 77, 77, 78, 78, 78, 78, 79, 79, 79, 79, 80, 80, 80, 80, 81, 81,
    81, 81, 82, 82, 82, 82, 83, 83, 83, 83, 84, 84, 84, 85, 85, 85, 85, 86, 86,
    86, 86, 87, 87, 87, 87, 88, 88, 88, 88, 89, 89, 89, 89, 90, 90, 90, 90, 91,
    91, 91, 91, 92, 92, 92, 92, 93, 93, 93, 93, 94, 94, 94, 94, 95, 95, 95, 95,
    96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 98, 99, 99, 99, 99, 100, 100,
    100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103, 104,
    104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107,
    108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111,
    111, 112, 112 };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_e_b[1800];
  real_T c2_f[1800];
  real_T c2_b_y[450];
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d_i;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_a;
  real_T c2_h_k;
  real_T c2_j_a;
  real_T c2_oldIdx;
  int32_T c2_indices[1800];
  int32_T c2_aux[226];
  int32_T c2_b_tmp_data[4];
  int32_T c2_tmp_data[4];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_b;
  int32_T c2_h_i;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_a;
  int32_T c2_i_b;
  int32_T c2_i_i;
  int32_T c2_i_varargin_1;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_varargin_1;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_l_a;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_n_a;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_b_bv[1800];
  boolean_T c2_b_bv1[1800];
  boolean_T c2_b_bv2[1800];
  boolean_T c2_b_bv3[1800];
  boolean_T c2_copyCols[4];
  boolean_T c2_exitg1;
  boolean_T c2_g_b;
  boolean_T c2_j_b;
  boolean_T c2_k_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_e_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_c_k = 0; c2_c_k < 450; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = c2_iv[c2_c_varargin_3];
      c2_f_b = c2_varargin_6;
      c2_c = c2_f_a + c2_f_b;
      c2_indices[c2_g_varargin_1 + 450 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1800; c2_i++) {
    c2_e_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 4; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 450; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_f[c2_h_varargin_1 + 450 * c2_b_varargin_2] = c2_b_dv[c2_d_varargin_3] -
        c2_e_b[c2_varargin_5 + 450 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 1800; c2_i1++) {
    c2_b_bv[c2_i1] = (0.0 <= c2_f[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 1800; c2_i2++) {
    c2_b_bv1[c2_i2] = (c2_f[c2_i2] <= 1.0);
  }

  for (c2_i3 = 0; c2_i3 < 1800; c2_i3++) {
    c2_b_bv2[c2_i3] = (-1.0 <= c2_f[c2_i3]);
  }

  for (c2_i4 = 0; c2_i4 < 1800; c2_i4++) {
    c2_b_bv3[c2_i4] = (c2_f[c2_i4] < 0.0);
  }

  for (c2_i5 = 0; c2_i5 < 1800; c2_i5++) {
    c2_f[c2_i5] = (c2_f[c2_i5] + 1.0) * (real_T)(c2_b_bv2[c2_i5] &&
      c2_b_bv3[c2_i5]) + (1.0 - c2_f[c2_i5]) * (real_T)(c2_b_bv[c2_i5] &&
      c2_b_bv1[c2_i5]);
  }

  for (c2_xj = 0; c2_xj < 450; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 450;
    for (c2_c_xj = 0; c2_c_xj < 450; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i6 = 0; c2_i6 < 1800; c2_i6++) {
    c2_e_b[c2_i6] = c2_f[c2_i6];
  }

  for (c2_f_k = 0; c2_f_k < 4; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 450; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_j_varargin_1 + 450 * c2_d_varargin_2] = c2_e_b[c2_e_varargin_3 +
        450 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[113] = 113;
  for (c2_b_i = 0; c2_b_i < 112; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 114] = c2_aux[c2_b_i + 113] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1800; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_b_x = c2_oldIdx - 1.0;
    c2_g_a = c2_b_x;
    c2_c_x = c2_g_a;
    c2_d_x = c2_c_x;
    c2_e_x = c2_d_x;
    c2_g_b = muDoubleScalarIsInf(c2_e_x);
    if (c2_g_b) {
      c2_h_k = rtNaN;
    } else if (c2_d_x == 0.0) {
      c2_h_k = 0.0;
    } else {
      c2_h_k = muDoubleScalarRem(c2_d_x, 226.0);
      c2_rEQ0 = (c2_h_k == 0.0);
      if (c2_rEQ0) {
        c2_h_k = 0.0;
      } else if (c2_d_x < 0.0) {
        c2_h_k += 226.0;
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_s_emlrtRSI;
  c2_b_st.site = &c2_t_emlrtRSI;
  for (c2_i7 = 0; c2_i7 < 4; c2_i7++) {
    c2_copyCols[c2_i7] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 4; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 449;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_u_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_h_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_i_b = c2_h_b;
    if (c2_n_a > c2_i_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_i_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_f[c2_b_ix] == 0.0) {
        c2_j_b = true;
      } else {
        c2_f_x = c2_f[c2_b_ix];
        c2_k_b = muDoubleScalarIsNaN(c2_f_x);
        if (c2_k_b) {
          c2_j_b = true;
        } else {
          c2_j_b = false;
        }
      }

      if (!c2_j_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 4; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 4; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 450;
  for (c2_i8 = 0; c2_i8 < 450; c2_i8++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
      c2_b_weights_data[c2_i9 + c2_weights_size[0] * c2_i8] = c2_f[c2_i8 + 450 *
        (c2_tmp_data[c2_i9] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 4; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 4; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 450;
  for (c2_i10 = 0; c2_i10 < 450; c2_i10++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_b_loop_ub; c2_i11++) {
      c2_indices_data[c2_i11 + c2_indices_size[0] * c2_i10] = c2_indices[c2_i10
        + 450 * (c2_b_tmp_data[c2_i11] - 1)];
    }
  }
}

static void c2_c_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_in_[17515], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[69750])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_inCol[113];
  real_T c2_siz[2];
  real_T c2_b_inCInd;
  real_T c2_b_outRInd;
  real_T c2_d;
  real_T c2_ndx;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_c_inCInd;
  int32_T c2_f_a;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_inCInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outRInd;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inCInd = 0; c2_inCInd < 155; c2_inCInd++) {
    c2_b_inCInd = (real_T)c2_inCInd + 1.0;
    c2_c_inCInd = (int32_T)c2_b_inCInd - 1;
    for (c2_i = 0; c2_i < 113; c2_i++) {
      c2_inCol[c2_i] = c2_in_[c2_i + 113 * c2_c_inCInd];
    }

    for (c2_outRInd = 0; c2_outRInd < 450; c2_outRInd++) {
      c2_b_outRInd = (real_T)c2_outRInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_db_emlrtRSI;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_siz[c2_i1] = (real_T)c2_weights_size[c2_i1];
      }

      c2_varargin_2 = c2_b_outRInd;
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_b_siz[c2_i2] = (int32_T)c2_siz[c2_i2];
      }

      c2_c_st.site = &c2_ab_emlrtRSI;
      c2_ndx = (real_T)c2_b_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i3 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i3; c2_k++) {
        c2_sumVal1 += c2_b_weights_data[c2_linearInds] *
          c2_inCol[c2_indices_data[c2_linearInds] - 1];
        c2_f_a = c2_linearInds + 1;
        c2_linearInds = c2_f_a;
      }

      c2_out_[((int32_T)c2_b_outRInd + 450 * ((int32_T)c2_b_inCInd - 1)) - 1] =
        c2_sumVal1;
    }
  }
}

static void c2_d_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  static int32_T c2_iv[620] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3,
    3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9,
    10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14,
    14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19,
    19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 23, 23, 23, 23, 24,
    24, 24, 24, 25, 25, 25, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28, 28,
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
    81, 81, 81, 82, 82, 82, 82, 83, 83, 83, 83, 84, 84, 84, 84, 85, 85, 85, 85,
    86, 86, 86, 86, 87, 87, 87, 87, 88, 88, 88, 88, 89, 89, 89, 89, 90, 90, 90,
    90, 91, 91, 91, 91, 92, 92, 92, 92, 93, 93, 93, 93, 94, 94, 94, 94, 95, 95,
    95, 95, 96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 98, 99, 99, 99, 99, 100,
    100, 100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103,
    104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107,
    107, 108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111,
    111, 111, 112, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 115,
    115, 115, 115, 116, 116, 116, 116, 117, 117, 117, 117, 118, 118, 118, 118,
    119, 119, 119, 119, 120, 120, 120, 120, 121, 121, 121, 121, 122, 122, 122,
    122, 123, 123, 123, 123, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126,
    126, 126, 127, 127, 127, 127, 128, 128, 128, 128, 129, 129, 129, 129, 130,
    130, 130, 130, 131, 131, 131, 131, 132, 132, 132, 132, 133, 133, 133, 133,
    134, 134, 134, 134, 135, 135, 135, 135, 136, 136, 136, 136, 137, 137, 137,
    137, 138, 138, 138, 138, 139, 139, 139, 139, 140, 140, 140, 140, 141, 141,
    141, 141, 142, 142, 142, 142, 143, 143, 143, 143, 144, 144, 144, 144, 145,
    145, 145, 145, 146, 146, 146, 146, 147, 147, 147, 147, 148, 148, 148, 148,
    149, 149, 149, 149, 150, 150, 150, 150, 151, 151, 151, 151, 152, 152, 152,
    152, 153, 153, 153, 153, 154, 154 };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_e_b[2480];
  real_T c2_f[2480];
  real_T c2_b_y[620];
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d_i;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_a;
  real_T c2_h_k;
  real_T c2_j_a;
  real_T c2_oldIdx;
  int32_T c2_indices[2480];
  int32_T c2_aux[310];
  int32_T c2_b_tmp_data[4];
  int32_T c2_tmp_data[4];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_b;
  int32_T c2_h_i;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_a;
  int32_T c2_i_b;
  int32_T c2_i_i;
  int32_T c2_i_varargin_1;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_varargin_1;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_l_a;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_n_a;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_b_bv[2480];
  boolean_T c2_b_bv1[2480];
  boolean_T c2_b_bv2[2480];
  boolean_T c2_b_bv3[2480];
  boolean_T c2_copyCols[4];
  boolean_T c2_exitg1;
  boolean_T c2_g_b;
  boolean_T c2_j_b;
  boolean_T c2_k_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_e_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_c_k = 0; c2_c_k < 620; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = c2_iv[c2_c_varargin_3];
      c2_f_b = c2_varargin_6;
      c2_c = c2_f_a + c2_f_b;
      c2_indices[c2_g_varargin_1 + 620 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 2480; c2_i++) {
    c2_e_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 4; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 620; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_f[c2_h_varargin_1 + 620 * c2_b_varargin_2] = (0.625 + 0.25 * (real_T)
        c2_d_varargin_3) - c2_e_b[c2_varargin_5 + 620 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 2480; c2_i1++) {
    c2_b_bv[c2_i1] = (0.0 <= c2_f[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 2480; c2_i2++) {
    c2_b_bv1[c2_i2] = (c2_f[c2_i2] <= 1.0);
  }

  for (c2_i3 = 0; c2_i3 < 2480; c2_i3++) {
    c2_b_bv2[c2_i3] = (-1.0 <= c2_f[c2_i3]);
  }

  for (c2_i4 = 0; c2_i4 < 2480; c2_i4++) {
    c2_b_bv3[c2_i4] = (c2_f[c2_i4] < 0.0);
  }

  for (c2_i5 = 0; c2_i5 < 2480; c2_i5++) {
    c2_f[c2_i5] = (c2_f[c2_i5] + 1.0) * (real_T)(c2_b_bv2[c2_i5] &&
      c2_b_bv3[c2_i5]) + (1.0 - c2_f[c2_i5]) * (real_T)(c2_b_bv[c2_i5] &&
      c2_b_bv1[c2_i5]);
  }

  for (c2_xj = 0; c2_xj < 620; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 620;
    for (c2_c_xj = 0; c2_c_xj < 620; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i6 = 0; c2_i6 < 2480; c2_i6++) {
    c2_e_b[c2_i6] = c2_f[c2_i6];
  }

  for (c2_f_k = 0; c2_f_k < 4; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 620; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_j_varargin_1 + 620 * c2_d_varargin_2] = c2_e_b[c2_e_varargin_3 +
        620 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[155] = 155;
  for (c2_b_i = 0; c2_b_i < 154; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 156] = c2_aux[c2_b_i + 155] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 2480; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_b_x = c2_oldIdx - 1.0;
    c2_g_a = c2_b_x;
    c2_c_x = c2_g_a;
    c2_d_x = c2_c_x;
    c2_e_x = c2_d_x;
    c2_g_b = muDoubleScalarIsInf(c2_e_x);
    if (c2_g_b) {
      c2_h_k = rtNaN;
    } else if (c2_d_x == 0.0) {
      c2_h_k = 0.0;
    } else {
      c2_h_k = muDoubleScalarRem(c2_d_x, 310.0);
      c2_rEQ0 = (c2_h_k == 0.0);
      if (c2_rEQ0) {
        c2_h_k = 0.0;
      } else if (c2_d_x < 0.0) {
        c2_h_k += 310.0;
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_s_emlrtRSI;
  c2_b_st.site = &c2_t_emlrtRSI;
  for (c2_i7 = 0; c2_i7 < 4; c2_i7++) {
    c2_copyCols[c2_i7] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 4; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 619;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_u_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_h_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_i_b = c2_h_b;
    if (c2_n_a > c2_i_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_i_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_v_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_f[c2_b_ix] == 0.0) {
        c2_j_b = true;
      } else {
        c2_f_x = c2_f[c2_b_ix];
        c2_k_b = muDoubleScalarIsNaN(c2_f_x);
        if (c2_k_b) {
          c2_j_b = true;
        } else {
          c2_j_b = false;
        }
      }

      if (!c2_j_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 4; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 4; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 620;
  for (c2_i8 = 0; c2_i8 < 620; c2_i8++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
      c2_b_weights_data[c2_i9 + c2_weights_size[0] * c2_i8] = c2_f[c2_i8 + 620 *
        (c2_tmp_data[c2_i9] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 4; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 4; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 620;
  for (c2_i10 = 0; c2_i10 < 620; c2_i10++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_b_loop_ub; c2_i11++) {
      c2_indices_data[c2_i11 + c2_indices_size[0] * c2_i10] = c2_indices[c2_i10
        + 620 * (c2_b_tmp_data[c2_i11] - 1)];
    }
  }
}

static void c2_d_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_in_[69750], real_T c2_b_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[279000])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_siz[2];
  real_T c2_b_inRInd;
  real_T c2_b_outCInd;
  real_T c2_d;
  real_T c2_e_varargin_1;
  real_T c2_h_a;
  real_T c2_ndx;
  real_T c2_pixelValue;
  real_T c2_rowStart;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_b_c;
  int32_T c2_c;
  int32_T c2_e_b;
  int32_T c2_f_a;
  int32_T c2_g_a;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_inRInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outCInd;
  int32_T c2_pixelIndex;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_w_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inRInd = 0; c2_inRInd < 450; c2_inRInd++) {
    c2_b_inRInd = (real_T)c2_inRInd + 1.0;
    c2_b_st.site = &c2_x_emlrtRSI;
    c2_e_varargin_1 = c2_b_inRInd;
    c2_c_st.site = &c2_ab_emlrtRSI;
    c2_rowStart = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st,
      c2_e_varargin_1);
    for (c2_outCInd = 0; c2_outCInd < 620; c2_outCInd++) {
      c2_b_outCInd = (real_T)c2_outCInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_y_emlrtRSI;
      for (c2_i = 0; c2_i < 2; c2_i++) {
        c2_siz[c2_i] = (real_T)c2_weights_size[c2_i];
      }

      c2_varargin_2 = c2_b_outCInd;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_b_siz[c2_i1] = (int32_T)c2_siz[c2_i1];
      }

      c2_c_st.site = &c2_ab_emlrtRSI;
      c2_ndx = (real_T)c2_b_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i2 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i2; c2_k++) {
        c2_f_a = c2_indices_data[c2_linearInds] - 1;
        c2_c = c2_f_a;
        c2_g_a = c2_c;
        c2_b_c = c2_g_a * 450;
        c2_h_a = c2_rowStart;
        c2_e_b = c2_b_c;
        c2_pixelIndex = ((int32_T)c2_h_a + c2_e_b) - 1;
        c2_pixelValue = c2_in_[c2_pixelIndex];
        c2_sumVal1 += c2_b_weights_data[c2_linearInds] * c2_pixelValue;
        c2_linearInds++;
      }

      c2_out_[((int32_T)c2_b_inRInd + 450 * ((int32_T)c2_b_outCInd - 1)) - 1] =
        c2_sumVal1;
    }
  }
}

static void c2_imerode(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000])
{
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_f_a;
  real_T c2_f_i;
  real_T c2_g_a;
  real_T c2_h_j;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_e_j;
  int32_T c2_f_j;
  int32_T c2_g_i;
  int32_T c2_g_j;
  int32_T c2_h_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_j;
  boolean_T c2_b_bv[7225];
  boolean_T c2_b_bv1[7225];
  boolean_T c2_nhood[119];
  boolean_T c2_b_nhood[13];
  for (c2_j = 0; c2_j < 149; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 599; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_b_Apadpre[((int32_T)c2_c_i + 599 * ((int32_T)c2_c_j - 1))
        - 1] = MAX_uint8_T;
    }
  }

  for (c2_b_j = 0; c2_b_j < 620; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 149; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_b_Apadpre[((int32_T)c2_c_i + 599 * (c2_b_j + 149)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 450; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_b_Apadpre[(c2_c + 599 * (c2_b_c + 148)) + 148] = c2_c_A
        [((int32_T)c2_c_i + 450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 149; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 748; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_b_Apad[((int32_T)c2_f_i + 748 * (c2_e_j + 769)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_f_j = 0; c2_f_j < 769; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 149; c2_g_i++) {
      chartInstance->c2_b_Apad[(c2_g_i + 748 * ((int32_T)c2_h_j - 1)) + 599] =
        MAX_uint8_T;
    }
  }

  for (c2_g_j = 0; c2_g_j < 769; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 599; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_b_Apad[((int32_T)c2_f_i + 748 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_b_Apadpre[((int32_T)c2_f_i + 599 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 748.0 + 170.0 * (real_T)c2_h_i;
  }

  for (c2_i1 = 0; c2_i1 < 119; c2_i1++) {
    c2_nhood[c2_i1] = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 119.0 + -118.0 * (real_T)c2_i2;
  }

  erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  for (c2_i3 = 0; c2_i3 < 7225; c2_i3++) {
    c2_b_bv[c2_i3] = c2_bv[c2_i3];
  }

  if (c2_useIPP(chartInstance, c2_b_bv)) {
    for (c2_i5 = 0; c2_i5 < 686664; c2_i5++) {
      chartInstance->c2_b_Apad[c2_i5] = chartInstance->c2_b_B[c2_i5];
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_asizeT[c2_i7] = 748.0 + 170.0 * (real_T)c2_i7;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_nsizeT[c2_i9] = 85.0;
    }

    erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_bv[0],
                    &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  } else {
    for (c2_i4 = 0; c2_i4 < 686664; c2_i4++) {
      chartInstance->c2_b_Apad[c2_i4] = chartInstance->c2_b_B[c2_i4];
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_asizeT[c2_i6] = 748.0 + 170.0 * (real_T)c2_i6;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_nsizeT[c2_i8] = 85.0;
    }

    erode_flat_uint8_tbb(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], 2.0,
                         &c2_bv[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_b_B[0]);
  }

  for (c2_i10 = 0; c2_i10 < 686664; c2_i10++) {
    chartInstance->c2_b_Apad[c2_i10] = chartInstance->c2_b_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 748.0 + 170.0 * (real_T)c2_i11;
  }

  for (c2_i12 = 0; c2_i12 < 119; c2_i12++) {
    c2_nhood[c2_i12] = true;
  }

  for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
    c2_nsizeT[c2_i13] = 1.0 + 118.0 * (real_T)c2_i13;
  }

  erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  for (c2_i14 = 0; c2_i14 < 7225; c2_i14++) {
    c2_b_bv1[c2_i14] = c2_bv1[c2_i14];
  }

  if (c2_useIPP(chartInstance, c2_b_bv1)) {
    for (c2_i16 = 0; c2_i16 < 686664; c2_i16++) {
      chartInstance->c2_b_Apad[c2_i16] = chartInstance->c2_b_B[c2_i16];
    }

    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_asizeT[c2_i18] = 748.0 + 170.0 * (real_T)c2_i18;
    }

    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      c2_nsizeT[c2_i20] = 85.0;
    }

    erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_bv1[0],
                    &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  } else {
    for (c2_i15 = 0; c2_i15 < 686664; c2_i15++) {
      chartInstance->c2_b_Apad[c2_i15] = chartInstance->c2_b_B[c2_i15];
    }

    for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
      c2_asizeT[c2_i17] = 748.0 + 170.0 * (real_T)c2_i17;
    }

    for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
      c2_nsizeT[c2_i19] = 85.0;
    }

    erode_flat_uint8_tbb(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], 2.0,
                         &c2_bv1[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_b_B
                         [0]);
  }

  for (c2_i21 = 0; c2_i21 < 686664; c2_i21++) {
    chartInstance->c2_b_Apad[c2_i21] = chartInstance->c2_b_B[c2_i21];
  }

  for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
    c2_asizeT[c2_i22] = 748.0 + 170.0 * (real_T)c2_i22;
  }

  for (c2_i23 = 0; c2_i23 < 13; c2_i23++) {
    c2_b_nhood[c2_i23] = true;
  }

  for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
    c2_nsizeT[c2_i24] = 1.0 + 12.0 * (real_T)c2_i24;
  }

  erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  for (c2_i25 = 0; c2_i25 < 686664; c2_i25++) {
    chartInstance->c2_b_Apad[c2_i25] = chartInstance->c2_b_B[c2_i25];
  }

  for (c2_i26 = 0; c2_i26 < 2; c2_i26++) {
    c2_asizeT[c2_i26] = 748.0 + 170.0 * (real_T)c2_i26;
  }

  for (c2_i27 = 0; c2_i27 < 13; c2_i27++) {
    c2_b_nhood[c2_i27] = true;
  }

  for (c2_i28 = 0; c2_i28 < 2; c2_i28++) {
    c2_nsizeT[c2_i28] = 13.0 + -12.0 * (real_T)c2_i28;
  }

  erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  c2_i29 = 0;
  c2_i30 = 0;
  for (c2_i31 = 0; c2_i31 < 620; c2_i31++) {
    for (c2_i32 = 0; c2_i32 < 450; c2_i32++) {
      c2_e_B[c2_i32 + c2_i29] = chartInstance->c2_b_B[(c2_i32 + c2_i30) + 111601];
    }

    c2_i29 += 450;
    c2_i30 += 748;
  }
}

static boolean_T c2_useIPP(SFc2_untitled1InstanceStruct *chartInstance,
  boolean_T c2_nhood[7225])
{
  real_T c2_b_k;
  real_T c2_b_n;
  real_T c2_density;
  int32_T c2_f_a;
  int32_T c2_k;
  int32_T c2_n;
  boolean_T c2_b_TF;
  boolean_T c2_isDensityBadForIPP;
  (void)chartInstance;
  c2_n = 0;
  for (c2_k = 0; c2_k < 7225; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    if (c2_nhood[(int32_T)c2_b_k - 1]) {
      c2_f_a = c2_n + 1;
      c2_n = c2_f_a;
    }
  }

  c2_b_n = (real_T)c2_n;
  c2_density = c2_b_n / 7225.0;
  if (c2_density < 0.05) {
    c2_isDensityBadForIPP = true;
  } else {
    c2_isDensityBadForIPP = false;
  }

  if (!c2_isDensityBadForIPP) {
    c2_b_TF = true;
  } else {
    c2_b_TF = false;
  }

  return c2_b_TF;
}

static void c2_imdilate(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000])
{
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_c_i;
  real_T c2_d_j;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c_j;
  int32_T c2_d_i;
  int32_T c2_e_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  boolean_T c2_b_bv[7225];
  boolean_T c2_b_bv1[7225];
  boolean_T c2_nhood[119];
  boolean_T c2_b_nhood[13];
  for (c2_i = 0; c2_i < 279000; c2_i++) {
    chartInstance->c2_b_A[c2_i] = c2_c_A[c2_i];
  }

  c2_padarray(chartInstance, chartInstance->c2_b_A, chartInstance->c2_Apadpre);
  for (c2_j = 0; c2_j < 149; c2_j++) {
    for (c2_b_i = 0; c2_b_i < 748; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_Apad[((int32_T)c2_c_i + 748 * (c2_j + 769)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 769; c2_b_j++) {
    c2_d_j = (real_T)c2_b_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 149; c2_d_i++) {
      chartInstance->c2_Apad[(c2_d_i + 748 * ((int32_T)c2_d_j - 1)) + 599] = 0U;
    }
  }

  for (c2_c_j = 0; c2_c_j < 769; c2_c_j++) {
    c2_d_j = (real_T)c2_c_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 599; c2_e_i++) {
      c2_c_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_Apad[((int32_T)c2_c_i + 748 * ((int32_T)c2_d_j - 1)) - 1]
        = chartInstance->c2_Apadpre[((int32_T)c2_c_i + 599 * ((int32_T)c2_d_j -
        1)) - 1];
    }
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_asizeT[c2_i1] = 748.0 + 170.0 * (real_T)c2_i1;
  }

  for (c2_i2 = 0; c2_i2 < 119; c2_i2++) {
    c2_nhood[c2_i2] = true;
  }

  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_nsizeT[c2_i3] = 119.0 + -118.0 * (real_T)c2_i3;
  }

  dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_B[0]);
  for (c2_i4 = 0; c2_i4 < 7225; c2_i4++) {
    c2_b_bv[c2_i4] = c2_bv[c2_i4];
  }

  if (c2_useIPP(chartInstance, c2_b_bv)) {
    for (c2_i6 = 0; c2_i6 < 686664; c2_i6++) {
      chartInstance->c2_Apad[c2_i6] = chartInstance->c2_B[c2_i6];
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_asizeT[c2_i8] = 748.0 + 170.0 * (real_T)c2_i8;
    }

    for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
      c2_nsizeT[c2_i10] = 85.0;
    }

    dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_bv[0],
                     &c2_nsizeT[0], &chartInstance->c2_B[0]);
  } else {
    for (c2_i5 = 0; c2_i5 < 686664; c2_i5++) {
      chartInstance->c2_Apad[c2_i5] = chartInstance->c2_B[c2_i5];
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_asizeT[c2_i7] = 748.0 + 170.0 * (real_T)c2_i7;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_nsizeT[c2_i9] = 85.0;
    }

    dilate_flat_uint8_tbb(&chartInstance->c2_Apad[0], &c2_asizeT[0], 2.0,
                          &c2_bv[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_B[0]);
  }

  for (c2_i11 = 0; c2_i11 < 686664; c2_i11++) {
    chartInstance->c2_Apad[c2_i11] = chartInstance->c2_B[c2_i11];
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_asizeT[c2_i12] = 748.0 + 170.0 * (real_T)c2_i12;
  }

  for (c2_i13 = 0; c2_i13 < 119; c2_i13++) {
    c2_nhood[c2_i13] = true;
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_nsizeT[c2_i14] = 1.0 + 118.0 * (real_T)c2_i14;
  }

  dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_B[0]);
  for (c2_i15 = 0; c2_i15 < 7225; c2_i15++) {
    c2_b_bv1[c2_i15] = c2_bv1[c2_i15];
  }

  if (c2_useIPP(chartInstance, c2_b_bv1)) {
    for (c2_i17 = 0; c2_i17 < 686664; c2_i17++) {
      chartInstance->c2_Apad[c2_i17] = chartInstance->c2_B[c2_i17];
    }

    for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
      c2_asizeT[c2_i19] = 748.0 + 170.0 * (real_T)c2_i19;
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      c2_nsizeT[c2_i21] = 85.0;
    }

    dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_bv1[0],
                     &c2_nsizeT[0], &chartInstance->c2_B[0]);
  } else {
    for (c2_i16 = 0; c2_i16 < 686664; c2_i16++) {
      chartInstance->c2_Apad[c2_i16] = chartInstance->c2_B[c2_i16];
    }

    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_asizeT[c2_i18] = 748.0 + 170.0 * (real_T)c2_i18;
    }

    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      c2_nsizeT[c2_i20] = 85.0;
    }

    dilate_flat_uint8_tbb(&chartInstance->c2_Apad[0], &c2_asizeT[0], 2.0,
                          &c2_bv1[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_B[0]);
  }

  for (c2_i22 = 0; c2_i22 < 686664; c2_i22++) {
    chartInstance->c2_Apad[c2_i22] = chartInstance->c2_B[c2_i22];
  }

  for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
    c2_asizeT[c2_i23] = 748.0 + 170.0 * (real_T)c2_i23;
  }

  for (c2_i24 = 0; c2_i24 < 13; c2_i24++) {
    c2_b_nhood[c2_i24] = true;
  }

  for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
    c2_nsizeT[c2_i25] = 1.0 + 12.0 * (real_T)c2_i25;
  }

  dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_B[0]);
  for (c2_i26 = 0; c2_i26 < 686664; c2_i26++) {
    chartInstance->c2_Apad[c2_i26] = chartInstance->c2_B[c2_i26];
  }

  for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
    c2_asizeT[c2_i27] = 748.0 + 170.0 * (real_T)c2_i27;
  }

  for (c2_i28 = 0; c2_i28 < 13; c2_i28++) {
    c2_b_nhood[c2_i28] = true;
  }

  for (c2_i29 = 0; c2_i29 < 2; c2_i29++) {
    c2_nsizeT[c2_i29] = 13.0 + -12.0 * (real_T)c2_i29;
  }

  dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_B[0]);
  c2_i30 = 0;
  c2_i31 = 0;
  for (c2_i32 = 0; c2_i32 < 620; c2_i32++) {
    for (c2_i33 = 0; c2_i33 < 450; c2_i33++) {
      c2_e_B[c2_i33 + c2_i30] = chartInstance->c2_B[(c2_i33 + c2_i31) + 111601];
    }

    c2_i30 += 450;
    c2_i31 += 748;
  }
}

static void c2_padarray(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_e_varargin_1[279000], uint8_T c2_e_b[460631])
{
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_f_a;
  real_T c2_g_a;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 149; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 599; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_e_b[((int32_T)c2_c_i + 599 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 620; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 149; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_e_b[((int32_T)c2_c_i + 599 * (c2_b_j + 149)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 450; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      c2_e_b[(c2_c + 599 * (c2_b_c + 148)) + 148] = c2_e_varargin_1[((int32_T)
        c2_c_i + 450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[279000], uint8_T c2_e_b[279000])
{
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  static char_T c2_b_cv1[4] = { 's', 'q', 'r', 't' };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_a__1[625];
  real_T c2_hrow[250];
  real_T c2_nonzero_h_data[250];
  real_T c2_x_data[30];
  real_T c2_b_nonzero_h_data[25];
  real_T c2_b_s[25];
  real_T c2_hcol[25];
  real_T c2_connDimsT[2];
  real_T c2_outSizeT[2];
  real_T c2_padSizeT[2];
  real_T c2_startT[2];
  real_T c2_b_numKernElem;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_ex;
  real_T c2_f_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_b;
  real_T c2_i_x;
  real_T c2_j_b;
  real_T c2_j_x;
  real_T c2_maxval;
  real_T c2_numKernElem;
  real_T c2_rank;
  real_T c2_tol;
  int32_T c2_tmp_data[250];
  int32_T c2_b_tmp_data[25];
  int32_T c2_b_nonzero_h_size[1];
  int32_T c2_b_tmp_size[1];
  int32_T c2_nonzero_h_size[1];
  int32_T c2_tmp_size[1];
  int32_T c2_x_size[1];
  int32_T c2_b_i;
  int32_T c2_b_k;
  int32_T c2_b_last;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_c_i;
  int32_T c2_c_k;
  int32_T c2_c_last;
  int32_T c2_d_i;
  int32_T c2_d_k;
  int32_T c2_e_i;
  int32_T c2_e_k;
  int32_T c2_f_i;
  int32_T c2_f_k;
  int32_T c2_first;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_h_b;
  int32_T c2_h_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_idx;
  int32_T c2_ix;
  int32_T c2_k;
  int32_T c2_last;
  int32_T c2_loop_ub;
  int32_T c2_nz;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_xoffset;
  uint8_T c2_u;
  boolean_T c2_conn[6250];
  boolean_T c2_connb[250];
  boolean_T c2_f_x[25];
  boolean_T c2_b_densityFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_b_p;
  boolean_T c2_b_tooBig;
  boolean_T c2_c_modeFlag;
  boolean_T c2_c_p;
  boolean_T c2_c_tooBig;
  boolean_T c2_d_modeFlag;
  boolean_T c2_d_p;
  boolean_T c2_densityFlag;
  boolean_T c2_e_modeFlag;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_f_b;
  boolean_T c2_f_modeFlag;
  boolean_T c2_f_p;
  boolean_T c2_g_b;
  boolean_T c2_g_modeFlag;
  boolean_T c2_h_modeFlag;
  boolean_T c2_i_modeFlag;
  boolean_T c2_modeFlag;
  boolean_T c2_p;
  boolean_T c2_separable;
  boolean_T c2_tooBig;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_rb_emlrtRSI;
  c2_b_st.site = &c2_yb_emlrtRSI;
  c2_svd(chartInstance, &c2_b_st, c2_a__1, chartInstance->c2_s,
         chartInstance->c2_a__2);
  c2_k = 0;
  for (c2_b_k = 0; c2_b_k < 25; c2_b_k++) {
    c2_b_s[c2_b_k] = chartInstance->c2_s[c2_k];
    c2_k += 26;
  }

  c2_x_size[0] = 25;
  for (c2_i = 0; c2_i < 25; c2_i++) {
    c2_x_data[c2_i] = c2_b_s[c2_i];
  }

  c2_last = c2_x_size[0];
  c2_b_last = c2_last;
  c2_b_x = c2_x_data[0];
  c2_c_x = c2_b_x;
  c2_f_b = muDoubleScalarIsNaN(c2_c_x);
  c2_p = !c2_f_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_c_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_c_k <= c2_b_last)) {
      c2_d_x = c2_x_data[c2_c_k - 1];
      c2_e_x = c2_d_x;
      c2_g_b = muDoubleScalarIsNaN(c2_e_x);
      c2_b_p = !c2_g_b;
      if (c2_b_p) {
        c2_idx = c2_c_k;
        c2_exitg1 = true;
      } else {
        c2_c_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_maxval = c2_x_data[0];
  } else {
    c2_first = c2_idx - 1;
    c2_c_last = c2_last;
    c2_ex = c2_x_data[c2_first];
    c2_i1 = c2_first;
    for (c2_d_k = c2_i1 + 1; c2_d_k < c2_c_last; c2_d_k++) {
      if (c2_ex < c2_x_data[c2_d_k]) {
        c2_ex = c2_x_data[c2_d_k];
      }
    }

    c2_maxval = c2_ex;
  }

  c2_tol = 250.0 * c2_maxval * 2.2204460492503131E-16;
  for (c2_i2 = 0; c2_i2 < 25; c2_i2++) {
    c2_f_x[c2_i2] = (c2_b_s[c2_i2] > c2_tol);
  }

  c2_nz = (int32_T)c2_f_x[0];
  for (c2_e_k = 0; c2_e_k < 24; c2_e_k++) {
    c2_xoffset = c2_e_k;
    c2_ix = c2_xoffset;
    c2_h_b = (int32_T)c2_f_x[c2_ix + 1];
    c2_nz += (c2_h_b != 0);
  }

  c2_rank = (real_T)c2_nz;
  if (c2_rank == 1.0) {
    c2_separable = true;
  } else {
    c2_separable = false;
  }

  if (c2_separable) {
    for (c2_i4 = 0; c2_i4 < 279000; c2_i4++) {
      chartInstance->c2_b_varargin_1[c2_i4] = c2_e_varargin_1[c2_i4];
    }

    c2_padImage(chartInstance, chartInstance->c2_b_varargin_1,
                chartInstance->c2_c_a);
    c2_st.site = &c2_sb_emlrtRSI;
    c2_svd(chartInstance, &c2_st, c2_a__1, chartInstance->c2_s,
           chartInstance->c2_a__2);
    c2_f_k = 0;
    for (c2_g_k = 0; c2_g_k < 25; c2_g_k++) {
      c2_b_s[c2_g_k] = chartInstance->c2_s[c2_f_k];
      c2_f_k += 26;
    }

    for (c2_i5 = 0; c2_i5 < 25; c2_i5++) {
      c2_hcol[c2_i5] = c2_a__1[c2_i5];
    }

    c2_st.site = &c2_tb_emlrtRSI;
    c2_g_x = c2_b_s[0];
    c2_i_b = c2_g_x;
    c2_h_x = c2_i_b;
    if (c2_h_x < 0.0) {
      c2_c_p = true;
    } else {
      c2_c_p = false;
    }

    c2_d_p = c2_c_p;
    if (c2_d_p) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
    }

    c2_i_b = muDoubleScalarSqrt(c2_i_b);
    for (c2_i14 = 0; c2_i14 < 25; c2_i14++) {
      c2_hcol[c2_i14] *= c2_i_b;
    }

    for (c2_i16 = 0; c2_i16 < 250; c2_i16++) {
      c2_hrow[c2_i16] = chartInstance->c2_a__2[c2_i16];
    }

    c2_st.site = &c2_ub_emlrtRSI;
    c2_i_x = c2_b_s[0];
    c2_j_b = c2_i_x;
    c2_j_x = c2_j_b;
    if (c2_j_x < 0.0) {
      c2_e_p = true;
    } else {
      c2_e_p = false;
    }

    c2_f_p = c2_e_p;
    if (c2_f_p) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        4), false);
      sf_mex_call(&c2_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 2U, 14, c2_g_y, 14, c2_i_y)));
    }

    c2_j_b = muDoubleScalarSqrt(c2_j_b);
    c2_f_y = c2_j_b;
    c2_h_y = c2_f_y;
    for (c2_i18 = 0; c2_i18 < 250; c2_i18++) {
      c2_hrow[c2_i18] *= c2_h_y;
    }

    for (c2_i19 = 0; c2_i19 < 412380; c2_i19++) {
      chartInstance->c2_a[c2_i19] = (real_T)chartInstance->c2_c_a[c2_i19];
    }

    c2_st.site = &c2_vb_emlrtRSI;
    c2_trueCount = 0;
    for (c2_c_i = 0; c2_c_i < 250; c2_c_i++) {
      if (c2_hrow[c2_c_i] != 0.0) {
        c2_trueCount++;
      }
    }

    c2_tmp_size[0] = c2_trueCount;
    c2_partialTrueCount = 0;
    for (c2_d_i = 0; c2_d_i < 250; c2_d_i++) {
      if (c2_hrow[c2_d_i] != 0.0) {
        c2_tmp_data[c2_partialTrueCount] = c2_d_i + 1;
        c2_partialTrueCount++;
      }
    }

    c2_nonzero_h_size[0] = c2_tmp_size[0];
    c2_loop_ub = c2_tmp_size[0] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_loop_ub; c2_i20++) {
      c2_nonzero_h_data[c2_i20] = c2_hrow[c2_tmp_data[c2_i20] - 1];
    }

    for (c2_i21 = 0; c2_i21 < 250; c2_i21++) {
      c2_connb[c2_i21] = (c2_hrow[c2_i21] != 0.0);
    }

    c2_densityFlag = false;
    if ((real_T)c2_nonzero_h_size[0] / 250.0 > 0.05) {
      c2_densityFlag = true;
    }

    c2_b_tooBig = true;
    for (c2_e_i = 0; c2_e_i < 2; c2_e_i++) {
      c2_b_tooBig = false;
    }

    if (c2_densityFlag && (!c2_b_tooBig)) {
      c2_d_modeFlag = true;
    } else {
      c2_d_modeFlag = false;
    }

    if (c2_d_modeFlag) {
      c2_e_modeFlag = true;
    } else {
      c2_e_modeFlag = false;
    }

    c2_f_modeFlag = c2_e_modeFlag;
    if (c2_f_modeFlag) {
      for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
        c2_padSizeT[c2_i22] = 474.0 + 396.0 * (real_T)c2_i22;
      }

      for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
        c2_outSizeT[c2_i24] = 474.0 + 146.0 * (real_T)c2_i24;
      }

      for (c2_i26 = 0; c2_i26 < 2; c2_i26++) {
        c2_connDimsT[c2_i26] = 1.0 + 249.0 * (real_T)c2_i26;
      }

      ippfilter_real64(&chartInstance->c2_a[0], &chartInstance->c2_b[0],
                       &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_hrow[0],
                       &c2_connDimsT[0], false);
    } else {
      c2_numKernElem = (real_T)c2_nonzero_h_size[0];
      for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
        c2_padSizeT[c2_i23] = 474.0 + 396.0 * (real_T)c2_i23;
      }

      for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
        c2_outSizeT[c2_i25] = 474.0 + 146.0 * (real_T)c2_i25;
      }

      for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
        c2_connDimsT[c2_i27] = 1.0 + 249.0 * (real_T)c2_i27;
      }

      for (c2_i28 = 0; c2_i28 < 2; c2_i28++) {
        c2_startT[c2_i28] = 125.0 * (real_T)c2_i28;
      }

      imfilter_real64(&chartInstance->c2_a[0], &chartInstance->c2_b[0], 2.0,
                      &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_nonzero_h_data
                      [0], c2_numKernElem, &c2_connb[0], 2.0, &c2_connDimsT[0],
                      &c2_startT[0], 2.0, true, false);
    }

    c2_st.site = &c2_wb_emlrtRSI;
    c2_b_trueCount = 0;
    for (c2_f_i = 0; c2_f_i < 25; c2_f_i++) {
      if (c2_hcol[c2_f_i] != 0.0) {
        c2_b_trueCount++;
      }
    }

    c2_b_tmp_size[0] = c2_b_trueCount;
    c2_b_partialTrueCount = 0;
    for (c2_g_i = 0; c2_g_i < 25; c2_g_i++) {
      if (c2_hcol[c2_g_i] != 0.0) {
        c2_b_tmp_data[c2_b_partialTrueCount] = c2_g_i + 1;
        c2_b_partialTrueCount++;
      }
    }

    c2_b_nonzero_h_size[0] = c2_b_tmp_size[0];
    c2_b_loop_ub = c2_b_tmp_size[0] - 1;
    for (c2_i29 = 0; c2_i29 <= c2_b_loop_ub; c2_i29++) {
      c2_b_nonzero_h_data[c2_i29] = c2_hcol[c2_b_tmp_data[c2_i29] - 1];
    }

    for (c2_i30 = 0; c2_i30 < 25; c2_i30++) {
      c2_f_x[c2_i30] = (c2_hcol[c2_i30] != 0.0);
    }

    c2_b_densityFlag = false;
    if ((real_T)c2_b_nonzero_h_size[0] / 25.0 > 0.05) {
      c2_b_densityFlag = true;
    }

    c2_c_tooBig = true;
    for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
      c2_c_tooBig = false;
    }

    if (c2_b_densityFlag && (!c2_c_tooBig)) {
      c2_g_modeFlag = true;
    } else {
      c2_g_modeFlag = false;
    }

    if (c2_g_modeFlag) {
      c2_h_modeFlag = true;
    } else {
      c2_h_modeFlag = false;
    }

    c2_i_modeFlag = c2_h_modeFlag;
    if (c2_i_modeFlag) {
      for (c2_i31 = 0; c2_i31 < 2; c2_i31++) {
        c2_padSizeT[c2_i31] = 474.0 + 146.0 * (real_T)c2_i31;
      }

      for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
        c2_outSizeT[c2_i33] = 450.0 + 170.0 * (real_T)c2_i33;
      }

      for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
        c2_connDimsT[c2_i35] = 25.0 + -24.0 * (real_T)c2_i35;
      }

      ippfilter_real64(&chartInstance->c2_b[0], &chartInstance->c2_b_b[0],
                       &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_hcol[0],
                       &c2_connDimsT[0], false);
    } else {
      c2_b_numKernElem = (real_T)c2_b_nonzero_h_size[0];
      for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
        c2_padSizeT[c2_i32] = 474.0 + 146.0 * (real_T)c2_i32;
      }

      for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
        c2_outSizeT[c2_i34] = 450.0 + 170.0 * (real_T)c2_i34;
      }

      for (c2_i36 = 0; c2_i36 < 2; c2_i36++) {
        c2_connDimsT[c2_i36] = 25.0 + -24.0 * (real_T)c2_i36;
      }

      for (c2_i37 = 0; c2_i37 < 2; c2_i37++) {
        c2_startT[c2_i37] = 12.0 + -12.0 * (real_T)c2_i37;
      }

      imfilter_real64(&chartInstance->c2_b[0], &chartInstance->c2_b_b[0], 2.0,
                      &c2_outSizeT[0], 2.0, &c2_padSizeT[0],
                      &c2_b_nonzero_h_data[0], c2_b_numKernElem, &c2_f_x[0], 2.0,
                      &c2_connDimsT[0], &c2_startT[0], 2.0, true, false);
    }

    for (c2_i38 = 0; c2_i38 < 279000; c2_i38++) {
      c2_d = muDoubleScalarRound(chartInstance->c2_b_b[c2_i38]);
      if (c2_d < 256.0) {
        if (c2_d >= 0.0) {
          c2_u = (uint8_T)c2_d;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_e_b[c2_i38] = c2_u;
    }
  } else {
    for (c2_i3 = 0; c2_i3 < 279000; c2_i3++) {
      chartInstance->c2_varargin_1[c2_i3] = c2_e_varargin_1[c2_i3];
    }

    c2_padImage(chartInstance, chartInstance->c2_varargin_1,
                chartInstance->c2_c_a);
    c2_st.site = &c2_xb_emlrtRSI;
    c2_tooBig = true;
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
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
      for (c2_i7 = 0; c2_i7 < 6250; c2_i7++) {
        chartInstance->c2_s[c2_i7] = 0.00016;
      }

      for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
        c2_padSizeT[c2_i9] = 474.0 + 396.0 * (real_T)c2_i9;
      }

      for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
        c2_outSizeT[c2_i11] = 450.0 + 170.0 * (real_T)c2_i11;
      }

      for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
        c2_connDimsT[c2_i13] = 25.0 + 225.0 * (real_T)c2_i13;
      }

      ippfilter_uint8(&chartInstance->c2_c_a[0], &c2_e_b[0], &c2_outSizeT[0],
                      2.0, &c2_padSizeT[0], &chartInstance->c2_s[0],
                      &c2_connDimsT[0], false);
    } else {
      for (c2_i6 = 0; c2_i6 < 6250; c2_i6++) {
        chartInstance->c2_s[c2_i6] = 0.00016;
      }

      for (c2_i8 = 0; c2_i8 < 6250; c2_i8++) {
        c2_conn[c2_i8] = true;
      }

      for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
        c2_padSizeT[c2_i10] = 474.0 + 396.0 * (real_T)c2_i10;
      }

      for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
        c2_outSizeT[c2_i12] = 450.0 + 170.0 * (real_T)c2_i12;
      }

      for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
        c2_connDimsT[c2_i15] = 25.0 + 225.0 * (real_T)c2_i15;
      }

      for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
        c2_startT[c2_i17] = 12.0 + 113.0 * (real_T)c2_i17;
      }

      imfilter_uint8(&chartInstance->c2_c_a[0], &c2_e_b[0], 2.0, &c2_outSizeT[0],
                     2.0, &c2_padSizeT[0], &chartInstance->c2_s[0], 6250.0,
                     &c2_conn[0], 2.0, &c2_connDimsT[0], &c2_startT[0], 2.0,
                     true, false);
    }
  }
}

static void c2_svd(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_U[625], real_T c2_S[6250], real_T c2_V
                   [62500])
{
  emlrtStack c2_st;
  real_T c2_U1[625];
  real_T c2_b_s[25];
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  boolean_T c2_allFiniteA;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_p = true;
  for (c2_k = 0; c2_k < 6250; c2_k++) {
    if (c2_p) {
      c2_c_p = true;
    } else {
      c2_c_p = false;
    }

    c2_p = c2_c_p;
  }

  c2_b_p = !c2_p;
  c2_allFiniteA = !c2_b_p;
  if (c2_allFiniteA) {
    c2_st.site = &c2_ac_emlrtRSI;
    c2_b_svd(chartInstance, &c2_st, c2_U, c2_b_s, c2_V);
  } else {
    for (c2_i = 0; c2_i < 6250; c2_i++) {
      chartInstance->c2_dv[c2_i] = 0.0;
    }

    c2_st.site = &c2_bc_emlrtRSI;
    c2_c_svd(chartInstance, &c2_st, chartInstance->c2_dv, c2_U1, c2_b_s,
             chartInstance->c2_V1);
    for (c2_i2 = 0; c2_i2 < 625; c2_i2++) {
      c2_U[c2_i2] = rtNaN;
    }

    for (c2_i3 = 0; c2_i3 < 25; c2_i3++) {
      c2_b_s[c2_i3] = rtNaN;
    }

    for (c2_i4 = 0; c2_i4 < 62500; c2_i4++) {
      c2_V[c2_i4] = rtNaN;
    }
  }

  for (c2_i1 = 0; c2_i1 < 6250; c2_i1++) {
    c2_S[c2_i1] = 0.0;
  }

  c2_b_k = 0;
  for (c2_c_k = 0; c2_c_k < 25; c2_c_k++) {
    c2_S[c2_b_k] = c2_b_s[c2_c_k];
    c2_b_k += 26;
  }
}

static void c2_b_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[625], real_T c2_b_s[25],
                     real_T c2_V[62500])
{
  ptrdiff_t c2_info_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldu_t;
  ptrdiff_t c2_ldv_t;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_b_dv[6250];
  int32_T c2_b_info;
  int32_T c2_c_info;
  int32_T c2_d_info;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_info;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.site = &c2_ec_emlrtRSI;
  for (c2_i = 0; c2_i < 6250; c2_i++) {
    chartInstance->c2_A[c2_i] = 0.00016;
  }

  c2_m_t = (ptrdiff_t)25;
  c2_n_t = (ptrdiff_t)250;
  c2_lda_t = (ptrdiff_t)25;
  c2_ldu_t = (ptrdiff_t)25;
  c2_ldv_t = (ptrdiff_t)250;
  c2_info_t = LAPACKE_dgesdd(102, 'A', c2_m_t, c2_n_t, &chartInstance->c2_A[0],
    c2_lda_t, &c2_b_s[0], &c2_U[0], c2_ldu_t, &chartInstance->c2_Vt[0], c2_ldv_t);
  c2_info = (int32_T)c2_info_t;
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_dc_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 6250; c2_i3++) {
      c2_b_dv[c2_i3] = 0.00016;
    }

    c2_c_st.site = &c2_gc_emlrtRSI;
    c2_ceval_xgesvd(chartInstance, &c2_c_st, c2_b_dv, c2_U, c2_b_s, c2_V,
                    &c2_c_info);
    c2_d_info = c2_c_info;
    c2_b_info = c2_d_info;
  } else {
    c2_i1 = 0;
    for (c2_i2 = 0; c2_i2 < 250; c2_i2++) {
      c2_i4 = 0;
      for (c2_i5 = 0; c2_i5 < 250; c2_i5++) {
        c2_V[c2_i5 + c2_i1] = chartInstance->c2_Vt[c2_i4 + c2_i2];
        c2_i4 += 250;
      }

      c2_i1 += 250;
    }
  }

  if (c2_b_info > 0) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static boolean_T c2_infocheck(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_info)
{
  static char_T c2_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 's', 'd', 'd' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  int32_T c2_b_info;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_b_info = c2_info;
  c2_b_p = (c2_b_info < 0);
  if (c2_b_p) {
    if (c2_info == -1010) {
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      sf_mex_call(c2_sp, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
    } else {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        14), false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_info, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(c2_sp, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 3U, 14, c2_d_y, 14, c2_f_y, 14, c2_g_y)));
    }
  } else {
    c2_p = false;
  }

  return c2_p;
}

static void c2_ceval_xgesvd(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[6250], real_T c2_U[625], real_T c2_S[25],
  real_T c2_V[62500], int32_T *c2_info)
{
  ptrdiff_t c2_info_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldu_t;
  ptrdiff_t c2_ldv_t;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  emlrtStack c2_st;
  real_T c2_superb[24];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_m_t = (ptrdiff_t)25;
  c2_n_t = (ptrdiff_t)250;
  c2_lda_t = (ptrdiff_t)25;
  c2_ldu_t = (ptrdiff_t)25;
  c2_ldv_t = (ptrdiff_t)250;
  c2_info_t = LAPACKE_dgesvd(102, 'A', 'A', c2_m_t, c2_n_t, &c2_c_A[0], c2_lda_t,
    &c2_S[0], &c2_U[0], c2_ldu_t, &chartInstance->c2_b_Vt[0], c2_ldv_t,
    &c2_superb[0]);
  *c2_info = (int32_T)c2_info_t;
  c2_i = 0;
  for (c2_i1 = 0; c2_i1 < 250; c2_i1++) {
    c2_i2 = 0;
    for (c2_i3 = 0; c2_i3 < 250; c2_i3++) {
      c2_V[c2_i3 + c2_i] = chartInstance->c2_b_Vt[c2_i2 + c2_i1];
      c2_i2 += 250;
    }

    c2_i += 250;
  }

  c2_st.site = &c2_hc_emlrtRSI;
  c2_b_infocheck(chartInstance, &c2_st, *c2_info);
}

static boolean_T c2_b_infocheck(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_info)
{
  static char_T c2_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 's', 'v', 'd' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  int32_T c2_b_info;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_b_info = c2_info;
  c2_b_p = (c2_b_info < 0);
  if (c2_b_p) {
    if (c2_info == -1010) {
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 12),
                    false);
      sf_mex_call(c2_sp, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
    } else {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 33),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        14), false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_info, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(c2_sp, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 3U, 14, c2_d_y, 14, c2_f_y, 14, c2_g_y)));
    }
  } else {
    c2_p = false;
  }

  return c2_p;
}

static void c2_c_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_c_A[6250], real_T c2_U[625],
                     real_T c2_b_s[25], real_T c2_V[62500])
{
  ptrdiff_t c2_info_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldu_t;
  ptrdiff_t c2_ldv_t;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_d_A[6250];
  int32_T c2_b_info;
  int32_T c2_c_info;
  int32_T c2_d_info;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_info;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.site = &c2_ec_emlrtRSI;
  for (c2_i = 0; c2_i < 6250; c2_i++) {
    c2_d_A[c2_i] = c2_c_A[c2_i];
  }

  c2_m_t = (ptrdiff_t)25;
  c2_n_t = (ptrdiff_t)250;
  c2_lda_t = (ptrdiff_t)25;
  c2_ldu_t = (ptrdiff_t)25;
  c2_ldv_t = (ptrdiff_t)250;
  c2_info_t = LAPACKE_dgesdd(102, 'A', c2_m_t, c2_n_t, &c2_d_A[0], c2_lda_t,
    &c2_b_s[0], &c2_U[0], c2_ldu_t, &chartInstance->c2_c_Vt[0], c2_ldv_t);
  c2_info = (int32_T)c2_info_t;
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_dc_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 6250; c2_i3++) {
      c2_d_A[c2_i3] = c2_c_A[c2_i3];
    }

    c2_c_st.site = &c2_gc_emlrtRSI;
    c2_ceval_xgesvd(chartInstance, &c2_c_st, c2_d_A, c2_U, c2_b_s, c2_V,
                    &c2_c_info);
    c2_d_info = c2_c_info;
    c2_b_info = c2_d_info;
  } else {
    c2_i1 = 0;
    for (c2_i2 = 0; c2_i2 < 250; c2_i2++) {
      c2_i4 = 0;
      for (c2_i5 = 0; c2_i5 < 250; c2_i5++) {
        c2_V[c2_i5 + c2_i1] = chartInstance->c2_c_Vt[c2_i4 + c2_i2];
        c2_i4 += 250;
      }

      c2_i1 += 250;
    }
  }

  if (c2_b_info > 0) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static void c2_padImage(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_a_tmp[279000], uint8_T c2_f_a[412380])
{
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_g_a;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_j_a;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_c_c;
  int32_T c2_d_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_e_j;
  int32_T c2_f_i;
  int32_T c2_f_j;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 125; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 474; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 474 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 125; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 474; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 474 * (c2_b_j + 745)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 12; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_g_a = c2_c_j;
      c2_c = (int32_T)c2_g_a;
      c2_f_a[((int32_T)c2_c_i + 474 * (c2_c + 124)) - 1] = 0U;
    }
  }

  for (c2_e_j = 0; c2_e_j < 620; c2_e_j++) {
    c2_c_j = (real_T)c2_e_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 12; c2_e_i++) {
      c2_h_a = c2_c_j;
      c2_b_c = (int32_T)c2_h_a;
      c2_f_a[(c2_e_i + 474 * (c2_b_c + 124)) + 462] = 0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 620; c2_f_j++) {
    c2_c_j = (real_T)c2_f_j + 1.0;
    for (c2_f_i = 0; c2_f_i < 450; c2_f_i++) {
      c2_c_i = (real_T)c2_f_i + 1.0;
      c2_i_a = c2_c_i;
      c2_c_c = (int32_T)c2_i_a;
      c2_j_a = c2_c_j;
      c2_d_c = (int32_T)c2_j_a;
      c2_f_a[(c2_c_c + 474 * (c2_d_c + 124)) + 11] = c2_a_tmp[((int32_T)c2_c_i +
        450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_b_imerode(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000])
{
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_f_a;
  real_T c2_f_i;
  real_T c2_g_a;
  real_T c2_h_j;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_e_j;
  int32_T c2_f_j;
  int32_T c2_g_i;
  int32_T c2_g_j;
  int32_T c2_h_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_j;
  boolean_T c2_nhood[79];
  boolean_T c2_b_nhood[9];
  for (c2_j = 0; c2_j < 99; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 549; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_d_Apadpre[((int32_T)c2_c_i + 549 * ((int32_T)c2_c_j - 1))
        - 1] = MAX_uint8_T;
    }
  }

  for (c2_b_j = 0; c2_b_j < 620; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 99; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_d_Apadpre[((int32_T)c2_c_i + 549 * (c2_b_j + 99)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 450; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_d_Apadpre[(c2_c + 549 * (c2_b_c + 98)) + 98] = c2_c_A
        [((int32_T)c2_c_i + 450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 99; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 648; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_d_Apad[((int32_T)c2_f_i + 648 * (c2_e_j + 719)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_f_j = 0; c2_f_j < 719; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 99; c2_g_i++) {
      chartInstance->c2_d_Apad[(c2_g_i + 648 * ((int32_T)c2_h_j - 1)) + 549] =
        MAX_uint8_T;
    }
  }

  for (c2_g_j = 0; c2_g_j < 719; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 549; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_d_Apad[((int32_T)c2_f_i + 648 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_d_Apadpre[((int32_T)c2_f_i + 549 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 648.0 + 170.0 * (real_T)c2_h_i;
  }

  for (c2_i1 = 0; c2_i1 < 79; c2_i1++) {
    c2_nhood[c2_i1] = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 79.0 + -78.0 * (real_T)c2_i2;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i3 = 0; c2_i3 < 530064; c2_i3++) {
    chartInstance->c2_d_Apad[c2_i3] = chartInstance->c2_d_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 648.0 + 170.0 * (real_T)c2_i4;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 57.0;
  }

  erode_flat_uint8_tbb(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], 2.0,
                       &c2_bv2[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_d_B[0]);
  for (c2_i6 = 0; c2_i6 < 530064; c2_i6++) {
    chartInstance->c2_d_Apad[c2_i6] = chartInstance->c2_d_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
    c2_asizeT[c2_i7] = 648.0 + 170.0 * (real_T)c2_i7;
  }

  for (c2_i8 = 0; c2_i8 < 79; c2_i8++) {
    c2_nhood[c2_i8] = true;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 78.0 * (real_T)c2_i9;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i10 = 0; c2_i10 < 530064; c2_i10++) {
    chartInstance->c2_d_Apad[c2_i10] = chartInstance->c2_d_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 648.0 + 170.0 * (real_T)c2_i11;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 57.0;
  }

  erode_flat_uint8_tbb(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], 2.0,
                       &c2_bv3[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_d_B[0]);
  for (c2_i13 = 0; c2_i13 < 530064; c2_i13++) {
    chartInstance->c2_d_Apad[c2_i13] = chartInstance->c2_d_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_asizeT[c2_i14] = 648.0 + 170.0 * (real_T)c2_i14;
  }

  for (c2_i15 = 0; c2_i15 < 9; c2_i15++) {
    c2_b_nhood[c2_i15] = true;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 8.0 * (real_T)c2_i16;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i17 = 0; c2_i17 < 530064; c2_i17++) {
    chartInstance->c2_d_Apad[c2_i17] = chartInstance->c2_d_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
    c2_asizeT[c2_i18] = 648.0 + 170.0 * (real_T)c2_i18;
  }

  for (c2_i19 = 0; c2_i19 < 9; c2_i19++) {
    c2_b_nhood[c2_i19] = true;
  }

  for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
    c2_nsizeT[c2_i20] = 9.0 + -8.0 * (real_T)c2_i20;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  c2_i21 = 0;
  c2_i22 = 0;
  for (c2_i23 = 0; c2_i23 < 620; c2_i23++) {
    for (c2_i24 = 0; c2_i24 < 450; c2_i24++) {
      c2_e_B[c2_i24 + c2_i21] = chartInstance->c2_d_B[(c2_i24 + c2_i22) + 64251];
    }

    c2_i21 += 450;
    c2_i22 += 648;
  }
}

static void c2_b_imdilate(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_c_A[279000], uint8_T c2_e_B[279000])
{
  real_T c2_asizeT[2];
  real_T c2_nsizeT[2];
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_f_a;
  real_T c2_f_i;
  real_T c2_g_a;
  real_T c2_h_j;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_e_j;
  int32_T c2_f_j;
  int32_T c2_g_i;
  int32_T c2_g_j;
  int32_T c2_h_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_j;
  boolean_T c2_nhood[79];
  boolean_T c2_b_nhood[9];
  for (c2_j = 0; c2_j < 99; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 549; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_c_Apadpre[((int32_T)c2_c_i + 549 * ((int32_T)c2_c_j - 1))
        - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 620; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 99; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_c_Apadpre[((int32_T)c2_c_i + 549 * (c2_b_j + 99)) - 1] =
        0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 450; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_c_Apadpre[(c2_c + 549 * (c2_b_c + 98)) + 98] = c2_c_A
        [((int32_T)c2_c_i + 450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 99; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 648; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_c_Apad[((int32_T)c2_f_i + 648 * (c2_e_j + 719)) - 1] =
        0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 719; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 99; c2_g_i++) {
      chartInstance->c2_c_Apad[(c2_g_i + 648 * ((int32_T)c2_h_j - 1)) + 549] =
        0U;
    }
  }

  for (c2_g_j = 0; c2_g_j < 719; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 549; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_c_Apad[((int32_T)c2_f_i + 648 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_c_Apadpre[((int32_T)c2_f_i + 549 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 648.0 + 170.0 * (real_T)c2_h_i;
  }

  for (c2_i1 = 0; c2_i1 < 79; c2_i1++) {
    c2_nhood[c2_i1] = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 79.0 + -78.0 * (real_T)c2_i2;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i3 = 0; c2_i3 < 530064; c2_i3++) {
    chartInstance->c2_c_Apad[c2_i3] = chartInstance->c2_c_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 648.0 + 170.0 * (real_T)c2_i4;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 57.0;
  }

  dilate_flat_uint8_tbb(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], 2.0,
                        &c2_bv2[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_c_B[0]);
  for (c2_i6 = 0; c2_i6 < 530064; c2_i6++) {
    chartInstance->c2_c_Apad[c2_i6] = chartInstance->c2_c_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
    c2_asizeT[c2_i7] = 648.0 + 170.0 * (real_T)c2_i7;
  }

  for (c2_i8 = 0; c2_i8 < 79; c2_i8++) {
    c2_nhood[c2_i8] = true;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 78.0 * (real_T)c2_i9;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i10 = 0; c2_i10 < 530064; c2_i10++) {
    chartInstance->c2_c_Apad[c2_i10] = chartInstance->c2_c_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 648.0 + 170.0 * (real_T)c2_i11;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 57.0;
  }

  dilate_flat_uint8_tbb(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], 2.0,
                        &c2_bv3[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_c_B[0]);
  for (c2_i13 = 0; c2_i13 < 530064; c2_i13++) {
    chartInstance->c2_c_Apad[c2_i13] = chartInstance->c2_c_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_asizeT[c2_i14] = 648.0 + 170.0 * (real_T)c2_i14;
  }

  for (c2_i15 = 0; c2_i15 < 9; c2_i15++) {
    c2_b_nhood[c2_i15] = true;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 8.0 * (real_T)c2_i16;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i17 = 0; c2_i17 < 530064; c2_i17++) {
    chartInstance->c2_c_Apad[c2_i17] = chartInstance->c2_c_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
    c2_asizeT[c2_i18] = 648.0 + 170.0 * (real_T)c2_i18;
  }

  for (c2_i19 = 0; c2_i19 < 9; c2_i19++) {
    c2_b_nhood[c2_i19] = true;
  }

  for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
    c2_nsizeT[c2_i20] = 9.0 + -8.0 * (real_T)c2_i20;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  c2_i21 = 0;
  c2_i22 = 0;
  for (c2_i23 = 0; c2_i23 < 620; c2_i23++) {
    for (c2_i24 = 0; c2_i24 < 450; c2_i24++) {
      c2_e_B[c2_i24 + c2_i21] = chartInstance->c2_c_B[(c2_i24 + c2_i22) + 64251];
    }

    c2_i21 += 450;
    c2_i22 += 648;
  }
}

static void c2_b_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[279000], uint8_T c2_e_b[279000])
{
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  static char_T c2_b_cv1[4] = { 's', 'q', 'r', 't' };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_a__1[900];
  real_T c2_b_a__2[900];
  real_T c2_b_s[900];
  real_T c2_c_s[30];
  real_T c2_hcol[30];
  real_T c2_hrow[30];
  real_T c2_x_data[30];
  real_T c2_connDimsT[2];
  real_T c2_outSizeT[2];
  real_T c2_padSizeT[2];
  real_T c2_startT[2];
  real_T c2_b_numKernElem;
  real_T c2_b_x;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_ex;
  real_T c2_f_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_b;
  real_T c2_i_x;
  real_T c2_j_b;
  real_T c2_j_x;
  real_T c2_maxval;
  real_T c2_numKernElem;
  real_T c2_rank;
  real_T c2_tol;
  int32_T c2_b_tmp_data[30];
  int32_T c2_tmp_data[30];
  int32_T c2_b_tmp_size[1];
  int32_T c2_tmp_size[1];
  int32_T c2_x_size[1];
  int32_T c2_b_i;
  int32_T c2_b_k;
  int32_T c2_b_last;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_c_i;
  int32_T c2_c_k;
  int32_T c2_c_last;
  int32_T c2_d_i;
  int32_T c2_d_k;
  int32_T c2_e_i;
  int32_T c2_e_k;
  int32_T c2_f_i;
  int32_T c2_f_k;
  int32_T c2_first;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_h_b;
  int32_T c2_h_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_idx;
  int32_T c2_ix;
  int32_T c2_k;
  int32_T c2_last;
  int32_T c2_loop_ub;
  int32_T c2_nz;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_xoffset;
  uint8_T c2_u;
  boolean_T c2_conn[900];
  boolean_T c2_f_x[30];
  boolean_T c2_b_densityFlag;
  boolean_T c2_b_modeFlag;
  boolean_T c2_b_p;
  boolean_T c2_b_tooBig;
  boolean_T c2_c_modeFlag;
  boolean_T c2_c_p;
  boolean_T c2_c_tooBig;
  boolean_T c2_d_modeFlag;
  boolean_T c2_d_p;
  boolean_T c2_densityFlag;
  boolean_T c2_e_modeFlag;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_f_b;
  boolean_T c2_f_modeFlag;
  boolean_T c2_f_p;
  boolean_T c2_g_b;
  boolean_T c2_g_modeFlag;
  boolean_T c2_h_modeFlag;
  boolean_T c2_i_modeFlag;
  boolean_T c2_modeFlag;
  boolean_T c2_p;
  boolean_T c2_separable;
  boolean_T c2_tooBig;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_rb_emlrtRSI;
  c2_b_st.site = &c2_yb_emlrtRSI;
  c2_d_svd(chartInstance, &c2_b_st, c2_a__1, c2_b_s, c2_b_a__2);
  c2_k = 0;
  for (c2_b_k = 0; c2_b_k < 30; c2_b_k++) {
    c2_c_s[c2_b_k] = c2_b_s[c2_k];
    c2_k += 31;
  }

  c2_x_size[0] = 30;
  for (c2_i = 0; c2_i < 30; c2_i++) {
    c2_x_data[c2_i] = c2_c_s[c2_i];
  }

  c2_last = c2_x_size[0];
  c2_b_last = c2_last;
  c2_b_x = c2_x_data[0];
  c2_c_x = c2_b_x;
  c2_f_b = muDoubleScalarIsNaN(c2_c_x);
  c2_p = !c2_f_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_c_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_c_k <= c2_b_last)) {
      c2_d_x = c2_x_data[c2_c_k - 1];
      c2_e_x = c2_d_x;
      c2_g_b = muDoubleScalarIsNaN(c2_e_x);
      c2_b_p = !c2_g_b;
      if (c2_b_p) {
        c2_idx = c2_c_k;
        c2_exitg1 = true;
      } else {
        c2_c_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_maxval = c2_x_data[0];
  } else {
    c2_first = c2_idx - 1;
    c2_c_last = c2_last;
    c2_ex = c2_x_data[c2_first];
    c2_i1 = c2_first;
    for (c2_d_k = c2_i1 + 1; c2_d_k < c2_c_last; c2_d_k++) {
      if (c2_ex < c2_x_data[c2_d_k]) {
        c2_ex = c2_x_data[c2_d_k];
      }
    }

    c2_maxval = c2_ex;
  }

  c2_tol = 30.0 * c2_maxval * 2.2204460492503131E-16;
  for (c2_i2 = 0; c2_i2 < 30; c2_i2++) {
    c2_f_x[c2_i2] = (c2_c_s[c2_i2] > c2_tol);
  }

  c2_nz = (int32_T)c2_f_x[0];
  for (c2_e_k = 0; c2_e_k < 29; c2_e_k++) {
    c2_xoffset = c2_e_k;
    c2_ix = c2_xoffset;
    c2_h_b = (int32_T)c2_f_x[c2_ix + 1];
    c2_nz += (c2_h_b != 0);
  }

  c2_rank = (real_T)c2_nz;
  if (c2_rank == 1.0) {
    c2_separable = true;
  } else {
    c2_separable = false;
  }

  if (c2_separable) {
    for (c2_i4 = 0; c2_i4 < 279000; c2_i4++) {
      chartInstance->c2_d_varargin_1[c2_i4] = c2_e_varargin_1[c2_i4];
    }

    c2_b_padImage(chartInstance, chartInstance->c2_d_varargin_1,
                  chartInstance->c2_e_a);
    c2_st.site = &c2_sb_emlrtRSI;
    c2_d_svd(chartInstance, &c2_st, c2_a__1, c2_b_s, c2_b_a__2);
    c2_f_k = 0;
    for (c2_g_k = 0; c2_g_k < 30; c2_g_k++) {
      c2_c_s[c2_g_k] = c2_b_s[c2_f_k];
      c2_f_k += 31;
    }

    for (c2_i5 = 0; c2_i5 < 30; c2_i5++) {
      c2_hcol[c2_i5] = c2_a__1[c2_i5];
    }

    c2_st.site = &c2_tb_emlrtRSI;
    c2_g_x = c2_c_s[0];
    c2_i_b = c2_g_x;
    c2_h_x = c2_i_b;
    if (c2_h_x < 0.0) {
      c2_c_p = true;
    } else {
      c2_c_p = false;
    }

    c2_d_p = c2_c_p;
    if (c2_d_p) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                    false);
      sf_mex_call(&c2_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
    }

    c2_i_b = muDoubleScalarSqrt(c2_i_b);
    for (c2_i14 = 0; c2_i14 < 30; c2_i14++) {
      c2_hcol[c2_i14] *= c2_i_b;
    }

    for (c2_i16 = 0; c2_i16 < 30; c2_i16++) {
      c2_hrow[c2_i16] = c2_b_a__2[c2_i16];
    }

    c2_st.site = &c2_ub_emlrtRSI;
    c2_i_x = c2_c_s[0];
    c2_j_b = c2_i_x;
    c2_j_x = c2_j_b;
    if (c2_j_x < 0.0) {
      c2_e_p = true;
    } else {
      c2_e_p = false;
    }

    c2_f_p = c2_e_p;
    if (c2_f_p) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        4), false);
      sf_mex_call(&c2_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 2U, 14, c2_g_y, 14, c2_i_y)));
    }

    c2_j_b = muDoubleScalarSqrt(c2_j_b);
    c2_f_y = c2_j_b;
    c2_h_y = c2_f_y;
    for (c2_i18 = 0; c2_i18 < 30; c2_i18++) {
      c2_hrow[c2_i18] *= c2_h_y;
    }

    for (c2_i19 = 0; c2_i19 < 312000; c2_i19++) {
      chartInstance->c2_d_a[c2_i19] = (real_T)chartInstance->c2_e_a[c2_i19];
    }

    c2_st.site = &c2_vb_emlrtRSI;
    c2_trueCount = 0;
    for (c2_c_i = 0; c2_c_i < 30; c2_c_i++) {
      if (c2_hrow[c2_c_i] != 0.0) {
        c2_trueCount++;
      }
    }

    c2_tmp_size[0] = c2_trueCount;
    c2_partialTrueCount = 0;
    for (c2_d_i = 0; c2_d_i < 30; c2_d_i++) {
      if (c2_hrow[c2_d_i] != 0.0) {
        c2_tmp_data[c2_partialTrueCount] = c2_d_i + 1;
        c2_partialTrueCount++;
      }
    }

    c2_x_size[0] = c2_tmp_size[0];
    c2_loop_ub = c2_tmp_size[0] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_loop_ub; c2_i20++) {
      c2_x_data[c2_i20] = c2_hrow[c2_tmp_data[c2_i20] - 1];
    }

    for (c2_i21 = 0; c2_i21 < 30; c2_i21++) {
      c2_f_x[c2_i21] = (c2_hrow[c2_i21] != 0.0);
    }

    c2_densityFlag = false;
    if ((real_T)c2_x_size[0] / 30.0 > 0.05) {
      c2_densityFlag = true;
    }

    c2_b_tooBig = true;
    for (c2_e_i = 0; c2_e_i < 2; c2_e_i++) {
      c2_b_tooBig = false;
    }

    if (c2_densityFlag && (!c2_b_tooBig)) {
      c2_d_modeFlag = true;
    } else {
      c2_d_modeFlag = false;
    }

    if (c2_d_modeFlag) {
      c2_e_modeFlag = true;
    } else {
      c2_e_modeFlag = false;
    }

    c2_f_modeFlag = c2_e_modeFlag;
    if (c2_f_modeFlag) {
      for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
        c2_padSizeT[c2_i22] = 480.0 + 170.0 * (real_T)c2_i22;
      }

      for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
        c2_outSizeT[c2_i24] = 480.0 + 140.0 * (real_T)c2_i24;
      }

      for (c2_i26 = 0; c2_i26 < 2; c2_i26++) {
        c2_connDimsT[c2_i26] = 1.0 + 29.0 * (real_T)c2_i26;
      }

      ippfilter_real64(&chartInstance->c2_d_a[0], &chartInstance->c2_c_b[0],
                       &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_hrow[0],
                       &c2_connDimsT[0], false);
    } else {
      c2_numKernElem = (real_T)c2_x_size[0];
      for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
        c2_padSizeT[c2_i23] = 480.0 + 170.0 * (real_T)c2_i23;
      }

      for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
        c2_outSizeT[c2_i25] = 480.0 + 140.0 * (real_T)c2_i25;
      }

      for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
        c2_connDimsT[c2_i27] = 1.0 + 29.0 * (real_T)c2_i27;
      }

      for (c2_i28 = 0; c2_i28 < 2; c2_i28++) {
        c2_startT[c2_i28] = 15.0 * (real_T)c2_i28;
      }

      imfilter_real64(&chartInstance->c2_d_a[0], &chartInstance->c2_c_b[0], 2.0,
                      &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_x_data[0],
                      c2_numKernElem, &c2_f_x[0], 2.0, &c2_connDimsT[0],
                      &c2_startT[0], 2.0, true, false);
    }

    c2_st.site = &c2_wb_emlrtRSI;
    c2_b_trueCount = 0;
    for (c2_f_i = 0; c2_f_i < 30; c2_f_i++) {
      if (c2_hcol[c2_f_i] != 0.0) {
        c2_b_trueCount++;
      }
    }

    c2_b_tmp_size[0] = c2_b_trueCount;
    c2_b_partialTrueCount = 0;
    for (c2_g_i = 0; c2_g_i < 30; c2_g_i++) {
      if (c2_hcol[c2_g_i] != 0.0) {
        c2_b_tmp_data[c2_b_partialTrueCount] = c2_g_i + 1;
        c2_b_partialTrueCount++;
      }
    }

    c2_x_size[0] = c2_b_tmp_size[0];
    c2_b_loop_ub = c2_b_tmp_size[0] - 1;
    for (c2_i29 = 0; c2_i29 <= c2_b_loop_ub; c2_i29++) {
      c2_x_data[c2_i29] = c2_hcol[c2_b_tmp_data[c2_i29] - 1];
    }

    for (c2_i30 = 0; c2_i30 < 30; c2_i30++) {
      c2_f_x[c2_i30] = (c2_hcol[c2_i30] != 0.0);
    }

    c2_b_densityFlag = false;
    if ((real_T)c2_x_size[0] / 30.0 > 0.05) {
      c2_b_densityFlag = true;
    }

    c2_c_tooBig = true;
    for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
      c2_c_tooBig = false;
    }

    if (c2_b_densityFlag && (!c2_c_tooBig)) {
      c2_g_modeFlag = true;
    } else {
      c2_g_modeFlag = false;
    }

    if (c2_g_modeFlag) {
      c2_h_modeFlag = true;
    } else {
      c2_h_modeFlag = false;
    }

    c2_i_modeFlag = c2_h_modeFlag;
    if (c2_i_modeFlag) {
      for (c2_i31 = 0; c2_i31 < 2; c2_i31++) {
        c2_padSizeT[c2_i31] = 480.0 + 140.0 * (real_T)c2_i31;
      }

      for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
        c2_outSizeT[c2_i33] = 450.0 + 170.0 * (real_T)c2_i33;
      }

      for (c2_i35 = 0; c2_i35 < 2; c2_i35++) {
        c2_connDimsT[c2_i35] = 30.0 + -29.0 * (real_T)c2_i35;
      }

      ippfilter_real64(&chartInstance->c2_c_b[0], &chartInstance->c2_d_b[0],
                       &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_hcol[0],
                       &c2_connDimsT[0], false);
    } else {
      c2_b_numKernElem = (real_T)c2_x_size[0];
      for (c2_i32 = 0; c2_i32 < 2; c2_i32++) {
        c2_padSizeT[c2_i32] = 480.0 + 140.0 * (real_T)c2_i32;
      }

      for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
        c2_outSizeT[c2_i34] = 450.0 + 170.0 * (real_T)c2_i34;
      }

      for (c2_i36 = 0; c2_i36 < 2; c2_i36++) {
        c2_connDimsT[c2_i36] = 30.0 + -29.0 * (real_T)c2_i36;
      }

      for (c2_i37 = 0; c2_i37 < 2; c2_i37++) {
        c2_startT[c2_i37] = 15.0 + -15.0 * (real_T)c2_i37;
      }

      imfilter_real64(&chartInstance->c2_c_b[0], &chartInstance->c2_d_b[0], 2.0,
                      &c2_outSizeT[0], 2.0, &c2_padSizeT[0], &c2_x_data[0],
                      c2_b_numKernElem, &c2_f_x[0], 2.0, &c2_connDimsT[0],
                      &c2_startT[0], 2.0, true, false);
    }

    for (c2_i38 = 0; c2_i38 < 279000; c2_i38++) {
      c2_d = muDoubleScalarRound(chartInstance->c2_d_b[c2_i38]);
      if (c2_d < 256.0) {
        if (c2_d >= 0.0) {
          c2_u = (uint8_T)c2_d;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_e_b[c2_i38] = c2_u;
    }
  } else {
    for (c2_i3 = 0; c2_i3 < 279000; c2_i3++) {
      chartInstance->c2_c_varargin_1[c2_i3] = c2_e_varargin_1[c2_i3];
    }

    c2_b_padImage(chartInstance, chartInstance->c2_c_varargin_1,
                  chartInstance->c2_e_a);
    c2_st.site = &c2_xb_emlrtRSI;
    c2_tooBig = true;
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
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
      for (c2_i7 = 0; c2_i7 < 900; c2_i7++) {
        c2_a__1[c2_i7] = 0.0011111111111111111;
      }

      for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
        c2_padSizeT[c2_i9] = 480.0 + 170.0 * (real_T)c2_i9;
      }

      for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
        c2_outSizeT[c2_i11] = 450.0 + 170.0 * (real_T)c2_i11;
      }

      for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
        c2_connDimsT[c2_i13] = 30.0;
      }

      ippfilter_uint8(&chartInstance->c2_e_a[0], &c2_e_b[0], &c2_outSizeT[0],
                      2.0, &c2_padSizeT[0], &c2_a__1[0], &c2_connDimsT[0], false);
    } else {
      for (c2_i6 = 0; c2_i6 < 900; c2_i6++) {
        c2_a__1[c2_i6] = 0.0011111111111111111;
      }

      for (c2_i8 = 0; c2_i8 < 900; c2_i8++) {
        c2_conn[c2_i8] = true;
      }

      for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
        c2_padSizeT[c2_i10] = 480.0 + 170.0 * (real_T)c2_i10;
      }

      for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
        c2_outSizeT[c2_i12] = 450.0 + 170.0 * (real_T)c2_i12;
      }

      for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
        c2_connDimsT[c2_i15] = 30.0;
      }

      for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
        c2_startT[c2_i17] = 15.0;
      }

      imfilter_uint8(&chartInstance->c2_e_a[0], &c2_e_b[0], 2.0, &c2_outSizeT[0],
                     2.0, &c2_padSizeT[0], &c2_a__1[0], 900.0, &c2_conn[0], 2.0,
                     &c2_connDimsT[0], &c2_startT[0], 2.0, true, false);
    }
  }
}

static void c2_d_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[900], real_T c2_S[900],
                     real_T c2_V[900])
{
  emlrtStack c2_st;
  real_T c2_b_s[30];
  int32_T c2_b_k;
  int32_T c2_i;
  int32_T c2_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_ac_emlrtRSI;
  c2_e_svd(chartInstance, &c2_st, c2_U, c2_b_s, c2_V);
  for (c2_i = 0; c2_i < 900; c2_i++) {
    c2_S[c2_i] = 0.0;
  }

  c2_k = 0;
  for (c2_b_k = 0; c2_b_k < 30; c2_b_k++) {
    c2_S[c2_k] = c2_b_s[c2_b_k];
    c2_k += 31;
  }
}

static void c2_e_svd(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_U[900], real_T c2_b_s[30],
                     real_T c2_V[900])
{
  ptrdiff_t c2_info_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldu_t;
  ptrdiff_t c2_ldv_t;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_b_dv[900];
  real_T c2_c_A[900];
  real_T c2_d_Vt[900];
  int32_T c2_b_info;
  int32_T c2_c_info;
  int32_T c2_d_info;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_info;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_cc_emlrtRSI;
  c2_b_st.site = &c2_ec_emlrtRSI;
  for (c2_i = 0; c2_i < 900; c2_i++) {
    c2_c_A[c2_i] = 0.0011111111111111111;
  }

  c2_m_t = (ptrdiff_t)30;
  c2_n_t = (ptrdiff_t)30;
  c2_lda_t = (ptrdiff_t)30;
  c2_ldu_t = (ptrdiff_t)30;
  c2_ldv_t = (ptrdiff_t)30;
  c2_info_t = LAPACKE_dgesdd(102, 'A', c2_m_t, c2_n_t, &c2_c_A[0], c2_lda_t,
    &c2_b_s[0], &c2_U[0], c2_ldu_t, &c2_d_Vt[0], c2_ldv_t);
  c2_info = (int32_T)c2_info_t;
  c2_c_st.site = &c2_fc_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_dc_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 900; c2_i3++) {
      c2_b_dv[c2_i3] = 0.0011111111111111111;
    }

    c2_c_st.site = &c2_gc_emlrtRSI;
    c2_b_ceval_xgesvd(chartInstance, &c2_c_st, c2_b_dv, c2_U, c2_b_s, c2_V,
                      &c2_c_info);
    c2_d_info = c2_c_info;
    c2_b_info = c2_d_info;
  } else {
    c2_i1 = 0;
    for (c2_i2 = 0; c2_i2 < 30; c2_i2++) {
      c2_i4 = 0;
      for (c2_i5 = 0; c2_i5 < 30; c2_i5++) {
        c2_V[c2_i5 + c2_i1] = c2_d_Vt[c2_i4 + c2_i2];
        c2_i4 += 30;
      }

      c2_i1 += 30;
    }
  }

  if (c2_b_info > 0) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static void c2_b_ceval_xgesvd(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[900], real_T c2_U[900], real_T c2_S[30],
  real_T c2_V[900], int32_T *c2_info)
{
  ptrdiff_t c2_info_t;
  ptrdiff_t c2_lda_t;
  ptrdiff_t c2_ldu_t;
  ptrdiff_t c2_ldv_t;
  ptrdiff_t c2_m_t;
  ptrdiff_t c2_n_t;
  emlrtStack c2_st;
  real_T c2_d_Vt[900];
  real_T c2_superb[29];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_m_t = (ptrdiff_t)30;
  c2_n_t = (ptrdiff_t)30;
  c2_lda_t = (ptrdiff_t)30;
  c2_ldu_t = (ptrdiff_t)30;
  c2_ldv_t = (ptrdiff_t)30;
  c2_info_t = LAPACKE_dgesvd(102, 'A', 'A', c2_m_t, c2_n_t, &c2_c_A[0], c2_lda_t,
    &c2_S[0], &c2_U[0], c2_ldu_t, &c2_d_Vt[0], c2_ldv_t, &c2_superb[0]);
  *c2_info = (int32_T)c2_info_t;
  c2_i = 0;
  for (c2_i1 = 0; c2_i1 < 30; c2_i1++) {
    c2_i2 = 0;
    for (c2_i3 = 0; c2_i3 < 30; c2_i3++) {
      c2_V[c2_i3 + c2_i] = c2_d_Vt[c2_i2 + c2_i1];
      c2_i2 += 30;
    }

    c2_i += 30;
  }

  c2_st.site = &c2_hc_emlrtRSI;
  c2_b_infocheck(chartInstance, &c2_st, *c2_info);
}

static void c2_b_padImage(SFc2_untitled1InstanceStruct *chartInstance, uint8_T
  c2_a_tmp[279000], uint8_T c2_f_a[312000])
{
  real_T c2_c_i;
  real_T c2_c_j;
  real_T c2_g_a;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_j_a;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_j;
  int32_T c2_c;
  int32_T c2_c_c;
  int32_T c2_d_c;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_e_j;
  int32_T c2_f_i;
  int32_T c2_f_j;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  for (c2_j = 0; c2_j < 15; c2_j++) {
    c2_c_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 480; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 480 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 15; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 480; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 480 * (c2_b_j + 635)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 620; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 15; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_g_a = c2_c_j;
      c2_c = (int32_T)c2_g_a;
      c2_f_a[((int32_T)c2_c_i + 480 * (c2_c + 14)) - 1] = 0U;
    }
  }

  for (c2_e_j = 0; c2_e_j < 620; c2_e_j++) {
    c2_c_j = (real_T)c2_e_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 15; c2_e_i++) {
      c2_h_a = c2_c_j;
      c2_b_c = (int32_T)c2_h_a;
      c2_f_a[(c2_e_i + 480 * (c2_b_c + 14)) + 465] = 0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 620; c2_f_j++) {
    c2_c_j = (real_T)c2_f_j + 1.0;
    for (c2_f_i = 0; c2_f_i < 450; c2_f_i++) {
      c2_c_i = (real_T)c2_f_i + 1.0;
      c2_i_a = c2_c_i;
      c2_c_c = (int32_T)c2_i_a;
      c2_j_a = c2_c_j;
      c2_d_c = (int32_T)c2_j_a;
      c2_f_a[(c2_c_c + 480 * (c2_d_c + 14)) + 14] = c2_a_tmp[((int32_T)c2_c_i +
        450 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[279000])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_y), &c2_thisId, c2_c_y);
  sf_mex_destroy(&c2_b_y);
}

static void c2_b_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y
  [279000])
{
  int32_T c2_i;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), chartInstance->c2_b_uv, 1, 3, 0U,
                1, 0U, 2, 450, 620);
  for (c2_i = 0; c2_i < 279000; c2_i++) {
    c2_b_y[c2_i] = chartInstance->c2_b_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled1, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_untitled1), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_untitled1);
  return c2_b_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_b_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static void c2_chart_data_browse_helper(SFc2_untitled1InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_d;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 4U:
    *c2_isValueTooBig = 1U;
    break;

   case 7U:
    c2_d = *chartInstance->c2_x;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    *c2_isValueTooBig = 1U;
    break;

   case 6U:
    *c2_isValueTooBig = 1U;
    break;
  }
}

static void c2_emxEnsureCapacity_real_T(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_real_T(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_real_T(SFc2_untitled1InstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_real_T *)NULL) {
    if (((*c2_pEmxArray)->data != (real_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_real_T *)NULL;
  }
}

static void init_dsm_address_info(SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_untitled1InstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_I1 = (uint8_T (*)[279000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c2_y = (uint8_T (*)[279000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_d_I2 = (uint8_T (*)[279000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_untitled1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2554432391U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(362351811U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(797003449U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3857646165U);
}

mxArray *sf_c2_untitled1_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,6);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Morphop_ipp_Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.Morphop_flat_tbb_Buildable"));
  mxSetCell(mxcell3p, 2, mxCreateString("coder.internal.lapack.LAPACKApi"));
  mxSetCell(mxcell3p, 3, mxCreateString("coder.internal.blas.BLASApi"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_untitled1_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("erode_uint8_ipp");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_untitled1_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_untitled1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wMjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/Efg"
    "8C7hdDcT+En1kcn5hcklmWGp9sFF+aV5JZkpOaYojwFwBU1hhI"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_untitled1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s69gZcKgkcpLKvTJVC0qJt";
}

static void sf_opaque_initialize_c2_untitled1(void *chartInstanceVar)
{
  initialize_params_c2_untitled1((SFc2_untitled1InstanceStruct*)
    chartInstanceVar);
  initialize_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_untitled1(void *chartInstanceVar)
{
  enable_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_untitled1(void *chartInstanceVar)
{
  disable_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_untitled1(void *chartInstanceVar)
{
  sf_gateway_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_untitled1(SimStruct* S)
{
  return get_sim_state_c2_untitled1((SFc2_untitled1InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_untitled1(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_untitled1((SFc2_untitled1InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_untitled1(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_untitled1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled1_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_untitled1((SFc2_untitled1InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_untitled1(void *chartInstanceVar)
{
  mdl_start_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_untitled1(void *chartInstanceVar)
{
  mdl_terminate_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_untitled1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_untitled1((SFc2_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_untitled1((SFc2_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_untitled1_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV81u20YQJmU3aIA2MIIgpwLJqSl6SnsomkvimJISJXJtlLIL9GKslyNxoeUusz+0hVzyAjk",
    "UueSYJ+lz9AV6zyN0lqRlmSKp2EKCtCgBmlrym29n5pudXXv+YNfD6wbe92963jV8fol3xyuuL8",
    "qxv3AX7ze9e+X4NRoJm+wTRRLttV6CJPAraMmtYVIMxFjWwpgYgwJBEZtKZZrYNEssZ2Lat4I6P",
    "v1bzGgcxtLyaAdtSbQn+AzZUmv2kafLFFDTB4hMrKSdxH1OJnOPlTkJYqBTbZO2EDSY0KbOLb1r",
    "uWEph94p0IHQhqDH+ty30BADgTltDNNFqsMzoExSzoiojTYmOoQUE2zgII3w7541GFQVRmOizA7",
    "EJAM9ZNOcUwqocjKNH46ZIEYqRngv4YEzXPZtn6M/uzIC3pIQ9G1HAZmmkgnTrH/Yx0h7ghxz6M",
    "KxnTSzhfDCOvEPGZyAaszbOJAZKDKBPdE4aZ6Q3mmu1rxKlmGGJXBI1GOK+mmIGqsXK0eHBHWCE",
    "Vo0wSAPcqBHimWY3kY2mwxcZa5aMjYpxNarYDlbL4M2FeZsfSoCwrluhI1kOoQMeM7aJYa0wwrW",
    "epzWLBpJTLAr7+bVYAVD4UtYIEXEauXKKoC87/yCjeUiklptZBJg8XaHw+XPy7CBMKDGhEJdF1C",
    "EacCc5eltZouYdtojEL0yuXt14KJCVqE8PbaieyLVFHPS0kTOQ3CKNgITPUEtcSUcaFw0bTCn5S",
    "ocJTSGyDUYxmEXlw1ia3KiXWt7jOsuY2bWBU0VS2tUtbjqsA31XEHNUjgQUyFPRF/JJCx7fJFeA",
    "Kw2ogQTkx3sX2rWx9nrpMj3M+98P/vqA/azM7vq87sFHr+Gx1t4Vue93rmI36jM28E3vu/ndtsL",
    "dl9X5tms2DncFt5/v3z955Nbb56M377a+OPbo+9Xze8vze/nv53du87l9v8b5fibs0Y7XzjZUr0",
    "67NMFvzZr+G8v8G+VY/3Tg8nv9PlkStPh82z07DC4/+KZKfje++3+dir+nr2/6zo+Vllen4oOov",
    "Jg4sbEFtu14/95wd9rK/JxvXxfXO8frWd/a7uq4+YK+y38NavU7dXnv7u9nv3V9Wb6iLhuAUf0x",
    "yMrsDlyiH64GNdV6/uydt4ntvu3+Pl/Xj5+fB+yX21c0c5fc3/8VHbrxnfZfftzw7f1f6+C3/qM",
    "41j3PPWx8X95lzv33CnHD+f/2gQx41HNKbf8jEfWcd3X/0Cd/gMpu61/",
    ""
  };

  static char newstr [1257] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_untitled1(SimStruct *S)
{
  const char* newstr = sf_c2_untitled1_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3196943333U));
  ssSetChecksum1(S,(1200821319U));
  ssSetChecksum2(S,(58759270U));
  ssSetChecksum3(S,(710878865U));
}

static void mdlRTW_c2_untitled1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_untitled1(SimStruct *S)
{
  SFc2_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc2_untitled1InstanceStruct *)utMalloc(sizeof
    (SFc2_untitled1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_untitled1InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_untitled1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_untitled1;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_untitled1;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_untitled1;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_untitled1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_untitled1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_untitled1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_untitled1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_untitled1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_untitled1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_untitled1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_untitled1;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_untitled1(chartInstance);
}

void c2_untitled1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_untitled1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_untitled1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_untitled1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_untitled1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
