/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pointLocation2_mex.c
 *
 * Code generation for function '_coder_pointLocation2_mex'
 *
 */

/* Include files */
#include "_coder_pointLocation2_mex.h"
#include "_coder_pointLocation2_api.h"
#include "pointLocation2_data.h"
#include "pointLocation2_initialize.h"
#include "pointLocation2_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&pointLocation2_atexit);

  /* Module initialization. */
  pointLocation2_initialize();

  /* Dispatch the entry-point. */
  pointLocation2_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  pointLocation2_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

void pointLocation2_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[3])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        14, "pointLocation2");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "pointLocation2");
  }

  /* Call the function. */
  pointLocation2_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/* End of code generation (_coder_pointLocation2_mex.c) */
