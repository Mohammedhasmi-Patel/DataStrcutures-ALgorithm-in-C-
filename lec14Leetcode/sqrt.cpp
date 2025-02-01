class Solution
{
public:
  int mySqrt(int x)
  {

    int i = 1;

    while (i <= x / i)
    {
      if (i * i == x)
        return i;
      i++;
    }
    return i - 1;
  }
};