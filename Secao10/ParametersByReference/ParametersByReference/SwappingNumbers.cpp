#include <iostream>

// 'int&' indica que o argumento passado para este m�todo
// ser� passado por referencia e n�o por c�pia do valor.
// Ou seja, o m�todo estar� alterando o mesmo campo da mem�ria em que os argumentos
// est�o.
void SwapNumbers(int& num1, int& num2);

int main()
{
	int num1, num2;

	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "\nEnter the second number: ";
	std::cin >> num2;

	std::cout << "\nValues before swappin: num1: " << num1 << ". num2: " << num2 << "\n";

	SwapNumbers(num1, num2);

	std::cout << "\nValues after swappin: num1: " << num1 << ". num2: " << num2 << "\n";
	system("Pause");
	return 0;
}

void SwapNumbers(int& num1, int& num2)
{
	int aux = num1;
	num1 = num2;
	num2 = aux;
}
