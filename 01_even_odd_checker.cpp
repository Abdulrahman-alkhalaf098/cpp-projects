/*
  App 1: Even / Odd Checker
  - Takes a number as input
  - Checks if it's even or odd
*/
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (num % 2 == 0)
    cout << "The Number " << num << " Is Even\n";
  else
    cout << "The Number " << num << " Is Odd\n";

  return 0;
}
