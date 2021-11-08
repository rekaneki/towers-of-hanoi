#include <iostream>
#include "Cube.h"

using namespace uni;

Cube::Cube() : Rectangle()
{
	_color = "none";
}

Cube::Cube(double length) : Rectangle(length, length)
{
	_color = "none";
}

Cube::Cube(double length, std::string color) : Rectangle(length, length)
{
	_color = color;
}

Cube::Cube(const Cube &obj) : Rectangle(obj.getLength(), obj.getLength())
{
	_color = obj._color;
}

Cube &Cube::operator=(const Cube &obj)
{
	setLength(obj.getLength());
	return *this;
}

void Cube::setColor(std::string color)
{
	_color = color;
}

double Cube::getSurfaceArea() const
{
	return 6 * getLength() * getLength();
}

double Cube::getVolume() const
{
	return getLength() * getLength() * getLength();
}

std::string Cube::getColor() const
{
	return _color;
}