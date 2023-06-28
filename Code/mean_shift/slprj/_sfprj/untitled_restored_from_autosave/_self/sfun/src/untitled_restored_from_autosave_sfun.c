/* Include files */

#include "untitled_restored_from_autosave_sfun.h"
#include "c2_untitled_restored_from_autosave.h"
#include "c4_untitled_restored_from_autosave.h"
#include "c5_untitled_restored_from_autosave.h"
#include "c7_untitled_restored_from_autosave.h"
#include "c9_untitled_restored_from_autosave.h"
#include "c10_untitled_restored_from_autosave.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void untitled_restored_from_autosave_initializer(void)
{
}

void untitled_restored_from_autosave_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_untitled_restored_from_autosave_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==2) {
    c2_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_untitled_restored_from_autosave_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  return 0;
}

unsigned int sf_untitled_restored_from_autosave_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1901618953U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(421984119U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2832732778U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1624082880U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 2:
        {
          extern void sf_c2_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c2_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c4_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c5_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c7_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c9_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_untitled_restored_from_autosave_get_check_sum
            (mxArray *plhs[]);
          sf_c10_untitled_restored_from_autosave_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(117621191U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2038690574U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1738159807U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2503105077U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2604668932U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2986700192U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(975729844U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3392900772U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_untitled_restored_from_autosave_get_eml_resolved_functions_info(
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(instanceChksum, "smNTvW8R9C1cNCO8SyFRlyB") == 0) {
          extern const mxArray
            *sf_c2_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 4:
      {
        if (strcmp(instanceChksum, "stBuwzBmH3ZUwrPewqX4e3E") == 0) {
          extern const mxArray
            *sf_c4_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 5:
      {
        if (strcmp(instanceChksum, "sBrMmyhj1rEtsHddSVBLuXH") == 0) {
          extern const mxArray
            *sf_c5_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c5_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 7:
      {
        if (strcmp(instanceChksum, "szcAA8NH7IO62rfWscj11oH") == 0) {
          extern const mxArray
            *sf_c7_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c7_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 9:
      {
        if (strcmp(instanceChksum, "sJ1Fdpi3Or8UP0r3uWlygaC") == 0) {
          extern const mxArray
            *sf_c9_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c9_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 10:
      {
        if (strcmp(instanceChksum, "s6N3oKHCuXrMpDCTjeq5uqH") == 0) {
          extern const mxArray
            *sf_c10_untitled_restored_from_autosave_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c10_untitled_restored_from_autosave_get_eml_resolved_functions_info
            ();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_untitled_restored_from_autosave_third_party_uses_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "smNTvW8R9C1cNCO8SyFRlyB") == 0) {
          extern mxArray
            *sf_c2_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c2_untitled_restored_from_autosave_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "stBuwzBmH3ZUwrPewqX4e3E") == 0) {
          extern mxArray
            *sf_c4_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c4_untitled_restored_from_autosave_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sBrMmyhj1rEtsHddSVBLuXH") == 0) {
          extern mxArray
            *sf_c5_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c5_untitled_restored_from_autosave_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "szcAA8NH7IO62rfWscj11oH") == 0) {
          extern mxArray
            *sf_c7_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c7_untitled_restored_from_autosave_third_party_uses_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sJ1Fdpi3Or8UP0r3uWlygaC") == 0) {
          extern mxArray
            *sf_c9_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c9_untitled_restored_from_autosave_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "s6N3oKHCuXrMpDCTjeq5uqH") == 0) {
          extern mxArray
            *sf_c10_untitled_restored_from_autosave_third_party_uses_info(void);
          plhs[0] = sf_c10_untitled_restored_from_autosave_third_party_uses_info
            ();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_untitled_restored_from_autosave_jit_fallback_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "smNTvW8R9C1cNCO8SyFRlyB") == 0) {
          extern mxArray
            *sf_c2_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c2_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "stBuwzBmH3ZUwrPewqX4e3E") == 0) {
          extern mxArray
            *sf_c4_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c4_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sBrMmyhj1rEtsHddSVBLuXH") == 0) {
          extern mxArray
            *sf_c5_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c5_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "szcAA8NH7IO62rfWscj11oH") == 0) {
          extern mxArray
            *sf_c7_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c7_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sJ1Fdpi3Or8UP0r3uWlygaC") == 0) {
          extern mxArray
            *sf_c9_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c9_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "s6N3oKHCuXrMpDCTjeq5uqH") == 0) {
          extern mxArray
            *sf_c10_untitled_restored_from_autosave_jit_fallback_info(void);
          plhs[0] = sf_c10_untitled_restored_from_autosave_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_untitled_restored_from_autosave_get_post_codegen_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "smNTvW8R9C1cNCO8SyFRlyB") == 0) {
          const char
            *sf_c2_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c2_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "stBuwzBmH3ZUwrPewqX4e3E") == 0) {
          const char
            *sf_c4_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c4_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sBrMmyhj1rEtsHddSVBLuXH") == 0) {
          const char
            *sf_c5_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c5_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "szcAA8NH7IO62rfWscj11oH") == 0) {
          const char
            *sf_c7_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c7_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sJ1Fdpi3Or8UP0r3uWlygaC") == 0) {
          const char
            *sf_c9_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c9_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "s6N3oKHCuXrMpDCTjeq5uqH") == 0) {
          const char
            *sf_c10_untitled_restored_from_autosave_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c10_untitled_restored_from_autosave_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_untitled_restored_from_autosave_updateBuildInfo_args_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "smNTvW8R9C1cNCO8SyFRlyB") == 0) {
          extern mxArray
            *sf_c2_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c2_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "stBuwzBmH3ZUwrPewqX4e3E") == 0) {
          extern mxArray
            *sf_c4_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c4_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sBrMmyhj1rEtsHddSVBLuXH") == 0) {
          extern mxArray
            *sf_c5_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c5_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "szcAA8NH7IO62rfWscj11oH") == 0) {
          extern mxArray
            *sf_c7_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c7_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sJ1Fdpi3Or8UP0r3uWlygaC") == 0) {
          extern mxArray
            *sf_c9_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c9_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "s6N3oKHCuXrMpDCTjeq5uqH") == 0) {
          extern mxArray
            *sf_c10_untitled_restored_from_autosave_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c10_untitled_restored_from_autosave_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void untitled_restored_from_autosave_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_untitled_restored_from_autosave_optimization_info(void);
mxArray* load_untitled_restored_from_autosave_optimization_info(boolean_T
  isRtwGen, boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_untitled_restored_from_autosave_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "untitled_restored_from_autosave", "untitled_restored_from_autosave");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_untitled_restored_from_autosave_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
