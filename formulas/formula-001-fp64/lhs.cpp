#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{2}{\alpha} + \cos^{2}{\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const x1 = sin(x);
    fp64 const x2 = cos(x);

    fp64 const result = (x1 * x1) + (x2 * x2);

    return result;
}
