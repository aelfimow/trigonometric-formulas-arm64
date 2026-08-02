#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{\sqrt{1 + \cot^{2}{\alpha}}}
 * @f]
 */
fp32 rhs(fp32 alpha)
{
    fp32 const a = cotf(alpha);

    fp32 const result = 1.0f / sqrtf(1.0f + (a * a));

    return result;
}
