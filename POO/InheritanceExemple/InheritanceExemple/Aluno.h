#pragma once
#include "Pessoa.h"

class Aluno :public Pessoa
{
public:
	std::string curso;
	void RealizarProva();

	Aluno() :Pessoa(), curso("") {}
	Aluno(std::string nome, int cpf, int matricula, std::string curso) : Pessoa(nome, cpf, matricula), curso(curso) {}
};

