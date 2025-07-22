#include <iostream>
#include "ArrayHelper.h"

const int MAX_ELEMENTS = 20;

int GetElementsCount();

int main()
{
	int elementsCount = 0;
	int numbers[MAX_ELEMENTS]{ 0 };

	elementsCount = GetElementsCount();

	if (elementsCount == 0)
		return 0;

	system("CLS");

	for (int i = 0; i < elementsCount; i++)
	{
		std::cout << "Enter the number " << i + 1 << ": ";
		std::cin >> numbers[i];
	}

	std::cout << "\nThe highest number is: " << HighestNumber(numbers);
	std::cout << "\nThe lowest number is: " << LowestNumber(numbers) << "\n";

	system("Pause");
}

int GetElementsCount()
{
	int elementsCount = 0;
	std::cout << "Enter the quantity of numbers: ";
	std::cin >> elementsCount;

	if (elementsCount <= 0 || elementsCount > MAX_ELEMENTS)
	{
		std::cout << "\nThe quantity os numbers must be larger than 0 and less than " << MAX_ELEMENTS << "\n";
		return 0;
	}

	return elementsCount;
}