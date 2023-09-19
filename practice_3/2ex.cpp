//Kotukh Oleksiy ISD-21
#include <iostream>

int main() {
    char countryLetter;
    std::cout << "Enter the first letter of the country name: ";
    std::cin >> countryLetter;

    int population = 0;
    int numCities = 0;

    switch (countryLetter) {
    case 'U':
    case 'u':
        population = 43730000;
        numCities = 461;
        break;
    case 'N':
    case 'n':
        population = 213400000;
        numCities = 200;
        break;
    case 'A':
    case 'a':
        population = 40000000;
        numCities = 48;
        break;
    case 'P':
    case 'p':
        population = 231000000;
        numCities = 200;
        break;
    case 'D':
    case 'd':
        population = 5581000;
        numCities = 56;
        break;
    case 'G':
    case 'g':
        population = 83149300;
        numCities = 2054;
        break;
    case 'I':
    case 'i':
        population = 60243406;
        numCities = 46;
        break;
    default:
        std::cout << "Country not found." << std::endl;
        return 1;
    }

    std::cout << "Number of population: " << population << std::endl;
    std::cout << "Number of cities: " << numCities << std::endl;

    return 0;
}
