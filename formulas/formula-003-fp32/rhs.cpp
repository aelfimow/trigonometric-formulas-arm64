#include "fp32.h"
#include "rhs.h"

#include <cmath>

fp32 rhs(fp32 x)
{
    fp32 const a = cosf(x);
    fp32 const b = sinf(x);

    fp32 const result = (a / b);

    return result;
}
