#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void f(const double& x, double& y, double& result);

int main()
{
	cout << "x: ";
	double x;
	cin >> x;
	cout << "y: ";
	double y;
	cin >> y;
	double result;
	f(x, y, result);
	cout << "f(x,y): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}

void f(const double& x, double&y, double& result)
{
	result = (sqrt(x) - sqrt(y)) / x;
}