#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;


    float result1 = 1.0 / static_cast<float>(num1);
    float result2 = 1.0 / static_cast<float>(num2);


    float epsilon = 0.000001;


    if (fabs(result1 - result2) < epsilon) {
        cout << "Results are equal (by " << "0.000001" << " epsilon)" << endl;
    }
    else {
        cout << "Results aren't equal (by " << "0.000001" << " epsilon)" << endl;
    }

}
