/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pointLocation3.c
 *
 * Code generation for function 'pointLocation3'
 *
 */

/* Include files */
#include "pointLocation3.h"
#include "det.h"
#include "pointLocation3_data.h"
#include "pointLocation3_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 45,    /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 46,  /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 47,  /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 48,  /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 102, /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 103, /* lineNo */
  "pointLocation3",                    /* fcnName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 14,  /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 46,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 92,  /* lineNo */
  "minimum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 14,  /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 44,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 79,  /* lineNo */
  "maximum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 97,  /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  10,                                  /* colNo */
  "T",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  10,                                  /* colNo */
  "T",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  10,                                  /* colNo */
  "T",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 61,    /* lineNo */
  11,                                  /* colNo */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  26,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 62,  /* lineNo */
  11,                                  /* colNo */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  26,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  11,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 63,  /* lineNo */
  11,                                  /* colNo */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  26,                                  /* colNo */
  "P",                                 /* aName */
  "pointLocation3",                    /* fName */
  "C:\\Users\\Ryan Fang\\Dropbox\\School\\University\\ECE 494_495 - Engineering Physics Design Project I_II\\Project - External\\Matlab Tes"
  "ting\\pointLocation_test\\pointLocation3.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void pointLocation3(const emlrtStack *sp, const emxArray_real_T *T, const
                    emxArray_real_T *P, const real_T qp[2], real_T *tri, real_T
                    bc[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtStack *r;
  emlrtStack *r1;
  emlrtStack *r2;
  real_T dv[9];
  real_T dv1[9];
  real_T dv2[9];
  real_T n1;
  real_T n2;
  real_T n3;
  real_T p1x;
  real_T p1y;
  real_T p2x;
  real_T p2y;
  real_T p3x;
  real_T qpx;
  real_T qpy;
  real_T r12_idx_1;
  int32_T b_T;
  int32_T exitg2;
  int32_T idx;
  int32_T k;
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /*  pointLocation2 */
  /* { */
  /* Ryan Fang, 1483818 */
  /* 2021-03-05 */
  /*  */
  /* Given a query point in a delaunay triangulation, its returns the enclosing triangle */
  /* if it is out of bounds, return a zero */
  /*  */
  /* qp is a 1x2 row vector defining the query point */
  /*  */
  /* pointlocation2 is the "2nd" (really first) version created */
  /* pointlocation3 adds barycentric coordinate */
  /*  */
  /* TODO: */
  /*     check if point is on a point or line (not within simplex) */
  /*     run in less time */
  /*  */
  /* } */
  /*  Psuedocode */
  /* { */
  /* determine if the point is out of bounds */
  /*     if so, tri=0, then return zero */
  /*  */
  /* loop through each triangle */
  /*  */
  /*     check if point point 3 and qp are on the same side as point 1 or 2 */
  /*         if not, continue */
  /*     do again for point 1/qp vs point 2 and 3 */
  /*         if not, continue */
  /*     do again for point 2/qp vs point 3 and 1 */
  /*         if yes, return the tri number */
  /*         if not, continue */
  /* end */
  /* return -1 since can't find it */
  /*  */
  /* } */
  /*  Algorithm */
  qpx = qp[0];
  qpy = qp[1];
  st.site = &emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  if (P->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  b_T = P->size[0];
  if (P->size[0] <= 2) {
    if (P->size[0] == 1) {
      n2 = P->data[0];
    } else if ((P->data[0] > P->data[1]) || (muDoubleScalarIsNaN(P->data[0]) &&
                (!muDoubleScalarIsNaN(P->data[1])))) {
      n2 = P->data[1];
    } else {
      n2 = P->data[0];
    }
  } else {
    if (!muDoubleScalarIsNaN(P->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= P->size[0])) {
        if (!muDoubleScalarIsNaN(P->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      n2 = P->data[0];
    } else {
      n2 = P->data[idx - 1];
      idx++;
      for (k = idx; k <= b_T; k++) {
        p2y = P->data[k - 1];
        if (n2 > p2y) {
          n2 = p2y;
        }
      }
    }
  }

  st.site = &b_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  if (P->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  b_T = P->size[0];
  if (P->size[0] <= 2) {
    if (P->size[0] == 1) {
      n1 = P->data[0];
    } else if ((P->data[0] < P->data[1]) || (muDoubleScalarIsNaN(P->data[0]) &&
                (!muDoubleScalarIsNaN(P->data[1])))) {
      n1 = P->data[1];
    } else {
      n1 = P->data[0];
    }
  } else {
    if (!muDoubleScalarIsNaN(P->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= P->size[0])) {
        if (!muDoubleScalarIsNaN(P->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      n1 = P->data[0];
    } else {
      n1 = P->data[idx - 1];
      idx++;
      for (k = idx; k <= b_T; k++) {
        p2y = P->data[k - 1];
        if (n1 < p2y) {
          n1 = p2y;
        }
      }
    }
  }

  st.site = &c_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  d_st.site = &i_emlrtRSI;
  if (P->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  b_T = P->size[0];
  if (P->size[0] <= 2) {
    if (P->size[0] == 1) {
      n3 = P->data[P->size[0]];
    } else if ((P->data[P->size[0]] > P->data[P->size[0] + 1]) ||
               (muDoubleScalarIsNaN(P->data[P->size[0]]) &&
                (!muDoubleScalarIsNaN(P->data[P->size[0] + 1])))) {
      n3 = P->data[P->size[0] + 1];
    } else {
      n3 = P->data[P->size[0]];
    }
  } else {
    if (!muDoubleScalarIsNaN(P->data[P->size[0]])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= P->size[0])) {
        if (!muDoubleScalarIsNaN(P->data[(k + P->size[0]) - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      n3 = P->data[P->size[0]];
    } else {
      n3 = P->data[(idx + P->size[0]) - 1];
      idx++;
      for (k = idx; k <= b_T; k++) {
        p2y = P->data[(k + P->size[0]) - 1];
        if (n3 > p2y) {
          n3 = p2y;
        }
      }
    }
  }

  st.site = &d_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  if (P->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  b_T = P->size[0];
  if (P->size[0] <= 2) {
    if (P->size[0] == 1) {
      r12_idx_1 = P->data[P->size[0]];
    } else if ((P->data[P->size[0]] < P->data[P->size[0] + 1]) ||
               (muDoubleScalarIsNaN(P->data[P->size[0]]) &&
                (!muDoubleScalarIsNaN(P->data[P->size[0] + 1])))) {
      r12_idx_1 = P->data[P->size[0] + 1];
    } else {
      r12_idx_1 = P->data[P->size[0]];
    }
  } else {
    if (!muDoubleScalarIsNaN(P->data[P->size[0]])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= P->size[0])) {
        if (!muDoubleScalarIsNaN(P->data[(k + P->size[0]) - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      r12_idx_1 = P->data[P->size[0]];
    } else {
      r12_idx_1 = P->data[(idx + P->size[0]) - 1];
      idx++;
      for (k = idx; k <= b_T; k++) {
        p2y = P->data[(k + P->size[0]) - 1];
        if (r12_idx_1 < p2y) {
          r12_idx_1 = p2y;
        }
      }
    }
  }

  if ((qpx < n2) || (qpx > n1) || (qpy < n3) || (qpy > r12_idx_1)) {
    *tri = 0.0;
    bc[0] = 0.0;
    bc[1] = 0.0;
    bc[2] = 0.0;
  } else {
    idx = 1;
    do {
      exitg2 = 0;
      if (T->size[0] == 0) {
        b_T = 0;
      } else {
        b_T = muIntScalarMax_sint32(T->size[0], 3);
      }

      if (idx - 1 <= b_T - 1) {
        /*  Get the global node numbers of the current triangle */
        if ((idx < 1) || (idx > T->size[0])) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, T->size[0], &emlrtBCI, sp);
        }

        n1 = T->data[idx - 1];
        if (idx > T->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, T->size[0], &b_emlrtBCI, sp);
        }

        n2 = T->data[(idx + T->size[0]) - 1];
        if (idx > T->size[0]) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, T->size[0], &c_emlrtBCI, sp);
        }

        n3 = T->data[(idx + T->size[0] * 2) - 1];

        /*  Get the coordinates of each of these points */
        if (n1 != (int32_T)muDoubleScalarFloor(n1)) {
          emlrtIntegerCheckR2012b(n1, &emlrtDCI, sp);
        }

        if (((int32_T)n1 < 1) || ((int32_T)n1 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n1, 1, P->size[0], &d_emlrtBCI,
            sp);
        }

        p1x = P->data[(int32_T)n1 - 1];
        if (((int32_T)n1 < 1) || ((int32_T)n1 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n1, 1, P->size[0], &e_emlrtBCI,
            sp);
        }

        p1y = P->data[((int32_T)n1 + P->size[0]) - 1];
        if (n2 != (int32_T)muDoubleScalarFloor(n2)) {
          emlrtIntegerCheckR2012b(n2, &b_emlrtDCI, sp);
        }

        if (((int32_T)n2 < 1) || ((int32_T)n2 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n2, 1, P->size[0], &f_emlrtBCI,
            sp);
        }

        p2x = P->data[(int32_T)n2 - 1];
        if (((int32_T)n2 < 1) || ((int32_T)n2 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n2, 1, P->size[0], &g_emlrtBCI,
            sp);
        }

        p2y = P->data[((int32_T)n2 + P->size[0]) - 1];
        if (n3 != (int32_T)muDoubleScalarFloor(n3)) {
          emlrtIntegerCheckR2012b(n3, &c_emlrtDCI, sp);
        }

        if (((int32_T)n3 < 1) || ((int32_T)n3 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n3, 1, P->size[0], &h_emlrtBCI,
            sp);
        }

        p3x = P->data[(int32_T)n3 - 1];
        if (((int32_T)n3 < 1) || ((int32_T)n3 > P->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n3, 1, P->size[0], &i_emlrtBCI,
            sp);
        }

        n2 = P->data[((int32_T)n3 + P->size[0]) - 1];

        /*  Check point 1 and 2 (1 as reference) */
        n1 = p2x - p1x;
        r12_idx_1 = p2y - p1y;

        /* vector from p1 to p2 */
        /* vector from p1 to qp */
        /* vector from p1 to p3 */
        /* just the z component of the cross prod */
        /* check if they are not both same sign */
        guard1 = false;
        if (((p3x - p1x) * r12_idx_1 - (n2 - p1y) * n1 > 0.0) != ((qpx - p1x) *
             r12_idx_1 - (qpy - p1y) * n1 > 0.0)) {
          guard1 = true;
        } else {
          /*  Check point 2 and 3 (2 as reference) */
          n1 = p3x - p2x;
          r12_idx_1 = n2 - p2y;

          /* vector from p2 to p3 */
          /* vector from p2 to qp */
          /* vector from p2 to p1 */
          /* just the z component of the cross prod */
          /* check if they are not both same sign */
          if (((p1x - p2x) * r12_idx_1 - (p1y - p2y) * n1 > 0.0) != ((qpx - p2x)
               * r12_idx_1 - (qpy - p2y) * n1 > 0.0)) {
            guard1 = true;
          } else {
            /*  Check point 3 and 1 (3 as reference) */
            n1 = p1x - p3x;
            r12_idx_1 = p1y - n2;

            /* vector from p3 to p1 */
            /* vector from p3 to qp */
            /* vector from p3 to p2 */
            /* just the z component of the cross prod */
            /* check if they are not both same sign */
            if (((p2x - p3x) * r12_idx_1 - (p2y - n2) * n1 > 0.0) != ((qpx - p3x)
                 * r12_idx_1 - (qpy - n2) * n1 > 0.0)) {
              guard1 = true;
            } else {
              /* Now that we have confirmed that for all three segments of the triangle, */
              /* the qp and other vertex are on the same side, we can say the triangle is */
              /* the current one */
              *tri = ((real_T)idx - 1.0) + 1.0;
              dv[0] = 1.0;
              dv[3] = p1x;
              dv[6] = p1y;
              dv[1] = 1.0;
              dv[4] = p2x;
              dv[7] = p2y;
              dv[2] = 1.0;
              dv[5] = p3x;
              dv[8] = n2;
              st.site = &e_emlrtRSI;
              n1 = det(&st, dv);
              n3 = 1.0 / n1;
              dv[0] = 1.0;
              dv[3] = qpx;
              dv[6] = qpy;
              dv[1] = 1.0;
              dv[4] = p2x;
              dv[7] = p2y;
              dv[2] = 1.0;
              dv[5] = p3x;
              dv[8] = n2;
              dv1[0] = 1.0;
              dv1[3] = qpx;
              dv1[6] = qpy;
              dv1[1] = 1.0;
              dv1[4] = p3x;
              dv1[7] = n2;
              dv1[2] = 1.0;
              dv1[5] = p1x;
              dv1[8] = p1y;
              dv2[0] = 1.0;
              dv2[3] = qpx;
              dv2[6] = qpy;
              dv2[1] = 1.0;
              dv2[4] = p1x;
              dv2[7] = p1y;
              dv2[2] = 1.0;
              dv2[5] = p2x;
              dv2[8] = p2y;
              st.site = &f_emlrtRSI;
              r = &st;
              p2y = det(r, dv);
              b_st.site = &f_emlrtRSI;
              r1 = &b_st;
              n1 = det(r1, dv1);
              c_st.site = &f_emlrtRSI;
              r2 = &c_st;
              n2 = det(r2, dv2);
              bc[0] = n3 * p2y;
              bc[1] = n3 * n1;
              bc[2] = n3 * n2;
              exitg2 = 1;
            }
          }
        }

        if (guard1) {
          idx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      } else {
        /*  if not found, set tri to -1 */
        *tri = -1.0;
        bc[0] = 0.0;
        bc[1] = 0.0;
        bc[2] = 0.0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
}

/* End of code generation (pointLocation3.c) */
