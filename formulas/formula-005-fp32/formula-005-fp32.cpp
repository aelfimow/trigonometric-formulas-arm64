#include "fp32.h"
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
    int const digits = 7;

    fp32 const epsilon = macheps();

    fp32 const delta_x = (2.0f * std::numbers::pi_v<fp32>);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp32 const k = (static_cast<fp32>(nominator) / static_cast<fp32>(denominator));

        fp32 const x = (k * delta_x);

        std::feclearexcept(FE_ALL_EXCEPT);
        fp32 const lhs_value = lhs(x);
        bool const lhs_exception = fpexception();

        std::feclearexcept(FE_ALL_EXCEPT);
        fp32 const rhs_value = rhs(x);
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

        fp32 const diff = fabsf(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

        if (failed)
        {
            std::cout
                << std::setprecision(digits)
                << "Check failed for (fp32): x = " << x
                << "; diff = " << diff
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