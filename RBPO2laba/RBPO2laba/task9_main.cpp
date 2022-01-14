#include "stepanov.h"
#include "task9_func.cpp"

int main()
{
	cout << "x: ";
	cin >> stepanov::x;
	cout << "y: ";
	cin >> stepanov::y;
	stepanov::f();
	cout << "f(x): " << setprecision(5) << stepanov::result << endl;
	system("pause");
	return 0;
}