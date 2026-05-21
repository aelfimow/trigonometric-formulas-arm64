#include "fp32.h"
#include "rhs.h"

#include <cmath>

fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const result = (sinf(alpha) * cosf(beta)) + (cosf(alpha) * sinf(beta));

    return result;
}
