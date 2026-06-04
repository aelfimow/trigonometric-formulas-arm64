#include "fp80.h"
#include "lhs.h"

#include <cmath>

fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const result = tanl(alpha - beta);

    return result;
}
