#include <iostream>

// Ao utilizar ponteiros como par�metros, precisa-se desreferenciar-los para
// chegar ao valor apontado ou alter�-lo
void SwapNumbers(int* num1, int* num2);

int main()
{
	int num1, num2;

	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "\nEnter the second number: ";
	std::cin >> num2;

	std::cout << "\nValues before swappin: num1: " << num1 << ". num2: " << num2 << "\n";

	// Deve-se passar o endere�o das vari�veis
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
