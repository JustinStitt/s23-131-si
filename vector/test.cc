#include <bits/stdc++.h>

int main() {
  /* std::vector<int> vec{7,8,1,4}; */
  std::vector<std::string> vec{"justin", "two", "three"};
  for (auto& i : vec) {
    std::cout << &i << " " << sizeof(&i) << "\n";
  }
  std::string s1{"test"}, s2{"OMG THIS IS A STRING!"};
  std::cout << sizeof(s1) << " " << sizeof(s2) << "\n";
  return 0;
}


