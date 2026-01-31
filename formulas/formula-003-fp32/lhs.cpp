#include "fp32.h"
#include "lhs.h"

#include <cmath>

fp32 lhs(fp32 x)
{
    fp32 const result = (1.0f / tanf(x));

    return result;
}
