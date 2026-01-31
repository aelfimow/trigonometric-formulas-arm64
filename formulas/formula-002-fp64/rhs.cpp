#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{\cos{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = sin(x);
    fp64 const b = cos(x);

    fp64 const result = (a / b);

    return result;
}
