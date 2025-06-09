#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL,_T("portuguese"));
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "********INICIO DO JOGO********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Endereço da variável NumVidas na RAM: " << &NumVidas << std::endl;
	std::cout << "******************************" << std::endl;

	std::cout << "********DURANTE O JOGO********" << std::endl;
	NumVidas -= 1;
	Score += 150;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;

	system("PAUSE");
}