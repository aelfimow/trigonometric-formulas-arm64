#include "fp64.h"
#include "lhs.h"

#include <cmath>

fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const result = sin(alpha - beta);

    return result;
}
