/*
  App 4: Simple Calculator
  - Takes two numbers as input
  - Supports: Addition, Subtraction, Division, Multiplication
*/
#include <iostream>
using namespace std;

int main()
{
  int num_one, num_two, op;

  cout << "Enter Number One: ";
  cin >> num_one;

  cout << "Enter Number Two: ";
  cin >> num_two;

  cout << "Choose Operation:\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;

  if (op == 1)
    cout << "Result: " << num_one + num_two << "\n";
  else if (op == 2)
    cout << "Result: " << num_one - num_two << "\n";
  else if (op == 3)
    cout << "Result: " << num_one / num_two << "\n";
  else if (op == 4)
    cout << "Result: " << num_one * num_two << "\n";
  else
    cout << "Operation Is Not Valid\n";

  return 0;
}
