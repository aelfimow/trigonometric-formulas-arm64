#include "fp64.h"
#include "rhs.h"
#include "cot.h"


fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cot(alpha);
    fp64 const b = cot(beta);

    fp64 const result = ((a * b) + 1.0) / (b - a);

    return result;
}
