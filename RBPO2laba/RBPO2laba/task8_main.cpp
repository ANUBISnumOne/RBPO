#include "func.h"
#include "task8_func.cpp"

int main()
{
	cout << "x: ";
	cin >> x;
	cout << "y; ";
	cin >> y;
	f();
	cout << "f(x): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}