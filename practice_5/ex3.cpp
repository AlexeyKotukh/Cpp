//Kotukh Oleksiy 14v(2)
#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
    return 1.0 / ((x - 4) * (x - 4) + 6);
}

int main()
{
    double a, b, h;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter h: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << ": X : Y :" << endl;
    cout << "-------------------" << endl;

    for (double x = a; x <= b; x += h) {
        if (x < a || x > b) {
            cout << "Value x does not belong to ODZ." << endl;
            break;
        }
        double y = f(x);
        cout << ": " << x << " : " << y << " :" << endl;
    }

    cout << "-------------------" << endl;

}
