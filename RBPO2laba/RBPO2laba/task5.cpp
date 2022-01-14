#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void f();

double x, y;
double result;

int main()
{
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	f();
	cout << "f(x,y): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}

void f()
{
	result = (sqrt(x) - sqrt(y)) / x;
}