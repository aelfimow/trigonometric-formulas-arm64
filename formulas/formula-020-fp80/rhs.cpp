#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{\sqrt{1 + \tan^{2}{\alpha}}}
 * @f]
 */
fp80 rhs(fp80 alpha)
{
    fp80 const a = tanl(alpha);

    fp80 const result = 1.0L / sqrtl(1.0L + (a * a));

    return result;
}
