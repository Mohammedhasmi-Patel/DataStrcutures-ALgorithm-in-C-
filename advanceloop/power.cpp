#include <iostream>
using namespace std;

int main()
{
  int n, pow, i, ans = 1;
  cout << "Enter Num: ";
  cin >> n;
  cout << "Enter Pow: ";
  cin >> pow;

  // Calculate power
  for (i = 1; i <= pow; i++)
  {
    ans *= n;
  }

  cout << "Result: " << ans << endl;
  return 0;
}
