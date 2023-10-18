#include <iostream> 
using namespace std;

int main() {
    int n;

    cout << "Enter a natural number greater than 1: ";
    cin >> n;

    while (n <= 1) {
        cout << "Entered number is not valid. Enter a natural number greater than 1: ";
        cin >> n;
    }

    const int MAX_N = 20;


    while (n > MAX_N) {
        cout << "Entered number is too large for display. The maximum allowed value will be used: " << MAX_N << std::endl;
        cout << "Enter a number greater than 1: ";
        cin >> n;

    }
    cout << '+';
    int i = 0;
    while (i < n) {
        cout << '-';
        i++;
    }
    cout << '+' << endl;

    i = 0;
    while (i < n) {
        cout << '|';
        int j = 0;
        while (j < n) {
            cout << ' ';
            j++;
        }
        cout << '|' << endl;
        i++;
    }

    cout << '+';
    i = 0;
    while (i < n) {
        cout << '-';
        i++;
    }
    cout << '+' << endl;

    return 0;
}