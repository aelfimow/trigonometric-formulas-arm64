#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{\sqrt{1 + \tan^{2}{\alpha}}}
 * @f]
 */
fp64 rhs(fp64 alpha)
{
    fp64 const a = tan(alpha);

    fp64 const result = 1.0 / sqrt(1.0 + (a * a));

    return result;
}
