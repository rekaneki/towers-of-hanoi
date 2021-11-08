#pragma once

class Rectangle
{
public:
    Rectangle();
    Rectangle(double width, double length);
    void setWidth(double width);
    void setLength(double length);
    double getWidth() const;
    double getLength() const;

private:
    double _width;
    double _length;
};