#include <iostream>
#include <string>
#include "Average.h"

int main()
{
	const int GRADES_LENGTH = 3;
	float grades[GRADES_LENGTH];
	std::string studentName{ "" };

	std::cout << "\Enter the student name: ";
	std::cin >> studentName;
	system("cls");
	for (int i = 0; i < GRADES_LENGTH; i++)
	{
		std::cout << "Enter the grade " << i + 1 << ": ";
		std::cin >> grades[i];
		system("cls");
	}
	system("cls");
	std::cout << "The student " << studentName << " has the average " << Average(grades, GRADES_LENGTH) << "\n";

	system("pause");
	return 0;
}