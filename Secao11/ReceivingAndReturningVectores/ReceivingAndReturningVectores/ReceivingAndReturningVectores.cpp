#include <iostream>

/*Recebe um array por referência através de um ponteiro
Ou seja a variável *Array irá receber um endereço de memória de um vetor que será enviado para esta função
Duplica Vetor*/
void DuplicateVector(int* array, int length);
/*Esta função também recebe um Array via Ponteiro mas também retorna um ponteiro que neste caso deve ser um ponteiro para int. Logo será capaz de devolver um ponteiro para int ou seja um array.
Na realidade irá retornar o endereço do primeiro elemento do array*/
int* ReverseVector(int* array, int length);
//Mostra o vetor recebido via ponteiro
void ShowVector(int *array, int length);

int main()
{
	int nums[]{ 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(nums) / sizeof(int);

	//O endereço do primeiro elemento do vetor será enviado para Array
	ShowVector(nums, length);
	DuplicateVector(nums, length);
	ShowVector(nums, length);
	ShowVector(ReverseVector(nums,length), length);


	system("pause");
	return 0;
}

void DuplicateVector(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] *= 2;
	}
}

//Esta função recebe um array (na realidade recebe o endereço do primeiro elemento do array)
//E devolve um array invertido
int* ReverseVector(int* array, int length)
{
	int j = 0;
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser estático pois senão ao sair da função ele iria desaparecer da memória, e não conseguiria ser enviado como retorno da função
	static int reversedArray[10];
	for (int i = length - 1; i >= 0; i--)
	{
		reversedArray[j] = array[i];
		j++;
	}

	return reversedArray;
}

void ShowVector(int *array, int length)
{
	std::cout << "[ ";
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << "  ";
	}
	std::cout << "] \n\n";
}
