#include <iostream>

int main()
{
	int number01, number02;
	int result;
	std::cout << "Enter the first number: ";
	std::cin >> number01;
	std::cout << "number01: " << number01 << std::endl;

	std::cout << "Enter the second number: ";
	std::cin >> number02;
	std::cout << "number02: " << number02 << std::endl;

	std::cout << "-----------------------------" << std::endl;

	result = number01 + number02;
	std::cout << "Sum: " << result << std::endl;

	result = number01 - number02;
	std::cout << "Subtraction: " << result << std::endl;

	result = number01 * number02;
	std::cout << "Multiplication: " << result << std::endl;

	result = number01 / number02;
	std::cout << "Division: " << result << std::endl;

	result = number01 % number02;
	std::cout << "Modulus: " << result << std::endl;

	system("Pause");
}

