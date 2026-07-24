#include "fp32.h"
#include "rhs.h"

#include <cmath>

fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cosf(beta);
    fp32 const b = sinf(alpha);

    fp32 const result = (a * a) - (b * b);

    return result;
}
