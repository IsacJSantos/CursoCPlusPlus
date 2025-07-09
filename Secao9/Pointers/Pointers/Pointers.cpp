#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	// nullptr indica um endereço zero, ou sem endereço. É importante iniciar um ponteiro com nullptr
	//pois isso evita que ele fique com um lixo de memória
	int* ptr{ nullptr };

	int num{ 101 };

	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número
	//pois ela ocupa 4 endereços pois tem 4 bytes de tamanho
	std::cout << "Endereço da variável num: " << &num << "\n";

	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//ou seja qual lugar da RAM ele está alocado

	std::cout << "Endereço do ponteiro ptr: " << &ptr << "\n";

	// Armazenando o enderço de num no ponteiro ptr
	ptr = &num;

	// ao utilizar a variável ptr com o * na frente, podemos alterar o valor armazenado no endereço que
	// o ponteiro está guardando.
	// 0x1102ff7f0 = 102
	*ptr = 102;


	/*
	* &ptr: Endereço em que o ponteiro está ARMAZENADO na memória RAM
	* ptr: O valor que está DENTRO da variável ponteiro ptr
	* *ptr: Representa o valor armazenado no endereço que o ponteiro está apontando
	*/

	std::cin.get();
}