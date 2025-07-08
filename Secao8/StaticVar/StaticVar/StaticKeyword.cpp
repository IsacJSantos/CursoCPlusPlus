#include <iostream>

int CallCounter()
{
	static int callCounter = 0;
	return ++callCounter;
}

int main()
{
	for (int i = 0; i < 6; i++)
		std::cout << CallCounter() << "\n";

	system("Pause");
}