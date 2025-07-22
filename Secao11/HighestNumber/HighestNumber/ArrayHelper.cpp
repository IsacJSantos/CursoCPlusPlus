#include "ArrayHelper.h"

int HighestNumber(int numbers[])
{
	int highestNumber = 0;
	int size = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		if (highestNumber < numbers[i])
			highestNumber = numbers[i];
	}

	return highestNumber;
}

int LowestNumber(int numbers[])
{
	int lowestNumber = 2147483647;
	int size = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] < lowestNumber)
			lowestNumber = numbers[i];
	}
	return lowestNumber;
}
