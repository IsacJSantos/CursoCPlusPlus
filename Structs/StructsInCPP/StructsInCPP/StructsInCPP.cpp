#include <iostream>

struct Data
{
	// Em structs, por padr�o o modificador de acesso � public, diferentemente das classes
	int Day;
	int Month;
	int Year;
};

int main()
{

	Data data;
	data.Day = 22;
	data.Month = 07;
	data.Year = 2013;

	std::cout << "Dia: " << data.Day << " Month: " << data.Month << " Year: " << data.Year << "\n";

	system("pause");
}