#include <iostream>
#include <string>
#include <iomanip>
#include <tchar.h>
#include "rlutil.h"
#include <windows.h>


using namespace std;

int main()
{
	cout << "\n----------- string(n,'n') --------------\n" << endl;

	_tsetlocale(LC_ALL, _T("portuguese"));
	cout << string(10, ' ') << "Texto iniciando com 10 espaços" << endl;

	cout <<"\n----------- setw --------------\n" << endl;

	//setw(n) define o tamanho do campo de saída do fluxo 'cout' como n caracteres e justifica o texto
	//à direita dentro desse campo
	cout << "Sem setw: [" << 42 << "]" << endl
		 << "Com setw(6): [" << setw(6) << 42 << "]" << endl
		 << "Sem setw, vários elementos: [" << 89 << 12 << 34 << "]" << endl
		 << "Cem setw, vários elementos: [" << 89 << setw(6) << 12 << 34 << "]" << endl;

	/*
	Notes
		The width property of the stream will be reset to zero(meaning "unspecified") if any of the following functions are called :

	Input
		operator>>(basic_istream&, basic_string&)
		operator>>(basic_istream&, char*)
		Output
		Overloads of basic_ostream::operator<<() that take arithmetic types or void pointers(at Stage 3 of num_put::put())
		operator<<(basic_ostream&, char) and operator<<(basic_ostream&, char*)
		operator<<(basic_ostream&, basic_string&)
		std::put_money(inside money_put::put())
		std::quoted(when used with an output stream)
		The exact effects this modifier has on the input and output vary between the individual I / O functions and are described at each operator<< and operator>> overload page individually.
	
		CPPREFERENCE. std::setw. Disponível em: <https://en.cppreference.com/w/cpp/io/manip/setw>. Acesso em: 13 Jun. 2025.
	*/

	cout << "\n----------- GetLargestConsoleWindowSize() --------------\n" << endl;

	/*
	É possível obter o tamanho da tela do console automaticamente usando a API do Windows(`windows.h`).

	A função `GetLargestConsoleWindowSize()` retorna as coordenadas máximas da tela, e podemos usar isso para 
	determinar a largura da tela.
	*/

	// Aqui você obtem a janela de Console e coloca em screen um endereço para manipular(HANDLE) esta janela
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	//max_size terá as coordenadas X (Largura) e Y (Altura)
	//Então max_size.X será a Largura e max_size.Y será a altura
	COORD max_size = GetLargestConsoleWindowSize(screen);
	int consoleWidth = max_size.X;

	cout << "largura do console em caracteres: " << consoleWidth << endl;

	cout << "\n----------- SetConsoleCursorPosition() --------------\n" << endl;

	//Para posicionar o texto em uma posição específica na tela, podemos usar a função `SetConsoleCursorPosition()` da API do Windows.

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = 18;
	pos.Y = 18;
	SetConsoleCursorPosition(hConsole, pos);

	cout << "Texto posicionado na coluna 18 e linha 18" << endl;

	//Além das técnicas básicas, a aula também menciona o uso de bibliotecas como a `rlutil.h`, que simplificam o posicionamento e manipulação do texto.

	cout << "\n----------- rlutil.h gotoxy() --------------\n" << endl;

	gotoxy(10, 23);

	cout << "Texto posicionado na coluna 25 e linha 10" << endl;

	system("Pause");
}