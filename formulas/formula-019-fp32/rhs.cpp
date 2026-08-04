#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{1 - \sin^{2}{\alpha}}
 * @f]
 */
fp32 rhs(fp32 alpha)
{
    fp32 const a = sinf(alpha);

    fp32 const result = sqrtf(1.0f - (a * a));

    return result;
}
