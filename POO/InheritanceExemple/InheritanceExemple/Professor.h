#pragma once
#include "Pessoa.h"

class Professor :public Pessoa
{
public:
	std::string departamento;

	Professor() :Pessoa(), departamento("") {}
	Professor(std::string nome, int cpf, int matricula, std::string departamento) : Pessoa(nome, cpf, matricula), departamento(departamento) {}

	void RealizarChamada();
	void EntregarPauta();
};

