#include "fp64.h"
#include "lhs.h"

#include <cmath>

fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cos(alpha + beta);
    fp64 const b = cos(alpha - beta);

    fp64 const result = (a * b);

    return result;
}
