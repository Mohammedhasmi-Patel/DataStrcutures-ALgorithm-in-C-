#include <iostream>
#include <map>
using namespace std;
int main()
{

  int arr[] = {1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  map<int, int> freq;
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }

  for (auto x : freq)
  {
    cout << x.first << " " << x.second << endl;
  }

  return 0;
}