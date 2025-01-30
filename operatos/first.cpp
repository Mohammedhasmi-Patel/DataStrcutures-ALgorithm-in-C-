#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  int b;
  cout << "Enter another number: ";
  cin >> b;

  if (a > b)
  {
    cout << "The value a is greater." << endl;
  }
  else
  {
    cout << "The value b is greater." << endl;
  }
  return 0;
}