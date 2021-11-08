#include <iostream>
#include "Cube.h"

using namespace uni;

Cube::Cube()
{
	_length = 0.0;
	_color = "none";
}

Cube::Cube(double length)
{
	_length = length;
	_color = "none";
}

Cube::Cube(double length, std::string color)
{
	_length = length;
	_color = color;
}

Cube::Cube(const Cube &obj)
{
	_length = obj._length;
}

Cube &Cube::operator=(const Cube &obj)
{
	_length = obj._length;
	return *this;
}

void Cube::setLength(double length)
{
	_length = length;
}

void Cube::setColor(std::string color)
{
	_color = color;
}

double Cube::getSurfaceArea() const
{
	return 6 * _length * _length;
}

double Cube::getVolume() const
{
	return _length * _length * _length;
}

double Cube::getLength() const
{
	return _length;
}

std::string Cube::getColor() const
{
	return _color;
}