#include "fp64.h"
#include "rhs.h"

#include <cmath>

fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const result = (sin(alpha) * cos(beta)) + (cos(alpha) * sin(beta));

    return result;
}
