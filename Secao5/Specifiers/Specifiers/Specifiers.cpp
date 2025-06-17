#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	// { } � inicializa��o uniforme, permite iniciar tanto valores literais (int, caractere) quanto valoeres escalares (vetores, enums)
	 
	int integerNumber{ 12 };
	float realNumber{ 34.56 };
	char character{ 'C' };
	std::string text{ "Texto da string" };

	//%d � chamado de especificador de formato
	//Cada tipo de dado tem um especificador de formato
	//printf � ma fun��o que veio da linguagem C
	printf("Valor n�mero inteiro: %d \nValor n�mero real: %.2f \nCaractere: %c\nTexto: %s\n", integerNumber, realNumber, character, text.c_str());

	system("PAUSE");
}