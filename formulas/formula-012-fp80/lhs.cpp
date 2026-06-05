#include "fp80.h"
#include "lhs.h"
#include "cotl.h"

fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const result = cotl(alpha + beta);

    return result;
}
