#include <iostream>
using namespace std;

int octaToDecimal(int num)
{
  int ans = 0;
  int mul = 1;

  while (num > 0)
  {
    int rem = num % 10;
    ans += rem * mul;
    mul *= 8;
    num /= 10;
  }

  return ans;
}
int main()
{
  cout << "ans is " << octaToDecimal(100) << endl;
  return 0;
}