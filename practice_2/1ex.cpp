// Oleksiy Kotukh ISD-21 12 ВАРІАНТ
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    int b;
    int a;
    int c;
    double w;

    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;
    cout << "Enter c value: ";
    cin >> c;

    if (x >= 1.5)
    {
        w = ((pow(x, 3) + (3 * a)) * c) / (a - b + x);
    }

    if (x < 1.5)
    {
        w = pow(sin(a), 2) * pow(sin(b), 2);
    }
    cout << "Result: " << w;
}