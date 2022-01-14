#include "stepanov.h"
#include "task9_func.cpp"

int main()
{
	cout << "x: ";
	cin >> stepanov::x;
	stepanov::f();
	cout << "f(x): " << setprecision(5) << stepanov::result << endl;
	system("pause");
	return 0;
}