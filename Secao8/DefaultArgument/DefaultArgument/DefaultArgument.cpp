#include <iostream>

void Coords(int x, int y, int z = 0);

int main()
{
	Coords(2, 2, 2);
	Coords(2, 2);
	system("Pause");
}

void Coords(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << x << " - " << y << " - " << z << "\n";
}