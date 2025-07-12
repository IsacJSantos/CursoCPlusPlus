#include <iostream>


int main()
{
	int num{ 4098 };
	char character{ 'E' };
	std::string name = { "Isac" };
	void* ptrG{ nullptr };

	ptrG = &character;

	// Como o ponteiro ptrG � gen�rio (tipo void) o compilador n�o saber�
	// quantos bytes deve obter a partir do endere�o armazenado no ponteiro.
	// Para fazer o desreferenciamento precisamos ent�o fazer o casting.
	// *(tipo*)ponteiro
	std::cout << "ptg: " << *(char*)ptrG << "\n";
	ptrG = &num;
	std::cout << "ptg: " << *(int*)ptrG << "\n";
	ptrG = &name;
	std::cout << "ptg: " << *(std::string*)ptrG << "\n";
	system("Pause");
}