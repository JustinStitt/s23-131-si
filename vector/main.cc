#include <bits/stdc++.h>
#include "vector.h"

int main() {
  adt::Vector<int> vec;
  std::cout << vec.size() << " " << vec.capacity() << "\n";
  vec.push_back(4);
  vec.push_back(9);
  vec.push_back(1);
  vec.push_back(5);
  for (int x{}; x < vec.size(); ++x) {
    std::cout << vec[x] << " " << vec.size() << " " << vec.capacity() << "\n";
  }
  std::cout << "\n";
  return 0;
}
