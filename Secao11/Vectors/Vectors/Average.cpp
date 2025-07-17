#include "Average.h";

float Average(float numbers[], int arrayLength)
{
	float sum{ 0 };
	for (int i = 0; i < arrayLength; i++)
	{
		sum += numbers[i];
	}
	return sum / arrayLength;
}
