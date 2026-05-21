#include "fp32.h"
#include "rhs.h"

#include <cmath>

fp32 rhs(fp32 x)
{
    fp32 const a = sinf(x);

    fp32 const result = (1.0f / (a * a));

    return result;
}
