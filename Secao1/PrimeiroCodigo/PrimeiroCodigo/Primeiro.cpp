#include <iostream>
//A diretiva de pr�-processador #include
//indica para incluir o arquivo de cabe�alho
//iostream

int main()
//fun��o principal. Todo programa C++ come�a
//com esta fun��o
{
	//'cout' comando de sa�da de dados
	//neste caso est� solicitando para colocar na sa�da padr�o (tela)
	// a frase solicitada
	std::cout << "Hello World" << std::endl;
	//'endl' indica para inserir um caracter de quebra de linha na string

	//'system(PAUSE)' solicita ao prompt de comando do windows para executar o PAUSE
	system("PAUSE");

	//retura para o sistema operacionao 'zero'
	//zero � o padr�o para informar que tudo deu certo
	return 0;
}