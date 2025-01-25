#include <iostream>
using namespace std;
int main()
{

  int n = 8, prev = 0, last = 1, ans = 0;

  int i = 2;

  while (i < n)
  {
    ans = prev + last;
    prev = last;

    last = ans;
    i++;
  }

  cout << ans << " ";
  return 0;
}