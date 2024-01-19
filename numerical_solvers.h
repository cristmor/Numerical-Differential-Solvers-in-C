#ifndef NUMERICAL_SOLVERS_H
#define NUMERICAL_SOLVERS_H

#include <math.h>


typedef float (*Function)(float);

// Forward Difference Method
float forward(Function f, float x0, float h) { return (f(x0+h) - f(x0))/h; }

// Backward Difference Method
float backward(Function f, float x0, float h) { return (f(x0) - f(x0-h))/h; }

// Symmetric 3-Point Method
float symmetric3P(Function f, float x0, float h) { return (f(x0+h) - f(x0-h))/ (2*h); }

// Symmetric 5-Point Method
float symmetric5P(Function f, float x0, float h) { return (f(x0-2*h) - 8*f(x0-h) + 8*f(x0+h) - f(x0+2*h))/ (12*h); }

#endif