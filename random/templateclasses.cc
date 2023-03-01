#include <iostream>
#include <string>

template <typename T>
struct Capsule { // this is a class! (struct are pub by def)
  T data;
  std::string secret;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Capsule<T>& c) {
  os << c.data << " $!@#: " << c.secret << "\n";
  return os;
}



int main() {
  // ...
  Capsule<int> cap{13, "You found my favorite number!"};
  Capsule<std::string> bday{"July 23", "My secret birthday"};
  std::cout << cap << bday;
  return 0;
}
