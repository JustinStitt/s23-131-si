#include "rectangle.h"

unsigned Rectangle::getArea() {
    return w * h;

bool Rectangle::isTall()
{
    if(h>w)
        return true;
}


