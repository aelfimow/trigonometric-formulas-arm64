#include "fp64.h"
#include "rhs.h"

#include <cmath>

fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cos(beta);
    fp64 const b = cos(alpha);

    fp64 const result = (a * a) - (b * b);

    return result;
}
