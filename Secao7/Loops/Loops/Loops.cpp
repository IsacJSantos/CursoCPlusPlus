#include <iostream>
#include <locale.h>
#include <tchar.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");

	string nome{ "" };
	string filme{ "" };
	float valor{ 0.0 };

	int opcao = 0;
	bool opcaoValida;

	const string FILME_1 = "COMO TREINAR SEU DRAGÃO";
	const string FILME_2 = "ELIO";
	const string FILME_3 = "LILO E STITCH";
	const string FILME_4 = "PREMONIÇÃO 6: LAÇOS DE SANGUE";

	const float VALOR_INGRESSO = 50.00;

	const auto MAX_IGNORADO = std::numeric_limits<std::streamsize>::max();

	cout << "*********** Kinoplex Nova Iguaçu ***********\n";
	cout << "\n Por favor, informe seu nome completo: ";
	getline(cin, nome);

	do
	{
		opcaoValida = true;
		opcao = 0;

		cout << "\n*********** Filmes em cartaz ***********\n";
		printf("\n1 - %s\n", FILME_1.c_str());
		printf("\n2 - %s\n", FILME_2.c_str());
		printf("\n3 - %s\n", FILME_3.c_str());
		printf("\n4 - %s\n", FILME_4.c_str());
		cout << "\nDigite o número do filme que deseja assitir: ";

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


	cout << "\n\n| *********** TIKECT *********** |\n";
	cout << "|________________________________|\n";
	cout << "|Nome do Cliente:   " << nome << "\n";
	cout << "|Filme:   " << filme << "\n";
	cout << "|________________________________|\n";
	cout << "|Total a pagar:  R$" << valor << "\n";
	cout << "|________________________________|\n";
	cout << "*********** DIVIRTA-SE ***********\n";

	system("PAUSE");
}