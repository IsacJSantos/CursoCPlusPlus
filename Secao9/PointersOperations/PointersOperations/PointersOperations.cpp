#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num{ 4096 };
	int* ptr;
	int* ptr2;
	ptr = &num;
	ptr2 = ptr;

	std::cout << "\nValor de num: " << num << "\n";

	std::cout << "\nEndere�o contido em ptr: " << ptr << "\n";
	std::cout << "\nEndere�o contido em ptr2: " << ptr2 << "\n";

	std::cout << "\nEndere�o de ptr na RAM: " << &ptr << "\n";
	std::cout << "\nEndere�o de ptr2 na RAM: " << &ptr2 << "\n";

	*ptr2 = (*ptr + 10);

	std::cout << "\nValor de num: " << num << "\n";

	system("PAUSE");
}