#include <iostream>
using namespace std;

char smallToCapital(char ch)
{
  char ans = ch - 'a' + 'A';
  return ans;
}
int main()
{

  char ch = 'z';
  cout << smallToCapital(ch);
  return 0;
}