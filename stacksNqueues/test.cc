#include <bits/stdc++.h>

using namespace std;

template <typename T> class Stack : std::vector<T> {
  using vector<T>::vector;

public:
  Stack() : vector<T>() {}
  using vector<T>::push_back;
  using vector<T>::back;
};

int main() {
  Stack<int> stk;
  stk.push_back(4);
  return 0;
}
