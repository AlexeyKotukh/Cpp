//14 варіант
#include<iostream> 
#include<math.h> 
#include <cmath> 
 
int main()  
{ 
    int a = 2; 
    double b = 19.03; 
    double Pi = 3.14159; 
 
    double result=0; 
 
 result=4.3*sin(((a/b)+1)*Pi)/((b/a)*1-cos(((a/b)-1)*Pi)+log(b)); 
    std::cout << result;//виведення результатів 
}
