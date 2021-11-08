#include "Rectangle.h"

Rectangle::Rectangle()
{
    _width = 1;
    _length = 1;
}

Rectangle::Rectangle(double width, double length)
{
    _width = width;
    _length = length;
}

void Rectangle::setWidth(double width)
{
    _width = width;
}

void Rectangle::setLength(double length)
{
    _length = length;
}

double Rectangle::getWidth() const
{
    return _width;
}

double Rectangle::getLength() const
{
    return _length;
}