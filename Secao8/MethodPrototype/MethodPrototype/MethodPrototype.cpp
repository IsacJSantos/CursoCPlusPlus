#include <iostream>


//Podemos informar ao compilador que a fun��o existe
//e que iremos declarar ela posteriormente
// isso � feito atrav�s dos pr�tipos das fun��es
//Coloque apenas o cabe�alho da fun��o terminado com ;
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