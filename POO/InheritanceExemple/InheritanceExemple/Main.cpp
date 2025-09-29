#include <iostream>
#include "Professor.h";
#include "Aluno.h";
#include "Bibliotecario.h"

void main()
{
	Professor isac("Isac", 14578502654, 12585, "Educ");
	Aluno luke("Luke", 14585658745, 12358, "C++ Na Pratica");
	Bibliotecario ObiWan("ObiWan", 14565841525, 12345);

	isac.MostrarDados();
	luke.MostrarDados();
	ObiWan.MostrarDados();

	system("pause");
}