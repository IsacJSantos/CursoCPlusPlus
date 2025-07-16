#include <iostream>

// Ao utilizar ponteiros como parâmetros, precisa-se desreferenciar-los para
// chegar ao valor apontado ou alterá-lo
void SwapNumbers(int* num1, int* num2);

int main()
{
	int num1, num2;

	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "\nEnter the second number: ";
	std::cin >> num2;

	std::cout << "\nValues before swappin: num1: " << num1 << ". num2: " << num2 << "\n";

	// Deve-se passar o endereço das variáveis
	SwapNumbers(&num1, &num2);

	std::cout << "\nValues after swappin: num1: " << num1 << ". num2: " << num2 << "\n";
	system("Pause");
	return 0;
}

void SwapNumbers(int* num1, int* num2)
{
	int aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}
