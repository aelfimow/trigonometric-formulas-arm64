#include "fp32.h"
#include "rhs.h"

#include <cmath>

fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = tanf(alpha);
    fp32 const b = tanf(beta);

    fp32 const result = (a + b) / (1.0f - (a * b));

    return result;
}
