#pragma once
#include <string>

using std::string;

namespace uni
{
	class Cube
	{
	public:
		Cube();
		Cube(double length);
		Cube(double length, std::string color);
		Cube(const Cube &obj);

		Cube &operator=(const Cube &obj);

		void setLength(double length);
		void setColor(string length);
		double getVolume() const;
		double getSurfaceArea() const;
		double getLength() const;
		string getColor() const;

	private:
		double _length;
		string _color;
	};
}