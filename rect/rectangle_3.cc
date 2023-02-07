#include "rectangle.h"


unsigned justin::Rectangle::getArea() {
    return w * h;
}

bool Rectangle::isTall() {
    return h > w; // as opposed to w < h
}

