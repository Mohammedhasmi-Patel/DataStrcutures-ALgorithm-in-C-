#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int x)
{
  if (x < 0)
    return false;

  int originNum = x;

  int ans = 0, rem;

  while (x > 0)
  {
    rem = x % 10;
    x /= 10;
    if (ans > INT_MAX / 10)
      return false;
    ans = ans * 10 + rem;
  }

  if (ans == originNum)
  {
    return true;
  }

  return false;
}

int main()
{

  return 0;
}