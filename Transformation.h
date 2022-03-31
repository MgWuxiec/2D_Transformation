#pragma once
#include <math.h>
#include <Eigen/Dense>
using namespace Eigen;

class Transformation :
	public Matrix3d
{
public:
	static const double Pi;
public:
	Transformation();
	Transformation(Matrix3d value);

	static Transformation rotate(double angle);
	static Transformation translation(double x, double y);
	static Transformation scale(double i, double j);
	static Transformation shear(double ki, double kj);
};