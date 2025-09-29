#pragma once
#include "Pessoa.h"

class Bibliotecario :public Pessoa
{
public:
	void CadastrarLivros();
	void MostrarDados();
	Bibliotecario() :Pessoa() {}
	Bibliotecario(std::string nome, int cpf, int matricula) : Pessoa(nome, cpf, matricula) {}
};

