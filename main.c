/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 * File: main.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 26-Jun-2024 08:45:05
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "euclidean.h"
#include "euclidean_terminate.h"
#include <stdio.h>

/* Function Declarations */
static void argInit_3x1_real_T(double result[3]);

static void argInit_3x216_real_T(double result[648]);

static double argInit_real_T(void);

/* Function Definitions */
/*
 * Arguments    : double result[3]
 * Return Type  : void
 */
static void argInit_3x1_real_T(double result[3])
{
  int idx0;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[648]
 * Return Type  : void
 */
static void argInit_3x216_real_T(double result[648])
{
  int i;
  /* Loop over the array to initialize each element. */
  for (i = 0; i < 648; i++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[i] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_euclidean();
  /* Terminate the application.
You do not need to do this more than one time. */
  euclidean_terminate();
  return 0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_euclidean(void)
{
  double dv1[648];
  double dv[3];
  double y_max[3];
  double y_min[3];
  double distance[2];
  double idx[2];
  /* Initialize function 'euclidean' input arguments. */
  /* Initialize function input argument 'x'. */
  /* Initialize function input argument 'cb'. */
  /* Call the entry-point 'euclidean'. */
  argInit_3x1_real_T(dv);
  argInit_3x216_real_T(dv1);
  
  for (int i = 0; i < 648; i = i+3)
  {
  	dv1[i] = 3;
  	dv1[i+1] = 4;
  	dv1[i+2] = 0;
  }
  
  euclidean(dv, dv1, y_min, y_max, idx, distance);
  printf("min norm: %f, max norm: %f\n", distance[0], distance[1]);
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
