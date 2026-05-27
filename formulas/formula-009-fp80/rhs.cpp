#include "fp80.h"
#include "rhs.h"

#include <cmath>

fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const result = (cosl(alpha) * cosl(beta)) + (sinl(alpha) * sinl(beta));

    return result;
}
