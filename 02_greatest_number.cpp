/*
  App 2: Find Greatest Number
  - Takes 3 numbers as input
  - Returns the greatest number
*/
#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  if (a > b && a > c)
    cout << a << " Is The Greatest Number\n";
  else if (b > a && b > c)
    cout << b << " Is The Greatest Number\n";
  else
    cout << c << " Is The Greatest Number\n";

  return 0;
}
