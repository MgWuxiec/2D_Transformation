#include<iostream>
#include"Geometric.h"
#include"Rotate.h"
using namespace std;

const double pi = 3.141592653;

int main() {
	initgraph(640, 480, EW_SHOWCONSOLE);
	Geometric g(6);
	g.at(0) << 50, 350, 1;
	g.at(1) << 250, 350, 1;
	g.at(2) << 300, 400, 1;
	g.at(3) << 250, 450, 1;
	g.at(4) << 200, 450, 1;
	g.at(5) << 100, 400, 1;

	Transformation trans = Transformation::scale(0.5, 0.5),
		trans2 = Transformation::translation(-200, -150),
		shear = Transformation::shear(1.1, 0);

	g.debug();
	g.drawing();

	g.transformation(shear);
	g.transformation(trans2);

	g.debug();
	g.drawing();

	getchar();
	return 0;
}