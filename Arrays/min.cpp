#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 18, 9, 1};

  int min = arr[0];

  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return 0;
}