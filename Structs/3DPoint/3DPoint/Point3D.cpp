#include "Point3D.h"
#include <iostream>

Point3D::Point3D(float X, float Y, float Z)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
}

void Point3D::Draw3DPoint(Point3D point)
{
	std::cout << "X:" << point.X << " " << "Y:" << point.Y << " " "Z:" << point.Z << "\n";
}
