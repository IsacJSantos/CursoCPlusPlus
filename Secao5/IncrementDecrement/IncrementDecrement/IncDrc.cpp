#include <iostream>

int main()
{
	int num1{ 10 }, num2{20}, result;
	num1 = num2++;
	
	std::cout << "Valor atual de num1: " << num1 << " e num2: " << num2 << std::endl;
	//Num2 ++ é o mesmo que Num2 = Num2 + 1;
	/*No entanto se ++ vier depois da variável
	Devemos ler da seguinte forma
	Num2++ Pegue logo o valor da variável Num2
	e somente depois da instrução incremente em 1
	o valor de Num2
	Logo Num1 = Num2++ é equivalente as seguintes
	instruções:
	Num1 = Num2;
	Num2 = Num2 + 1;
	Chamamos isso de pós-fixado
	Assim se o ++ ou -- estiver após a variável
	ela somente será incrementada após a execução da instrução
	*/

	num2 = ++num1;
	std::cout << "Valor atual de num1: " << num1 << " e num2: " << num2 << std::endl;

	//Agora temos outra situação. O operador ++ está PRÉ-FIXADO
	/*Assim a instrução seria equivalente a:
	Num1 = Num1 + 1;
	Num2 = Num1;
	Ou seja se o operador estiver pré-fixado primeiro a variável
	será incrementada de 1 para depois ser atribuida a outra variável
	*/

	system("PAUSE");
}