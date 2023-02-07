#ifndef _RECT_H
#define _RECT_H

// int x = 4; // needs to be static otherwise every #include of this .h file
// will duplicate this in the translation unit
// static int x = 4;
// constexpr int x = 4; // can also use `constexpr`

static int sum(int a, int b) { return a + b; } // same is true for functions! (or use inline)

class Rect {
private:
  int w, h;
public:
  Rect(int _w, int _h) : w(_h), h(_h) {}
  int area();
};

#endif // !_RECT_H
