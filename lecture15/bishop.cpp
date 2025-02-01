#include <iostream>
using namespace std;

int bishop(int x, int y)
{
  int count = 0;

  count += min(8 - x, 8 - y);
  count += min(x - 1, y - 1);
  count += min(8 - x, y - 1);
  count += min(x - 1, 8 - y);

  return count;
}
int main()
{

  return 0;
}