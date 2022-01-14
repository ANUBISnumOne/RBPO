#include <iostream>

using namespace std;

double f(double);

int main() {
    double x;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        printf("1 / (sqrt(x) + sqrt(2))", f(x));
    }
    return 0;
}