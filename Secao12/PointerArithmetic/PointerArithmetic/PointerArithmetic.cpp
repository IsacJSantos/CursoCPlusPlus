#include <iostream>

int main()
{
	int vector[]{ 1,23,-78,900,234 };
	int* ptr{ nullptr };
	//ptr passa a apontar para o endere�o do vetor (o mesmo que: ptr = &vetor[0])
	// O nome de um vetor � o mesmo que &vetor[0]
	ptr = vector;

	std::cout << "\n*** Enderecos do vetor 'vetor[i]' ***\n\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereco: " << &vector[i] << " Valor: " << vector[i] << "\n";
	}

	std::cout << "\n*** Enderecos com aritimetica de ponteiros '(ptr + i)' ***\n\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereco: " << ptr + i << " Valor: " << *(ptr + i) << "\n";
	}

	// � poss�vel tamb�m mover o ponteiro de posi��o para exibir o valor
	ptr += 2; // Move o ponteiro duas posi��es adiante (neste caso, 8 bytes, pois o tipo int ocupa 4 bytes)

	std::cout << "\nptr += 2: " << *ptr << "\n";

	ptr = vector;// volta ao come�o do vetor

	//J� que chamar 'vector' � o mesmo que chamar &vector[0], podemos iterar pelo vector desta forma:
	//*(vector + 2)

	std::cout << "\nValor de *(vector + 2): " << *(vector + 2) << "\n";
	system("pause");
}