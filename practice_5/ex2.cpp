//Kotukh Oleksiy 14v(2)
#include <iostream>
using namespace std;

int main() {
    int length = 10;
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        int number;
        cout << "Enter " << i + 1 << " number: ";
        cin >> number;
        sum += number * number;
    }

    cout << "Sum of squares of numbers: " << sum << "\n";

    return 0;
}