/* Include files */

#include "main_sfun.h"
#include "c2_main.h"
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

static emlrtRSInfo c2_emlrtRSI = { 5,  /* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#main:1"                            /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 1,/* lineNo */
  "Tran",                              /* fcnName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\Tran.p"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 573,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 433,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 451,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 464,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 473,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 22,/* lineNo */
  "morphop",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 401,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 448,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 486,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 701,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 689,/* lineNo */
  "morphopConstantFoldingImpl",        /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphopConstantFoldingImpl.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 55,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 64,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 67,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 68,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 84,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 88,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 683,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 25,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 33,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 53,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 90,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 82,/* lineNo */
  "svd",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 209,/* lineNo */
  "xgesdd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesdd.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 31,/* lineNo */
  "xgesvd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 197,/* lineNo */
  "xgesvd",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 282,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 299,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 428,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 23,/* lineNo */
  "xnrm2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 38,/* lineNo */
  "xnrm2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 21,/* lineNo */
  "scaleVectorByRecip",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scaleVectorByRecip.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 23,/* lineNo */
  "scaleVectorByRecip",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scaleVectorByRecip.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 31,/* lineNo */
  "xscal",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 18,/* lineNo */
  "xscal",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 47,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 53,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 32,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 65,/* lineNo */
  "xaxpy",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 21,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 23,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 32,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 32,/* lineNo */
  "xrotg",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xrotg.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 923,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 997,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 1025,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 1037,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "Tran",                              /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\Tran.p"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 491,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 578,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 175,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 84,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 900,/* lineNo */
  21,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 88,/* lineNo */
  13,                                  /* colNo */
  "imfilter",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  441,                                 /* iLast */
  5,                                   /* lineNo */
  11,                                  /* colNo */
  "tmp",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 5,  /* lineNo */
  11,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  24,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 12,/* lineNo */
  24,                                  /* colNo */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  441,                                 /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "ser",                               /* aName */
  "mean_shift",                        /* fName */
  "E:\\VIF\\pid\\MATLAB code\\mean_shift\\mean_shift.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 12,/* lineNo */
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
static void initialize_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void initialize_params_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void enable_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void disable_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_main(SFc2_mainInstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void ext_mode_exec_c2_main(SFc2_mainInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_main(SFc2_mainInstanceStruct
  *chartInstance);
static void set_sim_state_c2_main(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_st);
static void sf_gateway_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void mdl_start_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void mdl_terminate_c2_main(SFc2_mainInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_main(SFc2_mainInstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c2_main(SFc2_mainInstanceStruct
  *chartInstance);
static void initSimStructsc2_main(SFc2_mainInstanceStruct *chartInstance);
static real_T c2_mean_shift(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_ser[441], real_T c2_p);
static real_T c2_sumColumnB(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_b_x[442368], int32_T c2_col);
static real_T c2_b_sumColumnB(SFc2_mainInstanceStruct *chartInstance, real_T
  c2_b_x[768]);
static void c2_imresize(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint8_T c2_c_Ain[442368], uint8_T c2_Bout[27648]);
static void c2_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_check_forloop_overflow_error(SFc2_mainInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[442368], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[110592]);
static int32_T c2_eml_sub2ind(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2);
static void c2_b_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_b_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[110592], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[27648]);
static real_T c2_c_sumColumnB(SFc2_mainInstanceStruct *chartInstance, real_T
  c2_b_x[441]);
static void c2_b_imresize(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_Ain[27648], real_T c2_Bout[442368]);
static void c2_c_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_c_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_in_[27648], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[110592]);
static void c2_d_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_d_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_in_[110592], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[442368]);
static void c2_imerode(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368]);
static boolean_T c2_useIPP(SFc2_mainInstanceStruct *chartInstance, boolean_T
  c2_nhood[7225]);
static void c2_imdilate(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368]);
static void c2_padarray(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_e_varargin_1[442368], uint8_T c2_f_b[664825]);
static void c2_imfilter(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint8_T c2_e_varargin_1[442368], uint8_T c2_f_b[442368]);
static void c2_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_U[625], real_T c2_S[6250], real_T c2_V
                   [62500]);
static void c2_b_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[625], real_T c2_b_s[25], real_T c2_V
                     [62500]);
static boolean_T c2_infocheck(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_info);
static void c2_ceval_xgesvd(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[6250], real_T c2_U[625], real_T c2_S[25],
  real_T c2_V[62500], int32_T *c2_info);
static boolean_T c2_b_infocheck(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_info);
static void c2_c_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_c_A[6250], real_T c2_U[625], real_T
                     c2_b_s[25], real_T c2_V[62500]);
static void c2_padImage(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_a_tmp[442368], uint8_T c2_f_a[610800]);
static void c2_b_imerode(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368]);
static void c2_b_imdilate(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_c_A[442368], uint8_T c2_e_B[442368]);
static void c2_b_imfilter(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[442368], uint8_T c2_f_b[442368]);
static void c2_d_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[900], real_T c2_S[900], real_T c2_V[900]);
static void c2_e_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[900], real_T c2_b_s[30], real_T c2_V
                     [900]);
static void c2_b_ceval_xgesvd(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_A[900], real_T c2_U[900], real_T c2_S[30],
  real_T c2_V[900], int32_T *c2_info);
static void c2_b_padImage(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_a_tmp[442368], uint8_T c2_f_a[483588]);
static void c2_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[442368]);
static void c2_b_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y[442368]);
static uint8_T c2_c_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_main, const char_T *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_chart_data_browse_helper(SFc2_mainInstanceStruct *chartInstance,
  int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig);
static void c2_emxEnsureCapacity_real_T(SFc2_mainInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_real_T(SFc2_mainInstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray);
static int32_T c2__s32_add__(SFc2_mainInstanceStruct *chartInstance, int32_T
  c2_f_b, int32_T c2_c, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc,
  int32_T c2_offset_src_loc, int32_T c2_length_src_loc);
static int32_T c2__s32_d_(SFc2_mainInstanceStruct *chartInstance, real_T c2_f_b,
  int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_mainInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_mainInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_main(SFc2_mainInstanceStruct *chartInstance)
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
  chartInstance->c2_is_active_c2_main = 0U;
}

static void initialize_params_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_main(SFc2_mainInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_main(SFc2_mainInstanceStruct
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
    2, 576, 768), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &chartInstance->c2_is_active_c2_main,
    3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_main(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)), "y",
                      chartInstance->c2_uv);
  for (c2_i = 0; c2_i < 442368; c2_i++) {
    (*chartInstance->c2_y)[c2_i] = chartInstance->c2_uv[c2_i];
  }

  chartInstance->c2_is_active_c2_main = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)), "is_active_c2_main");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_main(SFc2_mainInstanceStruct *chartInstance)
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
  emlrtStack c2_c_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  real_T c2_i_imgn[2233];
  real_T c2_f_imgn[1694];
  real_T c2_h_imgn[1694];
  real_T c2_g_imgn[1650];
  real_T c2_j_imgn[1650];
  real_T c2_c_y[768];
  real_T c2_b_ser[441];
  real_T c2_b_i1;
  real_T c2_b_i2;
  real_T c2_b_j;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_i;
  real_T c2_c_u;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d10;
  real_T c2_d11;
  real_T c2_d12;
  real_T c2_d13;
  real_T c2_d14;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d8;
  real_T c2_d9;
  real_T c2_d_u;
  real_T c2_d_x;
  real_T c2_d_y;
  real_T c2_e_u;
  real_T c2_e_x;
  real_T c2_e_y;
  real_T c2_f_a;
  real_T c2_f_u;
  real_T c2_f_x;
  real_T c2_f_y;
  real_T c2_g_b;
  real_T c2_g_u;
  real_T c2_g_x;
  real_T c2_g_y;
  real_T c2_h_b;
  real_T c2_h_u;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_u;
  real_T c2_i_x;
  real_T c2_k_y;
  real_T c2_l_y;
  real_T c2_lm;
  real_T c2_m_y;
  real_T c2_n_y;
  real_T c2_o_y;
  real_T c2_r_y;
  real_T c2_s_y;
  real_T c2_t_y;
  real_T c2_u;
  real_T c2_u_y;
  real_T c2_w;
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
  uint8_T c2_b_u;
  uint8_T c2_u1;
  uint8_T c2_u3;
  uint8_T c2_u4;
  uint8_T c2_u6;
  uint8_T c2_u7;
  uint8_T c2_u9;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_covSaturation;
  boolean_T c2_f_b;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 442368; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, (real_T)
                      (*chartInstance->c2_e_I2)[c2_i]);
  }

  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_x);
  for (c2_i1 = 0; c2_i1 < 442368; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_I1)[c2_i1]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_b_x = *chartInstance->c2_x;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_w = c2_b_x;
  c2_b_st.site = &c2_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 442368; c2_i2++) {
    chartInstance->c2_A2[c2_i2] = (*chartInstance->c2_I1)[c2_i2];
  }

  c2_c_x = c2_w;
  for (c2_i3 = 0; c2_i3 < 442368; c2_i3++) {
    chartInstance->c2_I2[c2_i3] = (*chartInstance->c2_e_I2)[c2_i3];
  }

  for (c2_col = 0; c2_col < 768; c2_col++) {
    c2_b_col = c2_col;
    for (c2_i5 = 0; c2_i5 < 442368; c2_i5++) {
      chartInstance->c2_b_A2[c2_i5] = chartInstance->c2_A2[c2_i5];
    }

    c2_c_y[c2_b_col] = c2_sumColumnB(chartInstance, chartInstance->c2_b_A2,
      c2_b_col + 1);
  }

  for (c2_i4 = 0; c2_i4 < 768; c2_i4++) {
    c2_c_y[c2_i4] /= 576.0;
  }

  c2_b_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_b_i1 = c2_b_y / 768.0;
  for (c2_c_col = 0; c2_c_col < 768; c2_c_col++) {
    c2_d_col = c2_c_col;
    for (c2_i7 = 0; c2_i7 < 442368; c2_i7++) {
      chartInstance->c2_b_I2[c2_i7] = chartInstance->c2_I2[c2_i7];
    }

    c2_c_y[c2_d_col] = c2_sumColumnB(chartInstance, chartInstance->c2_b_I2,
      c2_d_col + 1);
  }

  for (c2_i6 = 0; c2_i6 < 768; c2_i6++) {
    c2_c_y[c2_i6] /= 576.0;
  }

  c2_d_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_b_i2 = c2_d_y / 768.0;
  c2_c_st.site = &c2_b_emlrtRSI;
  for (c2_i8 = 0; c2_i8 < 442368; c2_i8++) {
    chartInstance->c2_c_A2[c2_i8] = chartInstance->c2_A2[c2_i8];
  }

  c2_imresize(chartInstance, &c2_c_st, chartInstance->c2_c_A2,
              chartInstance->c2_I);
  for (c2_i9 = 0; c2_i9 < 27648; c2_i9++) {
    chartInstance->c2_img[c2_i9] = (real_T)chartInstance->c2_I[c2_i9];
  }

  for (c2_i10 = 0; c2_i10 < 35145; c2_i10++) {
    chartInstance->c2_d_imgn[c2_i10] = 0.0;
  }

  c2_i11 = 0;
  c2_i12 = 0;
  for (c2_i13 = 0; c2_i13 < 192; c2_i13++) {
    for (c2_i15 = 0; c2_i15 < 144; c2_i15++) {
      chartInstance->c2_d_imgn[(c2_i15 + c2_i11) + 1660] = chartInstance->
        c2_img[c2_i15 + c2_i12];
    }

    c2_i11 += 165;
    c2_i12 += 144;
  }

  c2_i14 = 0;
  c2_i16 = 0;
  for (c2_i17 = 0; c2_i17 < 192; c2_i17++) {
    for (c2_i19 = 0; c2_i19 < 10; c2_i19++) {
      chartInstance->c2_d_imgn[(c2_i19 + c2_i14) + 1650] = chartInstance->
        c2_img[c2_i19 + c2_i16];
    }

    c2_i14 += 165;
    c2_i16 += 144;
  }

  c2_i18 = 0;
  c2_i20 = 0;
  for (c2_i21 = 0; c2_i21 < 11; c2_i21++) {
    for (c2_i23 = 0; c2_i23 < 154; c2_i23++) {
      c2_f_imgn[c2_i23 + c2_i18] = chartInstance->c2_d_imgn[(c2_i23 + c2_i20) +
        31515];
    }

    c2_i18 += 154;
    c2_i20 += 165;
  }

  c2_i22 = 0;
  c2_i24 = 0;
  for (c2_i25 = 0; c2_i25 < 11; c2_i25++) {
    for (c2_i27 = 0; c2_i27 < 154; c2_i27++) {
      chartInstance->c2_d_imgn[(c2_i27 + c2_i22) + 33330] = c2_f_imgn[c2_i27 +
        c2_i24];
    }

    c2_i22 += 165;
    c2_i24 += 154;
  }

  c2_i26 = 0;
  c2_i28 = 0;
  for (c2_i29 = 0; c2_i29 < 203; c2_i29++) {
    for (c2_i31 = 0; c2_i31 < 11; c2_i31++) {
      chartInstance->c2_e_imgn[c2_i31 + c2_i26] = chartInstance->c2_d_imgn
        [(c2_i31 + c2_i28) + 1793];
    }

    c2_i26 += 11;
    c2_i28 += 165;
  }

  c2_i30 = 0;
  c2_i32 = 0;
  for (c2_i33 = 0; c2_i33 < 203; c2_i33++) {
    for (c2_i35 = 0; c2_i35 < 11; c2_i35++) {
      chartInstance->c2_d_imgn[(c2_i35 + c2_i30) + 1804] =
        chartInstance->c2_e_imgn[c2_i35 + c2_i32];
    }

    c2_i30 += 165;
    c2_i32 += 11;
  }

  c2_i34 = 0;
  for (c2_i36 = 0; c2_i36 < 10; c2_i36++) {
    for (c2_i38 = 0; c2_i38 < 165; c2_i38++) {
      c2_g_imgn[c2_i38 + c2_i34] = chartInstance->c2_d_imgn[(c2_i38 + c2_i34) +
        1650];
    }

    c2_i34 += 165;
  }

  c2_i37 = 0;
  for (c2_i39 = 0; c2_i39 < 10; c2_i39++) {
    for (c2_i40 = 0; c2_i40 < 165; c2_i40++) {
      chartInstance->c2_d_imgn[c2_i40 + c2_i37] = c2_g_imgn[c2_i40 + c2_i37];
    }

    c2_i37 += 165;
  }

  c2_emxInit_real_T(chartInstance, &c2_b_st, &c2_ser, 2, &c2_emlrtRTEI);
  for (c2_b_i = 0; c2_b_i < 144; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 11.0;
    for (c2_j = 0; c2_j < 192; c2_j++) {
      c2_b_j = (real_T)c2_j + 11.0;
      c2_d = c2_c_i - 10.0;
      c2_d1 = c2_c_i + 10.0;
      c2_f_b = (c2_d > c2_d1);
      if (c2_f_b) {
        c2_i46 = 0;
        c2_i48 = -1;
      } else {
        c2_u = c2_d;
        if (c2_u < 0.0) {
          c2_e_y = c2_u;
        } else {
          c2_e_y = c2_u;
        }

        c2_i46 = c2__s32_d_(chartInstance, c2_e_y, 0, 1U, 53, 13) - 1;
        c2_c_u = c2_d1;
        if (c2_c_u < 0.0) {
          c2_f_y = c2_c_u;
        } else {
          c2_f_y = c2_c_u;
        }

        c2_i48 = c2__s32_d_(chartInstance, c2_f_y, 0, 1U, 53, 13) - 1;
      }

      c2_d3 = c2_b_j - 10.0;
      c2_d4 = c2_b_j + 10.0;
      c2_b1 = (c2_d3 > c2_d4);
      if (c2_b1) {
        c2_i49 = 0;
        c2_i51 = -1;
      } else {
        c2_d_u = c2_d3;
        if (c2_d_u < 0.0) {
          c2_g_y = c2_d_u;
        } else {
          c2_g_y = c2_d_u;
        }

        c2_i49 = c2__s32_d_(chartInstance, c2_g_y, 0, 1U, 53, 13) - 1;
        c2_e_u = c2_d4;
        if (c2_e_u < 0.0) {
          c2_h_y = c2_e_u;
        } else {
          c2_h_y = c2_e_u;
        }

        c2_i51 = c2__s32_d_(chartInstance, c2_h_y, 0, 1U, 53, 13) - 1;
      }

      c2_i53 = c2_ser->size[0] * c2_ser->size[1];
      c2_ser->size[0] = (c2_i48 - c2_i46) + 1;
      c2_ser->size[1] = (c2_i51 - c2_i49) + 1;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_b_st, c2_ser, c2_i53,
        &c2_emlrtRTEI);
      c2_loop_ub = c2_i51 - c2_i49;
      for (c2_i55 = 0; c2_i55 <= c2_loop_ub; c2_i55++) {
        c2_b_loop_ub = c2_i48 - c2_i46;
        for (c2_i58 = 0; c2_i58 <= c2_b_loop_ub; c2_i58++) {
          c2_ser->data[c2_i58 + c2_ser->size[0] * c2_i55] =
            chartInstance->c2_d_imgn[(c2_i46 + c2_i58) + 165 * (c2_i49 + c2_i55)];
        }
      }

      c2_c_st.site = &c2_b_emlrtRSI;
      c2_nx = c2_ser->size[0] * c2_ser->size[1];
      if (441 != c2_nx) {
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c2_c_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
      }

      for (c2_i61 = 0; c2_i61 < 441; c2_i61++) {
        c2_b_ser[c2_i61] = c2_ser->data[c2_i61];
      }

      c2_c_st.site = &c2_b_emlrtRSI;
      chartInstance->c2_d_imgn[((int32_T)c2_c_i + 165 * ((int32_T)c2_b_j - 1)) -
        1] = c2_mean_shift(chartInstance, &c2_c_st, c2_b_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_i41 = 0;
  c2_i42 = 0;
  for (c2_i43 = 0; c2_i43 < 192; c2_i43++) {
    for (c2_i44 = 0; c2_i44 < 144; c2_i44++) {
      chartInstance->c2_img[c2_i44 + c2_i41] = chartInstance->c2_d_imgn[(c2_i44
        + c2_i42) + 1660];
    }

    c2_i41 += 144;
    c2_i42 += 165;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  c2_b_imresize(chartInstance, &c2_c_st, chartInstance->c2_img,
                chartInstance->c2_b_a);
  for (c2_i45 = 0; c2_i45 < 442368; c2_i45++) {
    c2_d2 = muDoubleScalarRound(chartInstance->c2_b_a[c2_i45]);
    c2_covSaturation = false;
    if (c2_d2 < 256.0) {
      if (c2_d2 >= 0.0) {
        c2_b_u = (uint8_T)c2_d2;
      } else {
        c2_covSaturation = true;
        c2_b_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d2 >= 256.0) {
      c2_covSaturation = true;
      c2_b_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_b_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
      c2_covSaturation);
    chartInstance->c2_b_imgn[c2_i45] = c2_b_u;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  for (c2_i47 = 0; c2_i47 < 442368; c2_i47++) {
    chartInstance->c2_imgn[c2_i47] = chartInstance->c2_b_imgn[c2_i47];
  }

  c2_imerode(chartInstance, chartInstance->c2_imgn, chartInstance->c2_b_imgn);
  c2_c_st.site = &c2_b_emlrtRSI;
  c2_imdilate(chartInstance, chartInstance->c2_b_imgn, chartInstance->c2_A1);
  c2_c_st.site = &c2_b_emlrtRSI;
  c2_imfilter(chartInstance, &c2_c_st, chartInstance->c2_A1,
              chartInstance->c2_b_imgn);
  for (c2_i50 = 0; c2_i50 < 442368; c2_i50++) {
    c2_d5 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c2_b_imgn[c2_i50]);
    if (c2_d5 < 256.0) {
      if (c2_d5 >= 0.0) {
        c2_u1 = (uint8_T)c2_d5;
      } else {
        c2_u1 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d5 >= 256.0) {
      c2_u1 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u1 = 0U;
    }

    chartInstance->c2_b_imgn[c2_i50] = c2_u1;
  }

  for (c2_i52 = 0; c2_i52 < 442368; c2_i52++) {
    c2_q0 = chartInstance->c2_A2[c2_i52];
    c2_qY = c2_q0 - (uint32_T)chartInstance->c2_b_imgn[c2_i52];
    if (c2_qY > c2_q0) {
      c2_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    c2_u2 = c2_qY;
    if (c2_u2 > 255U) {
      c2_u2 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    chartInstance->c2_A1[c2_i52] = (uint8_T)c2_u2;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  for (c2_i54 = 0; c2_i54 < 442368; c2_i54++) {
    chartInstance->c2_c_I2[c2_i54] = chartInstance->c2_I2[c2_i54];
  }

  c2_imresize(chartInstance, &c2_c_st, chartInstance->c2_c_I2,
              chartInstance->c2_I);
  for (c2_i56 = 0; c2_i56 < 27648; c2_i56++) {
    chartInstance->c2_img[c2_i56] = (real_T)chartInstance->c2_I[c2_i56];
  }

  for (c2_i57 = 0; c2_i57 < 35145; c2_i57++) {
    chartInstance->c2_d_imgn[c2_i57] = 0.0;
  }

  c2_i59 = 0;
  c2_i60 = 0;
  for (c2_i62 = 0; c2_i62 < 192; c2_i62++) {
    for (c2_i64 = 0; c2_i64 < 144; c2_i64++) {
      chartInstance->c2_d_imgn[(c2_i64 + c2_i59) + 1660] = chartInstance->
        c2_img[c2_i64 + c2_i60];
    }

    c2_i59 += 165;
    c2_i60 += 144;
  }

  c2_i63 = 0;
  c2_i65 = 0;
  for (c2_i66 = 0; c2_i66 < 192; c2_i66++) {
    for (c2_i68 = 0; c2_i68 < 10; c2_i68++) {
      chartInstance->c2_d_imgn[(c2_i68 + c2_i63) + 1650] = chartInstance->
        c2_img[c2_i68 + c2_i65];
    }

    c2_i63 += 165;
    c2_i65 += 144;
  }

  c2_i67 = 0;
  c2_i69 = 0;
  for (c2_i70 = 0; c2_i70 < 11; c2_i70++) {
    for (c2_i72 = 0; c2_i72 < 154; c2_i72++) {
      c2_h_imgn[c2_i72 + c2_i67] = chartInstance->c2_d_imgn[(c2_i72 + c2_i69) +
        31515];
    }

    c2_i67 += 154;
    c2_i69 += 165;
  }

  c2_i71 = 0;
  c2_i73 = 0;
  for (c2_i74 = 0; c2_i74 < 11; c2_i74++) {
    for (c2_i76 = 0; c2_i76 < 154; c2_i76++) {
      chartInstance->c2_d_imgn[(c2_i76 + c2_i71) + 33330] = c2_h_imgn[c2_i76 +
        c2_i73];
    }

    c2_i71 += 165;
    c2_i73 += 154;
  }

  c2_i75 = 0;
  c2_i77 = 0;
  for (c2_i78 = 0; c2_i78 < 203; c2_i78++) {
    for (c2_i80 = 0; c2_i80 < 11; c2_i80++) {
      c2_i_imgn[c2_i80 + c2_i75] = chartInstance->c2_d_imgn[(c2_i80 + c2_i77) +
        1793];
    }

    c2_i75 += 11;
    c2_i77 += 165;
  }

  c2_i79 = 0;
  c2_i81 = 0;
  for (c2_i82 = 0; c2_i82 < 203; c2_i82++) {
    for (c2_i84 = 0; c2_i84 < 11; c2_i84++) {
      chartInstance->c2_d_imgn[(c2_i84 + c2_i79) + 1804] = c2_i_imgn[c2_i84 +
        c2_i81];
    }

    c2_i79 += 165;
    c2_i81 += 11;
  }

  c2_i83 = 0;
  for (c2_i85 = 0; c2_i85 < 10; c2_i85++) {
    for (c2_i87 = 0; c2_i87 < 165; c2_i87++) {
      c2_j_imgn[c2_i87 + c2_i83] = chartInstance->c2_d_imgn[(c2_i87 + c2_i83) +
        1650];
    }

    c2_i83 += 165;
  }

  c2_i86 = 0;
  for (c2_i88 = 0; c2_i88 < 10; c2_i88++) {
    for (c2_i89 = 0; c2_i89 < 165; c2_i89++) {
      chartInstance->c2_d_imgn[c2_i89 + c2_i86] = c2_j_imgn[c2_i89 + c2_i86];
    }

    c2_i86 += 165;
  }

  for (c2_d_i = 0; c2_d_i < 144; c2_d_i++) {
    c2_c_i = (real_T)c2_d_i + 11.0;
    for (c2_c_j = 0; c2_c_j < 192; c2_c_j++) {
      c2_b_j = (real_T)c2_c_j + 11.0;
      c2_d6 = c2_c_i - 10.0;
      c2_d7 = c2_c_i + 10.0;
      c2_b2 = (c2_d6 > c2_d7);
      if (c2_b2) {
        c2_i95 = 0;
        c2_i96 = -1;
      } else {
        c2_f_u = c2_d6;
        if (c2_f_u < 0.0) {
          c2_k_y = c2_f_u;
        } else {
          c2_k_y = c2_f_u;
        }

        c2_i95 = c2__s32_d_(chartInstance, c2_k_y, 0, 1U, 53, 13) - 1;
        c2_g_u = c2_d7;
        if (c2_g_u < 0.0) {
          c2_l_y = c2_g_u;
        } else {
          c2_l_y = c2_g_u;
        }

        c2_i96 = c2__s32_d_(chartInstance, c2_l_y, 0, 1U, 53, 13) - 1;
      }

      c2_d9 = c2_b_j - 10.0;
      c2_d10 = c2_b_j + 10.0;
      c2_b3 = (c2_d9 > c2_d10);
      if (c2_b3) {
        c2_i98 = 0;
        c2_i99 = -1;
      } else {
        c2_h_u = c2_d9;
        if (c2_h_u < 0.0) {
          c2_m_y = c2_h_u;
        } else {
          c2_m_y = c2_h_u;
        }

        c2_i98 = c2__s32_d_(chartInstance, c2_m_y, 0, 1U, 53, 13) - 1;
        c2_i_u = c2_d10;
        if (c2_i_u < 0.0) {
          c2_n_y = c2_i_u;
        } else {
          c2_n_y = c2_i_u;
        }

        c2_i99 = c2__s32_d_(chartInstance, c2_n_y, 0, 1U, 53, 13) - 1;
      }

      c2_i101 = c2_ser->size[0] * c2_ser->size[1];
      c2_ser->size[0] = (c2_i96 - c2_i95) + 1;
      c2_ser->size[1] = (c2_i99 - c2_i98) + 1;
      c2_emxEnsureCapacity_real_T(chartInstance, &c2_b_st, c2_ser, c2_i101,
        &c2_emlrtRTEI);
      c2_c_loop_ub = c2_i99 - c2_i98;
      for (c2_i104 = 0; c2_i104 <= c2_c_loop_ub; c2_i104++) {
        c2_d_loop_ub = c2_i96 - c2_i95;
        for (c2_i106 = 0; c2_i106 <= c2_d_loop_ub; c2_i106++) {
          c2_ser->data[c2_i106 + c2_ser->size[0] * c2_i104] =
            chartInstance->c2_d_imgn[(c2_i95 + c2_i106) + 165 * (c2_i98 +
            c2_i104)];
        }
      }

      c2_c_st.site = &c2_b_emlrtRSI;
      c2_b_nx = c2_ser->size[0] * c2_ser->size[1];
      if (441 != c2_b_nx) {
        c2_p_y = NULL;
        sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_q_y = NULL;
        sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        sf_mex_call(&c2_c_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_q_y)));
      }

      for (c2_i108 = 0; c2_i108 < 441; c2_i108++) {
        c2_b_ser[c2_i108] = c2_ser->data[c2_i108];
      }

      c2_c_st.site = &c2_b_emlrtRSI;
      chartInstance->c2_d_imgn[((int32_T)c2_c_i + 165 * ((int32_T)c2_b_j - 1)) -
        1] = c2_mean_shift(chartInstance, &c2_c_st, c2_b_ser, 221.0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_emxFree_real_T(chartInstance, &c2_ser);
  c2_i90 = 0;
  c2_i91 = 0;
  for (c2_i92 = 0; c2_i92 < 192; c2_i92++) {
    for (c2_i93 = 0; c2_i93 < 144; c2_i93++) {
      chartInstance->c2_img[c2_i93 + c2_i90] = chartInstance->c2_d_imgn[(c2_i93
        + c2_i91) + 1660];
    }

    c2_i90 += 144;
    c2_i91 += 165;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  c2_b_imresize(chartInstance, &c2_c_st, chartInstance->c2_img,
                chartInstance->c2_b_a);
  for (c2_i94 = 0; c2_i94 < 442368; c2_i94++) {
    c2_d8 = muDoubleScalarRound(chartInstance->c2_b_a[c2_i94]);
    if (c2_d8 < 256.0) {
      if (c2_d8 >= 0.0) {
        c2_u3 = (uint8_T)c2_d8;
      } else {
        c2_u3 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d8 >= 256.0) {
      c2_u3 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u3 = 0U;
    }

    chartInstance->c2_b_imgn[c2_i94] = c2_u3;
  }

  c2_c_st.site = &c2_b_emlrtRSI;
  for (c2_i97 = 0; c2_i97 < 442368; c2_i97++) {
    chartInstance->c2_c_imgn[c2_i97] = chartInstance->c2_b_imgn[c2_i97];
  }

  c2_b_imerode(chartInstance, chartInstance->c2_c_imgn, chartInstance->c2_b_imgn);
  c2_c_st.site = &c2_b_emlrtRSI;
  c2_b_imdilate(chartInstance, chartInstance->c2_b_imgn, chartInstance->c2_A2);
  c2_c_st.site = &c2_b_emlrtRSI;
  c2_b_imfilter(chartInstance, &c2_c_st, chartInstance->c2_A2,
                chartInstance->c2_b_imgn);
  for (c2_i100 = 0; c2_i100 < 442368; c2_i100++) {
    c2_d11 = muDoubleScalarRound(0.3 * (real_T)chartInstance->c2_b_imgn[c2_i100]);
    if (c2_d11 < 256.0) {
      if (c2_d11 >= 0.0) {
        c2_u4 = (uint8_T)c2_d11;
      } else {
        c2_u4 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d11 >= 256.0) {
      c2_u4 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u4 = 0U;
    }

    chartInstance->c2_b_imgn[c2_i100] = c2_u4;
  }

  for (c2_i102 = 0; c2_i102 < 442368; c2_i102++) {
    c2_b_q0 = chartInstance->c2_I2[c2_i102];
    c2_b_qY = c2_b_q0 - (uint32_T)chartInstance->c2_b_imgn[c2_i102];
    if (c2_b_qY > c2_b_q0) {
      c2_b_qY = 0U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    c2_u5 = c2_b_qY;
    if (c2_u5 > 255U) {
      c2_u5 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    chartInstance->c2_A2[c2_i102] = (uint8_T)c2_u5;
  }

  for (c2_i103 = 0; c2_i103 < 442368; c2_i103++) {
    chartInstance->c2_b_a[c2_i103] = (real_T)chartInstance->c2_I2[c2_i103];
  }

  for (c2_k = 0; c2_k < 442368; c2_k++) {
    c2_b_k = c2_k;
    c2_f_a = chartInstance->c2_b_a[c2_b_k];
    c2_o_y = muDoubleScalarPower(c2_f_a, 5.0);
    chartInstance->c2_G[c2_b_k] = c2_o_y;
  }

  for (c2_i105 = 0; c2_i105 < 442368; c2_i105++) {
    chartInstance->c2_G[c2_i105] /= 4.228250625E+9;
  }

  for (c2_e_col = 0; c2_e_col < 768; c2_e_col++) {
    c2_f_col = c2_e_col;
    for (c2_i109 = 0; c2_i109 < 442368; c2_i109++) {
      chartInstance->c2_d_I2[c2_i109] = chartInstance->c2_I2[c2_i109];
    }

    c2_c_y[c2_f_col] = c2_sumColumnB(chartInstance, chartInstance->c2_d_I2,
      c2_f_col + 1);
  }

  for (c2_i107 = 0; c2_i107 < 768; c2_i107++) {
    c2_c_y[c2_i107] /= 576.0;
  }

  c2_r_y = c2_b_sumColumnB(chartInstance, c2_c_y);
  c2_s_y = c2_r_y / 768.0;
  c2_lm = 255.0 - c2_s_y;
  c2_e_i = 0;
  while (c2_e_i <= 442367) {
    if (chartInstance->c2_G[c2_e_i] < c2_lm) {
      chartInstance->c2_G[c2_e_i] = 0.0;
    }

    c2_e_i = c2__s32_add__(chartInstance, c2_e_i, 1, 0, 1U, 53, 13);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  for (c2_i110 = 0; c2_i110 < 442368; c2_i110++) {
    c2_d12 = muDoubleScalarRound(chartInstance->c2_G[c2_i110]);
    if (c2_d12 < 256.0) {
      if (c2_d12 >= 0.0) {
        c2_u6 = (uint8_T)c2_d12;
      } else {
        c2_u6 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d12 >= 256.0) {
      c2_u6 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u6 = 0U;
    }

    (*chartInstance->c2_y)[c2_i110] = c2_u6;
  }

  c2_g_b = c2_c_x + 0.5;
  for (c2_i111 = 0; c2_i111 < 442368; c2_i111++) {
    c2_d13 = muDoubleScalarRound((real_T)chartInstance->c2_A1[c2_i111] * c2_g_b);
    if (c2_d13 < 256.0) {
      if (c2_d13 >= 0.0) {
        c2_u7 = (uint8_T)c2_d13;
      } else {
        c2_u7 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d13 >= 256.0) {
      c2_u7 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u7 = 0U;
    }

    chartInstance->c2_A1[c2_i111] = c2_u7;
  }

  c2_d_x = c2_b_i2 - c2_b_i1;
  c2_e_x = c2_d_x;
  c2_f_x = c2_e_x;
  c2_t_y = muDoubleScalarAbs(c2_f_x);
  c2_g_x = c2_b_i1 - c2_b_i2;
  c2_h_x = c2_g_x;
  c2_i_x = c2_h_x;
  c2_u_y = muDoubleScalarAbs(c2_i_x);
  c2_h_b = c2_c_x + 0.5 * ((c2_t_y + (c2_b_i2 - c2_b_i1)) / (2.0 * c2_u_y));
  for (c2_i112 = 0; c2_i112 < 442368; c2_i112++) {
    c2_d14 = muDoubleScalarRound((real_T)chartInstance->c2_A2[c2_i112] * c2_h_b);
    if (c2_d14 < 256.0) {
      if (c2_d14 >= 0.0) {
        c2_u9 = (uint8_T)c2_d14;
      } else {
        c2_u9 = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
      }
    } else if (c2_d14 >= 256.0) {
      c2_u9 = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    } else {
      c2_u9 = 0U;
    }

    chartInstance->c2_A2[c2_i112] = c2_u9;
  }

  for (c2_i113 = 0; c2_i113 < 442368; c2_i113++) {
    c2_u8 = (uint32_T)chartInstance->c2_A1[c2_i113] + (uint32_T)
      chartInstance->c2_A2[c2_i113];
    if (c2_u8 > 255U) {
      c2_u8 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    c2_u10 = (uint32_T)(uint8_T)c2_u8 + (uint32_T)(*chartInstance->c2_y)[c2_i113];
    if (c2_u10 > 255U) {
      c2_u10 = 255U;
      sf_data_saturate_error(chartInstance->S, 1U, 53, 13);
    }

    (*chartInstance->c2_y)[c2_i113] = (uint8_T)c2_u10;
  }

  c2_do_animation_call_c2_main(chartInstance);
  for (c2_i114 = 0; c2_i114 < 442368; c2_i114++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                      (*chartInstance->c2_y)[c2_i114]);
  }
}

static void mdl_start_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_main(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_main(SFc2_mainInstanceStruct
  *chartInstance)
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
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 1, -1, 72);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 53, -1,
    66);
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

static void mdl_cleanup_runtime_resources_c2_main(SFc2_mainInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void initSimStructsc2_main(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static real_T c2_mean_shift(SFc2_mainInstanceStruct *chartInstance, const
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
    emlrtIntegerCheckR2012b(c2_p, &c2_emlrtDCI, (void *)c2_sp);
  }

  c2_i1 = (int32_T)c2_p;
  if ((c2_i1 < 1) || (c2_i1 > 441)) {
    emlrtDynamicBoundsCheckR2012b(c2_i1, 1, 441, &c2_emlrtBCI, (void *)c2_sp);
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
          emlrtIntegerCheckR2012b(c2_c_i, &c2_b_emlrtDCI, (void *)c2_sp);
        }

        c2_i5 = (int32_T)c2_c_i;
        if ((c2_i5 < 1) || (c2_i5 > 441)) {
          emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 441, &c2_b_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_c_emlrtDCI, (void *)c2_sp);
        }

        c2_i7 = (int32_T)c2_c_i;
        if ((c2_i7 < 1) || (c2_i7 > 441)) {
          emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 441, &c2_c_emlrtBCI, (void *)
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

const mxArray *sf_c2_main_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char_T *c2_data[5] = {
    "789c6360f4f465646060e06380000b6e08cd0bc42c402c001567624005e8f28c68ea18a1f230c00ae5f1a2a9ef87d2c9f97925a91525104e5e626e2a5c674a7e"
    "6e665e625e494865412a43516a717e4e596a0a58262d332735243337351899e307e2e5ba2149c139202910db392335393bb83497a128a318e1c21c640e3c3c12",
    "90fccb80e45f64bf610b0f74801e1e20750a40482dfb18d1d461dac702b62fa428318f9af6b1e2b48f156c5f69665e8905927d1328b44f1ba77d90f084c947bb"
    "c6ba5ac58479bac51464a6c4f83a86f8383a2924e7a7a4c6e4a626e6c5176764a695c4800243af00ac9e5078f013e93e649a05453d078332503075e54d467ada",
    "77fa6daf2f3ded838181b2af02877dc4a62f511cf609a0c9bb2727a5e4668418866497a5b897bb98279615641422b92300873b909c8cd71d0c487c6477d0cb7c"
    "5ae653647972f3690185eee322e03e983cc2150c28f62750683f1b4efb213229f9a54939a908fb6650689f214efb50e5898a0f04532f17aa8f5ef9fd59dd0dba",
    "969f01fabf1be9691f0c0cd5f2530c877d0268f2e566c9912e21ce45a1459121fee18919a6267e994eae43bffc0400d6ca8ca3",
    "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c2_data[0], 2896U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static real_T c2_sumColumnB(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_b_x[442368], int32_T c2_col)
{
  real_T c2_b_y;
  int32_T c2_b_col;
  int32_T c2_b_k;
  int32_T c2_i0;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_col = c2_col - 1;
  c2_i0 = c2_b_col * 576;
  c2_b_y = (real_T)c2_b_x[c2_i0];
  for (c2_k = 0; c2_k < 575; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += (real_T)c2_b_x[(c2_i0 + c2_b_k) + 1];
  }

  return c2_b_y;
}

static real_T c2_b_sumColumnB(SFc2_mainInstanceStruct *chartInstance, real_T
  c2_b_x[768])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_b_x[0];
  for (c2_k = 0; c2_k < 767; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_b_x[c2_b_k + 1];
  }

  return c2_b_y;
}

static void c2_imresize(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint8_T c2_c_Ain[442368], uint8_T c2_Bout[27648])
{
  emlrtStack c2_st;
  real_T c2_c_weights_data[1920];
  real_T c2_b_weights_data[1440];
  int32_T c2_b_indices_data[1920];
  int32_T c2_indices_data[1440];
  int32_T c2_b_indices_size[2];
  int32_T c2_b_weights_size[2];
  int32_T c2_indices_size[2];
  int32_T c2_weights_size[2];
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_c_emlrtRSI;
  c2_contributions(chartInstance, &c2_st, c2_b_weights_data, c2_weights_size,
                   c2_indices_data, c2_indices_size);
  c2_st.site = &c2_d_emlrtRSI;
  for (c2_i = 0; c2_i < 442368; c2_i++) {
    chartInstance->c2_b_Ain[c2_i] = c2_c_Ain[c2_i];
  }

  c2_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_b_Ain,
                    c2_b_weights_data, c2_weights_size, c2_indices_data,
                    chartInstance->c2_b_APartialResize);
  c2_st.site = &c2_e_emlrtRSI;
  c2_b_contributions(chartInstance, &c2_st, c2_c_weights_data, c2_b_weights_size,
                     c2_b_indices_data, c2_b_indices_size);
  c2_st.site = &c2_f_emlrtRSI;
  c2_b_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_b_APartialResize,
                      c2_c_weights_data, c2_b_weights_size, c2_b_indices_data,
                      c2_Bout);
}

static void c2_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_b_x[1440];
  real_T c2_f_b[1440];
  real_T c2_b_y[144];
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
  int32_T c2_indices[1440];
  int32_T c2_aux[1152];
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
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_b;
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
  int32_T c2_k_b;
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
  boolean_T c2_b_bv[1440];
  boolean_T c2_b_bv1[1440];
  boolean_T c2_b_bv2[1440];
  boolean_T c2_b_bv3[1440];
  boolean_T c2_copyCols[10];
  boolean_T c2_exitg1;
  boolean_T c2_h_b;
  boolean_T c2_i_b;
  boolean_T c2_l_b;
  boolean_T c2_m_b;
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
    for (c2_c_k = 0; c2_c_k < 144; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = -2 + (c2_c_varargin_3 << 2);
      c2_g_b = c2_varargin_6;
      c2_c = c2_f_a + c2_g_b;
      c2_indices[c2_g_varargin_1 + 144 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1440; c2_i++) {
    c2_f_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 10; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 144; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_b_x[c2_h_varargin_1 + 144 * c2_b_varargin_2] = (2.5 + 4.0 * (real_T)
        c2_d_varargin_3) - c2_f_b[c2_varargin_5 + 144 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 1440; c2_i1++) {
    c2_b_x[c2_i1] *= 0.25;
  }

  for (c2_i2 = 0; c2_i2 < 1440; c2_i2++) {
    c2_b_bv[c2_i2] = (0.0 <= c2_b_x[c2_i2]);
  }

  for (c2_i3 = 0; c2_i3 < 1440; c2_i3++) {
    c2_b_bv1[c2_i3] = (c2_b_x[c2_i3] <= 1.0);
  }

  for (c2_i4 = 0; c2_i4 < 1440; c2_i4++) {
    c2_b_bv2[c2_i4] = (-1.0 <= c2_b_x[c2_i4]);
  }

  for (c2_i5 = 0; c2_i5 < 1440; c2_i5++) {
    c2_b_bv3[c2_i5] = (c2_b_x[c2_i5] < 0.0);
  }

  for (c2_i6 = 0; c2_i6 < 1440; c2_i6++) {
    c2_b_x[c2_i6] = (c2_b_x[c2_i6] + 1.0) * (real_T)(c2_b_bv2[c2_i6] &&
      c2_b_bv3[c2_i6]) + (1.0 - c2_b_x[c2_i6]) * (real_T)(c2_b_bv[c2_i6] &&
      c2_b_bv1[c2_i6]);
  }

  for (c2_i7 = 0; c2_i7 < 1440; c2_i7++) {
    c2_b_x[c2_i7] *= 0.25;
  }

  for (c2_xj = 0; c2_xj < 144; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_b_x[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 9; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 144;
    for (c2_c_xj = 0; c2_c_xj < 144; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_b_x[c2_ix];
    }
  }

  for (c2_i8 = 0; c2_i8 < 1440; c2_i8++) {
    c2_f_b[c2_i8] = c2_b_x[c2_i8];
  }

  for (c2_f_k = 0; c2_f_k < 10; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 144; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_b_x[c2_j_varargin_1 + 144 * c2_d_varargin_2] = c2_f_b[c2_e_varargin_3 +
        144 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[576] = 576;
  for (c2_b_i = 0; c2_b_i < 575; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 577] = c2_aux[c2_b_i + 576] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1440; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_c_x = c2_oldIdx - 1.0;
    c2_g_a = c2_c_x;
    c2_d_x = c2_g_a;
    c2_e_x = c2_d_x;
    c2_f_x = c2_e_x;
    c2_h_b = muDoubleScalarIsNaN(c2_f_x);
    if (c2_h_b) {
      c2_h_k = rtNaN;
    } else {
      c2_g_x = c2_e_x;
      c2_i_b = muDoubleScalarIsInf(c2_g_x);
      if (c2_i_b) {
        c2_h_k = rtNaN;
      } else if (c2_e_x == 0.0) {
        c2_h_k = 0.0;
      } else {
        c2_h_k = muDoubleScalarRem(c2_e_x, 1152.0);
        c2_rEQ0 = (c2_h_k == 0.0);
        if (c2_rEQ0) {
          c2_h_k = 0.0;
        } else if (c2_e_x < 0.0) {
          c2_h_k += 1152.0;
        }
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_g_emlrtRSI;
  c2_b_st.site = &c2_h_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 10; c2_i9++) {
    c2_copyCols[c2_i9] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 10; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 143;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_i_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_j_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_k_b = c2_j_b;
    if (c2_n_a > c2_k_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_k_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_j_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_b_x[c2_b_ix] == 0.0) {
        c2_l_b = true;
      } else {
        c2_h_x = c2_b_x[c2_b_ix];
        c2_m_b = muDoubleScalarIsNaN(c2_h_x);
        if (c2_m_b) {
          c2_l_b = true;
        } else {
          c2_l_b = false;
        }
      }

      if (!c2_l_b) {
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
  c2_weights_size[1] = 144;
  for (c2_i10 = 0; c2_i10 < 144; c2_i10++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_weights_data[c2_i11 + c2_weights_size[0] * c2_i10] = c2_b_x[c2_i10 +
        144 * (c2_tmp_data[c2_i11] - 1)];
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
  c2_indices_size[1] = 144;
  for (c2_i12 = 0; c2_i12 < 144; c2_i12++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i13 = 0; c2_i13 <= c2_b_loop_ub; c2_i13++) {
      c2_indices_data[c2_i13 + c2_indices_size[0] * c2_i12] = c2_indices[c2_i12
        + 144 * (c2_b_tmp_data[c2_i13] - 1)];
    }
  }
}

static void c2_check_forloop_overflow_error(SFc2_mainInstanceStruct
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

static void c2_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[442368], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[110592])
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
  uint8_T c2_inCol[576];
  uint8_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_k_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inCInd = 0; c2_inCInd < 768; c2_inCInd++) {
    c2_b_inCInd = (real_T)c2_inCInd + 1.0;
    c2_c_inCInd = (int32_T)c2_b_inCInd - 1;
    for (c2_i = 0; c2_i < 576; c2_i++) {
      c2_inCol[c2_i] = c2_in_[c2_i + 576 * c2_c_inCInd];
    }

    for (c2_outRInd = 0; c2_outRInd < 144; c2_outRInd++) {
      c2_b_outRInd = (real_T)c2_outRInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_l_emlrtRSI;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_siz[c2_i1] = (real_T)c2_weights_size[c2_i1];
      }

      c2_varargin_2 = c2_b_outRInd;
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_b_siz[c2_i2] = (int32_T)c2_siz[c2_i2];
      }

      c2_c_st.site = &c2_m_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
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

      c2_out_[((int32_T)c2_b_outRInd + 144 * ((int32_T)c2_b_inCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static int32_T c2_eml_sub2ind(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2)
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
  boolean_T c2_f_b;
  boolean_T c2_p;
  (void)chartInstance;
  c2_hi = c2_siz[0];
  c2_b_hi = c2_hi;
  if (1.0 <= (real_T)c2_b_hi) {
    c2_f_b = true;
  } else {
    c2_f_b = false;
  }

  if (!c2_f_b) {
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

static void c2_b_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_b_x[1920];
  real_T c2_f_b[1920];
  real_T c2_b_y[192];
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
  int32_T c2_indices[1920];
  int32_T c2_aux[1536];
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
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_b;
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
  int32_T c2_k_b;
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
  boolean_T c2_b_bv[1920];
  boolean_T c2_b_bv1[1920];
  boolean_T c2_b_bv2[1920];
  boolean_T c2_b_bv3[1920];
  boolean_T c2_copyCols[10];
  boolean_T c2_exitg1;
  boolean_T c2_h_b;
  boolean_T c2_i_b;
  boolean_T c2_l_b;
  boolean_T c2_m_b;
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
    for (c2_c_k = 0; c2_c_k < 192; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = -2 + (c2_c_varargin_3 << 2);
      c2_g_b = c2_varargin_6;
      c2_c = c2_f_a + c2_g_b;
      c2_indices[c2_g_varargin_1 + 192 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1920; c2_i++) {
    c2_f_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 10; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 192; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_b_x[c2_h_varargin_1 + 192 * c2_b_varargin_2] = (2.5 + 4.0 * (real_T)
        c2_d_varargin_3) - c2_f_b[c2_varargin_5 + 192 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 1920; c2_i1++) {
    c2_b_x[c2_i1] *= 0.25;
  }

  for (c2_i2 = 0; c2_i2 < 1920; c2_i2++) {
    c2_b_bv[c2_i2] = (0.0 <= c2_b_x[c2_i2]);
  }

  for (c2_i3 = 0; c2_i3 < 1920; c2_i3++) {
    c2_b_bv1[c2_i3] = (c2_b_x[c2_i3] <= 1.0);
  }

  for (c2_i4 = 0; c2_i4 < 1920; c2_i4++) {
    c2_b_bv2[c2_i4] = (-1.0 <= c2_b_x[c2_i4]);
  }

  for (c2_i5 = 0; c2_i5 < 1920; c2_i5++) {
    c2_b_bv3[c2_i5] = (c2_b_x[c2_i5] < 0.0);
  }

  for (c2_i6 = 0; c2_i6 < 1920; c2_i6++) {
    c2_b_x[c2_i6] = (c2_b_x[c2_i6] + 1.0) * (real_T)(c2_b_bv2[c2_i6] &&
      c2_b_bv3[c2_i6]) + (1.0 - c2_b_x[c2_i6]) * (real_T)(c2_b_bv[c2_i6] &&
      c2_b_bv1[c2_i6]);
  }

  for (c2_i7 = 0; c2_i7 < 1920; c2_i7++) {
    c2_b_x[c2_i7] *= 0.25;
  }

  for (c2_xj = 0; c2_xj < 192; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_b_x[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 9; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 192;
    for (c2_c_xj = 0; c2_c_xj < 192; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_b_x[c2_ix];
    }
  }

  for (c2_i8 = 0; c2_i8 < 1920; c2_i8++) {
    c2_f_b[c2_i8] = c2_b_x[c2_i8];
  }

  for (c2_f_k = 0; c2_f_k < 10; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 192; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_b_x[c2_j_varargin_1 + 192 * c2_d_varargin_2] = c2_f_b[c2_e_varargin_3 +
        192 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[768] = 768;
  for (c2_b_i = 0; c2_b_i < 767; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 769] = c2_aux[c2_b_i + 768] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1920; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_c_x = c2_oldIdx - 1.0;
    c2_g_a = c2_c_x;
    c2_d_x = c2_g_a;
    c2_e_x = c2_d_x;
    c2_f_x = c2_e_x;
    c2_h_b = muDoubleScalarIsNaN(c2_f_x);
    if (c2_h_b) {
      c2_h_k = rtNaN;
    } else {
      c2_g_x = c2_e_x;
      c2_i_b = muDoubleScalarIsInf(c2_g_x);
      if (c2_i_b) {
        c2_h_k = rtNaN;
      } else if (c2_e_x == 0.0) {
        c2_h_k = 0.0;
      } else {
        c2_h_k = muDoubleScalarRem(c2_e_x, 1536.0);
        c2_rEQ0 = (c2_h_k == 0.0);
        if (c2_rEQ0) {
          c2_h_k = 0.0;
        } else if (c2_e_x < 0.0) {
          c2_h_k += 1536.0;
        }
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_g_emlrtRSI;
  c2_b_st.site = &c2_h_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 10; c2_i9++) {
    c2_copyCols[c2_i9] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 10; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 191;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_i_emlrtRSI;
    c2_m_a = c2_b_i1;
    c2_j_b = c2_b_i2;
    c2_n_a = c2_m_a;
    c2_k_b = c2_j_b;
    if (c2_n_a > c2_k_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_k_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_j_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_b_x[c2_b_ix] == 0.0) {
        c2_l_b = true;
      } else {
        c2_h_x = c2_b_x[c2_b_ix];
        c2_m_b = muDoubleScalarIsNaN(c2_h_x);
        if (c2_m_b) {
          c2_l_b = true;
        } else {
          c2_l_b = false;
        }
      }

      if (!c2_l_b) {
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
  c2_weights_size[1] = 192;
  for (c2_i10 = 0; c2_i10 < 192; c2_i10++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_weights_data[c2_i11 + c2_weights_size[0] * c2_i10] = c2_b_x[c2_i10 +
        192 * (c2_tmp_data[c2_i11] - 1)];
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
  c2_indices_size[1] = 192;
  for (c2_i12 = 0; c2_i12 < 192; c2_i12++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i13 = 0; c2_i13 <= c2_b_loop_ub; c2_i13++) {
      c2_indices_data[c2_i13 + c2_indices_size[0] * c2_i12] = c2_indices[c2_i12
        + 192 * (c2_b_tmp_data[c2_i13] - 1)];
    }
  }
}

static void c2_b_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[110592], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[27648])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_siz[2];
  real_T c2_b_inRInd;
  real_T c2_b_outCInd;
  real_T c2_b_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_e_varargin_1;
  real_T c2_f_varargin_1;
  real_T c2_h_a;
  real_T c2_ndx;
  real_T c2_rowStart;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_b_c;
  int32_T c2_c;
  int32_T c2_f_a;
  int32_T c2_g_a;
  int32_T c2_g_b;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_idx;
  int32_T c2_inRInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outCInd;
  int32_T c2_pixelIndex;
  uint8_T c2_pixelValue;
  uint8_T c2_u;
  boolean_T c2_f_b;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_k_emlrtRSI;
  for (c2_inRInd = 0; c2_inRInd < 144; c2_inRInd++) {
    c2_b_inRInd = (real_T)c2_inRInd + 1.0;
    c2_b_st.site = &c2_p_emlrtRSI;
    c2_e_varargin_1 = c2_b_inRInd;
    c2_c_st.site = &c2_m_emlrtRSI;
    c2_f_varargin_1 = c2_e_varargin_1;
    c2_b_x = c2_f_varargin_1;
    if (c2_b_x <= 144.0) {
      c2_f_b = true;
    } else {
      c2_f_b = false;
    }

    if (!c2_f_b) {
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
      sf_mex_call(&c2_c_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_idx = (int32_T)c2_f_varargin_1;
    c2_rowStart = (real_T)c2_idx;
    for (c2_outCInd = 0; c2_outCInd < 192; c2_outCInd++) {
      c2_b_outCInd = (real_T)c2_outCInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_q_emlrtRSI;
      for (c2_i = 0; c2_i < 2; c2_i++) {
        c2_siz[c2_i] = (real_T)c2_weights_size[c2_i];
      }

      c2_varargin_2 = c2_b_outCInd;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_b_siz[c2_i1] = (int32_T)c2_siz[c2_i1];
      }

      c2_c_st.site = &c2_m_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i2 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i2; c2_k++) {
        c2_f_a = c2_indices_data[c2_linearInds] - 1;
        c2_c = c2_f_a;
        c2_g_a = c2_c;
        c2_b_c = c2_g_a * 144;
        c2_h_a = c2_rowStart;
        c2_g_b = c2_b_c;
        c2_pixelIndex = ((int32_T)c2_h_a + c2_g_b) - 1;
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

      c2_out_[((int32_T)c2_b_inRInd + 144 * ((int32_T)c2_b_outCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static real_T c2_c_sumColumnB(SFc2_mainInstanceStruct *chartInstance, real_T
  c2_b_x[441])
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

static void c2_b_imresize(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_Ain[27648], real_T c2_Bout[442368])
{
  emlrtStack c2_st;
  real_T c2_b_weights_data[2304];
  int32_T c2_b_indices_data[3072];
  int32_T c2_indices_data[2304];
  int32_T c2_b_indices_size[2];
  int32_T c2_b_weights_size[2];
  int32_T c2_indices_size[2];
  int32_T c2_weights_size[2];
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_c_emlrtRSI;
  c2_c_contributions(chartInstance, &c2_st, c2_b_weights_data, c2_weights_size,
                     c2_indices_data, c2_indices_size);
  c2_st.site = &c2_d_emlrtRSI;
  for (c2_i = 0; c2_i < 27648; c2_i++) {
    chartInstance->c2_Ain[c2_i] = c2_c_Ain[c2_i];
  }

  c2_c_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_Ain,
                      c2_b_weights_data, c2_weights_size, c2_indices_data,
                      chartInstance->c2_APartialResize);
  c2_st.site = &c2_e_emlrtRSI;
  c2_d_contributions(chartInstance, &c2_st, chartInstance->c2_weights_data,
                     c2_b_weights_size, c2_b_indices_data, c2_b_indices_size);
  c2_st.site = &c2_f_emlrtRSI;
  c2_d_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_APartialResize,
                      chartInstance->c2_weights_data, c2_b_weights_size,
                      c2_b_indices_data, c2_Bout);
}

static void c2_c_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  static int32_T c2_iv[576] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3,
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
    141, 141, 142, 142, 142, 142, 143, 143 };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_f[2304];
  real_T c2_f_b[2304];
  real_T c2_b_y[576];
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
  int32_T c2_indices[2304];
  int32_T c2_aux[288];
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
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_b;
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
  boolean_T c2_b_bv[2304];
  boolean_T c2_b_bv1[2304];
  boolean_T c2_b_bv2[2304];
  boolean_T c2_b_bv3[2304];
  boolean_T c2_copyCols[4];
  boolean_T c2_exitg1;
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
  for (c2_k = 0; c2_k < 4; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_e_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_c_k = 0; c2_c_k < 576; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = c2_iv[c2_c_varargin_3];
      c2_g_b = c2_varargin_6;
      c2_c = c2_f_a + c2_g_b;
      c2_indices[c2_g_varargin_1 + 576 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 2304; c2_i++) {
    c2_f_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 4; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 576; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_f[c2_h_varargin_1 + 576 * c2_b_varargin_2] = (0.625 + 0.25 * (real_T)
        c2_d_varargin_3) - c2_f_b[c2_varargin_5 + 576 * c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 2304; c2_i1++) {
    c2_b_bv[c2_i1] = (0.0 <= c2_f[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 2304; c2_i2++) {
    c2_b_bv1[c2_i2] = (c2_f[c2_i2] <= 1.0);
  }

  for (c2_i3 = 0; c2_i3 < 2304; c2_i3++) {
    c2_b_bv2[c2_i3] = (-1.0 <= c2_f[c2_i3]);
  }

  for (c2_i4 = 0; c2_i4 < 2304; c2_i4++) {
    c2_b_bv3[c2_i4] = (c2_f[c2_i4] < 0.0);
  }

  for (c2_i5 = 0; c2_i5 < 2304; c2_i5++) {
    c2_f[c2_i5] = (c2_f[c2_i5] + 1.0) * (real_T)(c2_b_bv2[c2_i5] &&
      c2_b_bv3[c2_i5]) + (1.0 - c2_f[c2_i5]) * (real_T)(c2_b_bv[c2_i5] &&
      c2_b_bv1[c2_i5]);
  }

  for (c2_xj = 0; c2_xj < 576; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 576;
    for (c2_c_xj = 0; c2_c_xj < 576; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i6 = 0; c2_i6 < 2304; c2_i6++) {
    c2_f_b[c2_i6] = c2_f[c2_i6];
  }

  for (c2_f_k = 0; c2_f_k < 4; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 576; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_j_varargin_1 + 576 * c2_d_varargin_2] = c2_f_b[c2_e_varargin_3 +
        576 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[144] = 144;
  for (c2_b_i = 0; c2_b_i < 143; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 145] = c2_aux[c2_b_i + 144] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 2304; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_b_x = c2_oldIdx - 1.0;
    c2_g_a = c2_b_x;
    c2_c_x = c2_g_a;
    c2_d_x = c2_c_x;
    c2_e_x = c2_d_x;
    c2_h_b = muDoubleScalarIsInf(c2_e_x);
    if (c2_h_b) {
      c2_h_k = rtNaN;
    } else if (c2_d_x == 0.0) {
      c2_h_k = 0.0;
    } else {
      c2_h_k = muDoubleScalarRem(c2_d_x, 288.0);
      c2_rEQ0 = (c2_h_k == 0.0);
      if (c2_rEQ0) {
        c2_h_k = 0.0;
      } else if (c2_d_x < 0.0) {
        c2_h_k += 288.0;
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_g_emlrtRSI;
  c2_b_st.site = &c2_h_emlrtRSI;
  for (c2_i7 = 0; c2_i7 < 4; c2_i7++) {
    c2_copyCols[c2_i7] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 4; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 575;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_i_emlrtRSI;
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
      c2_d_st.site = &c2_j_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_f[c2_b_ix] == 0.0) {
        c2_k_b = true;
      } else {
        c2_f_x = c2_f[c2_b_ix];
        c2_l_b = muDoubleScalarIsNaN(c2_f_x);
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
  c2_weights_size[1] = 576;
  for (c2_i8 = 0; c2_i8 < 576; c2_i8++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
      c2_b_weights_data[c2_i9 + c2_weights_size[0] * c2_i8] = c2_f[c2_i8 + 576 *
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
  c2_indices_size[1] = 576;
  for (c2_i10 = 0; c2_i10 < 576; c2_i10++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_b_loop_ub; c2_i11++) {
      c2_indices_data[c2_i11 + c2_indices_size[0] * c2_i10] = c2_indices[c2_i10
        + 576 * (c2_b_tmp_data[c2_i11] - 1)];
    }
  }
}

static void c2_c_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_in_[27648], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[110592])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_inCol[144];
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
  c2_st.site = &c2_k_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inCInd = 0; c2_inCInd < 192; c2_inCInd++) {
    c2_b_inCInd = (real_T)c2_inCInd + 1.0;
    c2_c_inCInd = (int32_T)c2_b_inCInd - 1;
    for (c2_i = 0; c2_i < 144; c2_i++) {
      c2_inCol[c2_i] = c2_in_[c2_i + 144 * c2_c_inCInd];
    }

    for (c2_outRInd = 0; c2_outRInd < 576; c2_outRInd++) {
      c2_b_outRInd = (real_T)c2_outRInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_l_emlrtRSI;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_siz[c2_i1] = (real_T)c2_weights_size[c2_i1];
      }

      c2_varargin_2 = c2_b_outRInd;
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_b_siz[c2_i2] = (int32_T)c2_siz[c2_i2];
      }

      c2_c_st.site = &c2_m_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
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

      c2_out_[((int32_T)c2_b_outRInd + 576 * ((int32_T)c2_b_inCInd - 1)) - 1] =
        c2_sumVal1;
    }
  }
}

static void c2_d_contributions(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_b_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  static int32_T c2_iv[768] = { -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3,
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
    152, 153, 153, 153, 153, 154, 154, 154, 154, 155, 155, 155, 155, 156, 156,
    156, 156, 157, 157, 157, 157, 158, 158, 158, 158, 159, 159, 159, 159, 160,
    160, 160, 160, 161, 161, 161, 161, 162, 162, 162, 162, 163, 163, 163, 163,
    164, 164, 164, 164, 165, 165, 165, 165, 166, 166, 166, 166, 167, 167, 167,
    167, 168, 168, 168, 168, 169, 169, 169, 169, 170, 170, 170, 170, 171, 171,
    171, 171, 172, 172, 172, 172, 173, 173, 173, 173, 174, 174, 174, 174, 175,
    175, 175, 175, 176, 176, 176, 176, 177, 177, 177, 177, 178, 178, 178, 178,
    179, 179, 179, 179, 180, 180, 180, 180, 181, 181, 181, 181, 182, 182, 182,
    182, 183, 183, 183, 183, 184, 184, 184, 184, 185, 185, 185, 185, 186, 186,
    186, 186, 187, 187, 187, 187, 188, 188, 188, 188, 189, 189, 189, 189, 190,
    190, 190, 190, 191, 191 };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_f[3072];
  real_T c2_b_y[768];
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
  int32_T c2_indices[3072];
  int32_T c2_aux[384];
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
  boolean_T c2_b_bv[3072];
  boolean_T c2_b_bv1[3072];
  boolean_T c2_b_bv2[3072];
  boolean_T c2_b_bv3[3072];
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
    for (c2_c_k = 0; c2_c_k < 768; c2_c_k++) {
      c2_ia = c2_c_k;
      c2_c_ic = c2_c_k;
      c2_g_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_e_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_f_a = c2_iv[c2_c_varargin_3];
      c2_f_b = c2_varargin_6;
      c2_c = c2_f_a + c2_f_b;
      c2_indices[c2_g_varargin_1 + 768 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 3072; c2_i++) {
    chartInstance->c2_e_b[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 4; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_f_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_d_k = 0; c2_d_k < 768; c2_d_k++) {
      c2_b_ia = c2_d_k;
      c2_c_ib = c2_d_k;
      c2_d_ic = c2_d_k;
      c2_h_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_f_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_f[c2_h_varargin_1 + 768 * c2_b_varargin_2] = (0.625 + 0.25 * (real_T)
        c2_d_varargin_3) - chartInstance->c2_e_b[c2_varargin_5 + 768 *
        c2_b_varargin_6];
    }
  }

  for (c2_i1 = 0; c2_i1 < 3072; c2_i1++) {
    c2_b_bv[c2_i1] = (0.0 <= c2_f[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 3072; c2_i2++) {
    c2_b_bv1[c2_i2] = (c2_f[c2_i2] <= 1.0);
  }

  for (c2_i3 = 0; c2_i3 < 3072; c2_i3++) {
    c2_b_bv2[c2_i3] = (-1.0 <= c2_f[c2_i3]);
  }

  for (c2_i4 = 0; c2_i4 < 3072; c2_i4++) {
    c2_b_bv3[c2_i4] = (c2_f[c2_i4] < 0.0);
  }

  for (c2_i5 = 0; c2_i5 < 3072; c2_i5++) {
    c2_f[c2_i5] = (c2_f[c2_i5] + 1.0) * (real_T)(c2_b_bv2[c2_i5] &&
      c2_b_bv3[c2_i5]) + (1.0 - c2_f[c2_i5]) * (real_T)(c2_b_bv[c2_i5] &&
      c2_b_bv1[c2_i5]);
  }

  for (c2_xj = 0; c2_xj < 768; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_b_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_e_k = 0; c2_e_k < 3; c2_e_k++) {
    c2_xoffset = (c2_e_k + 1) * 768;
    for (c2_c_xj = 0; c2_c_xj < 768; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_b_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i6 = 0; c2_i6 < 3072; c2_i6++) {
    chartInstance->c2_e_b[c2_i6] = c2_f[c2_i6];
  }

  for (c2_f_k = 0; c2_f_k < 4; c2_f_k++) {
    c2_c_ia = c2_f_k;
    c2_e_ic = c2_f_k;
    c2_i_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_g_k = 0; c2_g_k < 768; c2_g_k++) {
      c2_d_ia = c2_g_k;
      c2_d_ib = c2_g_k;
      c2_f_ic = c2_g_k;
      c2_j_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_i_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_j_varargin_1 + 768 * c2_d_varargin_2] = chartInstance->
        c2_e_b[c2_e_varargin_3 + 768 * c2_varargin_4] / c2_b_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[192] = 192;
  for (c2_b_i = 0; c2_b_i < 191; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 193] = c2_aux[c2_b_i + 192] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 3072; c2_c_i++) {
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
      c2_h_k = muDoubleScalarRem(c2_d_x, 384.0);
      c2_rEQ0 = (c2_h_k == 0.0);
      if (c2_rEQ0) {
        c2_h_k = 0.0;
      } else if (c2_d_x < 0.0) {
        c2_h_k += 384.0;
      }
    }

    c2_j_a = c2_h_k;
    c2_b_c = (int32_T)c2_j_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_g_emlrtRSI;
  c2_b_st.site = &c2_h_emlrtRSI;
  for (c2_i7 = 0; c2_i7 < 4; c2_i7++) {
    c2_copyCols[c2_i7] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 4; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_h_a = c2_b_i2 + 767;
    c2_b_i2 = c2_h_a;
    c2_i_a = c2_b_i1 + 1;
    c2_b_i1 = c2_i_a;
    c2_k_a = c2_b_i2 + 1;
    c2_b_i2 = c2_k_a;
    c2_l_a = c2_iy + 1;
    c2_iy = c2_l_a;
    c2_c_st.site = &c2_i_emlrtRSI;
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
      c2_d_st.site = &c2_j_emlrtRSI;
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
  c2_weights_size[1] = 768;
  for (c2_i8 = 0; c2_i8 < 768; c2_i8++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_loop_ub; c2_i9++) {
      c2_b_weights_data[c2_i9 + c2_weights_size[0] * c2_i8] = c2_f[c2_i8 + 768 *
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
  c2_indices_size[1] = 768;
  for (c2_i10 = 0; c2_i10 < 768; c2_i10++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_b_loop_ub; c2_i11++) {
      c2_indices_data[c2_i11 + c2_indices_size[0] * c2_i10] = c2_indices[c2_i10
        + 768 * (c2_b_tmp_data[c2_i11] - 1)];
    }
  }
}

static void c2_d_resizeAlongDim(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_in_[110592], real_T c2_b_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], real_T c2_out_[442368])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_siz[2];
  real_T c2_b_inRInd;
  real_T c2_b_outCInd;
  real_T c2_b_x;
  real_T c2_d;
  real_T c2_e_varargin_1;
  real_T c2_f_varargin_1;
  real_T c2_h_a;
  real_T c2_ndx;
  real_T c2_pixelValue;
  real_T c2_rowStart;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_b_c;
  int32_T c2_c;
  int32_T c2_f_a;
  int32_T c2_g_a;
  int32_T c2_g_b;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_idx;
  int32_T c2_inRInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outCInd;
  int32_T c2_pixelIndex;
  boolean_T c2_f_b;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_k_emlrtRSI;
  for (c2_inRInd = 0; c2_inRInd < 576; c2_inRInd++) {
    c2_b_inRInd = (real_T)c2_inRInd + 1.0;
    c2_b_st.site = &c2_p_emlrtRSI;
    c2_e_varargin_1 = c2_b_inRInd;
    c2_c_st.site = &c2_m_emlrtRSI;
    c2_f_varargin_1 = c2_e_varargin_1;
    c2_b_x = c2_f_varargin_1;
    if (c2_b_x <= 576.0) {
      c2_f_b = true;
    } else {
      c2_f_b = false;
    }

    if (!c2_f_b) {
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
      sf_mex_call(&c2_c_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_idx = (int32_T)c2_f_varargin_1;
    c2_rowStart = (real_T)c2_idx;
    for (c2_outCInd = 0; c2_outCInd < 768; c2_outCInd++) {
      c2_b_outCInd = (real_T)c2_outCInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_q_emlrtRSI;
      for (c2_i = 0; c2_i < 2; c2_i++) {
        c2_siz[c2_i] = (real_T)c2_weights_size[c2_i];
      }

      c2_varargin_2 = c2_b_outCInd;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_b_siz[c2_i1] = (int32_T)c2_siz[c2_i1];
      }

      c2_c_st.site = &c2_m_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i2 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i2; c2_k++) {
        c2_f_a = c2_indices_data[c2_linearInds] - 1;
        c2_c = c2_f_a;
        c2_g_a = c2_c;
        c2_b_c = c2_g_a * 576;
        c2_h_a = c2_rowStart;
        c2_g_b = c2_b_c;
        c2_pixelIndex = ((int32_T)c2_h_a + c2_g_b) - 1;
        c2_pixelValue = c2_in_[c2_pixelIndex];
        c2_sumVal1 += c2_b_weights_data[c2_linearInds] * c2_pixelValue;
        c2_linearInds++;
      }

      c2_out_[((int32_T)c2_b_inRInd + 576 * ((int32_T)c2_b_outCInd - 1)) - 1] =
        c2_sumVal1;
    }
  }
}

static void c2_imerode(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368])
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
    for (c2_i = 0; c2_i < 725; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_b_Apadpre[((int32_T)c2_c_i + 725 * ((int32_T)c2_c_j - 1))
        - 1] = MAX_uint8_T;
    }
  }

  for (c2_b_j = 0; c2_b_j < 768; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 149; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_b_Apadpre[((int32_T)c2_c_i + 725 * (c2_b_j + 149)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 576; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_b_Apadpre[(c2_c + 725 * (c2_b_c + 148)) + 148] = c2_c_A
        [((int32_T)c2_c_i + 576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 149; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 874; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_b_Apad[((int32_T)c2_f_i + 874 * (c2_e_j + 917)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_f_j = 0; c2_f_j < 917; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 149; c2_g_i++) {
      chartInstance->c2_b_Apad[(c2_g_i + 874 * ((int32_T)c2_h_j - 1)) + 725] =
        MAX_uint8_T;
    }
  }

  for (c2_g_j = 0; c2_g_j < 917; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 725; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_b_Apad[((int32_T)c2_f_i + 874 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_b_Apadpre[((int32_T)c2_f_i + 725 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 874.0 + 192.0 * (real_T)c2_h_i;
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
    for (c2_i5 = 0; c2_i5 < 931684; c2_i5++) {
      chartInstance->c2_b_Apad[c2_i5] = chartInstance->c2_b_B[c2_i5];
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_asizeT[c2_i7] = 874.0 + 192.0 * (real_T)c2_i7;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_nsizeT[c2_i9] = 85.0;
    }

    erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_bv[0],
                    &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  } else {
    for (c2_i4 = 0; c2_i4 < 931684; c2_i4++) {
      chartInstance->c2_b_Apad[c2_i4] = chartInstance->c2_b_B[c2_i4];
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_asizeT[c2_i6] = 874.0 + 192.0 * (real_T)c2_i6;
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_nsizeT[c2_i8] = 85.0;
    }

    erode_flat_uint8_tbb(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], 2.0,
                         &c2_bv[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_b_B[0]);
  }

  for (c2_i10 = 0; c2_i10 < 931684; c2_i10++) {
    chartInstance->c2_b_Apad[c2_i10] = chartInstance->c2_b_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 874.0 + 192.0 * (real_T)c2_i11;
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
    for (c2_i16 = 0; c2_i16 < 931684; c2_i16++) {
      chartInstance->c2_b_Apad[c2_i16] = chartInstance->c2_b_B[c2_i16];
    }

    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_asizeT[c2_i18] = 874.0 + 192.0 * (real_T)c2_i18;
    }

    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      c2_nsizeT[c2_i20] = 85.0;
    }

    erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_bv1[0],
                    &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  } else {
    for (c2_i15 = 0; c2_i15 < 931684; c2_i15++) {
      chartInstance->c2_b_Apad[c2_i15] = chartInstance->c2_b_B[c2_i15];
    }

    for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
      c2_asizeT[c2_i17] = 874.0 + 192.0 * (real_T)c2_i17;
    }

    for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
      c2_nsizeT[c2_i19] = 85.0;
    }

    erode_flat_uint8_tbb(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], 2.0,
                         &c2_bv1[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_b_B
                         [0]);
  }

  for (c2_i21 = 0; c2_i21 < 931684; c2_i21++) {
    chartInstance->c2_b_Apad[c2_i21] = chartInstance->c2_b_B[c2_i21];
  }

  for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
    c2_asizeT[c2_i22] = 874.0 + 192.0 * (real_T)c2_i22;
  }

  for (c2_i23 = 0; c2_i23 < 13; c2_i23++) {
    c2_b_nhood[c2_i23] = true;
  }

  for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
    c2_nsizeT[c2_i24] = 1.0 + 12.0 * (real_T)c2_i24;
  }

  erode_uint8_ipp(&chartInstance->c2_b_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_b_B[0]);
  for (c2_i25 = 0; c2_i25 < 931684; c2_i25++) {
    chartInstance->c2_b_Apad[c2_i25] = chartInstance->c2_b_B[c2_i25];
  }

  for (c2_i26 = 0; c2_i26 < 2; c2_i26++) {
    c2_asizeT[c2_i26] = 874.0 + 192.0 * (real_T)c2_i26;
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
  for (c2_i31 = 0; c2_i31 < 768; c2_i31++) {
    for (c2_i32 = 0; c2_i32 < 576; c2_i32++) {
      c2_e_B[c2_i32 + c2_i29] = chartInstance->c2_b_B[(c2_i32 + c2_i30) + 130375];
    }

    c2_i29 += 576;
    c2_i30 += 874;
  }
}

static boolean_T c2_useIPP(SFc2_mainInstanceStruct *chartInstance, boolean_T
  c2_nhood[7225])
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

static void c2_imdilate(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368])
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
  for (c2_i = 0; c2_i < 442368; c2_i++) {
    chartInstance->c2_b_A[c2_i] = c2_c_A[c2_i];
  }

  c2_padarray(chartInstance, chartInstance->c2_b_A, chartInstance->c2_Apadpre);
  for (c2_j = 0; c2_j < 149; c2_j++) {
    for (c2_b_i = 0; c2_b_i < 874; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_Apad[((int32_T)c2_c_i + 874 * (c2_j + 917)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 917; c2_b_j++) {
    c2_d_j = (real_T)c2_b_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 149; c2_d_i++) {
      chartInstance->c2_Apad[(c2_d_i + 874 * ((int32_T)c2_d_j - 1)) + 725] = 0U;
    }
  }

  for (c2_c_j = 0; c2_c_j < 917; c2_c_j++) {
    c2_d_j = (real_T)c2_c_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 725; c2_e_i++) {
      c2_c_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_Apad[((int32_T)c2_c_i + 874 * ((int32_T)c2_d_j - 1)) - 1]
        = chartInstance->c2_Apadpre[((int32_T)c2_c_i + 725 * ((int32_T)c2_d_j -
        1)) - 1];
    }
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_asizeT[c2_i1] = 874.0 + 192.0 * (real_T)c2_i1;
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
    for (c2_i6 = 0; c2_i6 < 931684; c2_i6++) {
      chartInstance->c2_Apad[c2_i6] = chartInstance->c2_B[c2_i6];
    }

    for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
      c2_asizeT[c2_i8] = 874.0 + 192.0 * (real_T)c2_i8;
    }

    for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
      c2_nsizeT[c2_i10] = 85.0;
    }

    dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_bv[0],
                     &c2_nsizeT[0], &chartInstance->c2_B[0]);
  } else {
    for (c2_i5 = 0; c2_i5 < 931684; c2_i5++) {
      chartInstance->c2_Apad[c2_i5] = chartInstance->c2_B[c2_i5];
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_asizeT[c2_i7] = 874.0 + 192.0 * (real_T)c2_i7;
    }

    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_nsizeT[c2_i9] = 85.0;
    }

    dilate_flat_uint8_tbb(&chartInstance->c2_Apad[0], &c2_asizeT[0], 2.0,
                          &c2_bv[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_B[0]);
  }

  for (c2_i11 = 0; c2_i11 < 931684; c2_i11++) {
    chartInstance->c2_Apad[c2_i11] = chartInstance->c2_B[c2_i11];
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_asizeT[c2_i12] = 874.0 + 192.0 * (real_T)c2_i12;
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
    for (c2_i17 = 0; c2_i17 < 931684; c2_i17++) {
      chartInstance->c2_Apad[c2_i17] = chartInstance->c2_B[c2_i17];
    }

    for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
      c2_asizeT[c2_i19] = 874.0 + 192.0 * (real_T)c2_i19;
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      c2_nsizeT[c2_i21] = 85.0;
    }

    dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_bv1[0],
                     &c2_nsizeT[0], &chartInstance->c2_B[0]);
  } else {
    for (c2_i16 = 0; c2_i16 < 931684; c2_i16++) {
      chartInstance->c2_Apad[c2_i16] = chartInstance->c2_B[c2_i16];
    }

    for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
      c2_asizeT[c2_i18] = 874.0 + 192.0 * (real_T)c2_i18;
    }

    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      c2_nsizeT[c2_i20] = 85.0;
    }

    dilate_flat_uint8_tbb(&chartInstance->c2_Apad[0], &c2_asizeT[0], 2.0,
                          &c2_bv1[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_B[0]);
  }

  for (c2_i22 = 0; c2_i22 < 931684; c2_i22++) {
    chartInstance->c2_Apad[c2_i22] = chartInstance->c2_B[c2_i22];
  }

  for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
    c2_asizeT[c2_i23] = 874.0 + 192.0 * (real_T)c2_i23;
  }

  for (c2_i24 = 0; c2_i24 < 13; c2_i24++) {
    c2_b_nhood[c2_i24] = true;
  }

  for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
    c2_nsizeT[c2_i25] = 1.0 + 12.0 * (real_T)c2_i25;
  }

  dilate_uint8_ipp(&chartInstance->c2_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_B[0]);
  for (c2_i26 = 0; c2_i26 < 931684; c2_i26++) {
    chartInstance->c2_Apad[c2_i26] = chartInstance->c2_B[c2_i26];
  }

  for (c2_i27 = 0; c2_i27 < 2; c2_i27++) {
    c2_asizeT[c2_i27] = 874.0 + 192.0 * (real_T)c2_i27;
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
  for (c2_i32 = 0; c2_i32 < 768; c2_i32++) {
    for (c2_i33 = 0; c2_i33 < 576; c2_i33++) {
      c2_e_B[c2_i33 + c2_i30] = chartInstance->c2_B[(c2_i33 + c2_i31) + 130375];
    }

    c2_i30 += 576;
    c2_i31 += 874;
  }
}

static void c2_padarray(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_e_varargin_1[442368], uint8_T c2_f_b[664825])
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
    for (c2_i = 0; c2_i < 725; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_f_b[((int32_T)c2_c_i + 725 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 768; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 149; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_f_b[((int32_T)c2_c_i + 725 * (c2_b_j + 149)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 576; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      c2_f_b[(c2_c + 725 * (c2_b_c + 148)) + 148] = c2_e_varargin_1[((int32_T)
        c2_c_i + 576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_imfilter(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint8_T c2_e_varargin_1[442368], uint8_T c2_f_b[442368])
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
  real_T c2_i_x;
  real_T c2_j_b;
  real_T c2_j_x;
  real_T c2_k_b;
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
  int32_T c2_i_b;
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
  boolean_T c2_f_modeFlag;
  boolean_T c2_f_p;
  boolean_T c2_g_b;
  boolean_T c2_g_modeFlag;
  boolean_T c2_h_b;
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
  c2_st.site = &c2_bb_emlrtRSI;
  c2_b_st.site = &c2_ib_emlrtRSI;
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
  c2_g_b = muDoubleScalarIsNaN(c2_c_x);
  c2_p = !c2_g_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_c_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_c_k <= c2_b_last)) {
      c2_d_x = c2_x_data[c2_c_k - 1];
      c2_e_x = c2_d_x;
      c2_h_b = muDoubleScalarIsNaN(c2_e_x);
      c2_b_p = !c2_h_b;
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
    c2_i_b = (int32_T)c2_f_x[c2_ix + 1];
    c2_nz += (c2_i_b != 0);
  }

  c2_rank = (real_T)c2_nz;
  if (c2_rank == 1.0) {
    c2_separable = true;
  } else {
    c2_separable = false;
  }

  if (c2_separable) {
    for (c2_i4 = 0; c2_i4 < 442368; c2_i4++) {
      chartInstance->c2_b_varargin_1[c2_i4] = c2_e_varargin_1[c2_i4];
    }

    c2_padImage(chartInstance, chartInstance->c2_b_varargin_1,
                chartInstance->c2_c_a);
    c2_st.site = &c2_cb_emlrtRSI;
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

    c2_st.site = &c2_db_emlrtRSI;
    c2_g_x = c2_b_s[0];
    c2_j_b = c2_g_x;
    c2_h_x = c2_j_b;
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

    c2_j_b = muDoubleScalarSqrt(c2_j_b);
    for (c2_i14 = 0; c2_i14 < 25; c2_i14++) {
      c2_hcol[c2_i14] *= c2_j_b;
    }

    for (c2_i16 = 0; c2_i16 < 250; c2_i16++) {
      c2_hrow[c2_i16] = chartInstance->c2_a__2[c2_i16];
    }

    c2_st.site = &c2_eb_emlrtRSI;
    c2_i_x = c2_b_s[0];
    c2_k_b = c2_i_x;
    c2_j_x = c2_k_b;
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

    c2_k_b = muDoubleScalarSqrt(c2_k_b);
    c2_f_y = c2_k_b;
    c2_h_y = c2_f_y;
    for (c2_i18 = 0; c2_i18 < 250; c2_i18++) {
      c2_hrow[c2_i18] *= c2_h_y;
    }

    for (c2_i19 = 0; c2_i19 < 610800; c2_i19++) {
      chartInstance->c2_a[c2_i19] = (real_T)chartInstance->c2_c_a[c2_i19];
    }

    c2_st.site = &c2_fb_emlrtRSI;
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
        c2_padSizeT[c2_i22] = 600.0 + 418.0 * (real_T)c2_i22;
      }

      for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
        c2_outSizeT[c2_i24] = 600.0 + 168.0 * (real_T)c2_i24;
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
        c2_padSizeT[c2_i23] = 600.0 + 418.0 * (real_T)c2_i23;
      }

      for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
        c2_outSizeT[c2_i25] = 600.0 + 168.0 * (real_T)c2_i25;
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

    c2_st.site = &c2_gb_emlrtRSI;
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
        c2_padSizeT[c2_i31] = 600.0 + 168.0 * (real_T)c2_i31;
      }

      for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
        c2_outSizeT[c2_i33] = 576.0 + 192.0 * (real_T)c2_i33;
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
        c2_padSizeT[c2_i32] = 600.0 + 168.0 * (real_T)c2_i32;
      }

      for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
        c2_outSizeT[c2_i34] = 576.0 + 192.0 * (real_T)c2_i34;
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

    for (c2_i38 = 0; c2_i38 < 442368; c2_i38++) {
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

      c2_f_b[c2_i38] = c2_u;
    }
  } else {
    for (c2_i3 = 0; c2_i3 < 442368; c2_i3++) {
      chartInstance->c2_varargin_1[c2_i3] = c2_e_varargin_1[c2_i3];
    }

    c2_padImage(chartInstance, chartInstance->c2_varargin_1,
                chartInstance->c2_c_a);
    c2_st.site = &c2_hb_emlrtRSI;
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
        c2_padSizeT[c2_i9] = 600.0 + 418.0 * (real_T)c2_i9;
      }

      for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
        c2_outSizeT[c2_i11] = 576.0 + 192.0 * (real_T)c2_i11;
      }

      for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
        c2_connDimsT[c2_i13] = 25.0 + 225.0 * (real_T)c2_i13;
      }

      ippfilter_uint8(&chartInstance->c2_c_a[0], &c2_f_b[0], &c2_outSizeT[0],
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
        c2_padSizeT[c2_i10] = 600.0 + 418.0 * (real_T)c2_i10;
      }

      for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
        c2_outSizeT[c2_i12] = 576.0 + 192.0 * (real_T)c2_i12;
      }

      for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
        c2_connDimsT[c2_i15] = 25.0 + 225.0 * (real_T)c2_i15;
      }

      for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
        c2_startT[c2_i17] = 12.0 + 113.0 * (real_T)c2_i17;
      }

      imfilter_uint8(&chartInstance->c2_c_a[0], &c2_f_b[0], 2.0, &c2_outSizeT[0],
                     2.0, &c2_padSizeT[0], &chartInstance->c2_s[0], 6250.0,
                     &c2_conn[0], 2.0, &c2_connDimsT[0], &c2_startT[0], 2.0,
                     true, false);
    }
  }
}

static void c2_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
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
    c2_st.site = &c2_jb_emlrtRSI;
    c2_b_svd(chartInstance, &c2_st, c2_U, c2_b_s, c2_V);
  } else {
    for (c2_i = 0; c2_i < 6250; c2_i++) {
      chartInstance->c2_dv[c2_i] = 0.0;
    }

    c2_st.site = &c2_kb_emlrtRSI;
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

static void c2_b_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[625], real_T c2_b_s[25], real_T c2_V
                     [62500])
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
  c2_st.site = &c2_lb_emlrtRSI;
  c2_b_st.site = &c2_nb_emlrtRSI;
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
  c2_c_st.site = &c2_ob_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_mb_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 6250; c2_i3++) {
      chartInstance->c2_b_dv[c2_i3] = 0.00016;
    }

    c2_c_st.site = &c2_pb_emlrtRSI;
    c2_ceval_xgesvd(chartInstance, &c2_c_st, chartInstance->c2_b_dv, c2_U,
                    c2_b_s, c2_V, &c2_c_info);
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

static boolean_T c2_infocheck(SFc2_mainInstanceStruct *chartInstance, const
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

static void c2_ceval_xgesvd(SFc2_mainInstanceStruct *chartInstance, const
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

  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_infocheck(chartInstance, &c2_st, *c2_info);
}

static boolean_T c2_b_infocheck(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_info)
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

static void c2_c_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_c_A[6250], real_T c2_U[625], real_T
                     c2_b_s[25], real_T c2_V[62500])
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
  c2_st.site = &c2_lb_emlrtRSI;
  c2_b_st.site = &c2_nb_emlrtRSI;
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
  c2_c_st.site = &c2_ob_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_mb_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 6250; c2_i3++) {
      c2_d_A[c2_i3] = c2_c_A[c2_i3];
    }

    c2_c_st.site = &c2_pb_emlrtRSI;
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

static void c2_padImage(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_a_tmp[442368], uint8_T c2_f_a[610800])
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
    for (c2_i = 0; c2_i < 600; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 600 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 125; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 600; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 600 * (c2_b_j + 893)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 12; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_g_a = c2_c_j;
      c2_c = (int32_T)c2_g_a;
      c2_f_a[((int32_T)c2_c_i + 600 * (c2_c + 124)) - 1] = 0U;
    }
  }

  for (c2_e_j = 0; c2_e_j < 768; c2_e_j++) {
    c2_c_j = (real_T)c2_e_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 12; c2_e_i++) {
      c2_h_a = c2_c_j;
      c2_b_c = (int32_T)c2_h_a;
      c2_f_a[(c2_e_i + 600 * (c2_b_c + 124)) + 588] = 0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 768; c2_f_j++) {
    c2_c_j = (real_T)c2_f_j + 1.0;
    for (c2_f_i = 0; c2_f_i < 576; c2_f_i++) {
      c2_c_i = (real_T)c2_f_i + 1.0;
      c2_i_a = c2_c_i;
      c2_c_c = (int32_T)c2_i_a;
      c2_j_a = c2_c_j;
      c2_d_c = (int32_T)c2_j_a;
      c2_f_a[(c2_c_c + 600 * (c2_d_c + 124)) + 11] = c2_a_tmp[((int32_T)c2_c_i +
        576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_b_imerode(SFc2_mainInstanceStruct *chartInstance, uint8_T c2_c_A
  [442368], uint8_T c2_e_B[442368])
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
    for (c2_i = 0; c2_i < 675; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_d_Apadpre[((int32_T)c2_c_i + 675 * ((int32_T)c2_c_j - 1))
        - 1] = MAX_uint8_T;
    }
  }

  for (c2_b_j = 0; c2_b_j < 768; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 99; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_d_Apadpre[((int32_T)c2_c_i + 675 * (c2_b_j + 99)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 576; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_d_Apadpre[(c2_c + 675 * (c2_b_c + 98)) + 98] = c2_c_A
        [((int32_T)c2_c_i + 576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 99; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 774; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_d_Apad[((int32_T)c2_f_i + 774 * (c2_e_j + 867)) - 1] =
        MAX_uint8_T;
    }
  }

  for (c2_f_j = 0; c2_f_j < 867; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 99; c2_g_i++) {
      chartInstance->c2_d_Apad[(c2_g_i + 774 * ((int32_T)c2_h_j - 1)) + 675] =
        MAX_uint8_T;
    }
  }

  for (c2_g_j = 0; c2_g_j < 867; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 675; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_d_Apad[((int32_T)c2_f_i + 774 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_d_Apadpre[((int32_T)c2_f_i + 675 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 774.0 + 192.0 * (real_T)c2_h_i;
  }

  for (c2_i1 = 0; c2_i1 < 79; c2_i1++) {
    c2_nhood[c2_i1] = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 79.0 + -78.0 * (real_T)c2_i2;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i3 = 0; c2_i3 < 747684; c2_i3++) {
    chartInstance->c2_d_Apad[c2_i3] = chartInstance->c2_d_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 774.0 + 192.0 * (real_T)c2_i4;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 57.0;
  }

  erode_flat_uint8_tbb(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], 2.0,
                       &c2_bv2[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_d_B[0]);
  for (c2_i6 = 0; c2_i6 < 747684; c2_i6++) {
    chartInstance->c2_d_Apad[c2_i6] = chartInstance->c2_d_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
    c2_asizeT[c2_i7] = 774.0 + 192.0 * (real_T)c2_i7;
  }

  for (c2_i8 = 0; c2_i8 < 79; c2_i8++) {
    c2_nhood[c2_i8] = true;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 78.0 * (real_T)c2_i9;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i10 = 0; c2_i10 < 747684; c2_i10++) {
    chartInstance->c2_d_Apad[c2_i10] = chartInstance->c2_d_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 774.0 + 192.0 * (real_T)c2_i11;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 57.0;
  }

  erode_flat_uint8_tbb(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], 2.0,
                       &c2_bv3[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_d_B[0]);
  for (c2_i13 = 0; c2_i13 < 747684; c2_i13++) {
    chartInstance->c2_d_Apad[c2_i13] = chartInstance->c2_d_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_asizeT[c2_i14] = 774.0 + 192.0 * (real_T)c2_i14;
  }

  for (c2_i15 = 0; c2_i15 < 9; c2_i15++) {
    c2_b_nhood[c2_i15] = true;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 8.0 * (real_T)c2_i16;
  }

  erode_uint8_ipp(&chartInstance->c2_d_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                  &c2_nsizeT[0], &chartInstance->c2_d_B[0]);
  for (c2_i17 = 0; c2_i17 < 747684; c2_i17++) {
    chartInstance->c2_d_Apad[c2_i17] = chartInstance->c2_d_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
    c2_asizeT[c2_i18] = 774.0 + 192.0 * (real_T)c2_i18;
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
  for (c2_i23 = 0; c2_i23 < 768; c2_i23++) {
    for (c2_i24 = 0; c2_i24 < 576; c2_i24++) {
      c2_e_B[c2_i24 + c2_i21] = chartInstance->c2_d_B[(c2_i24 + c2_i22) + 76725];
    }

    c2_i21 += 576;
    c2_i22 += 774;
  }
}

static void c2_b_imdilate(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_c_A[442368], uint8_T c2_e_B[442368])
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
    for (c2_i = 0; c2_i < 675; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      chartInstance->c2_c_Apadpre[((int32_T)c2_c_i + 675 * ((int32_T)c2_c_j - 1))
        - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 768; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 99; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      chartInstance->c2_c_Apadpre[((int32_T)c2_c_i + 675 * (c2_b_j + 99)) - 1] =
        0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 576; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_f_a = c2_c_i;
      c2_c = (int32_T)c2_f_a;
      c2_g_a = c2_c_j;
      c2_b_c = (int32_T)c2_g_a;
      chartInstance->c2_c_Apadpre[(c2_c + 675 * (c2_b_c + 98)) + 98] = c2_c_A
        [((int32_T)c2_c_i + 576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }

  for (c2_e_j = 0; c2_e_j < 99; c2_e_j++) {
    for (c2_e_i = 0; c2_e_i < 774; c2_e_i++) {
      c2_f_i = (real_T)c2_e_i + 1.0;
      chartInstance->c2_c_Apad[((int32_T)c2_f_i + 774 * (c2_e_j + 867)) - 1] =
        0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 867; c2_f_j++) {
    c2_h_j = (real_T)c2_f_j + 1.0;
    for (c2_g_i = 0; c2_g_i < 99; c2_g_i++) {
      chartInstance->c2_c_Apad[(c2_g_i + 774 * ((int32_T)c2_h_j - 1)) + 675] =
        0U;
    }
  }

  for (c2_g_j = 0; c2_g_j < 867; c2_g_j++) {
    c2_h_j = (real_T)c2_g_j + 1.0;
    for (c2_i_i = 0; c2_i_i < 675; c2_i_i++) {
      c2_f_i = (real_T)c2_i_i + 1.0;
      chartInstance->c2_c_Apad[((int32_T)c2_f_i + 774 * ((int32_T)c2_h_j - 1)) -
        1] = chartInstance->c2_c_Apadpre[((int32_T)c2_f_i + 675 * ((int32_T)
        c2_h_j - 1)) - 1];
    }
  }

  for (c2_h_i = 0; c2_h_i < 2; c2_h_i++) {
    c2_asizeT[c2_h_i] = 774.0 + 192.0 * (real_T)c2_h_i;
  }

  for (c2_i1 = 0; c2_i1 < 79; c2_i1++) {
    c2_nhood[c2_i1] = true;
  }

  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_nsizeT[c2_i2] = 79.0 + -78.0 * (real_T)c2_i2;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i3 = 0; c2_i3 < 747684; c2_i3++) {
    chartInstance->c2_c_Apad[c2_i3] = chartInstance->c2_c_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
    c2_asizeT[c2_i4] = 774.0 + 192.0 * (real_T)c2_i4;
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_nsizeT[c2_i5] = 57.0;
  }

  dilate_flat_uint8_tbb(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], 2.0,
                        &c2_bv2[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_c_B[0]);
  for (c2_i6 = 0; c2_i6 < 747684; c2_i6++) {
    chartInstance->c2_c_Apad[c2_i6] = chartInstance->c2_c_B[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
    c2_asizeT[c2_i7] = 774.0 + 192.0 * (real_T)c2_i7;
  }

  for (c2_i8 = 0; c2_i8 < 79; c2_i8++) {
    c2_nhood[c2_i8] = true;
  }

  for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
    c2_nsizeT[c2_i9] = 1.0 + 78.0 * (real_T)c2_i9;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i10 = 0; c2_i10 < 747684; c2_i10++) {
    chartInstance->c2_c_Apad[c2_i10] = chartInstance->c2_c_B[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
    c2_asizeT[c2_i11] = 774.0 + 192.0 * (real_T)c2_i11;
  }

  for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
    c2_nsizeT[c2_i12] = 57.0;
  }

  dilate_flat_uint8_tbb(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], 2.0,
                        &c2_bv3[0], &c2_nsizeT[0], 2.0, &chartInstance->c2_c_B[0]);
  for (c2_i13 = 0; c2_i13 < 747684; c2_i13++) {
    chartInstance->c2_c_Apad[c2_i13] = chartInstance->c2_c_B[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
    c2_asizeT[c2_i14] = 774.0 + 192.0 * (real_T)c2_i14;
  }

  for (c2_i15 = 0; c2_i15 < 9; c2_i15++) {
    c2_b_nhood[c2_i15] = true;
  }

  for (c2_i16 = 0; c2_i16 < 2; c2_i16++) {
    c2_nsizeT[c2_i16] = 1.0 + 8.0 * (real_T)c2_i16;
  }

  dilate_uint8_ipp(&chartInstance->c2_c_Apad[0], &c2_asizeT[0], &c2_b_nhood[0],
                   &c2_nsizeT[0], &chartInstance->c2_c_B[0]);
  for (c2_i17 = 0; c2_i17 < 747684; c2_i17++) {
    chartInstance->c2_c_Apad[c2_i17] = chartInstance->c2_c_B[c2_i17];
  }

  for (c2_i18 = 0; c2_i18 < 2; c2_i18++) {
    c2_asizeT[c2_i18] = 774.0 + 192.0 * (real_T)c2_i18;
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
  for (c2_i23 = 0; c2_i23 < 768; c2_i23++) {
    for (c2_i24 = 0; c2_i24 < 576; c2_i24++) {
      c2_e_B[c2_i24 + c2_i21] = chartInstance->c2_c_B[(c2_i24 + c2_i22) + 76725];
    }

    c2_i21 += 576;
    c2_i22 += 774;
  }
}

static void c2_b_imfilter(SFc2_mainInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_e_varargin_1[442368], uint8_T c2_f_b[442368])
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
  real_T c2_i_x;
  real_T c2_j_b;
  real_T c2_j_x;
  real_T c2_k_b;
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
  int32_T c2_i_b;
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
  boolean_T c2_f_modeFlag;
  boolean_T c2_f_p;
  boolean_T c2_g_b;
  boolean_T c2_g_modeFlag;
  boolean_T c2_h_b;
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
  c2_st.site = &c2_bb_emlrtRSI;
  c2_b_st.site = &c2_ib_emlrtRSI;
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
  c2_g_b = muDoubleScalarIsNaN(c2_c_x);
  c2_p = !c2_g_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_c_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_c_k <= c2_b_last)) {
      c2_d_x = c2_x_data[c2_c_k - 1];
      c2_e_x = c2_d_x;
      c2_h_b = muDoubleScalarIsNaN(c2_e_x);
      c2_b_p = !c2_h_b;
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
    c2_i_b = (int32_T)c2_f_x[c2_ix + 1];
    c2_nz += (c2_i_b != 0);
  }

  c2_rank = (real_T)c2_nz;
  if (c2_rank == 1.0) {
    c2_separable = true;
  } else {
    c2_separable = false;
  }

  if (c2_separable) {
    for (c2_i4 = 0; c2_i4 < 442368; c2_i4++) {
      chartInstance->c2_d_varargin_1[c2_i4] = c2_e_varargin_1[c2_i4];
    }

    c2_b_padImage(chartInstance, chartInstance->c2_d_varargin_1,
                  chartInstance->c2_e_a);
    c2_st.site = &c2_cb_emlrtRSI;
    c2_d_svd(chartInstance, &c2_st, c2_a__1, c2_b_s, c2_b_a__2);
    c2_f_k = 0;
    for (c2_g_k = 0; c2_g_k < 30; c2_g_k++) {
      c2_c_s[c2_g_k] = c2_b_s[c2_f_k];
      c2_f_k += 31;
    }

    for (c2_i5 = 0; c2_i5 < 30; c2_i5++) {
      c2_hcol[c2_i5] = c2_a__1[c2_i5];
    }

    c2_st.site = &c2_db_emlrtRSI;
    c2_g_x = c2_c_s[0];
    c2_j_b = c2_g_x;
    c2_h_x = c2_j_b;
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

    c2_j_b = muDoubleScalarSqrt(c2_j_b);
    for (c2_i14 = 0; c2_i14 < 30; c2_i14++) {
      c2_hcol[c2_i14] *= c2_j_b;
    }

    for (c2_i16 = 0; c2_i16 < 30; c2_i16++) {
      c2_hrow[c2_i16] = c2_b_a__2[c2_i16];
    }

    c2_st.site = &c2_eb_emlrtRSI;
    c2_i_x = c2_c_s[0];
    c2_k_b = c2_i_x;
    c2_j_x = c2_k_b;
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

    c2_k_b = muDoubleScalarSqrt(c2_k_b);
    c2_f_y = c2_k_b;
    c2_h_y = c2_f_y;
    for (c2_i18 = 0; c2_i18 < 30; c2_i18++) {
      c2_hrow[c2_i18] *= c2_h_y;
    }

    for (c2_i19 = 0; c2_i19 < 483588; c2_i19++) {
      chartInstance->c2_d_a[c2_i19] = (real_T)chartInstance->c2_e_a[c2_i19];
    }

    c2_st.site = &c2_fb_emlrtRSI;
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
        c2_padSizeT[c2_i22] = 606.0 + 192.0 * (real_T)c2_i22;
      }

      for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
        c2_outSizeT[c2_i24] = 606.0 + 162.0 * (real_T)c2_i24;
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
        c2_padSizeT[c2_i23] = 606.0 + 192.0 * (real_T)c2_i23;
      }

      for (c2_i25 = 0; c2_i25 < 2; c2_i25++) {
        c2_outSizeT[c2_i25] = 606.0 + 162.0 * (real_T)c2_i25;
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

    c2_st.site = &c2_gb_emlrtRSI;
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
        c2_padSizeT[c2_i31] = 606.0 + 162.0 * (real_T)c2_i31;
      }

      for (c2_i33 = 0; c2_i33 < 2; c2_i33++) {
        c2_outSizeT[c2_i33] = 576.0 + 192.0 * (real_T)c2_i33;
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
        c2_padSizeT[c2_i32] = 606.0 + 162.0 * (real_T)c2_i32;
      }

      for (c2_i34 = 0; c2_i34 < 2; c2_i34++) {
        c2_outSizeT[c2_i34] = 576.0 + 192.0 * (real_T)c2_i34;
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

    for (c2_i38 = 0; c2_i38 < 442368; c2_i38++) {
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

      c2_f_b[c2_i38] = c2_u;
    }
  } else {
    for (c2_i3 = 0; c2_i3 < 442368; c2_i3++) {
      chartInstance->c2_c_varargin_1[c2_i3] = c2_e_varargin_1[c2_i3];
    }

    c2_b_padImage(chartInstance, chartInstance->c2_c_varargin_1,
                  chartInstance->c2_e_a);
    c2_st.site = &c2_hb_emlrtRSI;
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
        c2_padSizeT[c2_i9] = 606.0 + 192.0 * (real_T)c2_i9;
      }

      for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
        c2_outSizeT[c2_i11] = 576.0 + 192.0 * (real_T)c2_i11;
      }

      for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
        c2_connDimsT[c2_i13] = 30.0;
      }

      ippfilter_uint8(&chartInstance->c2_e_a[0], &c2_f_b[0], &c2_outSizeT[0],
                      2.0, &c2_padSizeT[0], &c2_a__1[0], &c2_connDimsT[0], false);
    } else {
      for (c2_i6 = 0; c2_i6 < 900; c2_i6++) {
        c2_a__1[c2_i6] = 0.0011111111111111111;
      }

      for (c2_i8 = 0; c2_i8 < 900; c2_i8++) {
        c2_conn[c2_i8] = true;
      }

      for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
        c2_padSizeT[c2_i10] = 606.0 + 192.0 * (real_T)c2_i10;
      }

      for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
        c2_outSizeT[c2_i12] = 576.0 + 192.0 * (real_T)c2_i12;
      }

      for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
        c2_connDimsT[c2_i15] = 30.0;
      }

      for (c2_i17 = 0; c2_i17 < 2; c2_i17++) {
        c2_startT[c2_i17] = 15.0;
      }

      imfilter_uint8(&chartInstance->c2_e_a[0], &c2_f_b[0], 2.0, &c2_outSizeT[0],
                     2.0, &c2_padSizeT[0], &c2_a__1[0], 900.0, &c2_conn[0], 2.0,
                     &c2_connDimsT[0], &c2_startT[0], 2.0, true, false);
    }
  }
}

static void c2_d_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[900], real_T c2_S[900], real_T c2_V[900])
{
  emlrtStack c2_st;
  real_T c2_b_s[30];
  int32_T c2_b_k;
  int32_T c2_i;
  int32_T c2_k;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_jb_emlrtRSI;
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

static void c2_e_svd(SFc2_mainInstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, real_T c2_U[900], real_T c2_b_s[30], real_T c2_V
                     [900])
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
  real_T c2_c_A[900];
  real_T c2_c_dv[900];
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
  c2_st.site = &c2_lb_emlrtRSI;
  c2_b_st.site = &c2_nb_emlrtRSI;
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
  c2_c_st.site = &c2_ob_emlrtRSI;
  c2_infocheck(chartInstance, &c2_c_st, c2_info);
  c2_b_info = c2_info;
  if (c2_info > 0) {
    c2_b_st.site = &c2_mb_emlrtRSI;
    for (c2_i3 = 0; c2_i3 < 900; c2_i3++) {
      c2_c_dv[c2_i3] = 0.0011111111111111111;
    }

    c2_c_st.site = &c2_pb_emlrtRSI;
    c2_b_ceval_xgesvd(chartInstance, &c2_c_st, c2_c_dv, c2_U, c2_b_s, c2_V,
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

static void c2_b_ceval_xgesvd(SFc2_mainInstanceStruct *chartInstance, const
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

  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_infocheck(chartInstance, &c2_st, *c2_info);
}

static void c2_b_padImage(SFc2_mainInstanceStruct *chartInstance, uint8_T
  c2_a_tmp[442368], uint8_T c2_f_a[483588])
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
    for (c2_i = 0; c2_i < 606; c2_i++) {
      c2_c_i = (real_T)c2_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 606 * ((int32_T)c2_c_j - 1)) - 1] = 0U;
    }
  }

  for (c2_b_j = 0; c2_b_j < 15; c2_b_j++) {
    for (c2_b_i = 0; c2_b_i < 606; c2_b_i++) {
      c2_c_i = (real_T)c2_b_i + 1.0;
      c2_f_a[((int32_T)c2_c_i + 606 * (c2_b_j + 783)) - 1] = 0U;
    }
  }

  for (c2_d_j = 0; c2_d_j < 768; c2_d_j++) {
    c2_c_j = (real_T)c2_d_j + 1.0;
    for (c2_d_i = 0; c2_d_i < 15; c2_d_i++) {
      c2_c_i = (real_T)c2_d_i + 1.0;
      c2_g_a = c2_c_j;
      c2_c = (int32_T)c2_g_a;
      c2_f_a[((int32_T)c2_c_i + 606 * (c2_c + 14)) - 1] = 0U;
    }
  }

  for (c2_e_j = 0; c2_e_j < 768; c2_e_j++) {
    c2_c_j = (real_T)c2_e_j + 1.0;
    for (c2_e_i = 0; c2_e_i < 15; c2_e_i++) {
      c2_h_a = c2_c_j;
      c2_b_c = (int32_T)c2_h_a;
      c2_f_a[(c2_e_i + 606 * (c2_b_c + 14)) + 591] = 0U;
    }
  }

  for (c2_f_j = 0; c2_f_j < 768; c2_f_j++) {
    c2_c_j = (real_T)c2_f_j + 1.0;
    for (c2_f_i = 0; c2_f_i < 576; c2_f_i++) {
      c2_c_i = (real_T)c2_f_i + 1.0;
      c2_i_a = c2_c_i;
      c2_c_c = (int32_T)c2_i_a;
      c2_j_a = c2_c_j;
      c2_d_c = (int32_T)c2_j_a;
      c2_f_a[(c2_c_c + 606 * (c2_d_c + 14)) + 14] = c2_a_tmp[((int32_T)c2_c_i +
        576 * ((int32_T)c2_c_j - 1)) - 1];
    }
  }
}

static void c2_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[442368])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_y), &c2_thisId, c2_c_y);
  sf_mex_destroy(&c2_b_y);
}

static void c2_b_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y[442368])
{
  int32_T c2_i;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), chartInstance->c2_b_uv, 1, 3, 0U,
                1, 0U, 2, 576, 768);
  for (c2_i = 0; c2_i < 442368; c2_i++) {
    c2_b_y[c2_i] = chartInstance->c2_b_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_main, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_main), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_main);
  return c2_b_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_mainInstanceStruct *chartInstance,
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

static void c2_chart_data_browse_helper(SFc2_mainInstanceStruct *chartInstance,
  int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig)
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

static void c2_emxEnsureCapacity_real_T(SFc2_mainInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation)
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

static void c2_emxInit_real_T(SFc2_mainInstanceStruct *chartInstance, const
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

static void c2_emxFree_real_T(SFc2_mainInstanceStruct *chartInstance,
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

static int32_T c2__s32_add__(SFc2_mainInstanceStruct *chartInstance, int32_T
  c2_f_b, int32_T c2_c, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc,
  int32_T c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_f_a;
  (void)c2_EMLOvCount_src_loc;
  c2_f_a = c2_f_b + c2_c;
  if (((c2_f_a ^ c2_f_b) & (c2_f_a ^ c2_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_f_a;
}

static int32_T c2__s32_d_(SFc2_mainInstanceStruct *chartInstance, real_T c2_f_b,
  int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc)
{
  real_T c2_g_b;
  int32_T c2_f_a;
  (void)c2_EMLOvCount_src_loc;
  c2_f_a = (int32_T)c2_f_b;
  if (c2_f_b < 0.0) {
    c2_g_b = muDoubleScalarCeil(c2_f_b);
  } else {
    c2_g_b = muDoubleScalarFloor(c2_f_b);
  }

  if ((real_T)c2_f_a != c2_g_b) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_f_a;
}

static void init_dsm_address_info(SFc2_mainInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_mainInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_I1 = (uint8_T (*)[442368])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_x = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c2_y = (uint8_T (*)[442368])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_e_I2 = (uint8_T (*)[442368])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_main_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3200946404U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(323218339U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3840595016U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2375473006U);
}

mxArray *sf_c2_main_third_party_uses_info(void)
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

mxArray *sf_c2_main_jit_fallback_info(void)
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

mxArray *sf_c2_main_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_main(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wMjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/Efg"
    "8C7hdEcT+En1kcn5hcklmWGp9sFJ+bmJmHZB4IAAA4kRZJ"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_main_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sZmI7EUkPTLaN6liijAMNXB";
}

static void sf_opaque_initialize_c2_main(void *chartInstanceVar)
{
  initialize_params_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
  initialize_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_main(void *chartInstanceVar)
{
  enable_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_main(void *chartInstanceVar)
{
  disable_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_main(void *chartInstanceVar)
{
  sf_gateway_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_main(SimStruct* S)
{
  return get_sim_state_c2_main((SFc2_mainInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_main(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_main((SFc2_mainInstanceStruct*)sf_get_chart_instance_ptr(S),
                        st);
}

static void sf_opaque_cleanup_runtime_resources_c2_main(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_mainInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_main_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_main((SFc2_mainInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_main(void *chartInstanceVar)
{
  mdl_start_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_main(void *chartInstanceVar)
{
  mdl_terminate_c2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_main((SFc2_mainInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_main(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_main((SFc2_mainInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_main((SFc2_mainInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_main_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV11u00oUtkMvAglQQUh9AAne4A0E0oUnaPMnIiVthRNAvFRT+yQeMp4x8+M2i2AFIMEe2AU",
    "rQGITLIEzjpsGx3baRiDuFZZcZ+zvfHP+z9RxOz0Hryt437/mOOfxeQHvmjO9/snW7tw9fb/m3M",
    "nW71CIm2iXSBIpp/LiJILnoAQzmgre4UNRCKN8CBK4j9hYSF3GpmhkGOXjtuG+5VMvQ+qHXigMC",
    "+ooS4IdzibIFhu9izxNKsHXbYBAh1KYUdhmZDTTWOqDRgj+WJmoygQF2jOxVUv1DNM0ZtA6BL/D",
    "lSaosTrWzdNEQ0MflpppLVXeEVBEMaOEF1obEuVBjA7WMIgD/LtjNBqVh/khkboOIUlAdek45RQ",
    "c8pxU4Yd9yokWkhLWiljDCi7qtstQn54IgFU4BHWrSyDjWFCuy+PvtdHSFif7DJqwb0blbB68NT",
    "b4LygcgCz127AhEpBkBDu8dNPUIa3DNFqzLFmEaRrBCyK3fIyfgqA0ezFzlEcwTtBHiTIYpEZ2V",
    "F/SBN1bymaijs3MZSVjommw1TJYytZKoCoKM7a2zxuEMVUK64u4CwmwlLVJNKmGTVmLcUrRoC/Q",
    "wTa9y6vBcIqBz2ANwQNaGK4kB0j7zjY2lp+RvlFaRA1M3ma3u/h5EdbhGuSQ+FDUBSShCtBnqXv",
    "L2QKqbOwRiFrpVL0i8DRDlqEcNTS8eSDkGH1S0USOTbARLQVGaoSxxEoYKCyaKpiN5TKcT/wQAt",
    "tgKIMelg1iC3yibGvbwrpLqJ40QfmSxgVRNVh12IZaNqEmMQz4mIsD3pYi8rIeP3UvAGYbkZzyU",
    "R37l5y0cfeiUKTzzDmeZ5dOMM+O5PLPu3M8bgGPM/fM73ux9jP+XG7fGr5xXTeV25yTu5zbZy0n",
    "Z3HreL8ftL4kGx8+Pvz8+Ma3rU/3lu3vLuzvpr+t3Kfa6eb/lWx986jRzgonWchXi302p9daAf/",
    "GHP96tlavo86j1mC82++S7X8ZpW+2etuv6infd7da31pO36P3t23HxyxL81P6nSA7mNg1MdNxbf",
    "kfz+l7fok/Lmbvp9f3p6vJX9/Mx3Ftifw6/prk8vbs+9/eXE3+ZPG+mov31XSu7xHbLWDPf7AXE",
    "coL6vGs+X1aOec3y/1X9Pzrl19v30nm1bkzyrkrzsffJbeqfaed238avqr/Ozn8+h9sx6rnqV+N",
    "/+qc7txzK1s/mf1r0wgpCwpOudlnPLIOi77+D/L0B/Smq+U=",
    ""
  };

  static char newstr [1249] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_main(SimStruct *S)
{
  const char* newstr = sf_c2_main_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3393541531U));
  ssSetChecksum1(S,(2677806966U));
  ssSetChecksum2(S,(456700723U));
  ssSetChecksum3(S,(799031771U));
}

static void mdlRTW_c2_main(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_main(SimStruct *S)
{
  SFc2_mainInstanceStruct *chartInstance;
  chartInstance = (SFc2_mainInstanceStruct *)utMalloc(sizeof
    (SFc2_mainInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_mainInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_main;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_main;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_main;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_main;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_main;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_main;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_main;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_main;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_main;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_main;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_main;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_main;
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

  mdl_setup_runtime_resources_c2_main(chartInstance);
}

void c2_main_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_main(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_main(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_main(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_main_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
