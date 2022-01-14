#include "stepanov.h"

namespace stepanov
{
    double x, y;
    double result;

    void f()
    {
        result = (sqrt(x) - sqrt(y)) / x;
    }
}