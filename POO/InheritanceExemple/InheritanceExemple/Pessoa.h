#pragma once
#include <iostream>

class Pessoa
{
public:
	std::string nome;
	int cpf;
	int matricula;

	Pessoa() :nome(""), cpf(0), matricula(0) {}
	Pessoa(std::string nome, int cpf, int matricula) :nome(nome), cpf(cpf), matricula(matricula) {}

	void AcessarSystema();
};

