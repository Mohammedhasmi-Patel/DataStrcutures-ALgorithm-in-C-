#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    // space
    int j = 1;
    for (j = 1; j <= i - 1; j++)
    {
      cout << "  ";
    }

    // star
    for (int k = 1; k <= (2 * n - 1) - (2 * j); k++)
    {
      cout << "* ";
    }

    // space
    for (int l = 1; l <= i - 1; l++)
    {
      cout << "  ";
    }
    cout << endl;
  }
  return 0;
}