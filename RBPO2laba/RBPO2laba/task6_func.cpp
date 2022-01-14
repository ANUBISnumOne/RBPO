#define _USE_MATH_DEFINES
#include <cmath>

double f(double x) {
	return (sin((M_PI / 2.0) + 3.0 * x)) / (1 - sin(3.0 * x - M_PI));
}