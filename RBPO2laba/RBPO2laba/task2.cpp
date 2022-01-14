#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x, double y)
{
	return (sqrt(x) - sqrt(y)) / x;
}

int main()
{
	cout << "x: ";
	double x, y;
	double xx = 7, yy = 6;
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "f(x,y): " << setprecision(5) << f(x) << endl;
	cout << "f(x,y): " << setprecision(5) << f(o) << endl;
	system("pause");
	return 0;
}