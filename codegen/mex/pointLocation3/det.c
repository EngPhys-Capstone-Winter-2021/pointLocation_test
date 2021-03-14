/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 21,  /* lineNo */
  "det",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 30,  /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 50,  /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 58,  /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 45,  /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 45,  /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const real_T x[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T b_x[9];
  real_T s;
  real_T smax;
  real_T y;
  int32_T b_j;
  int32_T b_tmp;
  int32_T ijA;
  int32_T ix;
  int32_T j;
  int32_T jp1j;
  int32_T jy;
  int32_T k;
  int32_T n;
  int8_T ipiv[3];
  boolean_T isodd;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &t_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  b_st.site = &u_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  for (j = 0; j < 2; j++) {
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    n = 3 - j;
    jy = 0;
    ix = b_tmp;
    smax = muDoubleScalarAbs(b_x[b_tmp]);
    for (k = 2; k <= n; k++) {
      ix++;
      s = muDoubleScalarAbs(b_x[ix]);
      if (s > smax) {
        jy = k - 1;
        smax = s;
      }
    }

    if (b_x[b_tmp + jy] != 0.0) {
      if (jy != 0) {
        jy += j;
        ipiv[j] = (int8_T)(jy + 1);
        smax = b_x[j];
        b_x[j] = b_x[jy];
        b_x[jy] = smax;
        smax = b_x[j + 3];
        b_x[j + 3] = b_x[jy + 3];
        b_x[jy + 3] = smax;
        smax = b_x[j + 6];
        b_x[j + 6] = b_x[jy + 6];
        b_x[jy + 6] = smax;
      }

      k = (b_tmp - j) + 3;
      c_st.site = &v_emlrtRSI;
      for (jy = jp1j; jy <= k; jy++) {
        b_x[jy - 1] /= b_x[b_tmp];
      }
    }

    n = 1 - j;
    jy = b_tmp + 3;
    c_st.site = &w_emlrtRSI;
    d_st.site = &x_emlrtRSI;
    e_st.site = &y_emlrtRSI;
    f_st.site = &ab_emlrtRSI;
    jp1j = b_tmp + 5;
    for (b_j = 0; b_j <= n; b_j++) {
      smax = b_x[jy];
      if (b_x[jy] != 0.0) {
        ix = b_tmp + 1;
        k = (jp1j - j) + 1;
        g_st.site = &bb_emlrtRSI;
        if ((jp1j <= k) && (k > 2147483646)) {
          h_st.site = &n_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (ijA = jp1j; ijA <= k; ijA++) {
          b_x[ijA - 1] += b_x[ix] * -smax;
          ix++;
        }
      }

      jy += 3;
      jp1j += 3;
    }
  }

  isodd = (ipiv[0] > 1);
  y = b_x[0] * b_x[4] * b_x[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  if (isodd) {
    y = -y;
  }

  return y;
}

/* End of code generation (det.c) */
