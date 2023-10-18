#include <iostream>
using namespace std;

int main() {
    int c0 = 0;
    int steps = 0;

    cout << "Enter a number: ";
    cin >> c0;
    if (c0 <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    while (c0 != 1) {
        cout << c0 << " ";


        if (c0 % 2 == 0) {
            c0 /= 2;
        }
        else {
            c0 = 3 * c0 + 1;
        }


        steps++;
    }


    cout << "1" << endl;


    cout << "Steps: " << steps << endl;

    return 0;
}