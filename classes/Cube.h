#pragma once
#include <string>
#include "Rectangle.h"

using std::string;

namespace uni
{
	class Cube : public Rectangle
	{
	public:
		Cube();
		Cube(double length);
		Cube(double length, std::string color);
		Cube(const Cube &obj);

		Cube &operator=(const Cube &obj);

		double getVolume() const;
		double getSurfaceArea() const;

		void setColor(string length);
		string getColor() const;

	private:
		string _color;
	};
}