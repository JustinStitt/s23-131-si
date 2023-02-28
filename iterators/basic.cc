#include <iostream>
#include <vector>
#include <list>

bool isPrime(int n) {
  // we know a number is prime if it is only divisible by 1 and itself
  // it shouldn't be divisible by [2...n-1]
  for (int x = 2; x <= n-1; ++x) {
    if (n % x == 0) // uh oh NOT PRIME
      return false;
  }
  // if we make it through ALL CHECKS IT IS PRIME!
  return true;
}

void printPrimes(std::list<int> lst) { // no number is larger than 100_000
  for (auto it = lst.begin(); it != lst.end(); ++it) {
    if (isPrime(*it)) {
      std::cout << *it << " ";
    }
    // do nothing
  } // end of for loop

} // 2, 3, 5, 7, 11, 13, 17, 23, etc...
// {2, 99, 66, 124, 64, 3, 7}
// 2 3 7

int main() {
  std::list<int> l = {7, 8, 1, 4, 6, 5, 9, 9, 9, 0, 1, 2, 77, 331};
  printPrimes(l);
  return 0;
}
