#include <iostream>
#include "Point3D.h"



int main()
{
	Point3D point(3,4,5);

	Point3D::Draw3DPoint(point);

	system("PAUSE");
	return 0;
}
