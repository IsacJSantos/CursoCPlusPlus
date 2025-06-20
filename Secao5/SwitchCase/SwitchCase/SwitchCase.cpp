#include <iostream>

int main()
{
	float num1, num2;
	char operation{ '1' };
	float result;

	std::cout << "Enter the firt number: ";
	std::cin >> num1;
	std::cout << "\nChoose the operation:\n";
	std::cout << "Addition: +\n";
	std::cout << "Subtraction: -\n";
	std::cout << "Multiplication: *\n";
	std::cout << "Division: /\n";
	std::cin >> operation;


	std::cout << "Enter the second number: ";
	std::cin >> num2;

	switch (operation)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		std::cout << "Invalid Operation: " << operation << std::endl;
		exit(0);
		break;
	}
	std::cout << "= " << result << std::endl;
	system("PAUSE");
}