//Kotukh Oleksiy 14v
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a natural number N: ";
    int N;
    cin >> N;

    int sum = 0;
    int digit;

    while (N > 0) {
        digit = N % 10; 
        if (digit < 7) {
            sum += digit; 
        }
        N /= 10;
      
    }
    
    cout << "Sum of digits less than 7: " << sum << endl;

    return 0;
}
