#include <iostream>
#include <locale.h>
#include <tchar.h>
#include <string>
#include "MyMethods.h";

using namespace std;


int main()
{
	setlocale(LC_ALL, "portuguese");

	string nomeCliente{ "" };
	string nomeFilme{ "" };
	float valor{ 0.0 };
	
	cout << "*********** Kinoplex Nova Iguaçu ***********\n";
	cout << "\n Por favor, informe seu nome completo: ";
	getline(cin, nomeCliente);

	nomeFilme = SelecionarFilme();

	valor = ObterValor();

	ImprimirTicket(nomeCliente, nomeFilme, valor);

	system("PAUSE");
}


