#include "Rotate.h"

Rotate::Rotate(double angle) {
	*this <<
		std::cos(angle), -std::sin(angle), 0,
		std::sin(angle), std::cos(angle), 0,
		0, 0, 1;
}


void Rotate::redefine(double angle) {
	*this <<
		std::cos(angle), -std::sin(angle), 0,
		std::sin(angle), std::cos(angle), 0,
		0, 0, 1;
}