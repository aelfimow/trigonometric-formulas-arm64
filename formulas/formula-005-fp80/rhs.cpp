#include "fp80.h"
#include "rhs.h"

#include <cmath>

fp80 rhs(fp80 x)
{
    fp80 const a = sinl(x);

    fp80 const result = (1.0L / (a * a));

    return result;
}
