#include <iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    // star
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    // space
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << "  ";
    }
    // star
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  for (int i = n - 1; i >= 1; i--)
  {
    // star
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    // space
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << "  ";
    }
    // star
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}