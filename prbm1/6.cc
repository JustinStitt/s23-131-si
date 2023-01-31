/* Group #6 */
#include <iostream>

int AwayFrom13(int num){
  // Return absolute value of num - 13
  return std::abs(num-13);
}

int main() {
  // Take in user input
  int userNum;
  std::cin >> userNum;

  // Call on Function and print num away from 13
  std::cout << AwayFrom13(userNum);

  return 0;

}
