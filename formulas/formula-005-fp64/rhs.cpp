#include "fp64.h"
#include "rhs.h"

#include <cmath>

fp64 rhs(fp64 x)
{
    fp64 const a = sin(x);

    fp64 const result = (1.0 / (a * a));

    return result;
}
