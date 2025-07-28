#include <iostream>

int main()
{
	int years[]{ 1998,2011,2014,2017,2020 };

	for(int year : years)
	{
		std::cout << year << "\n";
	}

	system("pause");
}