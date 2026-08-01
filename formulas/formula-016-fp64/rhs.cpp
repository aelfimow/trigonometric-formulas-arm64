#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{1 - \cos^{2}{\alpha}}
 * @f]
 */
fp64 rhs(fp64 alpha)
{
    fp64 const a = cos(alpha);

    fp64 const result = sqrt(1.0 - (a * a));

    return result;
}
