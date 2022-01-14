#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x)
{
	return 1 / (sqrt(x) + sqrt(2));
}

int main()
{
	cout << "x: ";
	double x, y;
	double xx = 7;
	cin >> x;
	cout << "f(x): " << setprecision(5) << f(x) << endl;
	cout << "f(x): " << setprecision(5) << f(o) << endl;
	system("pause");
	return 0;
}