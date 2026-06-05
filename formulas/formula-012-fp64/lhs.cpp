#include "fp64.h"
#include "lhs.h"
#include "cot.h"


fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const result = cot(alpha + beta);

    return result;
}
