# Numerical Differential Solvers in C

This repository contains a set of basic numerical differential solvers implemented in C. These solvers are designed to approximate derivatives for functions in a numerical context. Whether you're working on scientific computing, engineering simulations, or any other application requiring derivative approximations, these solvers provide a straightforward and efficient solution.

## Included Solvers

1. **Forward Difference Method:** Computes the derivative by evaluating the function at the current point and a slightly perturbed point.
2. **Backward Difference Method:** Similar to the forward difference method but perturbs the point in the opposite direction.
3. **Symmetric 3-Point Method:** A central differencing method that uses both forward and backward differences to improve accuracy.
4. **Symmetric 5-Point Method:** Extends the symmetric approach to further enhance the accuracy of derivative approximations.

## Usage

To use these solvers in your C program, simply include the corresponding header file for the method you wish to use. For example, to use the forward difference method:

```c
#include "forward_difference.h"

// Your code here
