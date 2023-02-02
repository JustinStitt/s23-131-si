#include "rectangle.h"

unsigned Rectangle::getArea() {
    return w * h;
}

bool Rectangle::isTall() {
    return h > w;

}
