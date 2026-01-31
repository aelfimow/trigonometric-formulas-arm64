#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{\cos{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = sinl(x);
    fp80 const b = cosl(x);

    fp80 const result = (a / b);

    return result;
}
