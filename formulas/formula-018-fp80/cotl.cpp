#include "fp80.h"
#include "cotl.h"

#include <cmath>

fp80 cotl(fp80 x)
{
    fp80 const result = (1.0L / tanl(x));

    return result;
}
