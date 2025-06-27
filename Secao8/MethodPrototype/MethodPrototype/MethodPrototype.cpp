#include <iostream>


//Podemos informar ao compilador que a função existe
//e que iremos declarar ela posteriormente
// isso é feito através dos prótipos das funções
//Coloque apenas o cabeçalho da função terminado com ;
float Sum(float a, float b);

int main()
{
	std::cout << Sum(100, 500) << "\n";
	system("Pause");
}

float Sum(float a, float b)
{
	return a + b;
}