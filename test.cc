#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Rect {
private:
  int h, w;
  friend ostream &operator<<(ostream &os, const Rect &r);

public:
  Rect(int _h, int _w) : h(_h), w(_h) {
    std::cout << this << " " << *this << "\n";
  }

  ~Rect() { std::cout << "I am ded💀\n"; }

  int area() const { return w * h; }

  Rect *getInstance() { return this; }

  int addWidths(int w) { return this->w + w; }
};

ostream &operator<<(ostream &os, const Rect &r) {
  os << r.w << " " << r.h << " " << r.area() << "\n";
  return os;
}

pair<int, int> twoSum(const vector<int> &vec, int target) {
  for (int i = 0; i < vec.size() - 1; ++i) {
    for (int j = i + 1; j < vec.size(); ++j) {
      if (vec[i] + vec[j] == target)
        return {i, j};
    }
  }

  return {-1, -1};
}

// what is recursion
void hello() {
  static int n = 10; // static is owned by function
  if (--n == 0)      // base case
    return;
  std::cout << "hello\n";
  hello(); // recursive call
}

// compute the sum of the numbers from 1 to N
// recursively
int sum(unsigned int n) {
  // base case
  if (n == 0)
    return 0;
  return n + sum(n - 1);
}

int main() {
  int *a = new int(99);
  std::cout << sizeof(a) << "\n";
  return 0;
}
