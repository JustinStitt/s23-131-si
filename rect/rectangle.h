namespace justin {

class Rectangle {
  private:
    unsigned w, h;
  public:
    Rectangle(unsigned _w, unsigned _h) : w(_h), h(_h) {}

    unsigned getArea(); // return the area of the rectangle
    bool isTall(); // return true if height > width
    bool isWide();
};

}
