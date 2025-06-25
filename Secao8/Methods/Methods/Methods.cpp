#include <iostream>

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "\nEnter the second number: ";
	std::cin >> b;
	std::cout << "\nThe sum is: " << Sum(a, b) << std::endl;
	system("Pause");
}