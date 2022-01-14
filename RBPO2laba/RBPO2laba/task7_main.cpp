#include <iostream>
#include <iomanip>
#include "task7_func.cpp"

using namespace std;

int main()
{
	cout << "x: ";
	cin >> x;
	cout << "y; ";
	cin >> y;
	f();
	cout << "f(x,y): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}