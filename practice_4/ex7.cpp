#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double one = 2.3;
	double two = 2.3;
	double three = 2.123456;
	double four = 2.123456;
	double five = 2.123456;

	std::cout << std::setprecision(2) << one << endl;
	std::cout << std::fixed << std::setprecision(2) << two << endl;
	std::cout << std::setprecision(6) << three << endl;
	std::cout << std::setprecision(2) << four << endl;
	std::cout << std::setprecision(0) << five << endl;

}