#include <iostream>
#include <unordered_set>

int main()
{
  std::unordered_set<int> hashSet = {10, 20, 30};

  // Search for an element
  auto it = hashSet.find(50);

  // Check if the element was found
  if (it != hashSet.end())
  {
    std::cout << "Element found: " << *it << std::endl; // Dereference the iterator
  }
  else
  {
    std::cout << "Element not found!" << std::endl;
  }

  return 0;
}