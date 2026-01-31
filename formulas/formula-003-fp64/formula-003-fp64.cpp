#include "fp64.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"
#include "fpexception.h"

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>
#include <cmath>
#include <cfenv>


int main(int, char* [])
{
    int const digits = 15;

    fp64 const epsilon = macheps();

    fp64 const delta_x = (2.0 * std::numbers::pi_v<fp64>);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp64 const k = (static_cast<fp64>(nominator) / static_cast<fp64>(denominator));

        fp64 const x = (k * delta_x);

        std::feclearexcept(FE_ALL_EXCEPT);
        fp64 const lhs_value = lhs(x);
        bool const lhs_exception = fpexception();

        std::feclearexcept(FE_ALL_EXCEPT);
        fp64 const rhs_value = rhs(x);
        bool const rhs_exception = fpexception();

        if (lhs_exception or rhs_exception)
        {
            if (lhs_exception)
            {
                std::cout
                    << "Left hand side: floating point exception"
                    << "; " << nominator << "/" << denominator
                    << std::endl;
            }

            if (rhs_exception)
            {
                std::cout
                    << "Right hand side: floating point exception"
                    << "; " << nominator << "/" << denominator
                    << std::endl;
            }

            failed_cnt += 1U;

            continue;
        }

        fp64 const diff = fabs(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

        if (failed)
        {
            std::cout
                << std::setprecision(digits)
                << "Check failed for (fp64): x = " << x
                << "; diff = " << diff
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(digits)
        << "Epsilon (fp64): "
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