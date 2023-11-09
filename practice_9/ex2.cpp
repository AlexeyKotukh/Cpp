#include <iostream> 
using namespace std;

int main() {
    int a = 8;
    int array[] = { 5, -2, 4, -5, 8, -11, -8, 55 };

    int maxIndex = 0;

    for (int i = 1; i < a; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
    }

    cout << "Result: ";
    for (int i = 0; i < a; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}