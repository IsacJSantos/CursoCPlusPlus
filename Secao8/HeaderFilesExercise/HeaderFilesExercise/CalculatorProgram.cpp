#include <iostream>
#include <locale.h>
#include "Math.h";

using namespace std;
int main()
{
	int a, b;

	setlocale(LC_ALL, ("portuguese"));

	cout << "Digite o primeiro número: ";
	cin >> a;
	cout << "\nDigite o segundo número: ";
	cin >> b;
	cout << "Soma: " << Sum(a,b) << "\n";
	cout << "Subtração: " << Subtract(a,b) << "\n";
	cout << "Multiplicação: " << Multiply(a,b) << "\n";
	if(b != 0)
	cout << "Divisão: " << Divide(a, b) << "\n";
	cout << "Exponenciação: " << Expo(a,b) << "\n";
	cout << "Radiciação: " << SqrRoot(a) << "\n";

	system("Pause");
}