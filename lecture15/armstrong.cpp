#include <math.h>
bool armstrongNumber(int n)
{

  int digits = 0;

  int num = n;

  while (n > 0)
  {
    int rem = n % 10;
    digits++;
    n /= 10;
  }
  n = num;
  int ans = 0;
  while (num > 0)
  {
    int rem = num % 10;
    ans += pow(rem, digits);
    num /= 10;
  }

  if (n == ans)
    return true;
  return false;
}