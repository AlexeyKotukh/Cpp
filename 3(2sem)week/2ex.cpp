#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    srand(time(nullptr));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = rand() % 10; 
        }
    }
    cout << "Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout <<"Elements on the main diagonal: " << endl;
    for (int i = 0; i < rows; ++i) {
        cout << array[i][i] << " ";
    }
    cout << endl;


    cout << "Elements on the side diagonal: " << endl;
    for (int i = 0; i < rows; ++i) {
        cout << array[i][cols - 1 - i] << " ";
    }
    cout << endl;

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
            else {
                oddCount++;
            }
        }
    }

    cout << "The number of even elements: " << evenCount << endl;
    cout << "The number of odd elements: " << oddCount << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
