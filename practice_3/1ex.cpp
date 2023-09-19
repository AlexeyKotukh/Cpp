//Kotukh Oleksiy ISD-21
#include <iostream>

int main() {
    int N;
    std::cout << "Enter a three-digit positive number N: ";
    std::cin >> N;

    if (N < 100 || N > 999) {
        std::cout << "The entered number is not a three-digit positive number." << std::endl;
        return 1;
        
    }

    int first = N % 10; 
    int second = (N / 10) % 10; 
    int third = N / 100;

    int sum = 0;

    if (first > 2 && first % 2 != 0) {
        sum += first;
    }
    if (second > 2 && second % 2 != 0) {
        sum += second;
    }
    if (third > 2 && third % 2 != 0) {
        sum += third;
    }

    std::cout << "The sum of digits greater than 2 and odd: " << sum << std::endl;

    return 0;
}