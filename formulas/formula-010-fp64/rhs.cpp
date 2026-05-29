#include "fp64.h"
#include "rhs.h"

#include <cmath>

fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = tan(alpha);
    fp64 const b = tan(beta);

    fp64 const result = (a + b) / (1.0 - (a * b));

    return result;
}
