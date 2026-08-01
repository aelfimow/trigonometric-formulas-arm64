#include "fp80.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>
#include <cmath>


int main(int, char *[])
{
    int const digits = 21;

    fp80 const epsilon = macheps();

    fp80 const delta_x = (2.0L * std::numbers::pi_v<fp80>);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp80 const k = (static_cast<fp80>(nominator) / static_cast<fp80>(denominator));

        fp80 const alpha = (k * delta_x);

        fp80 const lhs_value = lhs(alpha);
        fp80 const rhs_value = rhs(alpha);

        fp80 const diff1 = fabsl(lhs_value - rhs_value);
        fp80 const diff2 = fabsl(lhs_value + rhs_value);

        bool const failed = ((diff1 >= epsilon) and (diff2 >= epsilon));

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

        if (failed)
        {
            std::cout
                << std::setprecision(digits)
                << "Check failed for (fp80): alpha = " << alpha
                << "; diff1 = " << diff1
                << "; diff2 = " << diff2
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(digits)
        << "Epsilon (fp80): "
        << epsilon
        << std::endl;

    std::cout
        << "Failed: "
        << failed_cnt
        << "; OK: "
        << ok_cnt
        << std::endl;

    return EXIT_SUCCESS;
}
