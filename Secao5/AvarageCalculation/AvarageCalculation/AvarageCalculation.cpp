#include <iostream>

int main()
{
	float num1, num2, num3;
	float avarage = {0.0};
	const int AVARAGE_DIVISOR = 3;

	std::cout << "Enter number 1: ";
	std::cin >> num1;

	std::cout << "Enter number 2: ";
	std::cin >> num2;

	std::cout << "Enter number 3: ";
	std::cin >> num3;

	avarage = (num1 + num2 + num3) / AVARAGE_DIVISOR;

	std::cout << "Avarage: " << avarage << "\n";

	system("Pause");
}