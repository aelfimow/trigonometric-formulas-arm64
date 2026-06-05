#include "fp32.h"
#include "lhs.h"
#include "cotf.h"

fp32 lhs(fp32 alpha, fp32 beta)
{
    fp32 const result = cotf(alpha + beta);

    return result;
}
