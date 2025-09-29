#pragma once
#include "Pessoa.h"

class Aluno :public Pessoa
{
public:
	
	void RealizarProva();
	void MostrarDados();

	Aluno() :Pessoa(), curso("") {}
	Aluno(std::string nome, int cpf, int matricula, std::string curso) : Pessoa(nome, cpf, matricula), curso(curso) {}

	std::string GetCurso();
	void SetCurso(std::string curso);
private:
	std::string curso;
};

