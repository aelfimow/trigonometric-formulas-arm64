#include "fp32.h"
#include "cotf.h"

#include <cmath>

fp32 cotf(fp32 x)
{
    fp32 const result = (1.0f / tanf(x));

    return result;
}
