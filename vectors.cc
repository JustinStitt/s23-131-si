#include <bits/stdc++.h>

int sumVector(std::vector<int> vec) {
  int csum = 0;

  for (int i = 0; i < vec.size(); ++i) {
    csum += vec[i];
  }

  return csum;
}

// return the arithmetic mean of the vector of floats
float meanVector(std::vector<float> vec) {
  float total = 0.0;

  for (int x{}; x < vec.size(); ++x) {
    total += vec[x];
  }
  return total / (float)vec.size();
}
// e.g: vec = {7.14, 8.61, 9.41} = 8.38

int main() {
  
  // constexpr int a = 4 + 5;
  // const int b = fibonacci(14);
  int arr[5] = {1, 2, 3, 8, 14}; // new, delete

  std::vector<int> vec {5, 1, 7,9}; // dynmically-allocated
  std::cout << vec[0] << "\n";
  vec.push_back(11);
  vec.erase(vec.begin()); // iterators

  std::sort(vec.begin(), vec.end());

  return 0;
}
