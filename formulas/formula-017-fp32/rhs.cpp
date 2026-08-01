#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\tan{\alpha}}{\sqrt{1 + \tan^{2}{\alpha}}}
 * @f]
 */
fp32 rhs(fp32 alpha)
{
    fp32 const a = tanf(alpha);

    fp32 const result = a / sqrtf(1.0f + (a * a));

    return result;
}
