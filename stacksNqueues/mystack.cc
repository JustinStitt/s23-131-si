#include <bits/stdc++.h>

template <typename T> class Stack : std::vector<T> {
public:
  Stack() : std::vector<T>() {}

  using std::vector<T>::push_back;
  using std::vector<T>::back;

  void push(T element) { push_back(element); }
  T &top() { return back(); }
};

int main() {
  // stuff
  Stack<int> stk;
  stk.push_back(7);
  stk.push_back(8);
  std::cout << stk.top() << "\n";
  return 0;
}
