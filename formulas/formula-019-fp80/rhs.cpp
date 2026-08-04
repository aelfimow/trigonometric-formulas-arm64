#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{1 - \sin^{2}{\alpha}}
 * @f]
 */
fp80 rhs(fp80 alpha)
{
    fp80 const a = sinl(alpha);

    fp80 const result = sqrtl(1.0L - (a * a));

    return result;
}
