#include <iostream>
#include <locale.h>
#include <tchar.h>
#include <string>

using namespace std;

const string FILME_1 = "COMO TREINAR SEU DRAGÃO";
const string FILME_2 = "ELIO";
const string FILME_3 = "LILO E STITCH";
const string FILME_4 = "PREMONIÇÃO 6: LAÇOS DE SANGUE";
const auto MAX_IGNORADO = std::numeric_limits<std::streamsize>::max();
const float VALOR_INGRESSO = 50.00;

void ExibirMenuDeFilmes();
string SelecionarFilme();
float ObterValor();
void ImprimirTicket(string nomeCliente, string nomeFilme, float valor);

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

string SelecionarFilme()
{
	int opcao = 0;
	bool opcaoValida = true;
	string filme = "";

	do
	{
		opcaoValida = true;
		ExibirMenuDeFilmes();

		if (cin >> opcao)
		{
			switch (opcao)
			{
			case 1: filme = FILME_1; break;
			case 2: filme = FILME_2; break;
			case 3: filme = FILME_3; break;
			case 4: filme = FILME_4; break;
			default:
				cout << "\nPor favor, informe uma opção válida.\n";
				opcaoValida = false;
				break;
			}
		}
		else
		{
			cout << "\nValor inválido!\n";
			cin.clear();
			cin.ignore(MAX_IGNORADO, '\n');
			opcaoValida = false;
		}


	} while (opcaoValida != true);

	return filme;
}

void ExibirMenuDeFilmes()
{
	cout << "\n*********** Filmes em cartaz ***********\n";
	printf("\n1 - %s\n", FILME_1.c_str());
	printf("\n2 - %s\n", FILME_2.c_str());
	printf("\n3 - %s\n", FILME_3.c_str());
	printf("\n4 - %s\n", FILME_4.c_str());
	cout << "\nDigite o número do filme que deseja assitir: ";
}


float ObterValor()
{
	int opcao = 0;
	bool opcaoValida = true;
	float valor{ 0.0 };

	do
	{
		opcaoValida = true;

		cout << "*********** Ingresso ***********\n";
		cout << "\n1 - Meia\n";
		cout << "\n2 - Inteira\n";
		cout << "\nInforme a opção de ingresso: ";

		if (cin >> opcao)
		{
			switch (opcao)
			{
			case 1:
				valor = VALOR_INGRESSO / 2;
				break;
			case 2:
				valor = VALOR_INGRESSO;
				break;
			default:
				cout << "\nPor favor, informe uma opção válida.\n";
				opcaoValida = false;
				break;
			}
		}
		else
		{
			cout << "\nValor inválido!\n";
			cin.clear();
			cin.ignore(MAX_IGNORADO, '\n');
			opcaoValida = false;
		}


	} while (opcaoValida != true);

	return valor;
}

void ImprimirTicket(string nomeCliente, string nomeFilme, float valor)
{
	cout << "\n\n| *********** TIKECT *********** |\n";
	cout << "|________________________________|\n";
	cout << "|Nome do Cliente:   " << nomeCliente << "\n";
	cout << "|Filme:   " << nomeFilme << "\n";
	cout << "|________________________________|\n";
	cout << "|Total a pagar:  R$" << valor << "\n";
	cout << "|________________________________|\n";
	cout << "*********** DIVIRTA-SE ***********\n";
}
