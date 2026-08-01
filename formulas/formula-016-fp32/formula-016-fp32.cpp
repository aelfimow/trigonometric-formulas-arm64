#include "fp32.h"
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
    int const digits = 7;

    fp32 const epsilon = macheps();

    fp32 const delta_x = (2.0f * std::numbers::pi_v<fp32>);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp32 const k = (static_cast<fp32>(nominator) / static_cast<fp32>(denominator));

        fp32 const alpha = (k * delta_x);

        fp32 const lhs_value = lhs(alpha);
        fp32 const rhs_value = rhs(alpha);

        fp32 const diff1 = fabsf(lhs_value - rhs_value);
        fp32 const diff2 = fabsf(lhs_value + rhs_value);

        bool const failed = ((diff1 >= epsilon) and (diff2 >= epsilon));

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

        if (failed)
        {
            std::cout
                << std::setprecision(digits)
                << "Check failed for (fp32): alpha = " << alpha
                << "; diff1 = " << diff1
                << "; diff2 = " << diff2
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(digits)
        << "Epsilon (fp32): "
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
