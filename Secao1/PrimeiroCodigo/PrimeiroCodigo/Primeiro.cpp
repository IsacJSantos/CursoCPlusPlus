#include <iostream>
//A diretiva de pré-processador #include
//indica para incluir o arquivo de cabeçalho
//iostream

int main()
//função principal. Todo programa C++ começa
//com esta função
{
	//'cout' comando de saída de dados
	//neste caso está solicitando para colocar na saída padrão (tela)
	// a frase solicitada
	std::cout << "Hello World" << std::endl;
	//'endl' indica para inserir um caracter de quebra de linha na string

	//'system(PAUSE)' solicita ao prompt de comando do windows para executar o PAUSE
	system("PAUSE");

	//retura para o sistema operacionao 'zero'
	//zero é o padrão para informar que tudo deu certo
	return 0;
}