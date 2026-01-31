#include "fp64.h"
#include "rhs.h"

#include <cmath>

fp64 rhs(fp64 x)
{
    fp64 const a = cos(x);
    fp64 const b = sin(x);

    fp64 const result = (a / b);

    return result;
}
