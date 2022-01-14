#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "x: ";
	double x, xx = 5;
	cin >> x;
	double f = 1/(sqrt(x)+sqrt(2));
	double f2 = 1 / (sqrt(xx) + sqrt(2));
	cout << "f(x): " << setprecision(5) << f << endl;
	cout << "f(x): " << setprecision(5) << f2 << endl;
	system("pause");
	return 0;


}