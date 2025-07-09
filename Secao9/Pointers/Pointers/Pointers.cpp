#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	// nullptr indica um endere�o zero, ou sem endere�o. � importante iniciar um ponteiro com nullptr
	//pois isso evita que ele fique com um lixo de mem�ria
	int* ptr{ nullptr };

	int num{ 101 };

	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho
	std::cout << "Endere�o da vari�vel num: " << &num << "\n";

	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado

	std::cout << "Endere�o do ponteiro ptr: " << &ptr << "\n";

	// Armazenando o ender�o de num no ponteiro ptr
	ptr = &num;

	// ao utilizar a vari�vel ptr com o * na frente, podemos alterar o valor armazenado no endere�o que
	// o ponteiro est� guardando.
	// 0x1102ff7f0 = 102
	*ptr = 102;


	/*
	* &ptr: Endere�o em que o ponteiro est� ARMAZENADO na mem�ria RAM
	* ptr: O valor que est� DENTRO da vari�vel ponteiro ptr
	* *ptr: Representa o valor armazenado no endere�o que o ponteiro est� apontando
	*/

	std::cin.get();
}