#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size = 10;

    float* array = new float[size];

    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        array[i] = static_cast<float>(rand()) / (RAND_MAX / 4) - 2;
    }
        cout << "Elements of the array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
        cout << endl;

    int positiveCount = 0;
    int negativeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positiveCount++;
        }
        else if (array[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    delete[] array;

    return 0;
}