#include <iostream>

/*Recebe um array por refer�ncia atrav�s de um ponteiro
Ou seja a vari�vel *Array ir� receber um endere�o de mem�ria de um vetor que ser� enviado para esta fun��o
Duplica Vetor*/
void DuplicateVector(int* array, int length);
/*Esta fun��o tamb�m recebe um Array via Ponteiro mas tamb�m retorna um ponteiro que neste caso deve ser um ponteiro para int. Logo ser� capaz de devolver um ponteiro para int ou seja um array.
Na realidade ir� retornar o endere�o do primeiro elemento do array*/
int* ReverseVector(int* array, int length);
//Mostra o vetor recebido via ponteiro
void ShowVector(int *array, int length);

int main()
{
	int nums[]{ 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(nums) / sizeof(int);

	//O endere�o do primeiro elemento do vetor ser� enviado para Array
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

//Esta fun��o recebe um array (na realidade recebe o endere�o do primeiro elemento do array)
//E devolve um array invertido
int* ReverseVector(int* array, int length)
{
	int j = 0;
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser est�tico pois sen�o ao sair da fun��o ele iria desaparecer da mem�ria, e n�o conseguiria ser enviado como retorno da fun��o
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
