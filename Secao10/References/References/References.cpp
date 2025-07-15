#include <iostream>

int main()
{
	int num{ 1024 };
	int num2{ 64 };
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

	// Diferentemente de ponteiros, ref pode ser atribuída somente uma única vez.
	// Sendo assim 'numRef = num2' apenas recebe o valor contido em num2 no endereço de memória
	//Referenciado em 'numRef'
	numRef = num2; 
	num2 = 0;
	std::cout << "\n";
	std::cout << "Valor em num: " << num << "\n";
	std::cout << "Valor em num2: " << num2 << "\n";
	std::cout << "Valor em &numRef: " << numRef << "\n";

	system("Pause");
	return 0;
}