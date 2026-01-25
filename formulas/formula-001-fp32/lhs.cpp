#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{2}{\alpha} + \cos^{2}{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const x1 = sinf(x);
    fp32 const x2 = cosf(x);

    fp32 const result = (x1 * x1) + (x2 * x2);

    return result;
}
