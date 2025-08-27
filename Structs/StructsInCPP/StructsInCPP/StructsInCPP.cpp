#include <iostream>
static int counter;
struct Data
{
	// Em structs, por padrão o modificador de acesso é public, diferentemente das classes
	int id;
	int Day{ 0 };
	int Month{ 0 };
	int Year{ 0 };
	Data()
	{
		id = ++counter;
		std::cout << "Construtor de Data(" << id << ") executado.\n";
	}

	~Data() { std::cout << "Destrutor de Data(" << id << ") executado.\n"; }
};

int main()
{

	Data data;

	// Criando um novo escopo
	{
		Data* data2 = new Data();
		// Por se tratar de um ponteiro e estar na HEAP, é necessário fazer a remoçao manualmente
		delete(data2);
	}

	Data data3;

	system("pause");
}