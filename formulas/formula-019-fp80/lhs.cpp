#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha}
 * @f]
 */
fp80 lhs(fp80 alpha)
{
    fp80 const result = cosl(alpha);

    return result;
}
