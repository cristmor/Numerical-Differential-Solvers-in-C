#include <stdio.h>
#include <math.h>

#include "numerical_solvers.h"

float customFunction(float x)
{
    return sin(x);
}

int main()
{
    float x = 1.0f;
    float h = 0.01f;
    float fowardResult = forward(customFunction, x, h);
    float backwardResult = backward(customFunction, x, h);
    float symmetric3Result = symmetric3P(customFunction, x, h);
    float symmetricpResult = symmetric5P(customFunction, x, h);

    printf("Actual: %f\n", cos(x));
    printf("foward: %f\n", fowardResult);
    printf("backward: %f\n", backwardResult);
    printf("symmetric3: %f\n", symmetric3Result);
    printf("symmetricp: %f\n", symmetricpResult);
};