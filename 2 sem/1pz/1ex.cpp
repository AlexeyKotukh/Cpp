#include <iostream>
using namespace std;

int main() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int* ptr = vector;

    int maxElement = *ptr;

    for (int i = 1; i < n; ++i) {
        ptr++;
        if (*ptr > maxElement) {
            maxElement = *ptr;
        }
    }

    cout << "Max.element: " << maxElement << endl;

    return 0;
}