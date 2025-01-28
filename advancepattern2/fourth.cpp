#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = n; i >= 1; i--)
  {
    // Print the first set of stars
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }

    // Print the spaces
    int spaces = (2 * (n - i));
    for (int k = 1; k <= spaces; k++)
    {
      cout << "  ";
    }

    // Print the second set of stars
    for (int l = 1; l <= i; l++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}
