#pragma once
#include "Pessoa.h"

class Bibliotecario :public Pessoa
{
public:
	void CadastrarLivros();

	Bibliotecario() :Pessoa() {}
	Bibliotecario(std::string nome, int cpf, int matricula) : Pessoa(nome, cpf, matricula) {}
};

