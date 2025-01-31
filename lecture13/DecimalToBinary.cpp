#include <iostream>
using namespace std;

int decimalToBinary(int num)
{

  int ans = 0;
  int multiply = 1;
  while (num != 0)
  {
    int rem = num % 2;
    num = num / 2;
    ans += rem * multiply;
    multiply *= 10;
  }

  return ans;
}

int main()
{
  // cout << binaryToDecimal(110);
  // decimalToBinary(50);
  return 0;
}