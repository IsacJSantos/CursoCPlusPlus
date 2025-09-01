#pragma once
struct  Point3D
{
	float X;
	float Y;
	float Z;

	Point3D(float X, float Y, float Z);
	static void Draw3DPoint(Point3D point);
};