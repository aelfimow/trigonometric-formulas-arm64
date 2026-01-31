#include "fp64.h"
#include "lhs.h"

#include <cmath>

fp64 lhs(fp64 x)
{
    fp64 const result = (1.0 / tan(x));

    return result;
}
