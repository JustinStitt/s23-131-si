/* Group #6 */
#include <iostream>
#include <string>

using namespace std;

int AwayFrom13(int num){
  // Return absolute value of num - 13
  return abs(num-13);
}

int addTwo(int a, int b) {
  return a + b;
}
//F(x) = 2*x + 4

float something() {
  return 3.14;
}

string addBond(string name) {
  return name + " Bond";
}


int main() {
  // Take in user input
  int userNum; // variable
  cin >> userNum;

  // Call on Function and print num away from 13
  cout << AwayFrom13(userNum);

  string my_name = "James";
  string spy_name = addBond(my_name);
  std::cout << my_name + " Bond" << "\n";
  return 0; // status code A-OK
}
