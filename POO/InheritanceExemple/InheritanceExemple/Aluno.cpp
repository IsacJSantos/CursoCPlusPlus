#include "Aluno.h"

void Aluno::RealizarProva()
{
	std::cout << "Prova realizada\n";
}

void Aluno::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Curso: " << GetCurso() << "\n";
}

std::string Aluno::GetCurso()
{
	return curso;
}

void Aluno::SetCurso(std::string curso)
{
	this->curso = curso;
}
