#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{\cos{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = sinf(x);
    fp32 const b = cosf(x);

    fp32 const result = (a / b);

    return result;
}
