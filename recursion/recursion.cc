#include <cmath>
#include <iostream>

int recursive_sum(int k) {
  // 1 base case
  if (k < 0)
    return 0;
  // 2 visit (+)
  return k + recursive_sum(k - 1);
  // 3 recursive call (updated parameters)
}

int main() {
  int k = -4;
  std::cout << recursive_sum(k) << "\n"; // 21
  return 0;
}
