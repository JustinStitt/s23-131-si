/* Group #5 */
#include <iostream>
#include <cstdlib>

int HowFar13(int num) { 
  return abs(13-num);
};

int main() {
  // ****THIS FILE HAS BEEN CLAIMED BY HIMOTHY*****
  int number;
  std::cout << "Enter your number: ";
  std::cin >> number;
  std::cout << "\nYour number is " << HowFar13(number) << " away from 13.\n";
  return 0;
}
