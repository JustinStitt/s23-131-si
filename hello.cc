#include <iostream>

/*

one of them is public?
one is private

content can be accesed outside the class/struct
(encapsulation)

 */

struct Circle {  // private (by default)
  float radius;

  Circle(float r) { radius = r; }
};

struct Rectangle {  // public (by default)
  int l, w;

  Rectangle(int length, int width) {
    l = length;
    w = width;
  }
};

int main() {
  Circle c(3.14);
  Rectangle r(4, 5);

  std::cout << "The length of my rectangle is: " << r.l << "\n";
  std::cout << "The radius of my circle is: " << c.radius << "\n";
  return 0;
}
