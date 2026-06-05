#include "fp32.h"
#include "rhs.h"
#include "cotf.h"


fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cotf(alpha);
    fp32 const b = cotf(beta);

    fp32 const result = ((a * b) - 1.0f) / (b + a);

    return result;
}
