#include "fp80.h"
#include "rhs.h"
#include "cotl.h"


fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = cotl(alpha);
    fp80 const b = cotl(beta);

    fp80 const result = ((a * b) + 1.0L) / (b - a);

    return result;
}
