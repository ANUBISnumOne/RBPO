#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x, double y);

int main()
{
	cout << "x: ";
	double x, y;
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "f(x, y): " << setprecision(5) << f(x) << endl;
	system("pause");
	return 0;
}

double f(double x, double y)
{
	return (sqrt(x) - sqrt(y)) / x;
}