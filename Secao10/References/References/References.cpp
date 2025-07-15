#include <iostream>

int main()
{
	int num{ 1024 };
	int num2{ 64 };
	// 'int& numRef' � um alias para o mesmo campo de mom�ria que 'num'
	// N�o corresponde a um novo valor na mem�ria, e sim a um novo identificador para
	// um endere�o existente
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

	// Diferentemente de ponteiros, ref pode ser atribu�da somente uma �nica vez.
	// Sendo assim 'numRef = num2' apenas recebe o valor contido em num2 no endere�o de mem�ria
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