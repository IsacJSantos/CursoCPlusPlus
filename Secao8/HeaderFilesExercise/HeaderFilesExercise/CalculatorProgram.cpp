#include <iostream>
#include <locale.h>
#include "Math.h";

using namespace std;
int main()
{
	int a, b;

	setlocale(LC_ALL, ("portuguese"));

	cout << "Digite o primeiro n�mero: ";
	cin >> a;
	cout << "\nDigite o segundo n�mero: ";
	cin >> b;
	cout << "Soma: " << Sum(a,b) << "\n";
	cout << "Subtra��o: " << Subtract(a,b) << "\n";
	cout << "Multiplica��o: " << Multiply(a,b) << "\n";
	if(b != 0)
	cout << "Divis�o: " << Divide(a, b) << "\n";
	cout << "Exponencia��o: " << Expo(a,b) << "\n";
	cout << "Radicia��o: " << SqrRoot(a) << "\n";

	system("Pause");
}