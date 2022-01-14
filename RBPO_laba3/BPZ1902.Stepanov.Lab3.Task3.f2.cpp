module;
#include <cmath>

module BPZ1902.Stepanov.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double f2(double x) {
		if (x > 3)
			return  sin(x) / (x * x - 9);
		else
			return x * x + 3 * x + 9;
	}
}