#include "fp80.h"
#include "rhs.h"

#include <cmath>

fp80 rhs(fp80 x)
{
    fp80 const a = cosl(x);
    fp80 const b = sinl(x);

    fp80 const result = (a / b);

    return result;
}
