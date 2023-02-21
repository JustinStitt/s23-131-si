#include <iostream>
#include <iterator>
#include <string>

class Rect {
private:
  int w, h;

public:
  Rect(int w, int h) : w(w), h(h) {}

  int getWidth() const & {
    std::cout << "lvalue getWidth()\n";
    return this->w;
  }

  int getWidth() const && {
    std::cout << "rvalue getWidth()\n";
    return this->w;
  }
};

int main() {
  Rect r(4, 5);
  Rect c2(4, 5);
  std::cout << r.getWidth() << "\n";

  std::cout << Rect(5, 6).getWidth() << "\n";
  return 0;
}
