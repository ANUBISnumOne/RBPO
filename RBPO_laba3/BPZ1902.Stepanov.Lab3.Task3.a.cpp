module;
#include <cmath>

module BPZ1902.Stepanov.Lab3.Task3;

namespace RBPO::Lab3::Task3 {
	double a(unsigned int i) {
		return  pow(-1, i) * 1 / ((i + 1) * (i + 2) * (i + 3));
	}
}