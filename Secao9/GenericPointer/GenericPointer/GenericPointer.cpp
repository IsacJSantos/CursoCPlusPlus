#include <iostream>


int main()
{
	int num{ 4098 };
	char character{ 'E' };
	std::string name = { "Isac" };
	void* ptrG{ nullptr };

	ptrG = &character;

	// Como o ponteiro ptrG é genério (tipo void) o compilador não saberá
	// quantos bytes deve obter a partir do endereço armazenado no ponteiro.
	// Para fazer o desreferenciamento precisamos então fazer o casting.
	// *(tipo*)ponteiro
	std::cout << "ptg: " << *(char*)ptrG << "\n";
	ptrG = &num;
	std::cout << "ptg: " << *(int*)ptrG << "\n";
	ptrG = &name;
	std::cout << "ptg: " << *(std::string*)ptrG << "\n";
	system("Pause");
}