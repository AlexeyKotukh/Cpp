//Oleksiy Kotukh ISD-21 12 ВАРІАНТ
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
  double x, y;
  cout << "Write x: ";
  cin >> x;
  cout << "Write y: ";
  cin >> y;

  if ((x <= x + y && x + y <= 3 && x >= 0 && y <= x + y && y >= 0) || (x == 1.5 && y == 1.5))
  {
    cout << "WIN";
  }
  else
  {
    cout << "LOSE";
  }
}