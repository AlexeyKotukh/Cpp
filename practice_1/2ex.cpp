//19 варіант
#include<iostream> 
#include<math.h> 
#include <cmath> 
 
int main() { 
int a = 4; 
double b = 0.707; 
double Pi = 3.14159; 
 
 
double result=0; 
 
result = pow(((exp(0.5))*(1-cos(b)*Pi)/(1-sin(a)*Pi+exp(1))*0.3*(1+cos(a)*Pi)/(1+sin(b)*Pi)),3./2);   

 
std::cout << result;//виведення результатів

}