#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 5; 
    int matrix[size][size]; 
    int* ptr = &matrix[0][0]; 
    int* mainDiagPtr = &matrix[0][0]; 
    int* sideDiagPtr = &matrix[0][size - 1]; 
    int evenCount = 0; 
    int oddCount = 0; 

    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            *ptr = rand() % 100; 
            if (*ptr % 2 == 0) {
                evenCount++;
            }
            else {
                oddCount++;
            }
            ptr++;
        }
    }

    cout << "Elements of the main diagonal: ";
    for (int i = 0; i < size; ++i) {
        cout << *mainDiagPtr << " ";
        mainDiagPtr += size + 1;
    }
        cout << endl;

    cout << "Elements of the side diagonal: ";
    for (int i = 0; i < size; ++i) {
        cout << *sideDiagPtr << " ";
        sideDiagPtr += size - 1; 
    }
    cout << endl;

    cout << "The number of even elements: " << evenCount << endl;
    cout << "The number of odd elements: " << oddCount << endl;

    return 0;
}