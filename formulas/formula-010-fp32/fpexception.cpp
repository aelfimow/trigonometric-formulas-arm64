#include "fpexception.h"

#include <cfenv>
#include <vector>
#include <algorithm>

bool fpexception()
{
    std::vector<bool> const flags
    {
        (0 != std::fetestexcept(FE_DIVBYZERO)),
        //(0 != std::fetestexcept(FE_INEXACT)),
        (0 != std::fetestexcept(FE_INVALID)),
        (0 != std::fetestexcept(FE_OVERFLOW)),
        (0 != std::fetestexcept(FE_UNDERFLOW))
    };

    auto predicate = [](bool flag)
    {
        return flag;
    };

    bool const is_exception = std::any_of(
            flags.begin(),
            flags.end(),
            predicate);

    return is_exception;
}
