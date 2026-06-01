/*
  App 3: User Rank Checker
  - Takes user points as input
  - Returns the user rank based on points
  - 1   to 500  => Not Bad
  - 501 to 1000 => Very Good
  - 1000+       => VIP
*/
#include <iostream>
using namespace std;

int main()
{
  int points;
  cout << "Enter your points: ";
  cin >> points;

  if (points > 0 && points <= 500)
    cout << "Rank: Not Bad\n";
  else if (points > 500 && points <= 1000)
    cout << "Rank: Very Good\n";
  else
    cout << "Rank: VIP\n";

  return 0;
}
