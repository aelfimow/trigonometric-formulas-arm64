#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = tan(x);

    return result;
}
