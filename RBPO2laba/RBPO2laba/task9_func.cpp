#include "stepanov.h"

namespace stepanov
{
    double x;
    double result;

    void f()
    {
        result = 1 / (sqrt(x) + sqrt(2));
    }
}