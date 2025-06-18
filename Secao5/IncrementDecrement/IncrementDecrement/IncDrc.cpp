#include <iostream>

int main()
{
	int num1{ 10 }, num2{20}, result;
	num1 = num2++;
	
	std::cout << "Valor atual de num1: " << num1 << " e num2: " << num2 << std::endl;
	//Num2 ++ � o mesmo que Num2 = Num2 + 1;
	/*No entanto se ++ vier depois da vari�vel
	Devemos ler da seguinte forma
	Num2++ Pegue logo o valor da vari�vel Num2
	e somente depois da instru��o incremente em 1
	o valor de Num2
	Logo Num1 = Num2++ � equivalente as seguintes
	instru��es:
	Num1 = Num2;
	Num2 = Num2 + 1;
	Chamamos isso de p�s-fixado
	Assim se o ++ ou -- estiver ap�s a vari�vel
	ela somente ser� incrementada ap�s a execu��o da instru��o
	*/

	num2 = ++num1;
	std::cout << "Valor atual de num1: " << num1 << " e num2: " << num2 << std::endl;

	//Agora temos outra situa��o. O operador ++ est� PR�-FIXADO
	/*Assim a instru��o seria equivalente a:
	Num1 = Num1 + 1;
	Num2 = Num1;
	Ou seja se o operador estiver pr�-fixado primeiro a vari�vel
	ser� incrementada de 1 para depois ser atribuida a outra vari�vel
	*/

	system("PAUSE");
}