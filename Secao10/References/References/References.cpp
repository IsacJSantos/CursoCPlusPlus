#include <iostream>

int main()
{
	int num{ 1024 };
	// 'int& numRef' é um alias para o mesmo campo de momória que 'num'
	// Não corresponde a um novo valor na memória, e sim a um novo identificador para
	// um endereço existente
	int& numRef = num;

	std::cout << "Valor em num: " << num << "\n";
	std::cout << "Valor em &numRef: " << numRef << "\n";

	num += 512;
	std::cout << "\n";
	std::cout << "Valor em &numRef: " << numRef << "\n";

	numRef = 10;
	std::cout << "\n";
	std::cout << "Valor em num: " << num << "\n";
	std::cout << "Valor em &numRef: " << numRef << "\n";

	system("Pause");
	return 0;
}