/* Group #4 */
#include <iostream>

int main() 
{
  // ... write code here
  int user_input, distance;

  std::cout << "Input an integer: ";
  std::cin >> user_input;
  std::cout << std::endl;

  distance = std::abs(user_input - 13);
  
  std::cout << user_input << " is " << distance << " from 13" << std::endl;

  return 0;
}


