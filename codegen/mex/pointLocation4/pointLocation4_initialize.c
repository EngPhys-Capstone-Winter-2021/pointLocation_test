/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pointLocation4_initialize.c
 *
 * Code generation for function 'pointLocation4_initialize'
 *
 */

/* Include files */
#include "pointLocation4_initialize.h"
#include "_coder_pointLocation4_mex.h"
#include "pointLocation4_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void pointLocation4_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (pointLocation4_initialize.c) */
