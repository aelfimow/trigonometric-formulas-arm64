#include "fp80.h"
#include "lhs.h"

#include <cmath>

fp80 lhs(fp80 x)
{
    fp80 const a = (1.0L / tanl(x));

    fp80 const result = (1.0L + (a * a));

    return result;
}
