#include "fp80.h"
#include "rhs.h"

#include <cmath>

fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = tanl(alpha);
    fp80 const b = tanl(beta);

    fp80 const result = (a - b) / (1.0L + (a * b));

    return result;
}
