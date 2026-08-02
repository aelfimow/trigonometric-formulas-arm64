#include "fp64.h"
#include "cot.h"

#include <cmath>

fp64 cot(fp64 x)
{
    fp64 const result = (1.0 / tan(x));

    return result;
}
