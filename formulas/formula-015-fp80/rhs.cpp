#include "fp80.h"
#include "rhs.h"

#include <cmath>

fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = cosl(beta);
    fp80 const b = sinl(alpha);

    fp80 const result = (a * a) - (b * b);

    return result;
}
