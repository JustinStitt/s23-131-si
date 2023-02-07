#include <bits/stdc++.h>

class Circle {
  private:
    float radius;

  public:
    Circle(float r) : radius(r) {
      std::cout << " I amde a circle\n";
    }
    friend Circle operator+(const Circle&, const Circle&);
};

Circle operator+(const Circle& u, const Circle& v) {
  Circle c{u.radius + v.radius};
  return c;
}

int main() {
  // ...
  Circle c1{3.14};
  Circle c2{99.2};
  Circle c3 = c1 + c2;
  std::cout << c3.radius << "\n";
  return 0;
}
