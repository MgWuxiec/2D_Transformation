#include "Transformation.h"

const double Transformation::Pi = 3.141592653;

Transformation::Transformation() {
	*this <<
		1, 0, 0,
		0, 1, 0,
		0, 0, 1;
}

Transformation Transformation::rotate(double angle) {
	Transformation temp;
	temp <<
		std::cos(angle), -std::sin(angle), 0,
		std::sin(angle), std::cos(angle), 0,
		0, 0, 1;
	return temp;
}

Transformation Transformation::translation(double x, double y)
{
	Transformation temp;
	temp <<
		1, 0, x,
		0, 1, y,
		0, 0, 1;
	return temp;
}

Transformation Transformation::scale(double i, double j)
{
	Transformation temp;
	temp <<
		i, 0, 0,
		0, j, 0,
		0, 0, 1;
	return temp;
}

Transformation Transformation::shear(double ki, double kj)
{
	Transformation temp;
	temp <<
		1, ki, 0,
		kj, 1, 0,
		0, 0, 1;
	return temp;
}
