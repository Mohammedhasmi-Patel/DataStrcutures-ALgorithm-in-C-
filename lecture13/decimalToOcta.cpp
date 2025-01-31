#include <iostream>
using namespace std;

int decimalToOctal(int num)
{
  int ans = 0;
  int mul = 1;

  while (num > 0)
  {
    int rem = num % 8;
    ans = ans + rem * mul;
    mul *= 10;
    num /= 8;
  }

  return ans;
}
int main()
{
  // int num;
  // cout << "Enter a decimal number: ";
  // cin >> num;
  int ans = decimalToOctal(9999);
  cout << "ans is " << ans << " ";

  return 0;
}