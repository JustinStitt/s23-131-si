#include <iostream>

// function templates
// T K U Q S V W
template <typename T>
T add(T a, T b) {
  return a + b;
}


int main() {
  std::cout << add(4, 5) << "\n";
  std::cout << add(3.14, 5.6) << "\n";
  std::string n1{"Justin"};
  std::string n2{" is cool"};
  std::cout << add(n1, n2) << "\n";
  std::string n3{"What if..."};
  std::string inp;
  std::cin >> inp;
  std::cout << add(n3, inp) << "\n";
  int n;
  std::cin >> n;
  std::cout << add(7, n) << "\n";
  return 0; // a-ok everything went well
}
