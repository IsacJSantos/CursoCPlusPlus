#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Você pode usar ( ) para iniciar variáveis com valores literais
	// { } é inicialização uniforme, permite iniciar tanto valores literais (int, caractere) quanto valoeres escalares (vetores, enums)
	 
	int integerNumber{ 12 };
	float realNumber{ 34.56 };
	char character{ 'C' };
	std::string text{ "Texto da string" };

	//%d é chamado de especificador de formato
	//Cada tipo de dado tem um especificador de formato
	//printf é ma função que veio da linguagem C
	printf("Valor número inteiro: %d \nValor número real: %.2f \nCaractere: %c\nTexto: %s\n", integerNumber, realNumber, character, text.c_str());

	system("PAUSE");
}