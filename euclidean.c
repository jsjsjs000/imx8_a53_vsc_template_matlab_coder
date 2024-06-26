/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 * File: euclidean.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 26-Jun-2024 08:45:05
 */

/* Include Files */
#include "euclidean.h"
#include <math.h>

/* Function Definitions */
/*
 * EUCLIDEAN  Calculates the minimum and maximum euclidean distance between a
 *            point and a set of other points.
 *    [Y_MIN, Y_MAX, IDX, DISTANCE] = EUCLIDEAN(X,CB) computes the euclidean
 *    distance between X and every column of CB. X is an M-by-1 vector and CB
 *    is an M-by-N matrix. Y_MIN and Y_MAX are M-by-1 vectors that are equal
 *    to the columns of CB that have the minimum and the maximun distances to
 *    X, respectively. IDX is a 2-dimensional vector that contains the column
 *    indices of Y_MIN and Y_MAX in CB. DISTANCE is a 2-dimensional vector
 *    that contains the minumum and maximum distances.
 *
 *    Copyright 2018 The MathWorks, Inc.
 *
 * Arguments    : const double x[3]
 *                const double cb[648]
 *                double y_min[3]
 *                double y_max[3]
 *                double idx[2]
 *                double distance[2]
 * Return Type  : void
 */
void euclidean(const double x[3], const double cb[648], double y_min[3],
               double y_max[3], double idx[2], double distance[2])
{
  double absxk;
  double b;
  double d;
  double d1;
  double d2;
  double d3;
  double scale;
  double t;
  int absxk_tmp;
  int b_index;
  /*  Initialize minimum distance as distance to first element of cb */
  /*  Initialize maximum distance as distance to first element of cb */
  /*  idx(1)=1; */
  /*  idx(2)=1; */
  /*   */
  /*  distance(1)=norm(x-cb(:,1)); */
  /*  distance(2)=norm(x-cb(:,1)); */
  idx[0] = 1.0;
  idx[1] = 1.0;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0] - cb[0]);
  if (absxk > 3.3121686421112381E-170) {
    b = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    b = t * t;
  }
  absxk = fabs(x[1] - cb[1]);
  if (absxk > scale) {
    t = scale / absxk;
    b = b * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    b += t * t;
  }
  absxk = fabs(x[2] - cb[2]);
  if (absxk > scale) {
    t = scale / absxk;
    b = b * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    b += t * t;
  }
  b = scale * sqrt(b);
  /*  Find the vector in cb with minimum distance to x */
  /*  Find the vector in cb with maximum distance to x */
  d = x[0];
  d1 = x[1];
  d2 = x[2];
  d3 = b;
  for (b_index = 0; b_index < 215; b_index++) {
    double b_d;
    scale = 3.3121686421112381E-170;
    absxk_tmp = 3 * (b_index + 1);
    absxk = fabs(d - cb[absxk_tmp]);
    if (absxk > 3.3121686421112381E-170) {
      b_d = 1.0;
      scale = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      b_d = t * t;
    }
    absxk = fabs(d1 - cb[absxk_tmp + 1]);
    if (absxk > scale) {
      t = scale / absxk;
      b_d = b_d * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_d += t * t;
    }
    absxk = fabs(d2 - cb[absxk_tmp + 2]);
    if (absxk > scale) {
      t = scale / absxk;
      b_d = b_d * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_d += t * t;
    }
    b_d = scale * sqrt(b_d);
    if (b_d < b) {
      b = b_d;
      idx[0] = (double)b_index + 2.0;
    }
    if (b_d > d3) {
      d3 = b_d;
      idx[1] = (double)b_index + 2.0;
    }
  }
  distance[1] = d3;
  distance[0] = b;
  /*  Output the minimum and maximum distance vectors */
  b_index = 3 * ((int)idx[0] - 1);
  y_min[0] = cb[b_index];
  absxk_tmp = 3 * ((int)idx[1] - 1);
  y_max[0] = cb[absxk_tmp];
  y_min[1] = cb[b_index + 1];
  y_max[1] = cb[absxk_tmp + 1];
  y_min[2] = cb[b_index + 2];
  y_max[2] = cb[absxk_tmp + 2];
}

/*
 * File trailer for euclidean.c
 *
 * [EOF]
 */
