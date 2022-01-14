module;
#include <cmath>

export module BPZ1902.Stepanov.Lab3.Task5;

namespace RBPO::Lab3::Task5 {
	export double f1(double x, double y);
	export double f2(double x);
	double a(unsigned int i);
	export double f3(unsigned int n);
	export double f4(double eps);
}

module :private;

namespace RBPO::Lab3::Task5 {
	double f1(double x, double y) 
	{
		return (sqrt(x) - sqrt(y)) / x;
	}

	double f2(double x) {
		if (x > 3)
			return  sin(x) / (x * x - 9);
		else
			return  x * x + 3 * x + 9;
	}

	double a(unsigned int i) {
		return pow(-1, i) * 1 / ((i + 1) * (i + 2) * (i + 3));
	}

	double f3(unsigned int n) {
		double res = 0;
		unsigned int i = 0;
		while (i <= n)
			res += a(i++);

		return res;
	}

	double f4(double eps) {
		double res = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) >= eps)
			res += a(i++);

		return res;
	}
}