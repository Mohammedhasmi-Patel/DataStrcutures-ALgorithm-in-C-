int binaryToDecimal(int num)
{
  int ans = 0;
  int mul = 1;
  while (num > 0)
  {
    int rem = num % 10;
    ans = ans + rem * mul;
    num /= 10;
    mul *= 2;
  }

  return ans;
}