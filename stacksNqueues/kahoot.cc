#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> vec = {7, 8, 1, 4, 5};
  stack<int> stk;

  for (auto it = vec.begin(); it != vec.end(); ++it) {
    stk.push(*it);
  }

  while (!stk.empty()) {
    cout << stk.top() << " ";
    stk.pop();
  }

  return 0;
}
