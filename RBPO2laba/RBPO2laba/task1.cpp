#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "x: ";
	double x, y, xx = 5, yy = 6;
	cin >> x;
	cout << "y: ";
	cin >> y;
	double f = (sqrt(x) - sqrt(y))/x;
	double f2 = (sqrt(xx) - sqrt(yy)) / xx;
	cout << "f(x,y): " << setprecision(5) << f << endl;
	cout << "f(x,y): " << setprecision(5) << f2 << endl;
	system("pause");
	return 0;


}