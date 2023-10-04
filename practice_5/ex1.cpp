//Kotukh Oleksiy 14v(2)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x[5];
    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; ++i) {
        cout << "x[" << i + 1 << "]: ";
        cin >> x[i];
    }
    cout << "\nResult:\n";
    for (int i = 0; i < 5; ++i) {
        double y = pow(sin(x[i]), 5) + abs(5 * x[i] - 1.5);
        cout << "For x[" << i + 1 << "] = " << x[i] << ": y = " << y << "\n";
    }
}