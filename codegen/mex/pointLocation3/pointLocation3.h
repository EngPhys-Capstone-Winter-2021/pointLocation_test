/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pointLocation3.h
 *
 * Code generation for function 'pointLocation3'
 *
 */

#pragma once

/* Include files */
#include "pointLocation3_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void pointLocation3(const emlrtStack *sp, const emxArray_real_T *T, const
                    emxArray_real_T *P, const real_T qp[2], real_T *tri, real_T
                    bc[3]);

/* End of code generation (pointLocation3.h) */
